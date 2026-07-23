/*
 * XREFs of RtlTryEnterCriticalSection @ 0x180008880
 * Callers:
 *     RtlpFlushHeap @ 0x180008638 (RtlpFlushHeap.c)
 *     LdrpTryAcquireLoaderLock @ 0x180008804 (LdrpTryAcquireLoaderLock.c)
 *     RtlTryAcquirePebLock @ 0x180008860 (RtlTryAcquirePebLock.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800D8158 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlTryEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  LOGICAL result; // eax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 1;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    result = 1;
    ++CriticalSection->RecursionCount;
  }
  else
  {
    return 0;
  }
  return result;
}
