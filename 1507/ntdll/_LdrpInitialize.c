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

NTSTATUS __fastcall LdrpInitialize(__int64 a1, _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2, __int64 a3)
{
  struct _TEB *v5; // r15
  signed __int32 v6; // eax
  _PEB *ProcessEnvironmentBlock; // r14
  NTSTATUS v8; // esi
  NTSTATUS result; // eax
  NTSTATUS v10; // eax
  PRTL_DYNAMIC_HASH_TABLE v11; // rbx
  char v12; // al
  char v13; // al
  char v14; // al
  int v15; // r8d
  struct _PEB *v16; // rax
  char v17; // cl
  int v18; // [rsp+30h] [rbp-48h]
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
        v16 = NtCurrentPeb();
        LdrpForkActiveLock.0 = 0LL;
        LdrpForkConditionVariable.Ptr = 0LL;
        v16->InheritedAddressSpace = 0;
        if ( v16->BeingDebugged )
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
          v11 = Wow64LdrpInitialize;
          ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
            Wow64LdrpInitialize,
            a2);
          ((void (__fastcall *)(__int64))v11)(a1);
        }
        LdrpInitializeThread(a1, (__int64)a2, a3);
      }
      goto LABEL_10;
    }
LABEL_13:
    DelayInterval.QuadPart = -300000LL;
    while ( LdrpProcessInitialized == 1 )
    {
      v10 = ZwDelayExecution(0, &DelayInterval);
      if ( v10 < 0 )
      {
        v17 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1353,
            (unsigned int)"_LdrpInitialize",
            1,
            (__int64)"Delaying execution failed with status 0x%08lx\n",
            v10);
          v17 = LdrpDebugFlags;
        }
        if ( (v17 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  v5->SameTebFlags |= 0x20u;
  ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
  LdrInitState = 0;
  _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
  qword_180157270 = (__int64)&RtlpDynamicFunctionTable;
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
    v18 = v8;
    if ( v8 >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v18 = LdrpTouchThreadStack();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      v8 = v18;
      if ( v18 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
      {
        if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        {
          LOBYTE(v15) = -1;
          LdrpLogEtwEvent(5252, -1, v15, -1, 0LL);
        }
        _InterlockedAdd(&LdrpProcessInitialized, 1u);
        v8 = v18;
      }
    }
    else
    {
      v14 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          1424,
          (unsigned int)"_LdrpInitialize",
          0,
          (__int64)"Process initialization failed with status 0x%08lx\n",
          v8);
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
        1409,
        (unsigned int)"_LdrpInitialize",
        0,
        (__int64)"LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
        v8);
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
