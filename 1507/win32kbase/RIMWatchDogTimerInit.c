/*
 * XREFs of RIMWatchDogTimerInit @ 0x1C00C0800
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 */

void __fastcall RIMWatchDogTimerInit(struct _KTIMER *a1)
{
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  if ( a1 )
  {
    gWatchDogTimer = a1;
  }
  else
  {
    gWatchDogTimer = 0LL;
    gbWatchDogTimerArmed = 0;
  }
  RIMUnlockExclusive((__int64)&gWatchDogQPCLock);
}
