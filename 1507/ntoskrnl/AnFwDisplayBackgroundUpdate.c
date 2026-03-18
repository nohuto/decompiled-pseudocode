/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x14075FAE0
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x14075FAAC (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     BgpClearScreen @ 0x14026E1F8 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140553ADC (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14075C87C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140762288 (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  if ( (dword_140323CF0 & 0x1000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_14036D02D )
    return 3221225473LL;
  v2 = off_1403219B0();
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v6;
  v4 = v3 + qword_140323D60;
  v5 = v3;
  if ( v3 + qword_140323D60 < v3 )
    return 3221225621LL;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_140323D60 >= 0x64 )
  {
    qword_140323D60 = v4;
    KeInitializeTimerEx(&stru_140386100, NotificationTimer);
    KeInitializeDpc(&stru_1403860C0, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_140386100, 0LL, 0x64u, 0, &stru_1403860C0) )
    {
      KeCancelTimer(&stru_140386100);
      byte_14036D02D = 0;
      return BgpClearScreen(-16777216);
    }
    byte_14036D02D = 1;
    result = 0LL;
  }
  else
  {
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
    result = BgpGxDrawBitmapImage(Src, &qword_140323D4C);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(-16777216);
  return result;
}
