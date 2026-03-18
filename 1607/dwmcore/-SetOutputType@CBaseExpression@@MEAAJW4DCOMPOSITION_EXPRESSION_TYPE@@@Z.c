/*
 * XREFs of ?SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180088B80
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180088BC0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::SetOutputType(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 200) = a2;
  return 0LL;
}
