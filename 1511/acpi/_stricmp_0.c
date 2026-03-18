/*
 * XREFs of _stricmp_0 @ 0x1C0024CC8
 * Callers:
 *     OSInterface @ 0x1C0020770 (OSInterface.c)
 *     Debugger @ 0x1C0045228 (Debugger.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp_0(const char *Str1, const char *Str2)
{
  return _stricmp(Str1, Str2);
}
