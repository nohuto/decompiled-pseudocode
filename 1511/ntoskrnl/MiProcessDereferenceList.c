/*
 * XREFs of MiProcessDereferenceList @ 0x140113D70
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401389A0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140138B1C (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFreeClonePool @ 0x1400F31C4 (MiFreeClonePool.c)
 *     MiAttemptPageFileReduction @ 0x1401DBFE8 (MiAttemptPageFileReduction.c)
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 *     MiExtendPagingFiles @ 0x1406256F8 (MiExtendPagingFiles.c)
 */

PSLIST_ENTRY __fastcall MiProcessDereferenceList(__int64 a1)
{
  volatile LONG *v1; // rsi
  KIRQL v3; // al
  __int64 **v4; // rdi
  KIRQL v5; // r15
  __int64 *v6; // r14
  __int64 v7; // rax
  struct _KEVENT *v8; // rbx
  PSLIST_ENTRY result; // rax
  __int64 *v10; // rax
  _OWORD v11[2]; // [rsp+20h] [rbp-60h] BYREF
  LIST_ENTRY WaitListHead; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-30h]
  __int128 v14; // [rsp+60h] [rbp-20h]
  __int64 *v15; // [rsp+70h] [rbp-10h]
  struct _LIST_ENTRY *Blink; // [rsp+78h] [rbp-8h]

  v1 = (volatile LONG *)(a1 + 1536);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536));
  v4 = (__int64 **)(a1 + 1304);
LABEL_2:
  v5 = v3;
  while ( *v4 != (__int64 *)v4 )
  {
    v6 = *v4;
    v7 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v4 = (__int64 *)v7;
    v8 = (struct _KEVENT *)(v6 - 1);
    *(_QWORD *)(v7 + 8) = v4;
    if ( *(v6 - 1) )
    {
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&v8[3].Header.Lock) )
      {
        LODWORD(v8[2].Header.WaitListHead.Flink) &= ~0x8000000u;
        v6[1] = (__int64)v6;
        *v6 = (__int64)v6;
        ExReleaseSpinLockExclusiveFromDpcLevel(v1);
        ExReleaseSpinLockExclusive(&v8[3].Header.Lock, v5);
        MiSegmentDelete(v6 - 1);
      }
      else
      {
        v10 = *v4;
        *v6 = (__int64)*v4;
        v6[1] = (__int64)v4;
        if ( (__int64 **)v10[1] != v4 )
          __fastfail(3u);
        v10[1] = (__int64)v6;
        *v4 = v6;
        ExReleaseSpinLockExclusive(v1, v5);
      }
      goto LABEL_9;
    }
    if ( v8[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 872)) )
      {
        ExReleaseSpinLockExclusive(v1, v5);
        MiAttemptPageFileReduction(v8);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 872));
        v5 = ExAcquireSpinLockExclusive(v1);
      }
      if ( !BYTE1(v8[3].Header.WaitListHead.Blink) )
LABEL_25:
        KeSetEvent(v8 + 2, 0, 0);
    }
    else
    {
      v11[0] = *(_OWORD *)&v8->Header.Lock;
      v11[1] = *(_OWORD *)&v8->Header.WaitListHead.Blink;
      WaitListHead = v8[1].Header.WaitListHead;
      v13 = *(_OWORD *)&v8[2].Header.Lock;
      v14 = *(_OWORD *)&v8[2].Header.WaitListHead.Blink;
      Blink = v8[3].Header.WaitListHead.Blink;
      v15 = v6 - 1;
      v8[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v11;
      ExReleaseSpinLockExclusive(v1, v5);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 872)) )
      {
        MiExtendPagingFiles(v11);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 872));
      }
      if ( (_BYTE)Blink == 1 )
      {
        _InterlockedExchange(&v8[3].Header.Lock, 0);
LABEL_9:
        v3 = ExAcquireSpinLockExclusive(v1);
        goto LABEL_2;
      }
      v5 = ExAcquireSpinLockExclusive(v1);
      if ( v15 )
      {
        v8[1].Header.WaitListHead.Blink = WaitListHead.Blink;
        goto LABEL_25;
      }
    }
  }
  ExReleaseSpinLockExclusive(v1, v5);
  result = (PSLIST_ENTRY)MiSystemPartition;
  if ( Event.Header.SignalState && (int *)a1 == MiSystemPartition )
  {
    KeResetEvent(&Event);
    return MiFreeClonePool();
  }
  return result;
}
