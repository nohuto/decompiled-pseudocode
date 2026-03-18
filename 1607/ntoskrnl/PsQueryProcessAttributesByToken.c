/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x14040D154
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14045D1FC (SeQuerySigningPolicyWorker.c)
 *     EtwpQueryTokenPackageInfo @ 0x14045DB40 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x140471DC0 (PsQueryProcessAttributes.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14069F938 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8B50 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x14000E300 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim);
}
