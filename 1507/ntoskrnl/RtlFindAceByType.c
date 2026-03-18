/*
 * XREFs of RtlFindAceByType @ 0x1400459A0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14002B81C (SepMandatorySubProcessToken.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140045360 (SeComputeAutoInheritByObjectTypeEx.c)
 *     RtlIsUntrustedObject @ 0x14012AE2C (RtlIsUntrustedObject.c)
 *     SepGetScopedPolicySid @ 0x14024F610 (SepGetScopedPolicySid.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14026D9C8 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpGenerateInheritAcl @ 0x140434C10 (RtlpGenerateInheritAcl.c)
 *     RtlpCopyAces @ 0x140486AE0 (RtlpCopyAces.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 *     SepSDContainsAttributeACE @ 0x1406D7ED8 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // r10
  unsigned int v5; // r11d

  if ( !a1 )
    return 0LL;
  v4 = (unsigned __int8 *)(a1 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v4 == a2 )
      return v4;
LABEL_10:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_10;
  *a3 = v5;
  return v4;
}
