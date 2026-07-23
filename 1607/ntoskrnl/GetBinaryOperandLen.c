/*
 * XREFs of GetBinaryOperandLen @ 0x1406CCE24
 * Callers:
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBinaryOperandLen(_WORD *a1, _DWORD *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // r10
  __int64 result; // rax
  bool v6; // zf

  *a2 = 0;
  if ( *a1 != 32 )
  {
    do
    {
      v2 = (unsigned int)*a2;
      v3 = (unsigned __int16)a1[v2];
      if ( (unsigned __int16)v3 <= 0x2Cu )
      {
        v4 = 0x124000000001LL;
        if ( _bittest64(&v4, v3) )
          break;
      }
      if ( (unsigned __int16)(v3 - 124) <= 1u )
        break;
      result = (unsigned int)(v2 + 1);
      v6 = a1[result] == 32;
      *a2 = result;
    }
    while ( !v6 );
  }
  return result;
}
