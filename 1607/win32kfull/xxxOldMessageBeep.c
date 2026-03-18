/*
 * XREFs of xxxOldMessageBeep @ 0x1C01F66B4
 * Callers:
 *     xxxMessageBeep @ 0x1C0152DE0 (xxxMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 *     UserBeep @ 0x1C0228C40 (UserBeep.c)
 */

__int64 __fastcall xxxOldMessageBeep(__int64 a1)
{
  unsigned int v1; // ebx

  if ( (gdwPUDFlags & 0x80000) != 0 )
  {
    if ( gdwInAtomicOperation )
    {
      a1 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
    v1 = UserBeep(440LL, 125LL);
    EnterCrit(0LL, 1LL);
    return v1;
  }
  else
  {
    xxxSoundSentry();
    return 1LL;
  }
}
