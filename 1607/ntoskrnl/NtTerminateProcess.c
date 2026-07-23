/*
 * XREFs of NtTerminateProcess @ 0x1404EAD14
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeForceResumeThread @ 0x1400C9214 (KeForceResumeThread.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x1404CEF40 (PspLogAuditTerminateRemoteProcessEvent.c)
 *     PspTerminateProcess @ 0x1404EAEF8 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1404EC680 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1404EC9C0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 */

NTSTATUS __stdcall NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  _DWORD *v7; // rsi
  int v8; // r12d
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // r8
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

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
    v7 = Object;
  }
  else
  {
    Object = CurrentThread->ApcState.Process;
    v7 = (_DWORD *)Process;
    if ( PreviousMode != 1 && !*(_QWORD *)(Process + 720) || (*(_DWORD *)(Process + 1740) & 1) != 0 )
      return -1073741637;
    if ( (CurrentThread->Header.Reserved1 & 0x40) == 0 )
    {
      PspLockProcessExclusive(Process, (__int64)CurrentThread);
      _m_prefetchw((const void *)(Process + 772));
      v16 = *(_DWORD *)(Process + 772);
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 772), v16 | 0x40000000, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x40000008) != 0 )
      {
        PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
        LOBYTE(v18) = 1;
        PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v18);
        return 0;
      }
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
      if ( *(_DWORD *)(Process + 1580) == 259 )
        *(_DWORD *)(Process + 1580) = ExitStatus;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728));
      KeAbPostRelease(Process + 728);
      v9 = PspTerminateAllThreads(Process);
      goto LABEL_18;
    }
    ObfReferenceObjectWithTag((PVOID)Process, 0x65547350u);
  }
  v8 = v7[186];
  --CurrentThread->KernelApcDisable;
  v9 = PspTerminateProcess((ULONG_PTR)v7);
  ObfDereferenceObjectWithTag(v7, 0x65547350u);
  if ( v7 == (_DWORD *)Process )
  {
    if ( PreviousMode == 1 || *(_QWORD *)(Process + 720) )
    {
      _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
      KeForceResumeThread((__int64)CurrentThread);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v13, v14, v15);
      PspExitThread((unsigned int)ExitStatus);
      __debugbreak();
    }
  }
  else
  {
    PspLogAuditTerminateRemoteProcessEvent(v8, v9);
  }
LABEL_18:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
  return v9;
}
