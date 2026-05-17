/*
 * XREFs of TpAllocPoolInternal @ 0x18007B968
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18007B59C (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x18007B760 (TpAllocPool.c)
 * Callees:
 *     TppETWPoolCreate @ 0x180002E58 (TppETWPoolCreate.c)
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003DE48 (TppGetCurrentThreadNumaNode.c)
 *     TppInitializeTimerQueue @ 0x18007CE58 (TppInitializeTimerQueue.c)
 *     TppPoolUpdateNodeRelation @ 0x18007D168 (TppPoolUpdateNodeRelation.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtCreateIoCompletion @ 0x180094300 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1800944E0 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
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
  _UNKNOWN ***v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // r10
  __int64 v26; // r9
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  int v30; // [rsp+50h] [rbp-68h]
  int v31; // [rsp+60h] [rbp-58h] BYREF
  __int64 v32; // [rsp+68h] [rbp-50h]
  unsigned __int64 v33; // [rsp+70h] [rbp-48h]
  __int64 v34; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  int v36; // [rsp+C8h] [rbp+10h] BYREF

  v33 = 0LL;
  *a1 = 0LL;
  v36 = a2 & 1;
  v3 = RtlImageNtHeader((unsigned __int64)NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  v4 = *(_QWORD *)(v3 + 96);
  v5 = *(_QWORD *)(v3 + 104);
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && v5 < MinimumStackCommit )
    v5 = v6->MinimumStackCommit;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 464LL);
  v32 = Heap;
  if ( Heap )
  {
    v23 = RtlAllocateHeap(
            (__int64)NtCurrentPeb()->ProcessHeap,
            TppHeapTag + 786432,
            72LL * (unsigned int)TppNumberNodes);
    v33 = v23;
    if ( !v23 )
    {
      updated = -1073741801;
      v30 = -1073741801;
      Heap = v32;
      goto LABEL_34;
    }
    v24 = 0LL;
    v25 = v32;
    v26 = (unsigned int)TppNumberNodes;
    while ( (unsigned int)v24 < 3 )
    {
      *(_QWORD *)(v25 + 8 * v24 + 16) = v33 + 24LL * (unsigned int)(v24 * v26);
      v24 = (unsigned int)(v24 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v26; i = (unsigned int)(i + 1) )
    {
      v10 = (_QWORD *)(v33 + 24 * i);
      v10[2] = 0LL;
      v10[1] = v10;
      *v10 = v10;
    }
    v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 4 * v26);
    Heap = v32;
    *(_QWORD *)(v32 + 40) = v11;
    if ( v11 )
    {
      v12 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              16LL * (unsigned int)TppNumberNodes);
      Heap = v32;
      *(_QWORD *)(v32 + 48) = v12;
      if ( v12 )
      {
        v13 = MEMORY[0x7FFE03C0];
        *(_DWORD *)(Heap + 424) = MEMORY[0x7FFE03C0];
        updated = TppPoolUpdateNodeRelation(Heap);
        v30 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        *(_DWORD *)(Heap + 428) = -2;
        v34 = (unsigned __int16)v13;
        *(_QWORD *)(Heap + 8) = (unsigned __int16)v13;
        *(_DWORD *)Heap = 1;
        v15 = v13 + 1;
        if ( v13 < 4 )
          v15 = 4LL;
        v16 = (HANDLE *)(Heap + 64);
        updated = NtCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v15);
        v30 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        v17 = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          v17 = 512;
        v18 = (HANDLE *)(Heap + 56);
        updated = NtCreateWorkerFactory(Heap + 56, 983295LL, 0LL, *v16, -1LL, TppWorkerThread, Heap, v17, v4, v5);
        v30 = updated;
        if ( updated < 0 )
          goto LABEL_24;
        if ( v36 )
        {
          updated = NtSetInformationWorkerFactory(*v18, 13LL, &v36, 4LL);
          v30 = updated;
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
          *(_WORD *)(Heap + 378) = v36;
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
        TppGetCurrentThreadNumaNode(Heap, &v31, 0LL);
        *(_QWORD *)(Heap + 400) = retaddr;
        updated = TppInitializeTimerQueue(Heap + 112, Heap);
        v30 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v30 = 0;
          RtlAcquireSRWLockExclusive(&TppPoolpListLock, v19, v20, v21);
          v22 = (_UNKNOWN ***)off_180143878[0];
          *(_QWORD *)(Heap + 384) = &TppPoolpList;
          *(_QWORD *)(Heap + 392) = v22;
          if ( *v22 != &TppPoolpList )
            __fastfail(3u);
          *v22 = (_UNKNOWN **)(Heap + 384);
          off_180143878[0] = (_UNKNOWN **)(Heap + 384);
          RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        }
        goto LABEL_24;
      }
    }
  }
  updated = -1073741801;
  v30 = -1073741801;
LABEL_34:
  if ( updated >= 0 )
    goto LABEL_35;
  if ( Heap )
  {
    if ( v33 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v33);
      Heap = v32;
    }
    v28 = *(_QWORD *)(Heap + 40);
    if ( v28 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v28);
      Heap = v32;
    }
    v29 = *(_QWORD *)(Heap + 48);
    if ( v29 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v29);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v32);
    Heap = 0LL;
    updated = v30;
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
