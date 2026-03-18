/*
 * XREFs of VidSchiFlushPendingTokenList @ 0x1C0001BD4
 * Callers:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0001850 (VidSchiTryEnterIndependentFlip.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C0001954 (VidSchExitIndependentFlipInternal.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C0001FB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 */

void __fastcall VidSchiFlushPendingTokenList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 **v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = (unsigned int)a2;
  v4 = (__int64 **)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 2592) + 280LL * (unsigned int)a3 + 184);
  while ( *v4 != (__int64 *)v4 )
  {
    v5 = *v4;
    v6 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v4;
    v7 = WdLogNewEntry5_WdPresentTokenEvent(a1, a2, a3, v3);
    *(_QWORD *)(v7 + 24) = v5[17];
    WdLogEvent5_WdPresentTokenEvent(v7);
    VidSchiProcessPresentHistoryToken(
      (struct _VIDSCH_CONTEXT *)v5[3],
      (struct VIDSCH_SUBMIT_DATA2 *)(v5 + 4),
      (union _ULARGE_INTEGER)v5[2],
      0);
    ExFreePoolWithTag(v5, 0x68536956u);
  }
}
