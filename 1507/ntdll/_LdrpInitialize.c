/*
 * XREFs of _LdrpInitialize @ 0x18006BE24
 * Callers:
 *     LdrpInitialize @ 0x18006BDE8 (LdrpInitialize.c)
 * Callees:
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     LdrpInitializeThread @ 0x180021AB8 (LdrpInitializeThread.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlSleepConditionVariableSRW @ 0x180065F50 (RtlSleepConditionVariableSRW.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpTouchThreadStack @ 0x1800779B4 (LdrpTouchThreadStack.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x180093C40 (ZwDelayExecution.c)
 *     ZwTestAlert @ 0x180095330 (ZwTestAlert.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 *     LdrpDoDebuggerBreak @ 0x1800BDE50 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializationFailure @ 0x1800BE0A4 (LdrpInitializationFailure.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800C0830 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrInitializeMrdata @ 0x1800C1470 (LdrInitializeMrdata.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v6; // r15
  signed __int32 v7; // eax
  _PEB *ProcessEnvironmentBlock; // r14
  int v9; // esi
  __int64 result; // rax
  int v11; // eax
  void (__fastcall *v12)(__int64); // rbx
  char v13; // al
  char v14; // al
  char v15; // al
  int v16; // r8d
  int v17; // r9d
  struct _PEB *v18; // rax
  char v19; // cl
  int v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

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
        v18 = NtCurrentPeb();
        LdrpForkActiveLock = 0LL;
        LdrpForkConditionVariable = 0LL;
        v18->InheritedAddressSpace = 0;
        if ( v18->BeingDebugged )
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
          v12 = (void (__fastcall *)(__int64))Wow64LdrpInitialize;
          _guard_check_icall_fptr();
          v12(a1);
        }
        LdrpInitializeThread(a1, (__int64)a2, a3);
      }
      goto LABEL_10;
    }
LABEL_13:
    v21 = -300000LL;
    while ( LdrpProcessInitialized == 1 )
    {
      v11 = ZwDelayExecution(0LL, &v21);
      if ( v11 < 0 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1353,
            (unsigned int)"_LdrpInitialize",
            1,
            "Delaying execution failed with status 0x%08lx\n",
            v11);
          v19 = LdrpDebugFlags;
        }
        if ( (v19 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  v6->SameTebFlags |= 0x20u;
  ProcessEnvironmentBlock->LoaderLock = (_RTL_CRITICAL_SECTION *)&LdrpLoaderLock;
  LdrInitState = 0;
  _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
  qword_180157270 = (__int64)&RtlpDynamicFunctionTable;
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
    v20 = v9;
    if ( v9 >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v20 = LdrpTouchThreadStack();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      v9 = v20;
      if ( v20 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
      {
        if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        {
          LOBYTE(v17) = -1;
          LOBYTE(v16) = -1;
          LdrpLogEtwEvent(5252, -1, v16, v17, 0LL);
        }
        _InterlockedAdd(&LdrpProcessInitialized, 1u);
        v9 = v20;
      }
    }
    else
    {
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          1424,
          (unsigned int)"_LdrpInitialize",
          0,
          "Process initialization failed with status 0x%08lx\n",
          v9);
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
        1409,
        (unsigned int)"_LdrpInitialize",
        0,
        "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
        v9);
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
