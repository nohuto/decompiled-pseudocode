/*
 * XREFs of strtoul @ 0x18009BEA0
 * Callers:
 *     <none>
 * Callees:
 *     strtoxlX @ 0x18009BC00 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *String, char **EndPtr, int Radix)
{
  return strtoxlX(
           (__int64)&_initiallocalestructinfo,
           (unsigned __int8 *)String,
           (unsigned __int8 **)EndPtr,
           Radix,
           1,
           0);
}
