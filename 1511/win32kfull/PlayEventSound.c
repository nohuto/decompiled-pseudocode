/*
 * XREFs of PlayEventSound @ 0x1C00F0C20
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 * Callees:
 *     PostPlaySoundMessage @ 0x1C00F0C60 (PostPlaySoundMessage.c)
 */

__int64 __fastcall PlayEventSound(unsigned int a1)
{
  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 4) == 0 )
    PostPlaySoundMessage(a1);
  return 1LL;
}
