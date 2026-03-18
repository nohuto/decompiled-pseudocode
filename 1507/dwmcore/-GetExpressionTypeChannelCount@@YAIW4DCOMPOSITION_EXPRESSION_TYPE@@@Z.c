/*
 * XREFs of ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180100FB4
 * Callers:
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180102750 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?GetPropertyStorage@CCompiledEffect@@AEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAXPEA_N@Z @ 0x18011318C (-GetPropertyStorage@CCompiledEffect@@AEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAXPEA_N@Z.c)
 *     ?SetPropertyValue@CCompiledEffect@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180113970 (-SetPropertyValue@CCompiledEffect@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18012122C (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExpressionTypeChannelCount(int a1)
{
  if ( a1 == 17 || a1 == 34 || a1 == 51 || a1 == 68 || a1 == 101 || a1 == 262 )
    return (unsigned int)(a1 >> 4);
  else
    return 0LL;
}
