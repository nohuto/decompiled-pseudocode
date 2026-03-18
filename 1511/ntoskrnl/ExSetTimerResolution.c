/*
 * XREFs of ExSetTimerResolution @ 0x140212F08
 * Callers:
 *     VerifierExSetTimerResolution @ 0x1406C0430 (VerifierExSetTimerResolution.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400E54AC (PoTraceSystemTimerResolutionKernel.c)
 *     ExpUpdateTimerResolution @ 0x1400EB314 (ExpUpdateTimerResolution.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  KIRQL v4; // al
  ULONG v5; // edi
  ULONG v6; // edx
  int v7; // ecx
  KIRQL v9; // [rsp+38h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053);
  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v5 = KeTimeIncrement;
  v6 = 0;
  v9 = v4;
  if ( SetResolution )
  {
    if ( ++ExpKernelResolutionCount == 1 || DesiredTime < ExpKernelRequestedTimerResolution )
    {
      v6 = DesiredTime;
      ExpKernelRequestedTimerResolution = DesiredTime;
      return ExpUpdateTimerResolution(SetResolution, v6, &v9);
    }
  }
  else
  {
    v7 = ExpKernelResolutionCount;
    if ( ExpKernelResolutionCount )
    {
      --ExpKernelResolutionCount;
      if ( v7 == 1 )
      {
        ExpKernelRequestedTimerResolution = 0;
        return ExpUpdateTimerResolution(SetResolution, v6, &v9);
      }
    }
  }
  KeReleaseSpinLock(&ExpKernelResolutionLock, v4);
  return v5;
}
