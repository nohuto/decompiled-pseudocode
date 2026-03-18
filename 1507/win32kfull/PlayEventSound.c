/*
 * XREFs of PlayEventSound @ 0x1C00EBE10
 * Callers:
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNCancel @ 0x1C010C8EC (xxxMNCancel.c)
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 * Callees:
 *     PostPlaySoundMessage @ 0x1C00EBE50 (PostPlaySoundMessage.c)
 */

__int64 __fastcall PlayEventSound(unsigned int a1)
{
  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 448LL) & 4) == 0 )
    PostPlaySoundMessage(a1);
  return 1LL;
}
