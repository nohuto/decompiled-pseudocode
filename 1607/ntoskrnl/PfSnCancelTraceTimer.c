/*
 * XREFs of PfSnCancelTraceTimer @ 0x140006974
 * Callers:
 *     PfSnDeactivateTrace @ 0x140006874 (PfSnDeactivateTrace.c)
 * Callees:
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnCancelTraceTimer(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  KIRQL v4; // di
  bool v5; // bl

  v1 = (KSPIN_LOCK *)(a1 + 272);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 272));
  *(_DWORD *)(a1 + 280) |= 2u;
  v4 = v3;
  v5 = KeCancelTimer((PKTIMER)(a1 + 136)) != 0;
  KeReleaseSpinLock(v1, v4);
  if ( v5 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
  return 0LL;
}
