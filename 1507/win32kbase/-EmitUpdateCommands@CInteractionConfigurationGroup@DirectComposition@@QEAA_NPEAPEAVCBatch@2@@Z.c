/*
 * XREFs of ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001D4B4
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001CF80 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitUpdateMouseConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001D174 (-EmitUpdateMouseConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001D1F8 (-EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001D274 (-EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001D394 (-EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

bool __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchConfiguration(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchpadConfiguration(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CInteractionConfigurationGroup::EmitUpdatePenConfiguration(this, a2) )
  {
    return DirectComposition::CInteractionConfigurationGroup::EmitUpdateMouseConfiguration(this, a2) != 0;
  }
  return v4;
}
