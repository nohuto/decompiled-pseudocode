/*
 * XREFs of ?EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003A80
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitData@CShadowEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003B60 (-EmitData@CShadowEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003C70 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CShadowEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CShadowEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CShadowEffectMarshaler::EmitData(this, a2);
  return v4;
}
