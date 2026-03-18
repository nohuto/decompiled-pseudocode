/*
 * XREFs of xxxWaitMessageEx @ 0x1C00DF5E4
 * Callers:
 *     NtUserWaitMessage @ 0x1C0112420 (NtUserWaitMessage.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxWaitMessageEx(unsigned int a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
    return ClientWaitMessageExMPH();
  else
    return xxxSleepThread2(a1, a2, 1, 0, a3);
}
