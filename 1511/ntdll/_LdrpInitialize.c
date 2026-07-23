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

NTSTATUS __fastcall LdrpInitialize(__int64 a1, _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2, __int64 a3)
{
  struct _TEB *v5; // r15
  signed __int32 v6; // eax
  _PEB *ProcessEnvironmentBlock; // r14
  NTSTATUS v8; // esi
  NTSTATUS result; // eax
  PRTL_DYNAMIC_HASH_TABLE v10; // rbx
  struct _PEB *v11; // rax
  char v12; // al
  char v13; // al
  char v14; // al
  int v15; // r8d
  char v16; // cl
  int v17; // [rsp+30h] [rbp-48h]
  LARGE_INTEGER DelayInterval; // [rsp+98h] [rbp+20h] BYREF

  v5 = NtCurrentTeb();
  while ( 1 )
  {
    v6 = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( v6 == 1 && (v5->SameTebFlags & 0x2000) == 0 )
      goto LABEL_13;
    ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
    if ( !v6 )
      break;
    v8 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
    {
      if ( ProcessEnvironmentBlock->InheritedAddressSpace )
      {
        v11 = NtCurrentPeb();
        LdrpForkActiveLock.0 = 0LL;
        LdrpForkConditionVariable.Ptr = 0LL;
        v11->InheritedAddressSpace = 0;
        if ( v11->BeingDebugged )
          LdrpDoDebuggerBreak();
      }
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(a3) = -1;
        LdrpLogEtwEvent(5252, -1, a3, -1, 0LL);
      }
      _InterlockedAdd(&LdrpProcessInitialized, 1u);
      v8 = 0;
LABEL_5:
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
        {
          v10 = Wow64LdrpInitialize;
          ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
            Wow64LdrpInitialize,
            a2);
          ((void (__fastcall *)(__int64))v10)(a1);
        }
        LdrpInitializeThread(a1, (__int64)a2, a3);
      }
      goto LABEL_10;
    }
LABEL_13:
    DelayInterval.QuadPart = -300000LL;
    while ( LdrpProcessInitialized == 1 )
    {
      if ( ZwDelayExecution(0, &DelayInterval) < 0 )
      {
        v16 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1352,
            (unsigned int)"_LdrpInitialize",
            1,
            (__int64)"Delaying execution failed with status 0x%08lx\n");
          v16 = LdrpDebugFlags;
        }
        if ( (v16 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  v5->SameTebFlags |= 0x20u;
  ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
  LdrInitState = 0;
  _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
  qword_180155270 = (__int64)&RtlpDynamicFunctionTable;
  RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
  RtlpDynamicFunctionTableLock.0 = 0LL;
  v8 = LdrInitializeMrdata();
  if ( v8 >= 0 )
  {
    v13 = LdrpIsSecureProcess;
    if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x80000000) != 0 )
      v13 = 1;
    LdrpIsSecureProcess = v13;
    v8 = LdrpInitializeProcess(a1, a2);
    v17 = v8;
    if ( v8 >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v17 = LdrpTouchThreadStack();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      v8 = v17;
      if ( v17 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
      {
        if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        {
          LOBYTE(v15) = -1;
          LdrpLogEtwEvent(5252, -1, v15, -1, 0LL);
        }
        _InterlockedAdd(&LdrpProcessInitialized, 1u);
        v8 = v17;
      }
    }
    else
    {
      v14 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          1423,
          (unsigned int)"_LdrpInitialize",
          0,
          (__int64)"Process initialization failed with status 0x%08lx\n");
        v14 = LdrpDebugFlags;
      }
      if ( (v14 & 0x10) != 0 )
        __debugbreak();
    }
  }
  else
  {
    v12 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        1408,
        (unsigned int)"_LdrpInitialize",
        0,
        (__int64)"LDR:MRDATA: Process initialization failed with status 0x%08lx\n");
      v12 = LdrpDebugFlags;
    }
    if ( (v12 & 0x10) != 0 )
      __debugbreak();
  }
LABEL_10:
  result = ZwTestAlert();
  if ( v8 < 0 )
  {
    LdrpInitializationFailure((unsigned int)v8);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
    RtlRaiseStatus(v8);
  }
  return result;
}
