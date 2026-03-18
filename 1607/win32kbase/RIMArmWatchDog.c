/*
 * XREFs of RIMArmWatchDog @ 0x1C0010490
 * Callers:
 *     rimSignalReadComplete @ 0x1C00104A4 (rimSignalReadComplete.c)
 *     RIMWatchDog @ 0x1C0012970 (RIMWatchDog.c)
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
