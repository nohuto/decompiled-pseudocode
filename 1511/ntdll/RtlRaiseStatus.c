/*
 * XREFs of RtlRaiseStatus @ 0x1800A4A80
 * Callers:
 *     RtlpUnwindOpSlots @ 0x180003788 (RtlpUnwindOpSlots.c)
 *     LdrUnlockLoaderLock @ 0x180006690 (LdrUnlockLoaderLock.c)
 *     LdrpInitializeThread @ 0x180012D60 (LdrpInitializeThread.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlpSubSegmentInitialize @ 0x180029DF0 (RtlpSubSegmentInitialize.c)
 *     RtlpWaitOnCriticalSection @ 0x18002FD78 (RtlpWaitOnCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x1800301D0 (RtlpUnWaitCriticalSection.c)
 *     RtlpWalkFrameChain @ 0x180032E80 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180034C40 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1800355D0 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlVirtualUnwind @ 0x1800370C0 (RtlVirtualUnwind.c)
 *     LdrLockLoaderLock @ 0x180050F10 (LdrLockLoaderLock.c)
 *     RtlInitializeResource @ 0x180054E10 (RtlInitializeResource.c)
 *     RtlDecodePointer @ 0x18005C980 (RtlDecodePointer.c)
 *     RtlpCallVectoredHandlers @ 0x18006E65C (RtlpCallVectoredHandlers.c)
 *     RtlAcquireResourceShared @ 0x18006F2D0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006F420 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x18006F520 (RtlReleaseResource.c)
 *     RtlInitializeSListHead @ 0x180072510 (RtlInitializeSListHead.c)
 *     RtlEncodePointer @ 0x180072AD0 (RtlEncodePointer.c)
 *     RtlDeactivateActivationContext @ 0x1800760D0 (RtlDeactivateActivationContext.c)
 *     LdrInitializeThunk @ 0x180076D50 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 *     LdrpReportError @ 0x1800785E8 (LdrpReportError.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18007CA10 (RtlDeleteGrowableFunctionTable.c)
 *     RtlConvertExclusiveToShared @ 0x1800820E0 (RtlConvertExclusiveToShared.c)
 *     RtlpInitRandomExVector @ 0x180094CB0 (RtlpInitRandomExVector.c)
 *     RtlpTrivialFunction @ 0x1800A4828 (RtlpTrivialFunction.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     KiUserApcDispatcher @ 0x1800A8A70 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A8AE0 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A8B70 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A8BC0 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CA2F0 (LdrpLogFatalUserCallbackException.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800CBE40 (RtlpNotOwnerCriticalSection.c)
 *     RtlGrowFunctionTable @ 0x1800D3830 (RtlGrowFunctionTable.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800D88E0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800D8930 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlInitializeContext @ 0x1800E7390 (RtlInitializeContext.c)
 *     RtlIsNameInExpression @ 0x1800E76B0 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800E7754 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1800E9CAC (RtlpLookupPrimaryFunctionEntry.c)
 * Callees:
 *     RtlDispatchException @ 0x180034C40 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A7A90 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800A8C90 (RtlpCaptureContext.c)
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
