/*
 * XREFs of ExAcquireRundownProtection_0 @ 0x14001B0D8
 * Callers:
 *     VerifierExAcquireRundownProtection @ 0x140741B3C (VerifierExAcquireRundownProtection.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtection_0(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 v1; // rtt

  _m_prefetchw(RunRef);
  v1 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v1 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v1 + 2, v1) )
    return 1;
  else
    return ExfAcquireRundownProtection(RunRef);
}
