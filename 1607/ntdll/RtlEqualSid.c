/*
 * XREFs of RtlEqualSid @ 0x1800043F0
 * Callers:
 *     RtlSidDominates @ 0x180004160 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F010 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008C544 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpCompareKnownObjectAces @ 0x18008EA20 (RtlpCompareKnownObjectAces.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF4F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownAces @ 0x1800DFE20 (RtlpCompareKnownAces.c)
 *     RtlFindAceBySid @ 0x1800E19DC (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x18009A6A0 (memcmp.c)
 */

bool __fastcall RtlEqualSid(unsigned __int8 *a1, _WORD *a2)
{
  return *(_WORD *)a1 == *a2 && memcmp(a1, a2, 4 * (unsigned int)a1[1] + 8) == 0;
}
