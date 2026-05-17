/*
 * XREFs of LdrpFreeTls @ 0x180076468
 * Callers:
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall LdrpFreeTls(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rbx
  void *ProcessHeap; // rbp
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  void **v8; // rdi
  __int64 v9; // rsi

  v4 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v4->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&LdrpActiveThreadCount);
    *p_ThreadLocalStoragePointer = 0LL;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( ThreadLocalStoragePointer && ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
  {
    v8 = ThreadLocalStoragePointer - 2;
    if ( *((_DWORD *)ThreadLocalStoragePointer - 4) )
    {
      v9 = *(unsigned int *)v8;
      do
      {
        if ( *ThreadLocalStoragePointer )
          RtlFreeHeap((__int64)ProcessHeap, 0, *((_QWORD *)*ThreadLocalStoragePointer - 1));
        ++ThreadLocalStoragePointer;
        --v9;
      }
      while ( v9 );
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v8);
  }
  return LdrpCleanupThreadTlsData();
}
