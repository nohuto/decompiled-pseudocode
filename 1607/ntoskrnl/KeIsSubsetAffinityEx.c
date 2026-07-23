/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1401D3D04
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1400D1F60 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyDomainStates @ 0x1400D3180 (PpmPerfApplyDomainStates.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1401FFF40 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1402005D4 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1402014A4 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x14067D654 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x14067DD40 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x14007DAF0 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140144778 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(__int16 *a1, __int16 *a2)
{
  unsigned __int16 v4[88]; // [rsp+20h] [rbp-C8h] BYREF

  KeAndAffinityEx(a1, a2, v4);
  return KeIsEqualAffinityEx((unsigned __int16 *)a1, v4);
}
