/*
 * XREFs of DpiFinishPnPTransitionCallback @ 0x1C00FA8F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkFinishPnPTransition @ 0x1C00FA90C (DxgkFinishPnPTransition.c)
 */

char __fastcall DpiFinishPnPTransitionCallback(__int64 a1, int a2, unsigned int a3)
{
  if ( (unsigned int)(a2 - 1) <= 1 )
    DxgkFinishPnPTransition(a3);
  return 1;
}
