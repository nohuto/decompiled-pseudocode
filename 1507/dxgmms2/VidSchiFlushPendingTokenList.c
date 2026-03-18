/*
 * XREFs of VidSchiFlushPendingTokenList @ 0x1C00175D4
 * Callers:
 *     VidSchiTryEnterIndependentFlip @ 0x1C001B084 (VidSchiTryEnterIndependentFlip.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C001C7D4 (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00014D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 */

void __fastcall VidSchiFlushPendingTokenList(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 **v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = (__int64 **)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 2640) + 280LL * a3 + 176);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    v6 = WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    *(_QWORD *)(v6 + 24) = v4[17];
    WdLogEvent5_WdPresentTokenEvent(v6);
    VidSchiProcessPresentHistoryToken(
      (struct _VIDSCH_CONTEXT *)v4[3],
      (struct VIDSCH_SUBMIT_DATA2 *)(v4 + 4),
      (union _ULARGE_INTEGER)v4[2],
      0);
    ExFreePoolWithTag(v4, 0x68536956u);
  }
}
