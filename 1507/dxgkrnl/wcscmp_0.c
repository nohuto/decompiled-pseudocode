/*
 * XREFs of wcscmp_0 @ 0x1C0010910
 * Callers:
 *     DpiTestProcessRegKey @ 0x1C0170C60 (DpiTestProcessRegKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
