/*
 * XREFs of iswalnum @ 0x180098DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
