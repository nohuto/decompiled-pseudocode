/*
 * XREFs of VidSchiCompletePendingFlip @ 0x1C0011A70
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSetFlipDevice @ 0x1C00051FC (VidSchiSetFlipDevice.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0005650 (VidSchUnwaitFlipQueue.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005A50 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0024070 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C00273D0 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C00267C4 (VidSchExitIndependentFlipInternal.c)
 */

__int64 __fastcall VidSchiCompletePendingFlip(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 i; // rsi
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  char v11; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  for ( i = a2; v3 < *(_DWORD *)(a1 + 128); ++v3 )
  {
    v7 = *(_QWORD *)(a1 + 8 * i + 2968);
    v8 = 272LL * v3;
    if ( (unsigned int)(*(_DWORD *)(v8 + v7 + 156) - 1) <= 1 )
    {
      v10 = 0LL;
      v11 = 0;
      VidSchExitIndependentFlipInternal(
        a1,
        i,
        v8 + v7 + 128,
        *(_QWORD *)(v8 + v7 + 136),
        v3,
        0,
        0,
        (__int64)&v11,
        (__int64)&v10);
    }
    VidSchiCompleteFlipEntry(a1, i, v3, 0, 63, a3, 0LL);
  }
  if ( a3 == 9 )
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * i + 2968) + 2280LL) = 0;
  return 0LL;
}
