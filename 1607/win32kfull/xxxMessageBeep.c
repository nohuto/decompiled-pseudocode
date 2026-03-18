/*
 * XREFs of xxxMessageBeep @ 0x1C0152DE0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxInternalToUnicode @ 0x1C00E7C78 (xxxInternalToUnicode.c)
 *     xxxMNChar @ 0x1C020F234 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C022A65C (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C02354DC (xxxMNKeyFilter.c)
 * Callees:
 *     PostPlaySoundMessage @ 0x1C010F780 (PostPlaySoundMessage.c)
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C01F66B4 (xxxOldMessageBeep.c)
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
