/*
 * XREFs of SepAdtIncorporatePerUserPolicy @ 0x14065187C
 * Callers:
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall SepAdtIncorporatePerUserPolicy(unsigned int a1, char a2, char a3, __int64 a4, _BYTE *a5)
{
  _BYTE *result; // rax
  int v6; // r9d

  if ( *(_BYTE *)(a4 + 118) == 2 )
  {
    result = (_BYTE *)((unsigned __int64)a1 >> 1);
    v6 = ((unsigned __int8)result[a4 + 88] >> (4 * (a1 & 1))) & 0xF;
    if ( v6 )
    {
      if ( a2 && (v6 & 1) != 0 || a3 && (v6 & 4) != 0 )
      {
        result = a5;
        *a5 = 1;
      }
      else if ( a2 && (v6 & 2) != 0 || a3 && (v6 & 8) != 0 )
      {
        result = a5;
        *a5 = 0;
      }
    }
  }
  return result;
}
