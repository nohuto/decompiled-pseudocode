/*
 * XREFs of PsspCaptureHandleInformation @ 0x18008A588
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800478E0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     PsspWalkHandleTable @ 0x18008A7C0 (PsspWalkHandleTable.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 */

NTSTATUS __fastcall PsspCaptureHandleInformation(__int64 a1, void *a2, int a3)
{
  NTSTATUS result; // eax
  ULONG v7; // esi
  int v8; // ebx
  PVOID Heap; // rax
  NTSTATUS v10; // esi
  ULONG v11; // r12d
  PVOID v12; // [rsp+58h] [rbp-19h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-11h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-9h] BYREF
  HANDLE SectionHandle; // [rsp+70h] [rbp-1h] BYREF
  ULONG ReturnLength; // [rsp+78h] [rbp+7h] BYREF
  PVOID v17; // [rsp+80h] [rbp+Fh] BYREF
  int v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+8Ch] [rbp+1Bh]
  int ProcessInformation; // [rsp+98h] [rbp+27h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp+2Fh] BYREF
  unsigned int v22; // [rsp+F0h] [rbp+7Fh] BYREF

  result = NtQueryInformationProcess(a2, ProcessHandleCount, &ProcessInformation, 8u, 0LL);
  if ( result < 0 )
    return result;
  v7 = 4 * ProcessInformation;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    ViewSize = v7;
    v12 = 0LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v12, 0LL, &ViewSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    Heap = v12;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v12 = Heap;
    if ( !Heap )
      return -1073741670;
  }
  v10 = NtQueryInformationProcess(a2, ProcessHandleTable, Heap, v7, &ReturnLength);
  if ( v10 < 0 )
  {
    if ( !v8 )
    {
LABEL_19:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      return v10;
    }
LABEL_15:
    ViewSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v12, &ViewSize, 0x8000u);
    return v10;
  }
  v11 = ReturnLength >> 2;
  v22 = 0;
  PsspWalkHandleTable(
    (_DWORD)a2,
    (_DWORD)v12,
    ReturnLength >> 2,
    a3,
    (__int64)PsspHandleStreamSizeCalculator,
    (__int64)&v22);
  MaximumSize.QuadPart = v22;
  v10 = NtCreateSection(
          &SectionHandle,
          0xF0007u,
          (POBJECT_ATTRIBUTES)&stru_180102F68,
          &MaximumSize,
          4u,
          0x8000000u,
          0LL);
  if ( v10 < 0 )
  {
LABEL_18:
    if ( !v8 )
      goto LABEL_19;
    goto LABEL_15;
  }
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v10 = ZwMapViewOfSection(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          0LL,
          0LL,
          &ViewSize,
          ViewShare,
          0,
          4u);
  if ( v10 < 0 )
  {
    NtClose(SectionHandle);
    goto LABEL_18;
  }
  v17 = BaseAddress;
  v22 = ViewSize;
  v18 = ViewSize;
  v19 = 0LL;
  PsspWalkHandleTable((_DWORD)a2, (_DWORD)v12, v11, a3, (__int64)PsspHandleDumper, (__int64)&v17);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v8 )
  {
    ViewSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v12, &ViewSize, 0x8000u);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  }
  *(_DWORD *)(a1 + 960) = HIDWORD(v19);
  *(_QWORD *)(a1 + 968) = (unsigned int)v19;
  *(_QWORD *)(a1 + 976) = SectionHandle;
  *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
  return 0;
}
