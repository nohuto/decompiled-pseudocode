/*
 * XREFs of ?CompareLangName@@YAHPEBX0@Z @ 0x1401479D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CompareLangName(const wchar_t *a1, const wchar_t **a2)
{
  return wcsicmp(a1, *a2);
}
