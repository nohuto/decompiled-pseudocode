/*
 * XREFs of xxxMessageBeep @ 0x1C01FEAE0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxInternalToUnicode @ 0x1C00DA574 (xxxInternalToUnicode.c)
 *     xxxMNChar @ 0x1C0216834 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C02313E4 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C023D934 (xxxMNKeyFilter.c)
 * Callees:
 *     PostPlaySoundMessage @ 0x1C00EBE50 (PostPlaySoundMessage.c)
 *     xxxSoundSentry @ 0x1C01EF4B0 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C01FEB64 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 4) != 0 )
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
