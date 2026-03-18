/*
 * XREFs of ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EAA30
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003C70 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EA870 (-EmitData@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C00EA904 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 */

char __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // si

  if ( !(unsigned __int8)DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitData(this, a2) )
    return 0;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, (struct DirectComposition::CBatch ***)a2, 0) )
    return 0;
  v4 = 1;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, (struct DirectComposition::CBatch ***)a2, 1u)
    || !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, (struct DirectComposition::CBatch ***)a2, 2u)
    || !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, (struct DirectComposition::CBatch ***)a2, 3u) )
  {
    return 0;
  }
  return v4;
}
