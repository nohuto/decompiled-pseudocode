/*
 * XREFs of NtTerminateProcess @ 0x140450420
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeThread @ 0x140028C4C (KeForceResumeThread.c)
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1403F2F24 (PspTerminateThreadByPointer.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspTerminateProcess @ 0x140450604 (PspTerminateProcess.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x1404C2570 (PspLogAuditTerminateRemoteProcessEvent.c)
 */

NTSTATUS __stdcall NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  _DWORD *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  signed __int32 v10; // eax
  signed __int32 v11; // ett
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
    if ( PreviousMode != 1 && !*(_QWORD *)(Process + 720) || (*(_DWORD *)(Process + 1724) & 1) != 0 )
      return -1073741637;
    if ( (CurrentThread->Header.Reserved1 & 0x40) == 0 )
    {
      PspLockProcessExclusive(Process, (__int64)CurrentThread);
      _m_prefetchw((const void *)(Process + 772));
      v10 = *(_DWORD *)(Process + 772);
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 772), v10 | 0x40000000, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x40000008) != 0 )
      {
        PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
        PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, ExitStatus, 1);
        return 0;
      }
      LODWORD(CurrentThread[1].Queue) |= 0x20u;
      if ( *(_DWORD *)(Process + 1564) == 259 )
        *(_DWORD *)(Process + 1564) = ExitStatus;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728));
      KeAbPostRelease(Process + 728);
      v9 = PspTerminateAllThreads(Process, (ULONG_PTR)CurrentThread, ExitStatus, 0);
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
      _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3, 1u);
      KeForceResumeThread((__int64)CurrentThread);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      PspExitThread(ExitStatus);
      __debugbreak();
    }
  }
  else
  {
    PspLogAuditTerminateRemoteProcessEvent(v8, v9);
  }
LABEL_18:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v9;
}
