/*
 * XREFs of ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitApplyPositionImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E7F14 (-EmitApplyPositionImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E7FA0 (-EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitApplyScaleImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8128 (-EmitApplyScaleImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E81BC (-EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8244 (-EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCallbackPropertyIdSet@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E82BC (-EmitSetCallbackPropertyIdSet@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetInertiaDecayRates@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8334 (-EmitSetInertiaDecayRates@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E83C0 (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8494 (-EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8648 (-EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E86C0 (-EmitSetMaxScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8734 (-EmitSetMinPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E87AC (-EmitSetMinScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8820 (-EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E88A4 (-EmitSetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitSetRequestedPositionDelta@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E892C (-EmitSetRequestedPositionDelta@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetRequestedScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E89B8 (-EmitSetRequestedScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8A50 (-EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
      return v2;
    v5 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 220;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 3) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CInteractionTrackerMarshaler::EmitDwmStarted(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetCallbackPropertyIdSet(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaDecayRates(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionImpulse(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitApplyScaleImpulse(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMinPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMaxPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMinScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMaxScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPositionDelta(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPositionAnimation(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScaleAnimation(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaModifierAnimations(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetManipulations(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionShift(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitConfigureInternalProperties(this, a2) )
  {
    return 1;
  }
  return v2;
}
