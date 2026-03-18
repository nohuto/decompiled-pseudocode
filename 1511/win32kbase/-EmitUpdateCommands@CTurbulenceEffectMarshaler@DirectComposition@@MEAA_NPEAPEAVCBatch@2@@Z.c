/*
 * XREFs of ?EmitUpdateCommands@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DE890
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003C70 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CTurbulenceEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DE7F0 (-EmitData@CTurbulenceEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CTurbulenceEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CTurbulenceEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CTurbulenceEffectMarshaler::EmitData(this, a2) != 0;
  return v4;
}
