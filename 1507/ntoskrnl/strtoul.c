/*
 * XREFs of strtoul @ 0x14017448C
 * Callers:
 *     EmpCacheBiosDate @ 0x1407CD748 (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x1407CDE68 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1407CE640 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x1407CF3BC (EmpParseRuleTermArgMapping.c)
 *     CmpGetBiosDate @ 0x1407D8C8C (CmpGetBiosDate.c)
 * Callees:
 *     ?strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z @ 0x140174204 (-strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX(&_initiallocalestructinfo, Str, (const char **)EndPtr, Radix, 1, 0);
}
