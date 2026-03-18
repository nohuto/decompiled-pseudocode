/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18016AB90
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18016B11C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801711BC (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180171BA0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ??1?$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAA@XZ @ 0x1801732C4 (--1-$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAAAEAV012@$$T@Z @ 0x180173324 (--4-$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAAAEAV012@$$T@Z.c)
 *     ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x1801741CC (-GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureS.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(CMILRefCountBase **a1)
{
  CMILRefCountBase *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILRefCountBase::Release(v1);
  }
  return result;
}
