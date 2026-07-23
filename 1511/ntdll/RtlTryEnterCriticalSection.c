/*
 * XREFs of RtlTryEnterCriticalSection @ 0x1800510F0
 * Callers:
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     LdrpTryAcquireLoaderLock @ 0x180051074 (LdrpTryAcquireLoaderLock.c)
 *     RtlTryAcquirePebLock @ 0x1800510D0 (RtlTryAcquirePebLock.c)
 *     RtlpFlushHeap @ 0x180051248 (RtlpFlushHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800DFE20 (RtlLockHeapManagerForCloning.c)
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
    ++CriticalSection->RecursionCount;
    return 1;
  }
  else
  {
    return 0;
  }
  return result;
}
