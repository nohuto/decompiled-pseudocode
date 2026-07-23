/*
 * XREFs of strchr @ 0x14014ECF8
 * Callers:
 *     MiSnapThunk @ 0x14046BA04 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x14069DC0C (WmipSMBiosFindStringAndZero.c)
 *     PipSmBiosGetString @ 0x14079A3B4 (PipSmBiosGetString.c)
 *     EmpParseRuleTerm @ 0x1407A7A90 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1407A8814 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetToken @ 0x1407AEEE8 (CmpGetToken.c)
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
