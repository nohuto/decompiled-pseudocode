/*
 * XREFs of PlayEventSound @ 0x1C010F740
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 * Callees:
 *     PostPlaySoundMessage @ 0x1C010F780 (PostPlaySoundMessage.c)
 */

__int64 __fastcall PlayEventSound(unsigned int a1)
{
  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 4) == 0 )
    PostPlaySoundMessage(a1);
  return 1LL;
}
