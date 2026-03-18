/*
 * XREFs of PfSnPowerBoostWorker @ 0x1406AFFF4
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     PfSnPowerBoostUpdate @ 0x140458EA4 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 v2; // rtt

  PfSnPowerBoostUpdate(0);
  _m_prefetchw(RunRef);
  v2 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v2 - 2, v2) )
    ExfReleaseRundownProtection(RunRef);
}
