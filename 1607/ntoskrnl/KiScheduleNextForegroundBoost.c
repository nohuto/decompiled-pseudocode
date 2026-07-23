/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1400A2DF8
 * Callers:
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400F0CB4 (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
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
    KxAcquireSpinLock(&qword_14030E518);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_14030E510;
      v2 = qword_14030E508 == (_QWORD)&qword_14030E508;
      if ( *(__int64 **)qword_14030E510 != &qword_14030E508 )
        __fastfail(3u);
      *v1 = &qword_14030E508;
      v1[1] = v3;
      *v3 = v1;
      qword_14030E510 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_14030E518);
    if ( v2 )
      KiInsertQueueDpc((ULONG_PTR)&stru_14030E4C8, 0);
  }
}
