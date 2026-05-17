/*
 * XREFs of _LdrpInitialize @ 0x180076DB4
 * Callers:
 *     LdrpInitialize @ 0x180076D78 (LdrpInitialize.c)
 * Callees:
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     LdrpInitializeThread @ 0x180012D60 (LdrpInitializeThread.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlSleepConditionVariableSRW @ 0x180068100 (RtlSleepConditionVariableSRW.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpTouchThreadStack @ 0x180083BB4 (LdrpTouchThreadStack.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800952FC (LdrInitializeMrdata.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1800A5740 (ZwDelayExecution.c)
 *     ZwTestAlert @ 0x1800A8570 (ZwTestAlert.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
 *     LdrpDoDebuggerBreak @ 0x1800CAAF0 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializationFailure @ 0x1800CAD44 (LdrpInitializationFailure.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800CAFFC (LdrpInitializeProcessWrapperFilter.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v6; // r15
  signed __int32 v7; // eax
  _PEB *ProcessEnvironmentBlock; // r14
  int v9; // esi
  __int64 result; // rax
  void (__fastcall *v11)(__int64); // rbx
  struct _PEB *v12; // rax
  char v13; // al
  char v14; // al
  char v15; // al
  int v16; // r8d
  int v17; // r9d
  char v18; // cl
  int v19; // [rsp+30h] [rbp-48h]
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v6 = NtCurrentTeb();
  while ( 1 )
  {
    v7 = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( v7 == 1 && (v6->SameTebFlags & 0x2000) == 0 )
      goto LABEL_13;
    ProcessEnvironmentBlock = v6->ProcessEnvironmentBlock;
    if ( !v7 )
      break;
    v9 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
    {
      if ( ProcessEnvironmentBlock->InheritedAddressSpace )
      {
        v12 = NtCurrentPeb();
        LdrpForkActiveLock = 0LL;
        LdrpForkConditionVariable = 0LL;
        v12->InheritedAddressSpace = 0;
        if ( v12->BeingDebugged )
          LdrpDoDebuggerBreak();
      }
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(a4) = -1;
        LOBYTE(a3) = -1;
        LdrpLogEtwEvent(5252, -1, a3, a4, 0LL);
      }
      _InterlockedAdd(&LdrpProcessInitialized, 1u);
      v9 = 0;
LABEL_5:
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
        {
          v11 = (void (__fastcall *)(__int64))Wow64LdrpInitialize;
          _guard_check_icall_fptr();
          v11(a1);
        }
        LdrpInitializeThread(a1, (__int64)a2, a3);
      }
      goto LABEL_10;
    }
LABEL_13:
    v20 = -300000LL;
    while ( LdrpProcessInitialized == 1 )
    {
      if ( (int)ZwDelayExecution(0LL, &v20) < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1352,
            (unsigned int)"_LdrpInitialize",
            1,
            (__int64)"Delaying execution failed with status 0x%08lx\n");
          v18 = LdrpDebugFlags;
        }
        if ( (v18 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  v6->SameTebFlags |= 0x20u;
  ProcessEnvironmentBlock->LoaderLock = (_RTL_CRITICAL_SECTION *)&LdrpLoaderLock;
  LdrInitState = 0;
  _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
  qword_180155270 = (__int64)&RtlpDynamicFunctionTable;
  RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
  RtlpDynamicFunctionTableLock = 0LL;
  v9 = LdrInitializeMrdata();
  if ( v9 >= 0 )
  {
    v14 = LdrpIsSecureProcess;
    if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x80000000) != 0 )
      v14 = 1;
    LdrpIsSecureProcess = v14;
    v9 = LdrpInitializeProcess(a1, a2);
    v19 = v9;
    if ( v9 >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v19 = LdrpTouchThreadStack();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      v9 = v19;
      if ( v19 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
      {
        if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        {
          LOBYTE(v17) = -1;
          LOBYTE(v16) = -1;
          LdrpLogEtwEvent(5252, -1, v16, v17, 0LL);
        }
        _InterlockedAdd(&LdrpProcessInitialized, 1u);
        v9 = v19;
      }
    }
    else
    {
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          1423,
          (unsigned int)"_LdrpInitialize",
          0,
          (__int64)"Process initialization failed with status 0x%08lx\n");
        v15 = LdrpDebugFlags;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
  }
  else
  {
    v13 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        1408,
        (unsigned int)"_LdrpInitialize",
        0,
        (__int64)"LDR:MRDATA: Process initialization failed with status 0x%08lx\n");
      v13 = LdrpDebugFlags;
    }
    if ( (v13 & 0x10) != 0 )
      __debugbreak();
  }
LABEL_10:
  result = ZwTestAlert();
  if ( v9 < 0 )
  {
    LdrpInitializationFailure((unsigned int)v9);
    ZwTerminateProcess(-1LL, (unsigned int)v9);
    RtlRaiseStatus((unsigned int)v9);
  }
  return result;
}
