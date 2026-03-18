/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140092F70
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x14000CA8C (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 result; // rax

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)BugCheckParameter2, v2);
  KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  result = (unsigned int)++CurrentThread->KernelApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result && !CurrentThread->SpecialApcDisable )
      return KiCheckForKernelApcDelivery(CurrentThread);
  }
  return result;
}
