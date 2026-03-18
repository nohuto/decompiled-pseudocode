/*
 * XREFs of strtoul @ 0x14014645C
 * Callers:
 *     CmpGetBiosDate @ 0x1407448E8 (CmpGetBiosDate.c)
 *     EmpCacheBiosDate @ 0x14075EECC (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x14075F5EC (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x14075FDC8 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140760B3C (EmpParseRuleTermArgMapping.c)
 * Callees:
 *     ?strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z @ 0x1401461D4 (-strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX(&_initiallocalestructinfo, Str, (const char **)EndPtr, Radix, 1, 0);
}
