/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x1400D388C
 * Callers:
 *     NtSetTimerResolution @ 0x1404F4E2C (NtSetTimerResolution.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExpInsertTimerResolutionEntry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rcx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&ExpKernelResolutionLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpKernelResolutionLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExpKernelResolutionLock);
  }
  v3 = ExpTimerResolutionListHead;
  *(_QWORD *)(a1 + 1624) = ExpTimerResolutionListHead;
  *(_QWORD *)(a1 + 1632) = &ExpTimerResolutionListHead;
  if ( *(__int64 **)(v3 + 8) != &ExpTimerResolutionListHead )
    __fastfail(3u);
  *(_QWORD *)(v3 + 8) = a1 + 1624;
  ExpTimerResolutionListHead = a1 + 1624;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExpKernelResolutionLock, retaddr);
  else
    _InterlockedAnd64(&ExpKernelResolutionLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
