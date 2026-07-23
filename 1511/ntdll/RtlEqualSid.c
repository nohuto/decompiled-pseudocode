/*
 * XREFs of RtlEqualSid @ 0x18005DDF0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000C5D0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlSidDominates @ 0x18005DA90 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005DC30 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpCompareKnownObjectAces @ 0x18008A320 (RtlpCompareKnownObjectAces.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800C8110 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownAces @ 0x1800D74CC (RtlpCompareKnownAces.c)
 *     RtlFindAceBySid @ 0x1800D8FF0 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x1800992D0 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2
      && memcmp(Sid1, Sid2, 4 * (unsigned int)*((unsigned __int8 *)Sid1 + 1) + 8) == 0;
}
