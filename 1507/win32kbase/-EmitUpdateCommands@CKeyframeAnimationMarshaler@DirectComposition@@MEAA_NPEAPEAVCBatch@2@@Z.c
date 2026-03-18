/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6960
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitAddExpressionResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6790 (-EmitAddExpressionResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D688C (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D69C4 (-EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D70C0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CKeyframeAnimationMarshaler::EmitAddExpressionResources(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(this, a2);
  }
  return v4;
}
