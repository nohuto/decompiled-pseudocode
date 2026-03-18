/*
 * XREFs of ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C0029F88
 * Callers:
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029F0C (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002A6A8 (-DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char *a3)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = *(_QWORD *)(v4 + 168);
  *(_QWORD *)(v4 + 168) = 0LL;
  if ( a3 )
  {
    *(_DWORD *)a3 = 16;
    *(_QWORD *)(a3 + 4) = 0LL;
    *((_DWORD *)a3 + 3) = 0;
    *((_DWORD *)a3 + 1) = 51;
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)a3 + 3) = *(_DWORD *)(v4 + 24);
  }
  *(_DWORD *)(v4 + 16) &= ~0x10u;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, (struct DirectComposition::CResourceMarshaler *)v4);
}
