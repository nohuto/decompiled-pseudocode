/*
 * XREFs of wcscmp_0 @ 0x1C0088D50
 * Callers:
 *     RIMGetProductString @ 0x1C0009C4C (RIMGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
