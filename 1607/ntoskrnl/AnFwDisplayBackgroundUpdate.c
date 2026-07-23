/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140728B84
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140728B50 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     BgpClearScreen @ 0x1402392C4 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x1404CB35C (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140725854 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x14072B044 (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  if ( (dword_1402F9F90 & 0x1000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_140341C98 )
    return 3221225473LL;
  v2 = off_1402F2500();
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v6;
  v4 = v3 + qword_1402FA020;
  v5 = v3;
  if ( v3 + qword_1402FA020 < v3 )
    return 3221225621LL;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_1402FA020 >= 0x64 )
  {
    qword_1402FA020 = v4;
    KeInitializeTimerEx(&stru_1403580B0, NotificationTimer);
    KeInitializeDpc(&stru_1403580F0, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_1403580B0, 0LL, 0x64u, 0, &stru_1403580F0) )
    {
      KeCancelTimer(&stru_1403580B0);
      byte_140341C98 = 0;
      return BgpClearScreen(qword_1402FA0F0);
    }
    byte_140341C98 = 1;
    result = 0LL;
  }
  else
  {
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
    result = BgpGxDrawBitmapImage(Src, &qword_1402F9FEC);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(qword_1402FA0F0);
  return result;
}
