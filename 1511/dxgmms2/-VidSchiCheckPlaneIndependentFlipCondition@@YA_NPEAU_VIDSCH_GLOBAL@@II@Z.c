/*
 * XREFs of ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C000222C
 * Callers:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0001850 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C0001FB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0021DD0 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckPlaneIndependentFlipCondition(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ecx

  if ( a2 == -1 )
    return 0;
  v5 = a2;
  v6 = 280LL * a3;
  v7 = *((_QWORD *)a1 + v5 + 324);
  v8 = *(_DWORD *)(v7 + v6 + 156);
  if ( v8 != 1 )
    return v8 == 2;
  if ( !*(_BYTE *)(v7 + v6 + 154) || *(_DWORD *)(v7 + v6 + 160) || !*(_BYTE *)(v7 + v6 + 152) )
    return 0;
  return *(_DWORD *)(v7 + v6 + 164) == 0;
}
