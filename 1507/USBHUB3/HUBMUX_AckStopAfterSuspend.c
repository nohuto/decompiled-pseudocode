/*
 * XREFs of HUBMUX_AckStopAfterSuspend @ 0x1C000D2CC
 * Callers:
 *     HUBDSM_AckingStopAfterSuspendOnDetach @ 0x1C00161E0 (HUBDSM_AckingStopAfterSuspendOnDetach.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_AckStopAfterSuspend(volatile signed __int32 *a1)
{
  __int64 v1; // rsi
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdi
  KIRQL v4; // al

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v3 = *(_QWORD *)a1 + 2240LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  _InterlockedAnd(v2 + 56, 0xFFFFFFFB);
  _InterlockedOr(v2 + 56, 1u);
  LODWORD(v2) = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF);
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v4);
  if ( (_DWORD)v2 == 1 )
    HUBSM_AddEvent(v1 + 1184, 0x7E6u);
}
