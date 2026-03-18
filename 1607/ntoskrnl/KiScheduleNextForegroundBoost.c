/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1400A44D0
 * Callers:
 *     KiDirectSwitchThread @ 0x140052C70 (KiDirectSwitchThread.c)
 *     KiDeferredReadyThread @ 0x140056AC0 (KiDeferredReadyThread.c)
 *     KiQuantumEnd @ 0x1400D1780 (KiQuantumEnd.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400F2E64 (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 1432);
  if ( *(_QWORD *)(a1 + 1432) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_14030E4D8);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_14030E4D0;
      v2 = qword_14030E4C8 == (_QWORD)&qword_14030E4C8;
      if ( *(__int64 **)qword_14030E4D0 != &qword_14030E4C8 )
        __fastfail(3u);
      *v1 = &qword_14030E4C8;
      v1[1] = v3;
      *v3 = v1;
      qword_14030E4D0 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_14030E4D8);
    if ( v2 )
      KiInsertQueueDpc((ULONG_PTR)&stru_14030E488, 0);
  }
}
