/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x1406DF258
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpClearScreen @ 0x14021EDD0 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x1404BD620 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1406D9834 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1406D984C (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1406DF20C (BgpGxDrawBitmapImage.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int64 v4; // kr00_8
  int v5; // ebx
  unsigned __int64 v6; // rdi
  _BOOL8 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+20h] [rbp-18h]

  v4 = off_1402D2860();
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = 0;
    v6 = v4 * (unsigned __int128)0x3E8uLL / v9;
    BgpFwAcquireLock();
    if ( v6 >= qword_1402D4C20 )
    {
      if ( byte_14031CCA5 )
      {
        AnFwpDisableProgressTimer(v8, v7);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( qword_1402D4BF8 )
        {
          BgpClearScreen(-16777216);
          v5 = BgpGxDrawBitmapImage((__int64)qword_1402D4BF8, (__int64)&qword_1402D4C0C);
        }
        if ( v5 < 0 )
          BgpClearScreen(-16777216);
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
