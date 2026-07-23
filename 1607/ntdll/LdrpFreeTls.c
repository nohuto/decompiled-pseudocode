/*
 * XREFs of LdrpFreeTls @ 0x18007962C
 * Callers:
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

__int64 LdrpFreeTls()
{
  struct _TEB *v0; // rbx
  void *ProcessHeap; // rbp
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  void **v4; // rdi
  __int64 v5; // rsi

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v0->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&LdrpActiveThreadCount);
    *p_ThreadLocalStoragePointer = 0LL;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( ThreadLocalStoragePointer && ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
  {
    v4 = ThreadLocalStoragePointer - 2;
    if ( *((_DWORD *)ThreadLocalStoragePointer - 4) )
    {
      v5 = *(unsigned int *)v4;
      do
      {
        if ( *ThreadLocalStoragePointer )
          RtlFreeHeap(ProcessHeap, 0, *((PVOID *)*ThreadLocalStoragePointer - 1));
        ++ThreadLocalStoragePointer;
        --v5;
      }
      while ( v5 );
    }
    RtlFreeHeap(ProcessHeap, 0, v4);
  }
  return LdrpCleanupThreadTlsData();
}
