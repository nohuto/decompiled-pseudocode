/*
 * XREFs of GetOperatorIndexByToken @ 0x140688E5C
 * Callers:
 *     LocalGetConditionForString @ 0x1406898FC (LocalGetConditionForString.c)
 *     LocalpGetStringForCondition @ 0x14068B44C (LocalpGetStringForCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  unsigned int v1; // edx
  _BYTE *i; // r8

  v1 = 0;
  for ( i = &unk_14025E138; *i != a1; i += 24 )
  {
    if ( (unsigned __int64)(int)++v1 >= 0x17 )
      return 0xFFFFFFFFLL;
  }
  return v1;
}
