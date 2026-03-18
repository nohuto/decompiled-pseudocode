/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1401D3ED8
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1400D40C0 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyDomainStates @ 0x1400D52E0 (PpmPerfApplyDomainStates.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140200114 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1402007A8 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x140201678 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x14067D570 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x14067DC5C (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x14007DA70 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140144208 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(__int16 *a1, __int16 *a2)
{
  unsigned __int16 v4[88]; // [rsp+20h] [rbp-C8h] BYREF

  KeAndAffinityEx(a1, a2, v4);
  return KeIsEqualAffinityEx((unsigned __int16 *)a1, v4);
}
