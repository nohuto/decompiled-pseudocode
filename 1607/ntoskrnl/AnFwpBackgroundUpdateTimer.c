/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x14072ACB4
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpClearScreen @ 0x1402392C4 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x1404CB35C (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140725854 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x14072586C (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x14072B044 (BgpGxDrawBitmapImage.c)
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
  unsigned __int64 v7; // [rsp+20h] [rbp-18h]

  v4 = off_1402F2500();
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = 0;
    v6 = v4 * (unsigned __int128)0x3E8uLL / v7;
    BgpFwAcquireLock();
    if ( v6 >= qword_1402FA020 )
    {
      if ( byte_140341C98 )
      {
        AnFwpDisableProgressTimer();
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( Src )
        {
          BgpClearScreen(qword_1402FA0F0);
          v5 = BgpGxDrawBitmapImage(Src, &qword_1402F9FEC);
        }
        if ( v5 < 0 )
          BgpClearScreen(qword_1402FA0F0);
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
