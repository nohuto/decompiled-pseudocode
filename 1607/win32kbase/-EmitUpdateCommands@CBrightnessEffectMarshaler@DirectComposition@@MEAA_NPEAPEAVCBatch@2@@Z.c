/*
 * XREFs of ?EmitUpdateCommands@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EFC10
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003C70 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CBrightnessEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EFB9C (-EmitData@CBrightnessEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CBrightnessEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CBrightnessEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CBrightnessEffectMarshaler::EmitData(this, a2) != 0;
  return v4;
}
