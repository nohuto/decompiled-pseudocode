/*
 * XREFs of RIMArmWatchDog @ 0x1C006EF8C
 * Callers:
 *     RIMWatchDog @ 0x1C0052330 (RIMWatchDog.c)
 *     rimSignalReadComplete @ 0x1C006EEB4 (rimSignalReadComplete.c)
 * Callees:
 *     <none>
 */

BOOLEAN RIMArmWatchDog()
{
  BOOLEAN result; // al

  if ( gWatchDogTimer )
  {
    if ( !gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 1;
      return KeSetTimer(gWatchDogTimer, (LARGE_INTEGER)-50000000LL, 0LL);
    }
  }
  return result;
}
