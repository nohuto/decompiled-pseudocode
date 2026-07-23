/*
 * XREFs of towlower @ 0x18009C430
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180055600 (RtlCanonicalizeDomainName.c)
 *     _CopyLowerCaseAndSubstitute @ 0x1801054F0 (_CopyLowerCaseAndSubstitute.c)
 * Callees:
 *     iswctype @ 0x18009A240 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
