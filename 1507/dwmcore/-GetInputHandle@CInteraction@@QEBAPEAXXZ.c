/*
 * XREFs of ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x18005A05C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000B398 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180035B7C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180059D20 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?GetInputSink@CInteraction@@UEBAPEAXXZ @ 0x18010CF40 (-GetInputSink@CInteraction@@UEBAPEAXXZ.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180130A3C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall CInteraction::GetInputHandle(CInteraction *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 9);
  result = 0LL;
  if ( v1 )
    return *(void **)(v1 + 16);
  return result;
}
