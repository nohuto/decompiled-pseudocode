/*
 * XREFs of ?LinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C008D450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CVisualMarshaler::LinkVisualChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3)
{
  *((_DWORD *)this + 4) |= 0x8000u;
}
