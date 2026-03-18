/*
 * XREFs of HUBMUX_AcquireDevicePowerReference @ 0x1C000D754
 * Callers:
 *     HUBDSM_AcquiringPowerReferenceOnHubResume @ 0x1C0016D50 (HUBDSM_AcquiringPowerReferenceOnHubResume.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_AcquireDevicePowerReference(volatile signed __int32 *a1)
{
  __int64 v1; // rsi
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdi
  KIRQL v4; // al

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v3 = *(_QWORD *)a1 + 2264LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  _InterlockedAnd(v2 + 56, 0xFFFFFFFB);
  _InterlockedOr(v2 + 56, 2u);
  _InterlockedAnd(v2 + 56, 0xFFFFFFFE);
  LODWORD(v2) = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF);
  ++*(_DWORD *)(v3 + 28);
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v4);
  if ( (_DWORD)v2 == 1 )
    HUBSM_AddEvent(v1 + 1208, 0x7DEu);
}
