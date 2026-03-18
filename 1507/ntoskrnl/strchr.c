/*
 * XREFs of strchr @ 0x140173388
 * Callers:
 *     MiSnapThunk @ 0x1405758EC (MiSnapThunk.c)
 *     PipSmBiosGetString @ 0x1407B7AF4 (PipSmBiosGetString.c)
 *     EmpParseRuleTerm @ 0x1407CE084 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1407CED90 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetToken @ 0x1407D92F8 (CmpGetToken.c)
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
