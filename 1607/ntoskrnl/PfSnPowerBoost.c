/*
 * XREFs of PfSnPowerBoost @ 0x1404CCFEC
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404D7A84 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PfSnPowerBoostUpdate @ 0x1404CD05C (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  if ( a2 )
  {
    PfSnPowerBoostUpdate(1LL);
    ExAcquireRundownProtection(RunRef);
    KiSetTimerEx((__int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      PfSnPowerBoostUpdate(0LL);
      ExReleaseRundownProtection(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
