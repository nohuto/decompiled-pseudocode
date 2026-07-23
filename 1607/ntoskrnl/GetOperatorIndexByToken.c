/*
 * XREFs of GetOperatorIndexByToken @ 0x1406CD7D8
 * Callers:
 *     LocalGetConditionForString @ 0x1406CE274 (LocalGetConditionForString.c)
 *     LocalpGetStringForCondition @ 0x1406CFDC0 (LocalpGetStringForCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  unsigned int v1; // edx
  _BYTE *i; // r8

  v1 = 0;
  for ( i = &unk_14025D488; *i != a1; i += 24 )
  {
    if ( (unsigned __int64)(int)++v1 >= 0x18 )
      return 0xFFFFFFFFLL;
  }
  return v1;
}
