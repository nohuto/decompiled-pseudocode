/*
 * XREFs of VidSchiCompletePendingFlip @ 0x1C000248C
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0004080 (VidSchUnwaitFlipQueue.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiSetFlipDevice @ 0x1C00109F4 (VidSchiSetFlipDevice.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0022E60 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchExitIndependentFlipInternal @ 0x1C0001954 (VidSchExitIndependentFlipInternal.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 */

__int64 __fastcall VidSchiCompletePendingFlip(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 i; // rsi
  __int64 v7; // rcx
  __int64 v8; // r9
  char v10; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  for ( i = a2; v3 < *(_DWORD *)(a1 + 124); ++v3 )
  {
    v7 = *(_QWORD *)(a1 + 8 * i + 2592);
    v8 = 280LL * v3;
    if ( (unsigned int)(*(_DWORD *)(v8 + v7 + 156) - 1) <= 1 )
    {
      v10 = 0;
      VidSchExitIndependentFlipInternal(
        a1,
        (unsigned int)i,
        (_QWORD *)(v8 + v7 + 128),
        *(_QWORD *)(v8 + v7 + 136),
        v3,
        0,
        0,
        &v10);
    }
    VidSchiCompleteFlipEntry(a1, i, v3, 0, 63, a3, 0LL);
  }
  if ( a3 == 9 )
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * i + 2592) + 2340LL) = 0;
  return 0LL;
}
