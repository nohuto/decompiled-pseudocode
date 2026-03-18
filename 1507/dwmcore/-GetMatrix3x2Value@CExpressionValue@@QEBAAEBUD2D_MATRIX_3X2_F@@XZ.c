/*
 * XREFs of ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x18012135C
 * Callers:
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180102220 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x180102A04 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18010D8FC (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18010F3A0 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180110228 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180120FD4 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     <none>
 */

const struct D2D_MATRIX_3X2_F *__fastcall CExpressionValue::GetMatrix3x2Value(CExpressionValue *this)
{
  const struct D2D_MATRIX_3X2_F *result; // rax

  if ( *(_DWORD *)this != 101 || (result = (const struct D2D_MATRIX_3X2_F *)*((_QWORD *)this + 1)) == 0LL )
  {
    if ( (dword_180196570 & 1) == 0 )
    {
      dword_180196590 = 0;
      dword_180196594 = 0;
      dword_180196570 |= 1u;
      xmmword_180196580 = _xmm;
    }
    return (const struct D2D_MATRIX_3X2_F *)&xmmword_180196580;
  }
  return result;
}
