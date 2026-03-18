/*
 * XREFs of VidSchiCompletePendingFlip @ 0x1C001DEE8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C001DBE4 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C001C7D4 (VidSchExitIndependentFlipInternal.c)
 */

__int64 __fastcall VidSchiCompletePendingFlip(struct _VIDSCH_GLOBAL *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 i; // rsi
  __int64 v7; // rcx
  __int64 v8; // r9
  char v10; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  for ( i = a2; v3 < *((_DWORD *)a1 + 31); ++v3 )
  {
    v7 = *((_QWORD *)a1 + i + 330);
    v8 = 280LL * v3;
    if ( (unsigned int)(*(_DWORD *)(v8 + v7 + 148) - 1) <= 1 )
    {
      v10 = 0;
      VidSchExitIndependentFlipInternal(
        a1,
        (unsigned int)i,
        (_QWORD *)(v8 + v7 + 120),
        *(_QWORD *)(v8 + v7 + 128),
        v3,
        0,
        0,
        &v10);
    }
    VidSchiCompleteFlipEntry(a1, i, v3, 0LL, 63, a3, 0LL);
  }
  if ( a3 == 9 )
    *(_DWORD *)(*((_QWORD *)a1 + i + 330) + 2332LL) = 0;
  return 0LL;
}
