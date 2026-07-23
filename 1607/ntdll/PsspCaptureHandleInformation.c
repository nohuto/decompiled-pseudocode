/*
 * XREFs of PsspCaptureHandleInformation @ 0x180004AC8
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180059150 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspWalkHandleTable @ 0x18000576C (PsspWalkHandleTable.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 */

NTSTATUS __fastcall PsspCaptureHandleInformation(__int64 a1, void *a2, int a3)
{
  NTSTATUS result; // eax
  ULONG v7; // esi
  int v8; // ebx
  PVOID Heap; // rax
  NTSTATUS v10; // esi
  PVOID BaseAddress; // [rsp+58h] [rbp-19h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  PVOID v14; // [rsp+70h] [rbp-1h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp+7h] BYREF
  __int64 v16; // [rsp+80h] [rbp+Fh] BYREF
  int v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+8Ch] [rbp+1Bh]
  int ProcessInformation; // [rsp+98h] [rbp+27h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+F0h] [rbp+7Fh] BYREF

  result = NtQueryInformationProcess(a2, ProcessHandleCount, &ProcessInformation, 8u, 0LL);
  if ( result < 0 )
    return result;
  v7 = 4 * ProcessInformation;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    RegionSize = v7;
    BaseAddress = 0LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    Heap = BaseAddress;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    BaseAddress = Heap;
    if ( !Heap )
      return -1073741670;
  }
  v10 = NtQueryInformationProcess(a2, ProcessHandleTable, Heap, v7, &ReturnLength);
  if ( v10 < 0 )
  {
    if ( !v8 )
    {
LABEL_20:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      return v10;
    }
LABEL_16:
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return v10;
  }
  LODWORD(v21) = 0;
  PsspWalkHandleTable(a2, (__int64)PsspHandleStreamSizeCalculator, (__int64)&v21);
  MaximumSize.QuadPart = (unsigned int)v21;
  v10 = NtCreateSection(
          &SectionHandle,
          0xF0007u,
          (POBJECT_ATTRIBUTES)&ObjectAttributes,
          &MaximumSize,
          4u,
          0x8000000u,
          0LL);
  if ( v10 < 0 )
  {
LABEL_19:
    if ( !v8 )
      goto LABEL_20;
    goto LABEL_16;
  }
  v14 = 0LL;
  RegionSize = 0LL;
  v10 = ZwMapViewOfSection(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &v14,
          0LL,
          0LL,
          0LL,
          &RegionSize,
          ViewShare,
          0,
          4u);
  if ( v10 < 0 )
  {
    NtClose(SectionHandle);
    goto LABEL_19;
  }
  v16 = (__int64)v14;
  LODWORD(v21) = RegionSize;
  v17 = RegionSize;
  v18 = 0LL;
  PsspWalkHandleTable(a2, (__int64)PsspHandleDumper, (__int64)&v16);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14);
  if ( v8 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  *(_DWORD *)(a1 + 960) = HIDWORD(v18);
  *(_QWORD *)(a1 + 968) = (unsigned int)v18;
  *(_QWORD *)(a1 + 976) = SectionHandle;
  *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
  return 0;
}
