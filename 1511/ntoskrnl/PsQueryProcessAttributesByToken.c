/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x14046F8E0
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140448AFC (SeQuerySigningPolicyWorker.c)
 *     EtwpQueryTokenPackageInfo @ 0x14044A220 (EtwpQueryTokenPackageInfo.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     PsQueryProcessAttributes @ 0x14046DFC4 (PsQueryProcessAttributes.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14065FC3C (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x140666C0C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140470FCC (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, &PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, &PspPackagedAppClaim);
}
