/*
 * XREFs of xxxWaitMessageEx @ 0x1C007C75C
 * Callers:
 *     NtUserWaitMessage @ 0x1C00EE790 (NtUserWaitMessage.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxWaitMessageEx(unsigned int a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 408LL) + 16LL) > 0 )
    return ClientWaitMessageExMPH();
  else
    return xxxSleepThread2(a1, a2, 1, 0, a3);
}
