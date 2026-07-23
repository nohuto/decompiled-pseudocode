/*
 * XREFs of ExSetTimerResolution @ 0x14014C754
 * Callers:
 *     <none>
 * Callees:
 *     ExpUpdateTimerResolution @ 0x14000707C (ExpUpdateTimerResolution.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400A95C0 (PoTraceSystemTimerResolutionKernel.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  KIRQL v4; // al
  ULONG v5; // edi
  ULONG v6; // edx
  int v8; // ecx
  KIRQL v9; // [rsp+38h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053);
  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v5 = KeTimeIncrement;
  v6 = 0;
  v9 = v4;
  if ( SetResolution )
  {
    if ( ++ExpKernelResolutionCount != 1 && DesiredTime >= ExpKernelRequestedTimerResolution )
    {
LABEL_10:
      KeReleaseSpinLock(&ExpKernelResolutionLock, v4);
      return v5;
    }
    v6 = DesiredTime;
    ExpKernelRequestedTimerResolution = DesiredTime;
  }
  else
  {
    v8 = ExpKernelResolutionCount;
    if ( !ExpKernelResolutionCount )
      goto LABEL_10;
    --ExpKernelResolutionCount;
    if ( v8 != 1 )
      goto LABEL_10;
    ExpKernelRequestedTimerResolution = 0;
  }
  return ExpUpdateTimerResolution(SetResolution, v6, &v9);
}
