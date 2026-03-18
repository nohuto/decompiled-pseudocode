/*
 * XREFs of ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00269A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitRectangle@CRectangleClipMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0026DC0 (-EmitRectangle@CRectangleClipMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028780 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CRectangleClipMarshaler::EmitUpdateCommands(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CRectangleClipMarshaler::EmitRectangle(this, a2);
  return v4;
}
