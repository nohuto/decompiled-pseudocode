/*
 * XREFs of ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x1801213A8
 * Callers:
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180101420 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180102220 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x180102A04 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18010D8FC (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18010F3A0 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180110228 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180120FD4 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     <none>
 */

const struct D2DMatrix *__fastcall CExpressionValue::GetMatrix4x4Value(CExpressionValue *this)
{
  const struct D2DMatrix *result; // rax

  if ( *(_DWORD *)this != 262 || (result = (const struct D2DMatrix *)*((_QWORD *)this + 1)) == 0LL )
  {
    if ( (dword_180196598 & 1) == 0 )
      dword_180196598 |= 1u;
    return (const struct D2DMatrix *)&unk_1801965A0;
  }
  return result;
}
