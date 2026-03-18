/*
 * XREFs of ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C0043444
 * Callers:
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00433C8 (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0044238 (-DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char *a3)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = *(_QWORD *)(v4 + 176);
  *(_QWORD *)(v4 + 176) = 0LL;
  if ( a3 )
  {
    *(_DWORD *)a3 = 16;
    *(_QWORD *)(a3 + 4) = 0LL;
    *((_DWORD *)a3 + 3) = 0;
    *((_DWORD *)a3 + 1) = 55;
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)a3 + 3) = *(_DWORD *)(v4 + 24);
  }
  *(_DWORD *)(v4 + 16) &= ~8u;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, (struct DirectComposition::CResourceMarshaler *)v4);
}
