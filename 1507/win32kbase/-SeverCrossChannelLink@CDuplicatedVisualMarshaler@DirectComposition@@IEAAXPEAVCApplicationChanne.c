/*
 * XREFs of ?SeverCrossChannelLink@CDuplicatedVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0023BA8
 * Callers:
 *     ?ReleaseAllReferences@CDuplicatedVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00239D0 (-ReleaseAllReferences@CDuplicatedVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel.c)
 *     ?DetachFromParent@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAVCApplicationChannel@2@@Z @ 0x1C0023B70 (-DetachFromParent@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAVCApplicationChannel@2@.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022CC0 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 */

void __fastcall DirectComposition::CDuplicatedVisualMarshaler::SeverCrossChannelLink(
        DirectComposition::CDuplicatedVisualMarshaler *this,
        DirectComposition::CConnection **a2)
{
  unsigned int v4; // ebx
  DirectComposition::CConnection *v5; // r8

  v4 = *(_DWORD *)(*((_QWORD *)this + 29) + 8LL);
  DirectComposition::CConnection::ReferenceSystemResource(a2[5], v4);
  v5 = (DirectComposition::CConnection *)*((_QWORD *)this + 29);
  *(_QWORD *)v5 = a2[49];
  a2[49] = v5;
  *((_DWORD *)this + 4) &= ~0x4000000u;
  *((_DWORD *)this + 58) = v4;
}
