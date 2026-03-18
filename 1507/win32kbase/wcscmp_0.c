/*
 * XREFs of wcscmp_0 @ 0x1C0085AC0
 * Callers:
 *     RIMGetProductString @ 0x1C0073538 (RIMGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
