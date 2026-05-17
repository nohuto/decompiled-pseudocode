/*
 * XREFs of PsspCaptureHandleInformation @ 0x180004AAC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180059160 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspWalkHandleTable @ 0x180005778 (PsspWalkHandleTable.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
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
  ULONG v11; // r12d
  PVOID v12; // [rsp+58h] [rbp-19h] BYREF
  __int64 v13; // [rsp+60h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  __int64 v15; // [rsp+70h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+7h] BYREF
  __int64 v17; // [rsp+80h] [rbp+Fh] BYREF
  int v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+8Ch] [rbp+1Bh]
  int ProcessInformation; // [rsp+98h] [rbp+27h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+2Fh] BYREF
  unsigned int v22; // [rsp+F0h] [rbp+7Fh] BYREF

  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)20, &ProcessInformation, 8u, 0LL);
  if ( result < 0 )
    return result;
  v7 = 4 * ProcessInformation;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    v13 = v7;
    v12 = 0LL;
    result = ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v13, 4096, 4);
    if ( result < 0 )
      return result;
    Heap = v12;
  }
  else
  {
    Heap = (PVOID)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
    v12 = Heap;
    if ( !Heap )
      return -1073741670;
  }
  v10 = NtQueryInformationProcess(a2, ProcessWow64Information|0x20, Heap, v7, &ReturnLength);
  if ( v10 < 0 )
  {
    if ( !v8 )
    {
LABEL_20:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v12);
      return v10;
    }
LABEL_16:
    v13 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v12, &v13, 0x8000LL);
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
  v21 = v22;
  v10 = NtCreateSection(&Handle, 983047LL, L"0", &v21, 4, 0x8000000, 0LL);
  if ( v10 < 0 )
  {
LABEL_19:
    if ( !v8 )
      goto LABEL_20;
    goto LABEL_16;
  }
  v15 = 0LL;
  v13 = 0LL;
  v10 = ZwMapViewOfSection(Handle, -1LL, &v15, 0LL, 0LL, 0LL, &v13, 1, 0, 4);
  if ( v10 < 0 )
  {
    NtClose(Handle);
    goto LABEL_19;
  }
  v17 = v15;
  v22 = v13;
  v18 = v13;
  v19 = 0LL;
  PsspWalkHandleTable((_DWORD)a2, (_DWORD)v12, v11, a3, (__int64)PsspHandleDumper, (__int64)&v17);
  NtUnmapViewOfSection(-1LL, v15);
  if ( v8 )
  {
    v13 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v12, &v13, 0x8000LL);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v12);
  }
  *(_DWORD *)(a1 + 960) = HIDWORD(v19);
  *(_QWORD *)(a1 + 968) = (unsigned int)v19;
  *(_QWORD *)(a1 + 976) = Handle;
  *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
  return 0;
}
