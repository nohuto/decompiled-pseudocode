/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x1400A4C58
 * Callers:
 *     PspExitProcess @ 0x140460564 (PspExitProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwSetTimerResolution @ 0x14015D020 (ZwSetTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EA8B0 (ExAcquireTimeRefreshLock.c)
 *     PoDiagFreeUsermodeStack @ 0x1404D08E8 (PoDiagFreeUsermodeStack.c)
 *     ExReleaseTimeRefreshLock @ 0x1404D08F4 (ExReleaseTimeRefreshLock.c)
 */

__int64 __fastcall ExCleanTimerResolutionRequest(__int64 a1)
{
  _KPROCESS *Process; // rbx
  KIRQL v2; // al
  unsigned __int64 v3; // r9
  _KPROCESS **v4; // r8
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  ULONG ActualResolution; // [rsp+30h] [rbp+8h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution(KeMaximumIncrement, 0, &ActualResolution);
  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v3 = Process[2].Affinity.Bitmap[13];
  v4 = (_KPROCESS **)Process[2].Affinity.Bitmap[14];
  if ( *(_KPROCESS **)(v3 + 8) != (_KPROCESS *)&Process[2].Affinity.Bitmap[13]
    || *v4 != (_KPROCESS *)&Process[2].Affinity.Bitmap[13] )
  {
    __fastfail(3u);
  }
  *v4 = (_KPROCESS *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  KeReleaseSpinLock(&ExpKernelResolutionLock, v2);
  v5 = Process[2].Affinity.Bitmap[15];
  Process[2].Affinity.Bitmap[15] = 0LL;
  result = ExReleaseTimeRefreshLock();
  if ( v5 )
    return PoDiagFreeUsermodeStack(v5);
  return result;
}
