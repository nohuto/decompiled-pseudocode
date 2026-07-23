/*
 * XREFs of TpAllocPoolInternal @ 0x1800061E0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180004A10 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x180004BD0 (TpAllocPool.c)
 * Callees:
 *     TppETWPoolCreate @ 0x180003874 (TppETWPoolCreate.c)
 *     TppPoolUpdateNodeRelation @ 0x1800060D4 (TppPoolUpdateNodeRelation.c)
 *     TppInitializeTimerQueue @ 0x180007C34 (TppInitializeTimerQueue.c)
 *     TppGetCurrentThreadNumaNode @ 0x18000D404 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtCreateIoCompletion @ 0x1800A64D0 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1800A6890 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1800A8170 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocPoolInternal(_QWORD *a1, char a2)
{
  PIMAGE_NT_HEADERS v3; // rax
  SIZE_T StackReserve; // r12
  SIZE_T StackCommit; // rsi
  struct _PEB *v6; // rax
  SIZE_T MinimumStackCommit; // rcx
  _DWORD *StartParameter; // rdi
  __int64 i; // r8
  _QWORD *v10; // rdx
  PVOID v11; // rax
  PVOID v12; // rax
  unsigned int v13; // r14d
  int updated; // ebx
  ULONG v15; // r9d
  HANDLE *v16; // r15
  ULONG MaxThreadCount; // eax
  HANDLE *v18; // r14
  _UNKNOWN ***v19; // rdx
  PVOID Heap; // rax
  __int64 v21; // r8
  _QWORD *v22; // r10
  __int64 v23; // r9
  void *v25; // r8
  void *v26; // r8
  int v27; // [rsp+50h] [rbp-68h]
  _BYTE v28[8]; // [rsp+60h] [rbp-58h] BYREF
  PVOID v29; // [rsp+68h] [rbp-50h]
  PVOID BaseAddress; // [rsp+70h] [rbp-48h]
  __int64 v31; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+C8h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  *a1 = 0LL;
  WorkerFactoryInformation = a2 & 1;
  v3 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  StackReserve = v3->OptionalHeader.SizeOfStackReserve;
  StackCommit = v3->OptionalHeader.SizeOfStackCommit;
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && StackCommit < MinimumStackCommit )
    StackCommit = v6->MinimumStackCommit;
  StartParameter = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x1D0uLL);
  v29 = StartParameter;
  if ( StartParameter )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, 72LL * (unsigned int)TppNumberNodes);
    BaseAddress = Heap;
    if ( !Heap )
    {
      updated = -1073741801;
      v27 = -1073741801;
      StartParameter = v29;
      goto LABEL_34;
    }
    v21 = 0LL;
    v22 = v29;
    v23 = (unsigned int)TppNumberNodes;
    while ( (unsigned int)v21 < 3 )
    {
      v22[v21 + 2] = (char *)BaseAddress + 24 * (unsigned int)(v21 * v23);
      v21 = (unsigned int)(v21 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v23; i = (unsigned int)(i + 1) )
    {
      v10 = (char *)BaseAddress + 24 * i;
      v10[2] = 0LL;
      v10[1] = v10;
      *v10 = v10;
    }
    v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 4 * v23);
    StartParameter = v29;
    *((_QWORD *)v29 + 5) = v11;
    if ( v11 )
    {
      v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 16LL * (unsigned int)TppNumberNodes);
      StartParameter = v29;
      *((_QWORD *)v29 + 6) = v12;
      if ( v12 )
      {
        v13 = MEMORY[0x7FFE03C0];
        StartParameter[106] = MEMORY[0x7FFE03C0];
        updated = TppPoolUpdateNodeRelation((__int64)StartParameter);
        v27 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        StartParameter[107] = -2;
        v31 = (unsigned __int16)v13;
        *((_QWORD *)StartParameter + 1) = (unsigned __int16)v13;
        *StartParameter = 1;
        v15 = v13 + 1;
        if ( v13 < 4 )
          v15 = 4;
        v16 = (HANDLE *)(StartParameter + 16);
        updated = NtCreateIoCompletion((PHANDLE)StartParameter + 8, 0x1F0003u, 0LL, v15);
        v27 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        MaxThreadCount = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          MaxThreadCount = 512;
        v18 = (HANDLE *)(StartParameter + 14);
        updated = NtCreateWorkerFactory(
                    (PHANDLE)StartParameter + 7,
                    0xF00FFu,
                    0LL,
                    *v16,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &TppWorkerThread,
                    StartParameter,
                    MaxThreadCount,
                    StackReserve,
                    StackCommit);
        v27 = updated;
        if ( updated < 0 )
          goto LABEL_24;
        if ( WorkerFactoryInformation )
        {
          updated = NtSetInformationWorkerFactory(*v18, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
          v27 = updated;
          if ( updated < 0 )
          {
LABEL_24:
            if ( updated < 0 )
            {
              NtClose(*v16);
              if ( *v18 )
              {
                NtClose(*v18);
                *v18 = 0LL;
              }
            }
            goto LABEL_34;
          }
          *((_WORD *)StartParameter + 189) = WorkerFactoryInformation;
        }
        *((_QWORD *)StartParameter + 9) = 0LL;
        *((_QWORD *)StartParameter + 46) = 0LL;
        *((_QWORD *)StartParameter + 55) = 0LL;
        *((_WORD *)StartParameter + 188) = 0;
        *((_QWORD *)StartParameter + 11) = StartParameter + 20;
        *((_QWORD *)StartParameter + 10) = StartParameter + 20;
        *((_QWORD *)StartParameter + 13) = StartParameter + 24;
        *((_QWORD *)StartParameter + 12) = StartParameter + 24;
        *((_QWORD *)StartParameter + 57) = StartParameter + 112;
        *((_QWORD *)StartParameter + 56) = StartParameter + 112;
        TppGetCurrentThreadNumaNode(StartParameter, v28, 0LL);
        *((_QWORD *)StartParameter + 50) = retaddr;
        updated = TppInitializeTimerQueue(StartParameter + 28, StartParameter);
        v27 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v27 = 0;
          RtlAcquireSRWLockExclusive(&TppPoolpListLock);
          v19 = (_UNKNOWN ***)off_1801429A8;
          *((_QWORD *)StartParameter + 48) = &TppPoolpList;
          *((_QWORD *)StartParameter + 49) = v19;
          if ( *v19 != &TppPoolpList )
            __fastfail(3u);
          *v19 = (_UNKNOWN **)(StartParameter + 96);
          off_1801429A8 = (_UNKNOWN **)(StartParameter + 96);
          RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        }
        goto LABEL_24;
      }
    }
  }
  updated = -1073741801;
  v27 = -1073741801;
LABEL_34:
  if ( updated >= 0 )
    goto LABEL_35;
  if ( StartParameter )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
      StartParameter = v29;
    }
    v25 = (void *)*((_QWORD *)StartParameter + 5);
    if ( v25 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v25);
      StartParameter = v29;
    }
    v26 = (void *)*((_QWORD *)StartParameter + 6);
    if ( v26 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v26);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v29);
    StartParameter = 0LL;
    updated = v27;
  }
  if ( updated >= 0 )
  {
LABEL_35:
    *a1 = StartParameter;
    if ( MEMORY[0x7FFE0386] )
      TppETWPoolCreate((__int64)StartParameter);
  }
  return (unsigned int)updated;
}
