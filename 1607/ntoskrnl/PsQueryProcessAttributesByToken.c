/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x14040C014
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14045C0CC (SeQuerySigningPolicyWorker.c)
 *     EtwpQueryTokenPackageInfo @ 0x14045CA10 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x140470C90 (PsQueryProcessAttributes.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14069FA70 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8C88 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x14000DE80 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim);
}
