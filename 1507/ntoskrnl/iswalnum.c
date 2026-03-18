/*
 * XREFs of iswalnum @ 0x1401729CC
 * Callers:
 *     EncodeAttributeName @ 0x14070A708 (EncodeAttributeName.c)
 * Callees:
 *     <none>
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
