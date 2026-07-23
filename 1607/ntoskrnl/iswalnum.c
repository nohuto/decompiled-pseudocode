/*
 * XREFs of iswalnum @ 0x14014E2E4
 * Callers:
 *     GetAttributeName @ 0x1406CCBF4 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1406CE1E0 (IsEncodedAttributeChar.c)
 * Callees:
 *     <none>
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
