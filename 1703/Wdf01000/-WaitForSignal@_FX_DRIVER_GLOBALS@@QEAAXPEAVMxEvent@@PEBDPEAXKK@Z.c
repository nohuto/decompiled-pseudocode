/*
 * XREFs of ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C001ABDC
 * Callers:
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001E9F0 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C001EAB0 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C0066CD0 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C008CCD4 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0094160 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0094864 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0094D0C (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0094E04 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall _FX_DRIVER_GLOBALS::WaitForSignal(
        _FX_DRIVER_GLOBALS *this,
        MxEvent *Event,
        const char *ReasonForWaiting,
        void *Handle,
        unsigned int WarningTimeoutInSec,
        char WaitSignalFlags)
{
  _LARGE_INTEGER timeOut; // [rsp+48h] [rbp+10h] BYREF

  timeOut.QuadPart = -10000000LL * WarningTimeoutInSec;
  while ( KeWaitForSingleObject(
            Event,
            Executive,
            0,
            0,
            (PLARGE_INTEGER)((unsigned __int64)&timeOut & -(__int64)(timeOut.QuadPart != 0))) == 258 )
  {
    DbgPrint("Thread 0x%p is %s 0x%p\n", KeGetCurrentThread(), ReasonForWaiting, Handle);
    if ( (WaitSignalFlags & 4) != 0
      || (WaitSignalFlags & 1) != 0 && this->FxVerifierDbgBreakOnError
      || (WaitSignalFlags & 2) != 0 && !KdRefreshDebuggerNotPresent() )
    {
      DbgBreakPoint();
    }
  }
}
