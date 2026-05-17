/*
 * XREFs of _LdrpInitialize @ 0x1800787B4
 * Callers:
 *     LdrpInitialize @ 0x180078778 (LdrpInitialize.c)
 * Callees:
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlSleepConditionVariableSRW @ 0x180062960 (RtlSleepConditionVariableSRW.c)
 *     LdrpTouchThreadStack @ 0x180087C48 (LdrpTouchThreadStack.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800966EC (LdrInitializeMrdata.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 *     ZwTestAlert @ 0x1800A9990 (ZwTestAlert.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 *     LdrpDoDebuggerBreak @ 0x1800D20A0 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializationFailure @ 0x1800D22F0 (LdrpInitializationFailure.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D2690 (LdrpInitializeProcessWrapperFilter.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v6; // r15
  signed __int32 v7; // eax
  _PEB *ProcessEnvironmentBlock; // r14
  int v9; // edi
  char v10; // al
  char v11; // al
  char v12; // al
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  char v16; // cl
  struct _PEB *v17; // rax
  __int64 result; // rax
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+40h] [rbp-38h]
  int v21; // [rsp+90h] [rbp+18h]

  v6 = NtCurrentTeb();
  while ( 1 )
  {
    v7 = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( v7 != 1 || (v6->SameTebFlags & 0x2000) != 0 )
    {
      ProcessEnvironmentBlock = v6->ProcessEnvironmentBlock;
      if ( !v7 )
      {
        v6->SameTebFlags |= 0x20u;
        ProcessEnvironmentBlock->LoaderLock = (_RTL_CRITICAL_SECTION *)&LdrpLoaderLock;
        LdrInitState = 0;
        _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
        qword_180163280 = (__int64)&RtlpDynamicFunctionTable;
        RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
        RtlpDynamicFunctionTableLock = 0LL;
        RtlpDynamicFunctionTableTreeMin = 0LL;
        RtlpDynamicFunctionTableTreeMax = 0LL;
        RtlpDynamicCallbackTableTreeMin = 0LL;
        RtlpDynamicCallbackTableTreeMax = 0LL;
        v9 = LdrInitializeMrdata();
        if ( v9 >= 0 )
        {
          ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
          v11 = LdrpIsSecureProcess;
          if ( (ProcessParameters->Flags & 0x80000000) != 0 )
            v11 = 1;
          LdrpIsSecureProcess = v11;
          v9 = LdrpInitializeProcess(a1, a2);
          v21 = v9;
          if ( v9 >= 0 )
          {
            LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
            if ( ProcessEnvironmentBlock->MinimumStackCommit )
              v21 = LdrpTouchThreadStack();
            LdrInitState = 3;
            _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
            v9 = v21;
            if ( v21 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
            {
              if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
              {
                LOBYTE(v14) = -1;
                LOBYTE(v13) = -1;
                LdrpLogEtwEvent(5252, -1, v13, v14, 0LL, 0LL);
              }
              _InterlockedAdd(&LdrpProcessInitialized, 1u);
              v9 = v21;
            }
          }
          else
          {
            v12 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) != 0 )
            {
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                1443,
                (unsigned int)"_LdrpInitialize",
                0,
                (__int64)"Process initialization failed with status 0x%08lx\n",
                v9);
              v12 = LdrpDebugFlags;
            }
            if ( (v12 & 0x10) != 0 )
              __debugbreak();
          }
        }
        else
        {
          v10 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              1428,
              (unsigned int)"_LdrpInitialize",
              0,
              (__int64)"LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
              v9);
            v10 = LdrpDebugFlags;
          }
          if ( (v10 & 0x10) != 0 )
            __debugbreak();
        }
        goto LABEL_55;
      }
      v9 = 0;
      if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
        goto LABEL_46;
      if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
        break;
    }
    v19 = -300000LL;
    while ( LdrpProcessInitialized == 1 )
    {
      v15 = ZwDelayExecution(0LL, &v19);
      if ( v15 < 0 )
      {
        v16 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1368,
            (unsigned int)"_LdrpInitialize",
            1,
            (__int64)"Delaying execution failed with status 0x%08lx\n",
            v15);
          v16 = LdrpDebugFlags;
        }
        if ( (v16 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v17 = NtCurrentPeb();
    LdrpForkActiveLock = 0LL;
    LdrpForkConditionVariable = 0LL;
    v17->InheritedAddressSpace = 0;
    if ( v17->BeingDebugged )
      LdrpDoDebuggerBreak();
  }
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    LOBYTE(a4) = -1;
    LOBYTE(a3) = -1;
    LdrpLogEtwEvent(5252, -1, a3, a4, 0LL, 0LL);
  }
  _InterlockedAdd(&LdrpProcessInitialized, 1u);
  v9 = 0;
LABEL_46:
  if ( (v6->SameTebFlags & 0x40) == 0 )
  {
    if ( LdrpForkInProgress )
    {
      RtlAcquireSRWLockShared(&LdrpForkActiveLock, a2, a3, a4);
      while ( LdrpForkInProgress )
        RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0LL, 1);
      RtlReleaseSRWLockShared(&LdrpForkActiveLock);
    }
    if ( UseWOW64 )
      _guard_dispatch_icall_fptr();
    LdrpInitializeThread(a1, (__int64)a2, a3);
  }
LABEL_55:
  result = ZwTestAlert();
  if ( v9 < 0 )
  {
    LdrpInitializationFailure((unsigned int)v9);
    ZwTerminateProcess(-1LL, (unsigned int)v9);
    RtlRaiseStatus((unsigned int)v9);
  }
  return result;
}
