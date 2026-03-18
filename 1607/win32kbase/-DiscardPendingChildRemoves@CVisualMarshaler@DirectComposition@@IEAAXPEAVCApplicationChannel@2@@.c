/*
 * XREFs of ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0044238
 * Callers:
 *     ?RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z @ 0x1C0043890 (-RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z.c)
 *     ?Disconnect@CVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0044280 (-Disconnect@CVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C0043444 (-ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::DiscardPendingChildRemoves(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  while ( *((_QWORD *)this + 21) )
    DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(this, a2, 0LL);
}
