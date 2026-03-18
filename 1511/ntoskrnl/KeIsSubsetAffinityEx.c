/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1401C4D7C
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x140074E40 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x1400D1E40 (PpmPerfApplyDomainState.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1401E755C (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1401E7BF0 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1401E8C54 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x14063EF08 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x14063F50C (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x140094120 (KeAndAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeIsEqualAffinityEx @ 0x1401C4D04 (KeIsEqualAffinityEx.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(__int16 *a1, __int16 *a2)
{
  unsigned __int16 v4[88]; // [rsp+20h] [rbp-C8h] BYREF

  KeAndAffinityEx(a1, a2, v4);
  return KeIsEqualAffinityEx((unsigned __int16 *)a1, v4);
}
