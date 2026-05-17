/*
 * XREFs of towlower @ 0x1800898F0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18005D9C0 (RtlCanonicalizeDomainName.c)
 *     _CopyLowerCaseAndSubstitute @ 0x1800FB730 (_CopyLowerCaseAndSubstitute.c)
 * Callees:
 *     iswctype @ 0x1800876C0 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
