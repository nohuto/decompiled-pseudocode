/*
 * XREFs of towlower @ 0x18009B0A0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180069350 (RtlCanonicalizeDomainName.c)
 *     _CopyLowerCaseAndSubstitute @ 0x1800FAC04 (_CopyLowerCaseAndSubstitute.c)
 * Callees:
 *     iswctype @ 0x180098E80 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
