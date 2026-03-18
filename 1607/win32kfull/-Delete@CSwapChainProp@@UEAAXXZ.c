/*
 * XREFs of ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C014B720
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C014B740 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 */

void __fastcall CSwapChainProp::Delete(CSwapChainProp *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  CSwapChainProp::ClearCompositionSurfaceObj(this);
  Win32FreePool(this, v2, v3);
}
