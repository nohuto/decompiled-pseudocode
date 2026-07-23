/*
 * XREFs of iswspace @ 0x14014E2FC
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1406CCFE4 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1406CE274 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE9C4 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     <none>
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
