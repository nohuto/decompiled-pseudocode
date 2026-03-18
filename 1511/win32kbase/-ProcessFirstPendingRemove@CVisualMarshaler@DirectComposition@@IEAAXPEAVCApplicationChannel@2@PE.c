/*
 * XREFs of ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C0016DDC
 * Callers:
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016D60 (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0017598 (-DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char *a3)
{
  __int64 v3; // rbx
  char v5; // al

  v3 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 8) = 0LL;
  if ( a3 )
  {
    *(_DWORD *)a3 = 16;
    *(_QWORD *)(a3 + 4) = 0LL;
    *((_DWORD *)a3 + 3) = 0;
    *((_DWORD *)a3 + 1) = 54;
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)a3 + 3) = *(_DWORD *)(v3 + 24);
  }
  v5 = (unsigned __int8)*(_DWORD *)(v3 + 16) >> 2;
  *(_DWORD *)(v3 + 16) &= 0xFFFFFFEB;
  if ( (v5 & 1) != 0 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
      a2,
      (struct DirectComposition::CResourceMarshaler *)v3);
  DirectComposition::CApplicationChannel::ReleaseResource(a2, (struct DirectComposition::CResourceMarshaler *)v3);
}
