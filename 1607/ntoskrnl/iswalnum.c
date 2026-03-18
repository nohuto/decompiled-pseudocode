/*
 * XREFs of iswalnum @ 0x14014DD74
 * Callers:
 *     GetAttributeName @ 0x1406CCABC (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1406CE0A8 (IsEncodedAttributeChar.c)
 * Callees:
 *     <none>
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
