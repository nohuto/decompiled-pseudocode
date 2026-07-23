/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800CB37C
 * Callers:
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800CC020 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800CC2A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     LdrpCreateLoaderEvents @ 0x1800CB424 (LdrpCreateLoaderEvents.c)
 */

NTSTATUS __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  NTSTATUS LoaderEvents; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpWorkQueueLock.LockSemaphore = 0LL;
    LdrpWorkQueueLock.OwningThread = UniqueThread;
    LdrpWorkQueueLock.RecursionCount = 1;
    LdrpWorkQueueLock.LockCount = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpLoaderLock.LockSemaphore = 0LL;
    LdrpLoaderLock.OwningThread = v2;
    LdrpLoaderLock.LockCount = -2;
    LdrpLoaderLock.RecursionCount = 1;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, LoaderEvents);
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v4, 13, 0);
  return LdrpDropLastInProgressCount();
}
