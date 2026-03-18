/*
 * XREFs of ?DetachFromParent@CVisualMarshaler@DirectComposition@@MEAA_NPEAVCApplicationChannel@2@@Z @ 0x1C0017C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CVisualMarshaler::DetachFromParent(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  int v2; // edx
  bool result; // al

  v2 = *((_DWORD *)this + 4);
  *((_QWORD *)this + 19) = 0LL;
  result = (v2 & 0x20) != 0;
  *((_DWORD *)this + 4) = v2 & 0xFFFFFFDF;
  return result;
}
