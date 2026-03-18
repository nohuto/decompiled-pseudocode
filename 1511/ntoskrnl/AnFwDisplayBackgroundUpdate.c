/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x1406DCA98
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x1406DCA64 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     BgpClearScreen @ 0x14021EDD0 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x1404BD620 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1406D9834 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1406DF20C (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  if ( (dword_1402D4BB0 & 0x1000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_14031CCA5 )
    return 3221225473LL;
  v2 = off_1402D2860();
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v6;
  v4 = v3 + qword_1402D4C20;
  v5 = v3;
  if ( v3 + qword_1402D4C20 < v3 )
    return 3221225621LL;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_1402D4C20 >= 0x64 )
  {
    qword_1402D4C20 = v4;
    KeInitializeTimerEx(&stru_140335100, NotificationTimer);
    KeInitializeDpc(&stru_1403350C0, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_140335100, 0LL, 0x64u, 0, &stru_1403350C0) )
    {
      KeCancelTimer(&stru_140335100);
      byte_14031CCA5 = 0;
      return BgpClearScreen(-16777216);
    }
    byte_14031CCA5 = 1;
    result = 0LL;
  }
  else
  {
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
    result = BgpGxDrawBitmapImage(qword_1402D4BF8, &qword_1402D4C0C);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(-16777216);
  return result;
}
