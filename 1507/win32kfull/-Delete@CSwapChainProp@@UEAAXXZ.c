/*
 * XREFs of ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C011ACB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C011ACD0 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 */

void __fastcall CSwapChainProp::Delete(CSwapChainProp *this)
{
  CSwapChainProp::ClearCompositionSurfaceObj(this);
  Win32FreePool(this);
}
