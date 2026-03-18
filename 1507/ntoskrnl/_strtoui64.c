/*
 * XREFs of _strtoui64 @ 0x140172328
 * Callers:
 *     <none>
 * Callees:
 *     ?strtoxq@@YA_KPEAUlocaleinfo_struct@@PEBDPEAPEBDHH@Z @ 0x1401720D4 (-strtoxq@@YA_KPEAUlocaleinfo_struct@@PEBDPEAPEBDHH@Z.c)
 */

unsigned __int64 __cdecl strtoui64(const char *String, char **EndPtr, int Radix)
{
  return strtoxq(&_initiallocalestructinfo, String, (const char **)EndPtr, Radix, 1);
}
