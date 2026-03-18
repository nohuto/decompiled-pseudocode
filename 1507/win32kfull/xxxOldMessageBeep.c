/*
 * XREFs of xxxOldMessageBeep @ 0x1C01FEB64
 * Callers:
 *     xxxMessageBeep @ 0x1C01FEAE0 (xxxMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C01EF4B0 (xxxSoundSentry.c)
 *     UserBeep @ 0x1C0229040 (UserBeep.c)
 */

__int64 __fastcall xxxOldMessageBeep(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  if ( (gdwPUDFlags & 0x80000) != 0 )
  {
    UserSessionSwitchLeaveCrit(a1, a2);
    v2 = UserBeep(440LL, 125LL);
    EnterCrit(1LL);
    return v2;
  }
  else
  {
    xxxSoundSentry();
    return 1LL;
  }
}
