/*
 * XREFs of RtlRaiseStatus @ 0x1800A5DE0
 * Callers:
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpSubSegmentInitialize @ 0x180027270 (RtlpSubSegmentInitialize.c)
 *     LdrUnlockLoaderLock @ 0x180029EC0 (LdrUnlockLoaderLock.c)
 *     RtlInitializeResource @ 0x18002B050 (RtlInitializeResource.c)
 *     RtlpWalkFrameChain @ 0x1800326D0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1800349C0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180035340 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     RtlVirtualUnwind @ 0x180036EF0 (RtlVirtualUnwind.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     LdrLockLoaderLock @ 0x18004E640 (LdrLockLoaderLock.c)
 *     RtlDecodePointer @ 0x180051BE0 (RtlDecodePointer.c)
 *     RtlpUnWaitCriticalSection @ 0x1800664C0 (RtlpUnWaitCriticalSection.c)
 *     RtlpWaitOnCriticalSection @ 0x18006674C (RtlpWaitOnCriticalSection.c)
 *     RtlpCallVectoredHandlers @ 0x18006701C (RtlpCallVectoredHandlers.c)
 *     RtlAcquireResourceShared @ 0x18006CEC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006CFB0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x18006D0B0 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlEncodePointer @ 0x180074C40 (RtlEncodePointer.c)
 *     RtlInitializeSListHead @ 0x180076C90 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x180077950 (RtlDeactivateActivationContext.c)
 *     LdrInitializeThunk @ 0x180078750 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x180078C4C (RtlpLookupPrimaryFunctionEntry.c)
 *     LdrpReportError @ 0x18007AF88 (LdrpReportError.c)
 *     RtlConvertExclusiveToShared @ 0x180087120 (RtlConvertExclusiveToShared.c)
 *     RtlpUnwindOpSlots @ 0x180088E64 (RtlpUnwindOpSlots.c)
 *     RtlpInitRandomExVector @ 0x180096440 (RtlpInitRandomExVector.c)
 *     RtlpTrivialFunction @ 0x1800A5B88 (RtlpTrivialFunction.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     KiUserApcDispatcher @ 0x1800A9EB0 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A9F20 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A9FB0 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800AA000 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D17A0 (LdrpLogFatalUserCallbackException.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3B00 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800D3CB8 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlGrowFunctionTable @ 0x1800DBAB0 (RtlGrowFunctionTable.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800E12D0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E1320 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlInitializeContext @ 0x1800F0570 (RtlInitializeContext.c)
 *     RtlIsNameInExpression @ 0x1800F0890 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800F0934 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     RtlDispatchException @ 0x1800349C0 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800AA0D0 (RtlpCaptureContext.c)
 */

void __fastcall __noreturn RtlRaiseStatus(int a1)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  _DWORD v4[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+28h] [rbp-D8h]
  __int64 v6; // [rsp+30h] [rbp-D0h]
  int v7; // [rsp+38h] [rbp-C8h]
  _BYTE v8[248]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v9; // [rsp+1B8h] [rbp+B8h]

  RtlpCaptureContext(v8);
  v6 = v9;
  v5 = 0LL;
  v7 = 0;
  v4[0] = a1;
  v4[1] = 1;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    LOBYTE(v2) = 1;
  }
  else
  {
    RtlDispatchException((__int64)v4, (__int64)v8);
    v2 = 0LL;
  }
  v3 = ZwRaiseException(v4, v8, v2);
  RtlRaiseStatus(v3);
}
