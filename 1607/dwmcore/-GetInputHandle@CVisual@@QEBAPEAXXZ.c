/*
 * XREFs of ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004EF94
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000AF70 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PE.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180051D40 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1800A4E3C (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 */

void *__fastcall CVisual::GetInputHandle(CVisual *this)
{
  CInteraction *InteractionInternal; // rax
  __int64 v2; // r10

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
    return CInteraction::GetInputHandle(InteractionInternal);
  return (void *)v2;
}
