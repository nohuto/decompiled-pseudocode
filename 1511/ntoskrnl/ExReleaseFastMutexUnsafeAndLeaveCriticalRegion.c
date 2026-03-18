/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1400D06C0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
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
      return KiCheckForKernelApcDelivery((__int64)CurrentThread);
  }
  return result;
}
