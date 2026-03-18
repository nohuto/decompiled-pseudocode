/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x14050BC64
 * Callers:
 *     <none>
 * Callees:
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, &PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, &PspPackagedAppClaim);
}
