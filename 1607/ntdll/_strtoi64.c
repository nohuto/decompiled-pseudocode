/*
 * XREFs of _strtoi64 @ 0x18009D0A4
 * Callers:
 *     _atoi64 @ 0x180097320 (_atoi64.c)
 * Callees:
 *     strtoxq @ 0x18009CE70 (strtoxq.c)
 */

__int64 __cdecl strtoi64(const char *String, char **EndPtr, int Radix)
{
  return strtoxq((__int64)&_initiallocalestructinfo, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 0);
}
