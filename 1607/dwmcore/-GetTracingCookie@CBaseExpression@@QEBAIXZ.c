/*
 * XREFs of ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18008874C
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019AD0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x180088F8C (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18008B938 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180146F10 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180147C7C (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::GetTracingCookie(CBaseExpression *this)
{
  __int64 v1; // rcx
  _DWORD *i; // rcx

  v1 = *((_QWORD *)this + 33);
  if ( (*(_DWORD *)(v1 + 4) & 0x40000000) == 0 )
    return 0LL;
  for ( i = (_DWORD *)(v1 + 12); (*i & 0x7F000000) != 0x2000000; i = (_DWORD *)((char *)i + (*i & 0xFFFFFF) + 4) )
    ;
  return (unsigned int)i[1];
}
