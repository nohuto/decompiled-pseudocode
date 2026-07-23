/*
 * XREFs of _LdrpInitialize @ 0x1800787A4
 * Callers:
 *     LdrpInitialize @ 0x180078768 (LdrpInitialize.c)
 * Callees:
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     LdrpInitializeThread @ 0x180016100 (LdrpInitializeThread.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlSleepConditionVariableSRW @ 0x180062950 (RtlSleepConditionVariableSRW.c)
 *     LdrpTouchThreadStack @ 0x180087C38 (LdrpTouchThreadStack.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800966DC (LdrInitializeMrdata.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 *     ZwTestAlert @ 0x1800A9990 (ZwTestAlert.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 *     LdrpDoDebuggerBreak @ 0x1800D2160 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializationFailure @ 0x1800D23B0 (LdrpInitializationFailure.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D2750 (LdrpInitializeProcessWrapperFilter.c)
 */

NTSTATUS __fastcall LdrpInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v5; // r15
  signed __int32 v6; // eax
  _PEB *ProcessEnvironmentBlock; // r14
  NTSTATUS v8; // edi
  char v9; // al
  char v10; // al
  char v11; // al
  int v12; // r8d
  NTSTATUS v13; // eax
  char v14; // cl
  struct _PEB *v15; // rax
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp-40h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+90h] [rbp+18h]

  v5 = NtCurrentTeb();
  while ( 1 )
  {
    v6 = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( v6 != 1 || (v5->SameTebFlags & 0x2000) != 0 )
    {
      ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
      if ( !v6 )
      {
        v5->SameTebFlags |= 0x20u;
        ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
        LdrInitState = 0;
        _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
        qword_180163280 = (__int64)&RtlpDynamicFunctionTable;
        RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
        RtlpDynamicFunctionTableLock.0 = 0LL;
        RtlpDynamicFunctionTableTreeMin = 0LL;
        RtlpDynamicFunctionTableTreeMax = 0LL;
        RtlpDynamicCallbackTableTreeMin = 0LL;
        RtlpDynamicCallbackTableTreeMax = 0LL;
        v8 = LdrInitializeMrdata();
        if ( v8 >= 0 )
        {
          ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
          v10 = LdrpIsSecureProcess;
          if ( (ProcessParameters->Flags & 0x80000000) != 0 )
            v10 = 1;
          LdrpIsSecureProcess = v10;
          v8 = LdrpInitializeProcess(a1, a2);
          v19 = v8;
          if ( v8 >= 0 )
          {
            LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
            if ( ProcessEnvironmentBlock->MinimumStackCommit )
              v19 = LdrpTouchThreadStack();
            LdrInitState = 3;
            _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
            v8 = v19;
            if ( v19 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
            {
              if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
              {
                LOBYTE(v12) = -1;
                LdrpLogEtwEvent(5252, -1, v12, -1, 0LL, 0LL);
              }
              _InterlockedAdd(&LdrpProcessInitialized, 1u);
              v8 = v19;
            }
          }
          else
          {
            v11 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) != 0 )
            {
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                1443,
                (unsigned int)"_LdrpInitialize",
                0,
                (__int64)"Process initialization failed with status 0x%08lx\n",
                v8);
              v11 = LdrpDebugFlags;
            }
            if ( (v11 & 0x10) != 0 )
              __debugbreak();
          }
        }
        else
        {
          v9 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              1428,
              (unsigned int)"_LdrpInitialize",
              0,
              (__int64)"LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
              v8);
            v9 = LdrpDebugFlags;
          }
          if ( (v9 & 0x10) != 0 )
            __debugbreak();
        }
        goto LABEL_55;
      }
      v8 = 0;
      if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
        goto LABEL_46;
      if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
        break;
    }
    DelayInterval.QuadPart = -300000LL;
    while ( LdrpProcessInitialized == 1 )
    {
      v13 = ZwDelayExecution(0, &DelayInterval);
      if ( v13 < 0 )
      {
        v14 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1368,
            (unsigned int)"_LdrpInitialize",
            1,
            (__int64)"Delaying execution failed with status 0x%08lx\n",
            v13);
          v14 = LdrpDebugFlags;
        }
        if ( (v14 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v15 = NtCurrentPeb();
    LdrpForkActiveLock.0 = 0LL;
    LdrpForkConditionVariable.Ptr = 0LL;
    v15->InheritedAddressSpace = 0;
    if ( v15->BeingDebugged )
      LdrpDoDebuggerBreak();
  }
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    LOBYTE(a3) = -1;
    LdrpLogEtwEvent(5252, -1, a3, -1, 0LL, 0LL);
  }
  _InterlockedAdd(&LdrpProcessInitialized, 1u);
  v8 = 0;
LABEL_46:
  if ( (v5->SameTebFlags & 0x40) == 0 )
  {
    if ( LdrpForkInProgress )
    {
      RtlAcquireSRWLockShared(&LdrpForkActiveLock);
      while ( LdrpForkInProgress )
        RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0LL, 1u);
      RtlReleaseSRWLockShared(&LdrpForkActiveLock);
    }
    if ( UseWOW64 )
      _guard_dispatch_icall_fptr();
    LdrpInitializeThread(a1, a2, a3);
  }
LABEL_55:
  result = ZwTestAlert();
  if ( v8 < 0 )
  {
    LdrpInitializationFailure((unsigned int)v8);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
    RtlRaiseStatus(v8);
  }
  return result;
}
