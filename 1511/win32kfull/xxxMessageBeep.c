/*
 * XREFs of xxxMessageBeep @ 0x1C014F750
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxInternalToUnicode @ 0x1C0099650 (xxxInternalToUnicode.c)
 *     xxxMNChar @ 0x1C0216698 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C0231814 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C023DB04 (xxxMNKeyFilter.c)
 * Callees:
 *     PostPlaySoundMessage @ 0x1C00F0C60 (PostPlaySoundMessage.c)
 *     xxxSoundSentry @ 0x1C01144E8 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C01FEF60 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      PostPlaySoundMessage();
    xxxSoundSentry();
  }
  return 1LL;
}
