/*
 * XREFs of ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0
 * Callers:
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x180119820 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x18011B420 (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x18011B974 (-Inverse@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18011CF40 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x18011D2C0 (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x18011D6C0 (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18011E968 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x18011EEE8 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x18011F638 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x1801283D8 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18012877C (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18012AA90 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18012B5E0 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180136498 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     <none>
 */

const struct D2DMatrix *__fastcall CExpressionValue::GetMatrix4x4Value(CExpressionValue *this)
{
  const struct D2DMatrix *result; // rax

  if ( *(_DWORD *)this != 265 || (result = (const struct D2DMatrix *)*((_QWORD *)this + 1)) == 0LL )
  {
    if ( (dword_1801A4208 & 1) == 0 )
      dword_1801A4208 |= 1u;
    return (const struct D2DMatrix *)&unk_1801A4210;
  }
  return result;
}
