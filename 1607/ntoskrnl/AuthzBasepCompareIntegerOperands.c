/*
 * XREFs of AuthzBasepCompareIntegerOperands @ 0x1402346F0
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140234DDC (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1402356F4 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepCompareUnsigned @ 0x140234B98 (AuthzBasepCompareUnsigned.c)
 */

__int64 __fastcall AuthzBasepCompareIntegerOperands(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // r9
  signed __int64 **v5; // rdx
  unsigned __int16 v6; // r11
  __int64 v7; // rcx
  signed __int64 v9; // [rsp+20h] [rbp-10h]
  signed __int64 v10; // [rsp+28h] [rbp-8h]

  v9 = -1LL;
  v2 = 0;
  v10 = -1LL;
  v4 = 0LL;
  v5 = (signed __int64 **)(a2 + 32);
  v6 = 2;
  do
  {
    if ( *((_DWORD *)v5 - 5) == 1 )
    {
      *(&v9 + v4) = **v5;
    }
    else
    {
      v6 = *((_WORD *)v5 - 16);
      *(&v9 + v4) = *(_QWORD *)(*(v5 - 2))[5];
    }
    ++v4;
    v5 += 5;
  }
  while ( v4 < 2 );
  if ( v6 == 1 )
  {
    switch ( a1 )
    {
      case 0x80u:
        if ( v9 != v10 )
          return v2;
        break;
      case 0x81u:
        if ( v9 == v10 )
          return v2;
        break;
      case 0x82u:
        if ( v9 >= v10 )
          return v2;
        break;
      case 0x83u:
        if ( v9 > v10 )
          return v2;
        break;
      case 0x84u:
        if ( v9 <= v10 )
          return v2;
        break;
      default:
        if ( a1 != 133 || v9 < v10 )
          return v2;
        break;
    }
    return 1;
  }
  v7 = (unsigned int)v6 - 2;
  if ( v6 == 2 )
    goto LABEL_12;
  if ( v6 == 6 )
  {
    if ( (unsigned __int64)v9 > 1 || (unsigned __int64)v10 >= 2 )
      return (unsigned int)-1;
LABEL_12:
    LOBYTE(v7) = a1;
    return (unsigned int)AuthzBasepCompareUnsigned(v7);
  }
  return v2;
}
