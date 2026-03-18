/*
 * XREFs of ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x180088770
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsExpressionValueValid(CBaseExpression *this, struct CExpressionValue *a2)
{
  int v2; // eax
  float v4; // xmm0_4
  float v6; // xmm0_4
  __int64 v7; // [rsp+20h] [rbp-10h]
  __int128 v8; // [rsp+20h] [rbp-10h]
  float v9; // [rsp+28h] [rbp-8h]
  __int64 v10; // [rsp+40h] [rbp+10h]

  v2 = *((_DWORD *)a2 + 16);
  if ( v2 != 18 )
  {
    switch ( v2 )
    {
      case 35:
        v10 = *(_QWORD *)a2;
        if ( !_finite(COERCE_FLOAT(*(_QWORD *)a2)) )
          return 0;
        v6 = *((float *)&v10 + 1);
        return _finite(v6) != 0;
      case 52:
        v7 = *(_QWORD *)a2;
        v9 = *((float *)a2 + 2);
        if ( !_finite(COERCE_FLOAT(*(_QWORD *)a2)) || !_finite(*((float *)&v7 + 1)) )
          return 0;
        v6 = v9;
        return _finite(v6) != 0;
      case 69:
      case 70:
      case 71:
        v8 = *(_OWORD *)a2;
        if ( !_finite(COERCE_FLOAT(*(_OWORD *)a2)) || !_finite(*((float *)&v8 + 1)) || !_finite(*((float *)&v8 + 2)) )
          return 0;
        v6 = *((float *)&v8 + 3);
        return _finite(v6) != 0;
      case 104:
        if ( !_finite(*(float *)a2)
          || !_finite(*((float *)a2 + 1))
          || !_finite(*((float *)a2 + 2))
          || !_finite(*((float *)a2 + 3))
          || !_finite(*((float *)a2 + 4)) )
        {
          return 0;
        }
        v4 = *((float *)a2 + 4);
        return _finite(v4) != 0;
      case 265:
        if ( !_finite(*(float *)a2)
          || !_finite(*((float *)a2 + 1))
          || !_finite(*((float *)a2 + 2))
          || !_finite(*((float *)a2 + 3))
          || !_finite(*((float *)a2 + 4))
          || !_finite(*((float *)a2 + 5))
          || !_finite(*((float *)a2 + 6))
          || !_finite(*((float *)a2 + 7))
          || !_finite(*((float *)a2 + 8))
          || !_finite(*((float *)a2 + 9))
          || !_finite(*((float *)a2 + 10))
          || !_finite(*((float *)a2 + 11))
          || !_finite(*((float *)a2 + 12))
          || !_finite(*((float *)a2 + 13))
          || !_finite(*((float *)a2 + 14)) )
        {
          return 0;
        }
        v4 = *((float *)a2 + 15);
        return _finite(v4) != 0;
      default:
        return 0;
    }
  }
  v4 = *(float *)a2;
  return _finite(v4) != 0;
}
