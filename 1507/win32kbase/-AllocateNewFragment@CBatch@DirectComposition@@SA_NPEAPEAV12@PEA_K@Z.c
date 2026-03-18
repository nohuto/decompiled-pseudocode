/*
 * XREFs of ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0014C04
 * Callers:
 *     ?EmitUpdateCommands@CRenderTargetGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00169E0 (-EmitUpdateCommands@CRenderTargetGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00171F0 (-EmitUpdateCommands@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001D274 (-EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001D394 (-EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002ADF0 (-EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAppendColorResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B2D0 (-EmitAppendColorResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B320 (-EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002BE6C (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddExpressionResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6790 (-EmitAddExpressionResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitUpdateCommands@CClipGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8E40 (-EmitUpdateCommands@CClipGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C00D9258 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C00D9674 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C002F340 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 */

bool __fastcall DirectComposition::CBatch::AllocateNewFragment(
        struct DirectComposition::CBatch ***a1,
        unsigned __int64 *a2)
{
  struct DirectComposition::CBatch **v2; // rbx
  struct DirectComposition::CBatch *BatchFragment; // rax

  v2 = *a1;
  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment((*a1)[1], 1, 0);
  if ( BatchFragment )
  {
    *((_BYTE *)v2[12] + 64) = 0;
    *v2 = BatchFragment;
    *a1 = (struct DirectComposition::CBatch **)BatchFragment;
    if ( a2 )
      *a2 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 12) + 40LL);
    LOBYTE(BatchFragment) = 1;
  }
  return (char)BatchFragment;
}
