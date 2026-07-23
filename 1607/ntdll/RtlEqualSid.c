/*
 * XREFs of RtlEqualSid @ 0x1800043F0
 * Callers:
 *     RtlSidDominates @ 0x180004160 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F000 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008C534 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpCompareKnownObjectAces @ 0x18008EA10 (RtlpCompareKnownObjectAces.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF4F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownAces @ 0x1800DFEE0 (RtlpCompareKnownAces.c)
 *     RtlFindAceBySid @ 0x1800E1A9C (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x18009A690 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2
      && memcmp(Sid1, Sid2, 4 * (unsigned int)*((unsigned __int8 *)Sid1 + 1) + 8) == 0;
}
