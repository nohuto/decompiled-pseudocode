/*
 * XREFs of KiFreezeTargetExecution @ 0x140083560
 * Callers:
 *     KiCheckForFreezeExecution @ 0x140083470 (KiCheckForFreezeExecution.c)
 * Callees:
 *     KiEndDebugAccumulation @ 0x140083704 (KiEndDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x1400837A8 (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x140083858 (KiSaveProcessorState.c)
 *     KiStartDebugAccumulation @ 0x1400838E8 (KiStartDebugAccumulation.c)
 *     KiSetDebuggerOwner @ 0x140083F20 (KiSetDebuggerOwner.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiRestoreProcessorControlState @ 0x14015DCF0 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14015DDB0 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140167490 (RtlCaptureContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeFlushCurrentTbImmediately @ 0x1401D5ECC (KeFlushCurrentTbImmediately.c)
 *     KdpReportExceptionStateChange @ 0x1406F4050 (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x14070EEB4 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x14070EF38 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int16 v4; // bp
  bool v5; // bp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rdi
  __int64 result; // rax
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v12[20]; // [rsp+30h] [rbp-D8h] BYREF
  int v13; // [rsp+100h] [rbp-8h]

  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v4 = v13;
    _disable();
    v5 = (v4 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    off_1402F2448();
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
    }
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset(v12, 0, 0x98uLL);
        LODWORD(v12[0]) = -2147483641;
        v12[1] = v12;
        v12[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(v12, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      v8 = KiFreezeStallOwner;
      if ( CurrentPrcb == (struct _KPRCB *)KiFreezeStallOwner )
      {
        v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( (unsigned __int64)(1000 * (v10.QuadPart - KiLastStallTick)) / PerformanceFrequency.QuadPart > 0x1F4 )
          KiLastStallTick = v10.QuadPart;
      }
      if ( v8
        && (struct _KPRCB *)v8 != CurrentPrcb
        && KiDebuggerOwner
        && (struct _KPRCB *)KiDebuggerOwner != CurrentPrcb )
      {
        _mm_pause();
      }
    }
    off_1402F2448();
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
    KeFlushCurrentTbImmediately();
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation(CurrentPrcb);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v5 )
      _enable();
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}
