/*
 * XREFs of MiProcessDeleteOnClose @ 0x1401DECE4
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     MiDestroySection @ 0x140112284 (MiDestroySection.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 *     MiUnlinkUnusedControlArea @ 0x1401DF28C (MiUnlinkUnusedControlArea.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

void __fastcall MiProcessDeleteOnClose(__int64 a1, int a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  volatile LONG *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 inserted; // rsi
  _QWORD *v13; // rax
  struct _FILE_OBJECT *v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = (volatile LONG *)(a1 + 1664);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1664));
  if ( a2 == 1 && *(_BYTE *)(a1 + 1520) == 1 && !KeCancelTimer((PKTIMER)(a1 + 1456)) )
  {
    ExReleaseSpinLockExclusive(v2, v5);
    KeWaitForSingleObject((PVOID)(a1 + 1456), Executive, 0, 0, 0LL);
  }
  v6 = (_QWORD *)(a1 + 1440);
  while ( 1 )
  {
    v13 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    v7 = (__int64)(v13 - 1);
    v8 = (volatile LONG *)(v13 + 8);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8) )
    {
      MiUnlinkUnusedControlArea(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( *(_DWORD *)(v7 + 76) )
      {
        inserted = MiInsertUnusedSegment(v7, v9, v10, v11);
        ExReleaseSpinLockExclusive(v8, v5);
        if ( inserted )
          MiReturnSubsectionCharges(inserted);
      }
      else
      {
        v14 = 0LL;
        LOBYTE(v9) = v5;
        if ( (unsigned int)MiFlushControlArea(v7, v9, &v15, &v14) == 1 )
          MiDestroySection(v7, v5, v14);
        if ( v15 )
          MiReleaseControlAreaWaiters(v15);
      }
      ExAcquireSpinLockExclusive(v2);
    }
    else
    {
      ExReleaseSpinLockExclusive(v2, v5);
      v5 = ExAcquireSpinLockExclusive(v2);
    }
  }
  *(_BYTE *)(a1 + 1520) = 0;
  ExReleaseSpinLockExclusive(v2, v5);
}
