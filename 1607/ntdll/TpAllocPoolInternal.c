/*
 * XREFs of TpAllocPoolInternal @ 0x180072E74
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180072C64 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x180072E30 (TpAllocPool.c)
 * Callees:
 *     TppETWPoolCreate @ 0x180003168 (TppETWPoolCreate.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003E1DC (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     TppInitializeTimerQueue @ 0x1800732E0 (TppInitializeTimerQueue.c)
 *     TppPoolUpdateNodeRelation @ 0x180073458 (TppPoolUpdateNodeRelation.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtCreateIoCompletion @ 0x1800A7850 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1800A7C30 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
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
  char *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // r10
  __int64 v27; // r9
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-68h]
  int v32; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+70h] [rbp-48h]
  __int64 v35; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  int v37; // [rsp+C8h] [rbp+10h] BYREF

  v34 = 0LL;
  *a1 = 0LL;
  v37 = a2 & 1;
  v3 = RtlImageNtHeader((__int64)NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  if ( *(_WORD *)(v3 + 24) == 523 )
  {
    v4 = *(_QWORD *)(v3 + 96);
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v4 = *(unsigned int *)(v3 + 96);
    v5 = *(unsigned int *)(v3 + 100);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && v5 < MinimumStackCommit )
    v5 = v6->MinimumStackCommit;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 0x1D0uLL);
  v33 = Heap;
  if ( Heap )
  {
    v24 = RtlAllocateHeap(
            (__int64)NtCurrentPeb()->ProcessHeap,
            TppHeapTag + 786432,
            72LL * (unsigned int)TppNumberNodes);
    v34 = v24;
    if ( !v24 )
    {
      updated = -1073741801;
      v31 = -1073741801;
      Heap = v33;
      goto LABEL_36;
    }
    v25 = 0LL;
    v26 = v33;
    v27 = (unsigned int)TppNumberNodes;
    while ( (unsigned int)v25 < 3 )
    {
      *(_QWORD *)(v26 + 8 * v25 + 16) = v34 + 24LL * (unsigned int)(v25 * v27);
      v25 = (unsigned int)(v25 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v27; i = (unsigned int)(i + 1) )
    {
      v10 = (_QWORD *)(v34 + 24 * i);
      v10[2] = 0LL;
      v10[1] = v10;
      *v10 = v10;
    }
    v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 4 * v27);
    Heap = v33;
    *(_QWORD *)(v33 + 40) = v11;
    if ( v11 )
    {
      v12 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              16LL * (unsigned int)TppNumberNodes);
      Heap = v33;
      *(_QWORD *)(v33 + 48) = v12;
      if ( v12 )
      {
        v13 = MEMORY[0x7FFE03C0];
        *(_DWORD *)(Heap + 424) = MEMORY[0x7FFE03C0];
        updated = TppPoolUpdateNodeRelation(Heap);
        v31 = updated;
        if ( updated < 0 )
          goto LABEL_36;
        *(_DWORD *)(Heap + 428) = -2;
        v35 = (unsigned __int16)v13;
        *(_QWORD *)(Heap + 8) = (unsigned __int16)v13;
        *(_DWORD *)Heap = 1;
        v15 = v13 + 1;
        if ( v13 < 4 )
          v15 = 4LL;
        v16 = (HANDLE *)(Heap + 64);
        updated = NtCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v15);
        v31 = updated;
        if ( updated < 0 )
          goto LABEL_36;
        v17 = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          v17 = 512;
        v18 = (HANDLE *)(Heap + 56);
        updated = NtCreateWorkerFactory(Heap + 56, 983295LL, 0LL, *v16, -1LL, TppWorkerThread, Heap, v17, v4, v5);
        v31 = updated;
        if ( updated < 0 )
          goto LABEL_26;
        if ( v37 )
        {
          updated = NtSetInformationWorkerFactory(*v18, 13LL, &v37);
          v31 = updated;
          if ( updated < 0 )
          {
LABEL_26:
            if ( updated < 0 )
            {
              NtClose(*v16);
              if ( *v18 )
              {
                NtClose(*v18);
                *v18 = 0LL;
              }
            }
            goto LABEL_36;
          }
          *(_WORD *)(Heap + 378) = v37;
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
        TppGetCurrentThreadNumaNode(Heap, &v32, 0LL);
        *(_QWORD *)(Heap + 400) = retaddr;
        updated = TppInitializeTimerQueue(Heap + 112, Heap);
        v31 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v31 = 0;
          RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, v19, v20, v21);
          v22 = (_QWORD *)(Heap + 384);
          v23 = off_18014C648;
          if ( *(_UNKNOWN ***)off_18014C648 != &TppPoolpList )
            __fastfail(3u);
          *v22 = &TppPoolpList;
          *(_QWORD *)(Heap + 392) = v23;
          *v23 = v22;
          off_18014C648 = (_UNKNOWN *)(Heap + 384);
          RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        }
        goto LABEL_26;
      }
    }
  }
  updated = -1073741801;
  v31 = -1073741801;
LABEL_36:
  if ( updated >= 0 )
    goto LABEL_37;
  if ( Heap )
  {
    if ( v34 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v34);
      Heap = v33;
    }
    v29 = *(_QWORD *)(Heap + 40);
    if ( v29 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v29);
      Heap = v33;
    }
    v30 = *(_QWORD *)(Heap + 48);
    if ( v30 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v30);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v33);
    Heap = 0LL;
    updated = v31;
  }
  if ( updated >= 0 )
  {
LABEL_37:
    *a1 = Heap;
    if ( MEMORY[0x7FFE0386] )
      TppETWPoolCreate(Heap);
  }
  return (unsigned int)updated;
}
