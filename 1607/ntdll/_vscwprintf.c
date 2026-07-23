/*
 * XREFs of _vscwprintf @ 0x180098050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  return vscwprintf_helper(woutput_l, Format, 0LL, ArgList);
}
