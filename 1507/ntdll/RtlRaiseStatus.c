/*
 * XREFs of RtlRaiseStatus @ 0x1800932C0
 * Callers:
 *     RtlInitializeResource @ 0x1800076C0 (RtlInitializeResource.c)
 *     LdrLockLoaderLock @ 0x1800086A0 (LdrLockLoaderLock.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x180011488 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180011740 (RtlVirtualUnwind.c)
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlpWalkFrameChain @ 0x1800126E0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180013890 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180014200 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     LdrpInitializeThread @ 0x180021AB8 (LdrpInitializeThread.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlpSubSegmentInitialize @ 0x180032E50 (RtlpSubSegmentInitialize.c)
 *     RtlpWaitOnCriticalSection @ 0x180035D54 (RtlpWaitOnCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x180036780 (RtlpUnWaitCriticalSection.c)
 *     RtlpCallVectoredHandlers @ 0x18005F7F4 (RtlpCallVectoredHandlers.c)
 *     RtlAcquireResourceShared @ 0x180061BC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180061D10 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x180061E10 (RtlReleaseResource.c)
 *     RtlDeactivateActivationContext @ 0x180063B20 (RtlDeactivateActivationContext.c)
 *     RtlDecodePointer @ 0x180066340 (RtlDecodePointer.c)
 *     RtlInitializeSListHead @ 0x1800663A0 (RtlInitializeSListHead.c)
 *     RtlEncodePointer @ 0x180067200 (RtlEncodePointer.c)
 *     LdrpReportError @ 0x18006A65C (LdrpReportError.c)
 *     LdrInitializeThunk @ 0x18006BDC0 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     LdrUnlockLoaderLock @ 0x180070A40 (LdrUnlockLoaderLock.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180070AD0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlConvertExclusiveToShared @ 0x180075E70 (RtlConvertExclusiveToShared.c)
 *     RtlpTrivialFunction @ 0x180093014 (RtlpTrivialFunction.c)
 *     RtlpUnwindOpSlots @ 0x18009326C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     KiUserApcDispatcher @ 0x1800956E0 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x180095750 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800957E0 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x180095830 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800BD5D0 (LdrpLogFatalUserCallbackException.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800C2120 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800C22F4 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlGrowFunctionTable @ 0x1800CAE40 (RtlGrowFunctionTable.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800D03B0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800D0400 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlInitializeContext @ 0x1800E22F0 (RtlInitializeContext.c)
 *     RtlIsNameInExpression @ 0x1800E2610 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800E26B4 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpInitRandomExVector @ 0x1800E5630 (RtlpInitRandomExVector.c)
 * Callees:
 *     RtlDispatchException @ 0x180013890 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x180094DC0 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x180095900 (RtlpCaptureContext.c)
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
