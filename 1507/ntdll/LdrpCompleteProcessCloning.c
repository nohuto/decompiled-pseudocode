/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800C0D1C
 * Callers:
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800C2620 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800C28A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 */

NTSTATUS __fastcall LdrpCompleteProcessCloning(int a1)
{
  __int64 v1; // rcx

  if ( a1 )
  {
    LdrpWorkQueueLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpWorkQueueLock.LockCount = -2;
    LdrpWorkQueueLock.RecursionCount = 1;
    LdrpWorkQueueLock.LockSemaphore = 0LL;
    LdrpLoaderLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpLoaderLock.LockCount = -2;
    LdrpLoaderLock.RecursionCount = 1;
    LdrpLoaderLock.LockSemaphore = 0LL;
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v1, 13, 0);
  return LdrpDropLastInProgressCount();
}
