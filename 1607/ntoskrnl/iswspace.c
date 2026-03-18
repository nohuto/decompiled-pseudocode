/*
 * XREFs of iswspace @ 0x14014DD8C
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1406CCEAC (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1406CE13C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE88C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     <none>
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
