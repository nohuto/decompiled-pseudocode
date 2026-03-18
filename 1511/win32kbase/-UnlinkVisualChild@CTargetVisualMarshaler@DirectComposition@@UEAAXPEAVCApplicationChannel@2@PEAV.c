/*
 * XREFs of ?UnlinkVisualChild@CTargetVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@@Z @ 0x1C008D4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CTargetVisualMarshaler::UnlinkVisualChild(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3)
{
  *((_DWORD *)this + 4) |= 0x40u;
}
