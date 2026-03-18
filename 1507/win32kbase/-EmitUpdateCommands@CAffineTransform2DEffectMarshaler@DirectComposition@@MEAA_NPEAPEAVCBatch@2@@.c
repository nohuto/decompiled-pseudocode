/*
 * XREFs of ?EmitUpdateCommands@CAffineTransform2DEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DD520
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8B80 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CAffineTransform2DEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DD480 (-EmitData@CAffineTransform2DEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(
                          this,
                          (struct DirectComposition::CBatch **)a2) )
    return DirectComposition::CAffineTransform2DEffectMarshaler::EmitData(this, a2) != 0;
  return v4;
}
