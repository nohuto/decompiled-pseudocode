/*
 * XREFs of RtlEqualSid @ 0x18004A6C0
 * Callers:
 *     RtlSidDominates @ 0x18004A420 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18004A4F8 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCompareKnownObjectAces @ 0x18004D878 (RtlpCompareKnownObjectAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18007FA84 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800BB3F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownAces @ 0x1800CEEF0 (RtlpCompareKnownAces.c)
 *     RtlFindAceBySid @ 0x1800D0AD0 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x180087B20 (memcmp.c)
 */

bool __fastcall RtlEqualSid(unsigned __int8 *a1, _WORD *a2)
{
  return *(_WORD *)a1 == *a2 && memcmp(a1, a2, 4 * (unsigned int)a1[1] + 8) == 0;
}
