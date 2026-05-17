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

__int64 __fastcall RtlTryEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  __int64 result; // rax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = UniqueThread;
    result = 1LL;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else if ( *(void **)(a1 + 16) == UniqueThread )
  {
    result = 1LL;
    ++*(_DWORD *)(a1 + 12);
  }
  else
  {
    return 0LL;
  }
  return result;
}
