/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x1407622D4
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpClearScreen @ 0x14026E1F8 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140553ADC (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14075C87C (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x14075C894 (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140762288 (BgpGxDrawBitmapImage.c)
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

  v4 = off_1403219B0();
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = 0;
    v6 = v4 * (unsigned __int128)0x3E8uLL / v9;
    BgpFwAcquireLock();
    if ( v6 >= qword_140323D60 )
    {
      if ( byte_14036D02D )
      {
        AnFwpDisableProgressTimer(v8, v7);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( Src )
        {
          BgpClearScreen(-16777216);
          v5 = BgpGxDrawBitmapImage((__int64)Src, (__int64)&qword_140323D4C);
        }
        if ( v5 < 0 )
          BgpClearScreen(-16777216);
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
