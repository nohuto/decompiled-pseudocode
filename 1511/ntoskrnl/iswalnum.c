/*
 * XREFs of iswalnum @ 0x14014494C
 * Callers:
 *     GetAttributeName @ 0x14068823C (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x140689868 (IsEncodedAttributeChar.c)
 * Callees:
 *     <none>
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
