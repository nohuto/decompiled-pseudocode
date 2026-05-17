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

__int64 __fastcall TpAllocPoolInternal(__int64 *a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  struct _PEB *v6; // rax
  unsigned __int64 MinimumStackCommit; // rcx
  __int64 Heap; // rdi
  __int64 i; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r14d
  int updated; // ebx
  __int64 v15; // r9
  HANDLE *v16; // r15
  int v17; // eax
  HANDLE *v18; // r14
  _UNKNOWN ***v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v25; // r8
  __int64 v26; // r8
  int v27; // [rsp+50h] [rbp-68h]
  char v28[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v29; // [rsp+68h] [rbp-50h]
  __int64 v30; // [rsp+70h] [rbp-48h]
  __int64 v31; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  int v33; // [rsp+C8h] [rbp+10h] BYREF

  v30 = 0LL;
  *a1 = 0LL;
  v33 = a2 & 1;
  v3 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  v4 = *(_QWORD *)(v3 + 96);
  v5 = *(_QWORD *)(v3 + 104);
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && v5 < MinimumStackCommit )
    v5 = v6->MinimumStackCommit;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 464LL);
  v29 = Heap;
  if ( Heap )
  {
    v20 = RtlAllocateHeap(
            NtCurrentPeb()->ProcessHeap,
            (unsigned int)(TppHeapTag + 786432),
            72LL * (unsigned int)TppNumberNodes);
    v30 = v20;
    if ( !v20 )
    {
      updated = -1073741801;
      v27 = -1073741801;
      Heap = v29;
      goto LABEL_34;
    }
    v21 = 0LL;
    v22 = v29;
    v23 = (unsigned int)TppNumberNodes;
    while ( (unsigned int)v21 < 3 )
    {
      *(_QWORD *)(v22 + 8 * v21 + 16) = v30 + 24LL * (unsigned int)(v21 * v23);
      v21 = (unsigned int)(v21 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v23; i = (unsigned int)(i + 1) )
    {
      v10 = (_QWORD *)(v30 + 24 * i);
      v10[2] = 0LL;
      v10[1] = v10;
      *v10 = v10;
    }
    v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 4 * v23);
    Heap = v29;
    *(_QWORD *)(v29 + 40) = v11;
    if ( v11 )
    {
      v12 = RtlAllocateHeap(
              NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              16LL * (unsigned int)TppNumberNodes);
      Heap = v29;
      *(_QWORD *)(v29 + 48) = v12;
      if ( v12 )
      {
        v13 = MEMORY[0x7FFE03C0];
        *(_DWORD *)(Heap + 424) = MEMORY[0x7FFE03C0];
        updated = TppPoolUpdateNodeRelation(Heap);
        v27 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        *(_DWORD *)(Heap + 428) = -2;
        v31 = (unsigned __int16)v13;
        *(_QWORD *)(Heap + 8) = (unsigned __int16)v13;
        *(_DWORD *)Heap = 1;
        v15 = v13 + 1;
        if ( v13 < 4 )
          v15 = 4LL;
        v16 = (HANDLE *)(Heap + 64);
        updated = NtCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v15);
        v27 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        v17 = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          v17 = 512;
        v18 = (HANDLE *)(Heap + 56);
        updated = NtCreateWorkerFactory(Heap + 56, 983295LL, 0LL, *v16, -1LL, &TppWorkerThread, Heap, v17, v4, v5);
        v27 = updated;
        if ( updated < 0 )
          goto LABEL_24;
        if ( v33 )
        {
          updated = NtSetInformationWorkerFactory(*v18, 13LL, &v33);
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
          *(_WORD *)(Heap + 378) = v33;
        }
        *(_QWORD *)(Heap + 72) = 0LL;
        *(_QWORD *)(Heap + 368) = 0LL;
        *(_QWORD *)(Heap + 440) = 0LL;
        *(_WORD *)(Heap + 376) = 0;
        *(_QWORD *)(Heap + 88) = Heap + 80;
        *(_QWORD *)(Heap + 80) = Heap + 80;
        *(_QWORD *)(Heap + 104) = Heap + 96;
        *(_QWORD *)(Heap + 96) = Heap + 96;
        *(_QWORD *)(Heap + 456) = Heap + 448;
        *(_QWORD *)(Heap + 448) = Heap + 448;
        TppGetCurrentThreadNumaNode(Heap, v28, 0LL);
        *(_QWORD *)(Heap + 400) = retaddr;
        updated = TppInitializeTimerQueue(Heap + 112, Heap);
        v27 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v27 = 0;
          RtlAcquireSRWLockExclusive(&TppPoolpListLock);
          v19 = (_UNKNOWN ***)off_1801429A8;
          *(_QWORD *)(Heap + 384) = &TppPoolpList;
          *(_QWORD *)(Heap + 392) = v19;
          if ( *v19 != &TppPoolpList )
            __fastfail(3u);
          *v19 = (_UNKNOWN **)(Heap + 384);
          off_1801429A8 = (_UNKNOWN **)(Heap + 384);
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
  if ( Heap )
  {
    if ( v30 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v30);
      Heap = v29;
    }
    v25 = *(_QWORD *)(Heap + 40);
    if ( v25 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v25);
      Heap = v29;
    }
    v26 = *(_QWORD *)(Heap + 48);
    if ( v26 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v26);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v29);
    Heap = 0LL;
    updated = v27;
  }
  if ( updated >= 0 )
  {
LABEL_35:
    *a1 = Heap;
    if ( MEMORY[0x7FFE0386] )
      TppETWPoolCreate(Heap);
  }
  return (unsigned int)updated;
}
