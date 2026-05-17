/*
 * XREFs of iswalnum @ 0x1800875F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
