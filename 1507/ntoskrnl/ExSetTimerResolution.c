/*
 * XREFs of ExSetTimerResolution @ 0x1400D398C
 * Callers:
 *     VerifierExSetTimerResolution @ 0x140741C24 (VerifierExSetTimerResolution.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400D3A70 (PoTraceSystemTimerResolutionKernel.c)
 *     ExpUpdateTimerResolution @ 0x1400D3B10 (ExpUpdateTimerResolution.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  unsigned __int8 CurrentIrql; // bp
  ULONG v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v11; // [rsp+38h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053LL);
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
  v5 = KeTimeIncrement;
  v6 = 0LL;
  v7 = ExpKernelResolutionCount;
  v11 = CurrentIrql;
  if ( SetResolution )
  {
    ++ExpKernelResolutionCount;
    if ( !v7 || DesiredTime < ExpKernelRequestedTimerResolution )
    {
      v6 = DesiredTime;
LABEL_7:
      ExpKernelRequestedTimerResolution = v6;
      v8 = (unsigned int)v6;
      LOBYTE(v6) = SetResolution;
      return ExpUpdateTimerResolution(v6, v8, &v11);
    }
  }
  else if ( ExpKernelResolutionCount )
  {
    --ExpKernelResolutionCount;
    if ( v7 == 1 )
      goto LABEL_7;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExpKernelResolutionLock, retaddr);
  else
    _InterlockedAnd64(&ExpKernelResolutionLock, 0LL);
  __writecr8(CurrentIrql);
  return v5;
}
