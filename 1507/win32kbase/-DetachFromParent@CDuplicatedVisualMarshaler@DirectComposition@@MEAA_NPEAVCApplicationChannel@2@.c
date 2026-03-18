/*
 * XREFs of ?DetachFromParent@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAVCApplicationChannel@2@@Z @ 0x1C0023B70
 * Callers:
 *     <none>
 * Callees:
 *     ?SeverCrossChannelLink@CDuplicatedVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0023BA8 (-SeverCrossChannelLink@CDuplicatedVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChanne.c)
 */

bool __fastcall DirectComposition::CDuplicatedVisualMarshaler::DetachFromParent(
        DirectComposition::CDuplicatedVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  bool result; // al

  if ( (*((_DWORD *)this + 4) & 0x4000000) != 0 )
    DirectComposition::CDuplicatedVisualMarshaler::SeverCrossChannelLink(this, a2);
  result = (*((_DWORD *)this + 4) & 0x20) != 0;
  *((_DWORD *)this + 4) &= 0xFFFFBFDF;
  *((_QWORD *)this + 19) = 0LL;
  return result;
}
