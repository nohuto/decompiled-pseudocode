/*
 * XREFs of strchr @ 0x140145358
 * Callers:
 *     MiSnapThunk @ 0x1403CCF50 (MiSnapThunk.c)
 *     PipSmBiosGetString @ 0x1407506C4 (PipSmBiosGetString.c)
 *     EmpParseRuleTerm @ 0x14075F808 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140760518 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetToken @ 0x140761A0C (CmpGetToken.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  while ( *Str )
  {
    if ( *Str == (_BYTE)Val )
      return (char *)Str;
    ++Str;
  }
  if ( !(_BYTE)Val )
    return (char *)Str;
  return 0LL;
}
