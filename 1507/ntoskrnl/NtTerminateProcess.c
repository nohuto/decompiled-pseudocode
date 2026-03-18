/*
 * XREFs of NtTerminateProcess @ 0x14041C6B4
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeThread @ 0x14000E584 (KeForceResumeThread.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PspTerminateProcess @ 0x14041C990 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1404205B0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR Process; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  _DWORD *v8; // r14
  int v9; // eax
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int16 v13; // ax
  volatile signed __int64 *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r13
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // [rsp+40h] [rbp-29h]
  int v24; // [rsp+48h] [rbp-21h] BYREF
  PVOID Object; // [rsp+50h] [rbp-19h] BYREF
  NTSTATUS v26; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  NTSTATUS *v28; // [rsp+70h] [rbp+7h]
  __int64 v29; // [rsp+78h] [rbp+Fh]

  CurrentThread = KeGetCurrentThread();
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle )
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               1u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x65547350u,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
    if ( PreviousMode || *(_QWORD *)(Process + 720) )
      v8 = Object;
    else
      v8 = Object;
    goto LABEL_5;
  }
  Object = CurrentThread->ApcState.Process;
  v8 = (_DWORD *)Process;
  if ( PreviousMode != 1 && !*(_QWORD *)(Process + 720) || (*(_DWORD *)(Process + 1716) & 1) != 0 )
    return -1073741637;
  if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
  {
    ObfReferenceObjectWithTag((PVOID)Process, 0x65547350u);
LABEL_5:
    v9 = v8[186];
    --CurrentThread->KernelApcDisable;
    v22 = v9;
    v10 = PspTerminateProcess((ULONG_PTR)v8);
    ObfDereferenceObjectWithTag(v8, 0x65547350u);
    if ( v8 == (_DWORD *)Process )
    {
      if ( PreviousMode == 1 || *(_QWORD *)(Process + 720) )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3, 1u);
        KeForceResumeThread((__int64)CurrentThread, v11, v12);
        v13 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v13;
        if ( !v13
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        PspExitThread((unsigned int)ExitStatus);
        __debugbreak();
      }
    }
    else
    {
      v24 = v22;
      v26 = v10;
      UserData.Ptr = (ULONGLONG)&v24;
      v28 = &v26;
      *(_QWORD *)&UserData.Size = 4LL;
      v29 = 4LL;
      EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_TERMINATEPROCESS, 0LL, 2u, &UserData);
    }
LABEL_25:
    v20 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v10;
  }
  --CurrentThread->KernelApcDisable;
  v14 = (volatile signed __int64 *)(Process + 728);
  v15 = KeAbPreAcquire(Process + 728, 0LL, 0LL, v2);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 728), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 728), v15, Process + 728, v16);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  _m_prefetchw((const void *)(Process + 772));
  v18 = *(_DWORD *)(Process + 772);
  do
  {
    v19 = v18;
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 772), v18 | 0x40000000, v18);
  }
  while ( v19 != v18 );
  if ( (v18 & 0x40000008) == 0 )
  {
    LODWORD(CurrentThread[1].Queue) |= 0x10u;
    if ( *(_DWORD *)(Process + 1556) == 259 )
      *(_DWORD *)(Process + 1556) = ExitStatus;
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728));
    KeAbPostRelease(Process + 728);
    v10 = PspTerminateAllThreads(Process);
    goto LABEL_25;
  }
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728));
  KeAbPostRelease(Process + 728);
  v21 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  PspTerminateThreadByPointer((ULONG_PTR)CurrentThread);
  return 0;
}
