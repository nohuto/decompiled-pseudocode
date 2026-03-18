/*
 * XREFs of VidSchiRestartQueuedFlip @ 0x1C002546C
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0002A74 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0005650 (VidSchUnwaitFlipQueue.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 */

__int64 __fastcall VidSchiRestartQueuedFlip(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // r9d
  int v11; // eax
  __int64 v12; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 32);
  v6 = a2;
  v8 = a3;
  v9 = *(_QWORD *)(v4 + 8LL * a2 + 2968);
  v10 = *(_DWORD *)(*(_QWORD *)(v9 + 8LL * a3 + 24) + 40LL);
  if ( v10 != a4 )
  {
    v11 = VidSchiCompleteFlipEntry(v4, a2, a3, v10, ((_BYTE)a4 - 1) & 0x3F, 6, 0LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 32) + 4LL))
                      + 8 * v6
                      + 520);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v4 + 8 * v6 + 5504) + 8LL), -v11);
      *(_DWORD *)(*(_QWORD *)(v4 + 8 * v6 + 5504) + 4LL) += v11;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), -v11);
      *(_DWORD *)(v12 + 4) += v11;
    }
  }
  result = *(_QWORD *)(v9 + 8 * v8 + 24);
  *(_DWORD *)(result + 40) = a4;
  return result;
}
