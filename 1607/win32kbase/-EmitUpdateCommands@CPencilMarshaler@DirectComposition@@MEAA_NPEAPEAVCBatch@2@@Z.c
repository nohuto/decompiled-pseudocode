/*
 * XREFs of ?EmitUpdateCommands@CPencilMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E5CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitBasicStateUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E5A2C (-EmitBasicStateUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentCountUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E5AFC (-EmitSegmentCountUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E5B60 (-EmitSegmentUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitStartPointUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E5C3C (-EmitStartPointUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CPencilMarshaler::EmitUpdateCommands(
        DirectComposition::CPencilMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPencilMarshaler::EmitBasicStateUpdate(this, a2)
    && DirectComposition::CPencilMarshaler::EmitStartPointUpdate(this, a2)
    && DirectComposition::CPencilMarshaler::EmitSegmentCountUpdate(this, a2) )
  {
    return DirectComposition::CPencilMarshaler::EmitSegmentUpdate(this, a2);
  }
  return v4;
}
