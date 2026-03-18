/*
 * XREFs of iswspace @ 0x140144964
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x14068862C (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1406898FC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x14068A048 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     <none>
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
