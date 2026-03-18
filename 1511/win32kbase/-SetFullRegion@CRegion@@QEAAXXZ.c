/*
 * XREFs of ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C003ECBC
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C003E2F0 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00E13E0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x1C00E1700 (-NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00E1860 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003ECE0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall CRegion::SetFullRegion(CRegion *this)
{
  REGION *v2; // rcx

  v2 = (REGION *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    REGION::vDeleteREGION(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 1) = 1;
}
