/*
 * XREFs of WheapCreateTriageDumpFromPreviousSession @ 0x1403E07FC
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x1402308D4 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WheapCreateLiveTriageDump @ 0x1406BAFA8 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1406BB1F8 (WheapWriteTriageDump.c)
 */

__int64 WheapCreateTriageDumpFromPreviousSession()
{
  char v0; // di
  int LiveTriageDump; // ebx

  v0 = 0;
  if ( _InterlockedIncrement(&WheapTriageDumpCreation) <= 1 )
  {
    LiveTriageDump = WheapCreateLiveTriageDump();
    if ( LiveTriageDump >= 0 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels);
      WheapTriageDumpGenerated = 1;
      if ( WheapCrashDumpInitialized )
      {
        v0 = 1;
        WheapTriageDumpReported = 1;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels);
      if ( v0 )
      {
        LiveTriageDump = WheapWriteTriageDump();
        ExFreePoolWithTag(WheapTriageDump, 0x61656857u);
        WheapTriageDump = 0LL;
        WheapTriageDumpLength = 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)LiveTriageDump;
}
