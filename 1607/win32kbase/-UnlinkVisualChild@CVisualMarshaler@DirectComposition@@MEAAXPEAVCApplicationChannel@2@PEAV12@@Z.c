/*
 * XREFs of ?UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C00E4B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CVisualMarshaler::UnlinkVisualChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3)
{
  *((_DWORD *)a3 + 4) |= 8u;
  *((_QWORD *)a3 + 22) = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = a3;
  DirectComposition::CResourceMarshaler::AddRef(a3);
}
