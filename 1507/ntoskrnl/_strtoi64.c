/*
 * XREFs of _strtoi64 @ 0x140172304
 * Callers:
 *     _atoi64 @ 0x140171BEC (_atoi64.c)
 * Callees:
 *     ?strtoxq@@YA_KPEAUlocaleinfo_struct@@PEBDPEAPEBDHH@Z @ 0x1401720D4 (-strtoxq@@YA_KPEAUlocaleinfo_struct@@PEBDPEAPEBDHH@Z.c)
 */

__int64 __cdecl strtoi64(const char *String, char **EndPtr, int Radix)
{
  return strtoxq(&_initiallocalestructinfo, String, (const char **)EndPtr, Radix, 0);
}
