/*
 * XREFs of strtoul @ 0x14014FDF8
 * Callers:
 *     EmpCacheBiosDate @ 0x1407A7158 (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x1407A7874 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1407A8094 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x1407A8E30 (EmpParseRuleTermArgMapping.c)
 *     CmpGetBiosDate @ 0x1407AD538 (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x14014FB70 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
