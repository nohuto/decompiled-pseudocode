/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x140130474
 * Callers:
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ZwSetTimerResolution @ 0x140182270 (ZwSetTimerResolution.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     PoDiagFreeUsermodeStack @ 0x140559DE0 (PoDiagFreeUsermodeStack.c)
 *     ExReleaseTimeRefreshLock @ 0x140559DEC (ExReleaseTimeRefreshLock.c)
 */

__int64 __fastcall ExCleanTimerResolutionRequest(__int64 a1)
{
  _KPROCESS *Process; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v3; // rdx
  _KPROCESS **v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ActualResolution; // [rsp+30h] [rbp+8h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution(KeMaximumIncrement, 0, &ActualResolution);
  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
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
  v3 = Process[2].Affinity.Bitmap[10];
  v4 = (_KPROCESS **)Process[2].Affinity.Bitmap[11];
  if ( *(_KPROCESS **)(v3 + 8) != (_KPROCESS *)&Process[2].Affinity.Bitmap[10]
    || *v4 != (_KPROCESS *)&Process[2].Affinity.Bitmap[10] )
  {
    __fastfail(3u);
  }
  *v4 = (_KPROCESS *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExpKernelResolutionLock, retaddr);
  else
    _InterlockedAnd64(&ExpKernelResolutionLock, 0LL);
  __writecr8(CurrentIrql);
  v5 = Process[2].Affinity.Bitmap[12];
  Process[2].Affinity.Bitmap[12] = 0LL;
  result = ExReleaseTimeRefreshLock();
  if ( v5 )
    return PoDiagFreeUsermodeStack(v5);
  return result;
}
