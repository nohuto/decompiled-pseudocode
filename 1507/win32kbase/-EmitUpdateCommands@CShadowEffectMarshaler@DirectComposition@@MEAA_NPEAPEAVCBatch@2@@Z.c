/*
 * XREFs of ?EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC400
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8B80 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CShadowEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC374 (-EmitData@CShadowEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CShadowEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CShadowEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(
                          this,
                          (struct DirectComposition::CBatch **)a2) )
    return DirectComposition::CShadowEffectMarshaler::EmitData(this, a2) != 0;
  return v4;
}
