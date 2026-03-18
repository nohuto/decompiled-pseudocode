/*
 * XREFs of RtlFindAceByType @ 0x140012AA0
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140013010 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x14007C05C (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x1400FC880 (RtlIsUntrustedObject.c)
 *     SepGetScopedPolicySid @ 0x140219BF8 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219E60 (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140238C70 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpGenerateInheritAcl @ 0x1404145E0 (RtlpGenerateInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     RtlpCopyAces @ 0x14041E7A0 (RtlpCopyAces.c)
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 *     SeQueryMandatoryLabel @ 0x1404D9024 (SeQueryMandatoryLabel.c)
 *     SepSDContainsAttributeACE @ 0x140695764 (SepSDContainsAttributeACE.c)
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
LABEL_9:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_9;
  *a3 = v5;
  return v4;
}
