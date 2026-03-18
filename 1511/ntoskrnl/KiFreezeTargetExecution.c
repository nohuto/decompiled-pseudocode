/*
 * XREFs of KiFreezeTargetExecution @ 0x1401C9144
 * Callers:
 *     KiCheckForFreezeExecution @ 0x1401C3628 (KiCheckForFreezeExecution.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiRestoreProcessorControlState @ 0x140154040 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140154100 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x14015BA80 (RtlCaptureContext.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeFlushCurrentTbImmediately @ 0x1401C6F30 (KeFlushCurrentTbImmediately.c)
 *     KiCheckStall @ 0x1401C9014 (KiCheckStall.c)
 *     KiEndDebugAccumulation @ 0x1401C909C (KiEndDebugAccumulation.c)
 *     KiSetDebuggerOwner @ 0x1401C9560 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x1401C95B4 (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x1401CBE58 (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x1401CBF58 (KiSaveProcessorState.c)
 *     VfStartBranchTracing @ 0x1406C2DF4 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x1406C2E78 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // si
  bool v6; // si
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  int v9; // edx
  _QWORD v10[20]; // [rsp+20h] [rbp-D8h] BYREF
  int v11; // [rsp+F0h] [rbp-8h]

  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v5 = v11;
    _disable();
    v6 = (v5 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    off_1402D27A8();
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v9);
    }
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset(v10, 0, 0x98uLL);
        LODWORD(v10[0]) = -2147483641;
        v10[1] = v10;
        v10[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KiDebugSwitchRoutine(v10, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    off_1402D27A8();
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KeFlushCurrentTbImmediately();
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation((__int64)CurrentPrcb);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v6 )
      _enable();
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}
