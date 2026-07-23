/*
 * XREFs of MiProcessDereferenceList @ 0x140122B0C
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140141D38 (MiRemoveUnusedSegments.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiFreeClonePool @ 0x1400B2674 (MiFreeClonePool.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     MiRemoveUnusedSegments @ 0x140141D38 (MiRemoveUnusedSegments.c)
 *     MiAcquireSpinLockExclusive @ 0x1401DE254 (MiAcquireSpinLockExclusive.c)
 *     MiProcessingPageExtendComplete @ 0x1401DEE34 (MiProcessingPageExtendComplete.c)
 *     MiAttemptPageFileReduction @ 0x1401EDC04 (MiAttemptPageFileReduction.c)
 *     MiSegmentDelete @ 0x1404A25C4 (MiSegmentDelete.c)
 *     MiExtendPagingFiles @ 0x14065B078 (MiExtendPagingFiles.c)
 */

PSLIST_ENTRY __fastcall MiProcessDereferenceList(__int64 a1, int a2)
{
  volatile LONG *v2; // r15
  KIRQL v4; // al
  __int64 *v5; // rdi
  KIRQL v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 **v10; // r14
  __int64 *v11; // rbx
  __int64 v12; // rax
  struct _KEVENT *v13; // rbx
  __int128 v14; // xmm0
  int v15; // r13d
  __int64 **v16; // r13
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 *v19; // rbx
  __int128 v20; // xmm0
  int v21; // eax
  int v22; // ecx
  bool v23; // zf
  __int64 Blink; // rax
  PSLIST_ENTRY result; // rax
  __int128 v26; // [rsp+20h] [rbp-60h] BYREF
  __int128 v27; // [rsp+30h] [rbp-50h]
  LIST_ENTRY WaitListHead; // [rsp+40h] [rbp-40h]
  __int128 v29; // [rsp+50h] [rbp-30h]
  __int128 v30; // [rsp+60h] [rbp-20h]
  struct _KEVENT *v31; // [rsp+70h] [rbp-10h]
  int v32; // [rsp+C0h] [rbp+40h]

  v32 = 0;
  v2 = (volatile LONG *)(a1 + 1664);
  v4 = MiAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1664));
  v5 = (__int64 *)(a1 + 1392);
LABEL_2:
  v6 = v4;
  do
  {
    v7 = (__int64 *)*v5;
    if ( (__int64 *)*v5 != v5 )
    {
      v8 = *v7;
      if ( (__int64 *)v7[1] != v5 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      *v5 = v8;
      *(_QWORD *)(v8 + 8) = v5;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)v7 + 16) )
      {
        *((_DWORD *)v7 + 12) &= ~0x8000000u;
        v7[1] = (__int64)v7;
        *v7 = (__int64)v7;
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v7 + 16, v6);
        MiSegmentDelete(v7 - 1);
      }
      else
      {
        v9 = (__int64 *)*v5;
        if ( *(__int64 **)(*v5 + 8) != v5 )
          __fastfail(3u);
        *v7 = (__int64)v9;
        v7[1] = (__int64)v5;
        v9[1] = (__int64)v7;
        *v5 = (__int64)v7;
        ExReleaseSpinLockExclusive(v2, v6);
      }
      v4 = MiAcquireSpinLockExclusive(v2);
      goto LABEL_2;
    }
    v10 = (__int64 **)(a1 + 1424);
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == (__int64 *)v10 )
        break;
      v12 = *v11;
      if ( (__int64 **)v11[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
        __fastfail(3u);
      *v10 = (__int64 *)v12;
      v13 = (struct _KEVENT *)(v11 - 1);
      *(_QWORD *)(v12 + 8) = v10;
      if ( v13[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 864)) )
        {
          ExReleaseSpinLockExclusive(v2, v6);
          MiAttemptPageFileReduction(v13);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 864));
          v6 = MiAcquireSpinLockExclusive(v2);
        }
        if ( (v13[3].Header.SignalState & 0x10000000) == 0 )
          KeSetEvent(v13 + 2, 0, 0);
      }
      else
      {
        v26 = *(_OWORD *)&v13->Header.Lock;
        v27 = *(_OWORD *)&v13->Header.WaitListHead.Blink;
        WaitListHead = v13[1].Header.WaitListHead;
        v29 = *(_OWORD *)&v13[2].Header.Lock;
        v14 = *(_OWORD *)&v13[2].Header.WaitListHead.Blink;
        v31 = v13;
        v30 = v14;
        v13[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v26;
        ExReleaseSpinLockExclusive(v2, v6);
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 864)) )
        {
          MiExtendPagingFiles(&v26);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 864));
        }
        v6 = MiProcessingPageExtendComplete(&v26, v13, a1);
      }
    }
    v15 = a2;
    if ( a2 )
    {
      v16 = (__int64 **)(a1 + 1408);
      while ( 1 )
      {
        v17 = *v16;
        if ( *v16 == (__int64 *)v16 )
          break;
        v18 = *v17;
        if ( (__int64 **)v17[1] != v16 || *(__int64 **)(v18 + 8) != v17 )
          __fastfail(3u);
        *v16 = (__int64 *)v18;
        v19 = v17 - 1;
        *(_QWORD *)(v18 + 8) = v16;
        v26 = *(_OWORD *)v19;
        v27 = *((_OWORD *)v19 + 1);
        WaitListHead = (LIST_ENTRY)*((_OWORD *)v19 + 2);
        v29 = *((_OWORD *)v19 + 3);
        v20 = *((_OWORD *)v19 + 4);
        v31 = (struct _KEVENT *)v19;
        v30 = v20;
        v19[10] = (__int64)&v26;
        ExReleaseSpinLockExclusive(v2, v6);
        v21 = MiRemoveUnusedSegments(a1, WaitListHead.Flink);
        v22 = v32;
        v23 = v21 == 0;
        Blink = (__int64)WaitListHead.Blink;
        if ( !v23 )
          v22 = 1;
        v32 = v22;
        if ( v22 )
          Blink = 1LL;
        WaitListHead.Blink = (struct _LIST_ENTRY *)Blink;
        v6 = MiProcessingPageExtendComplete(&v26, v19, a1);
      }
      v15 = a2;
    }
  }
  while ( (__int64 *)*v5 != v5 || v15 && *(_QWORD *)(a1 + 1408) != a1 + 1408 || *v10 != (__int64 *)v10 );
  ExReleaseSpinLockExclusive(v2, v6);
  result = (PSLIST_ENTRY)MiSystemPartition;
  if ( (int *)a1 == MiSystemPartition && stru_140326978.Header.SignalState )
  {
    KeResetEvent(&stru_140326978);
    return MiFreeClonePool();
  }
  return result;
}
