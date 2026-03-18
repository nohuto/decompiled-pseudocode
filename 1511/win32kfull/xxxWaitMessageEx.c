/*
 * XREFs of xxxWaitMessageEx @ 0x1C00CFAA4
 * Callers:
 *     NtUserWaitMessage @ 0x1C00F2BF0 (NtUserWaitMessage.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C005B500 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxWaitMessageEx(unsigned int a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
    return ClientWaitMessageExMPH();
  else
    return xxxSleepThread2(a1, a2, 1, 0, a3);
}
