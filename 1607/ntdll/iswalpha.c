/*
 * XREFs of iswalpha @ 0x18009A180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
