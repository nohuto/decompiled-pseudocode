/*
 * XREFs of PfSnPowerBoost @ 0x140458E08
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     PfSnPowerBoostUpdate @ 0x140458EA4 (PfSnPowerBoostUpdate.c)
 */

char __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  unsigned __int64 v3; // rtt
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rtt

  if ( a2 )
  {
    PfSnPowerBoostUpdate(1LL);
    _m_prefetchw(RunRef);
    v3 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v3 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v3 + 2, v3) )
      ExfAcquireRundownProtection(RunRef);
    LOBYTE(v4) = KiSetTimerEx((__int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      PfSnPowerBoostUpdate(0LL);
      _m_prefetchw(RunRef);
      v5 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v5 - 2, v5) )
        ExfReleaseRundownProtection(RunRef);
    }
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
    if ( v4 >= 2 )
      LOBYTE(v4) = ExfWaitForRundownProtectionRelease((volatile signed __int64 *)RunRef, v4);
  }
  return v4;
}
