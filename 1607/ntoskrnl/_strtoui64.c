/*
 * XREFs of _strtoui64 @ 0x14014D6C8
 * Callers:
 *     <none>
 * Callees:
 *     strtoxq @ 0x14014D474 (strtoxq.c)
 */

unsigned __int64 __cdecl strtoui64(const char *String, char **EndPtr, int Radix)
{
  return strtoxq((__int64)&_initiallocalestructinfo, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 1);
}
