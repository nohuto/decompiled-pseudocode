/*
 * XREFs of ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1800A7828
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1800026AC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004DB5C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800597C0 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?GetInputSink@CInteraction@@UEBAPEAXXZ @ 0x180127C50 (-GetInputSink@CInteraction@@UEBAPEAXXZ.c)
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
