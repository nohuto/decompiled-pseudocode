/*
 * XREFs of _strtoi64 @ 0x140144284
 * Callers:
 *     _atoi64 @ 0x140143B6C (_atoi64.c)
 * Callees:
 *     ?strtoxq@@YA_KPEAUlocaleinfo_struct@@PEBDPEAPEBDHH@Z @ 0x140144054 (-strtoxq@@YA_KPEAUlocaleinfo_struct@@PEBDPEAPEBDHH@Z.c)
 */

__int64 __cdecl strtoi64(const char *String, char **EndPtr, int Radix)
{
  return strtoxq(&_initiallocalestructinfo, String, (const char **)EndPtr, Radix, 0);
}
