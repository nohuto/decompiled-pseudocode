/*
 * XREFs of RtlRaiseStatus @ 0x1800A5DE0
 * Callers:
 *     LdrpInitializeThread @ 0x180016100 (LdrpInitializeThread.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpSubSegmentInitialize @ 0x180027260 (RtlpSubSegmentInitialize.c)
 *     LdrUnlockLoaderLock @ 0x180029EB0 (LdrUnlockLoaderLock.c)
 *     RtlInitializeResource @ 0x18002B040 (RtlInitializeResource.c)
 *     RtlpWalkFrameChain @ 0x1800326C0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1800349B0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180035330 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlVirtualUnwind @ 0x180036EE0 (RtlVirtualUnwind.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     LdrLockLoaderLock @ 0x18004E630 (LdrLockLoaderLock.c)
 *     RtlDecodePointer @ 0x180051BD0 (RtlDecodePointer.c)
 *     RtlpUnWaitCriticalSection @ 0x1800664B0 (RtlpUnWaitCriticalSection.c)
 *     RtlpWaitOnCriticalSection @ 0x18006673C (RtlpWaitOnCriticalSection.c)
 *     RtlpCallVectoredHandlers @ 0x18006700C (RtlpCallVectoredHandlers.c)
 *     RtlAcquireResourceShared @ 0x18006CEB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006CFA0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x18006D0A0 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBB0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlEncodePointer @ 0x180074C30 (RtlEncodePointer.c)
 *     RtlInitializeSListHead @ 0x180076C80 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x180077940 (RtlDeactivateActivationContext.c)
 *     LdrInitializeThunk @ 0x180078740 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x1800787A4 (_LdrpInitialize.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x180078C3C (RtlpLookupPrimaryFunctionEntry.c)
 *     LdrpReportError @ 0x18007AF78 (LdrpReportError.c)
 *     RtlConvertExclusiveToShared @ 0x180087110 (RtlConvertExclusiveToShared.c)
 *     RtlpUnwindOpSlots @ 0x180088E54 (RtlpUnwindOpSlots.c)
 *     RtlpInitRandomExVector @ 0x180096430 (RtlpInitRandomExVector.c)
 *     RtlpTrivialFunction @ 0x1800A5B7C (RtlpTrivialFunction.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     KiUserApcDispatcher @ 0x1800A9EB0 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A9F20 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A9FB0 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800AA000 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D1860 (LdrpLogFatalUserCallbackException.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3BC0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800D3D78 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlGrowFunctionTable @ 0x1800DBB70 (RtlGrowFunctionTable.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800E1390 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E13E0 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlInitializeContext @ 0x1800F0570 (RtlInitializeContext.c)
 *     RtlIsNameInExpression @ 0x1800F0890 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800F0934 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     RtlDispatchException @ 0x1800349B0 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800AA0D0 (RtlpCaptureContext.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  BOOLEAN v2; // r8
  NTSTATUS v3; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-E0h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-40h] BYREF

  RtlpCaptureContext(&ContextRecord);
  ExceptionRecord.ExceptionAddress = (void *)ContextRecord.Rip;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionCode = Status;
  ExceptionRecord.ExceptionFlags = 1;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v2 = 1;
  }
  else
  {
    RtlDispatchException(&ExceptionRecord, &ContextRecord);
    v2 = 0;
  }
  v3 = ZwRaiseException(&ExceptionRecord, &ContextRecord, v2);
  RtlRaiseStatus(v3);
}
