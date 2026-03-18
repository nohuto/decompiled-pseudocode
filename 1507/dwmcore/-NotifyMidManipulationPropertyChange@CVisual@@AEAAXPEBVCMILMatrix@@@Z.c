/*
 * XREFs of ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x18000BB94
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E2968 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1801042EC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18012A5D0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

void __fastcall CVisual::NotifyMidManipulationPropertyChange(CComposition **this, const struct CMILMatrix *a2)
{
  struct CManipulationManager *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 90) & 8) != 0 )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&v4);
    if ( (int)CComposition::GetManipulationManager(this[2], &v4) >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(v4, (struct CVisual *)this, a2);
    Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&v4);
  }
}
