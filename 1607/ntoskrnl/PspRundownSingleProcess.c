/*
 * XREFs of PspRundownSingleProcess @ 0x14045E0C0
 * Callers:
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspCreateProcess @ 0x1404EB990 (PspCreateProcess.c)
 *     PspProcessRundownWorkerSingle @ 0x1404F1188 (PspProcessRundownWorkerSingle.c)
 *     PspTerminateProcess @ 0x140507F68 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1405096F0 (PspTerminateAllThreads.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     PsCreateMinimalProcess @ 0x14057E30C (PsCreateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x14067FD60 (PspProcessRundownWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     KeSetProcess @ 0x140074F14 (KeSetProcess.c)
 *     RtlInterlockedSetClearBits @ 0x140076CC8 (RtlInterlockedSetClearBits.c)
 *     PspLockProcessExclusive @ 0x140088FB8 (PspLockProcessExclusive.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     PspUnlockProcessExclusive @ 0x1400F22D8 (PspUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x1401D2214 (KeRundownSecureProcess.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObKillProcess @ 0x14045D694 (ObKillProcess.c)
 *     PspClearProcessThreadCidRefs @ 0x14045ED5C (PspClearProcessThreadCidRefs.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     ExSweepHandleTable @ 0x14045F330 (ExSweepHandleTable.c)
 *     PspRemoveProcessFromJobChain @ 0x140469654 (PspRemoveProcessFromJobChain.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x14046A034 (PspNotifyEmptyJobsInJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x1404DBE54 (PspSendProcessNotificationToJobChain.c)
 *     ObReferenceProcessHandleTable @ 0x14050D150 (ObReferenceProcessHandleTable.c)
 */

bool __fastcall PspRundownSingleProcess(ULONG_PTR BugCheckParameter1, bool a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  bool v3; // si
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rdx
  _BYTE v12[48]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  if ( a2 )
    goto LABEL_7;
  PspLockProcessExclusive(BugCheckParameter1, (__int64)CurrentThread);
  if ( !*(_DWORD *)(BugCheckParameter1 + 1176) )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 772));
    v3 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x2000008u) & 0x2000000) == 0;
  }
  PspUnlockProcessExclusive(BugCheckParameter1, (__int64)CurrentThread);
  if ( v3 )
  {
LABEL_7:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 736), 1LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 944) && (*(_DWORD *)(BugCheckParameter1 + 768) & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 768), 8);
      PspSendProcessNotificationToJobChain(BugCheckParameter1, v7, *(_QWORD *)(BugCheckParameter1 + 744));
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 720) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v12);
      if ( *(_QWORD *)(BugCheckParameter1 + 1048) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1);
      KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 1992) )
    {
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1992), 0);
      *(_QWORD *)(BugCheckParameter1 + 1992) = 0LL;
    }
    v8 = *(void **)(BugCheckParameter1 + 952);
    if ( v8 )
    {
      *(_QWORD *)(BugCheckParameter1 + 952) = 0LL;
      ObfDereferenceObject(v8);
    }
    v9 = *(void **)(BugCheckParameter1 + 1096);
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1096) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 944) )
    {
      PspRemoveProcessFromJobChain(BugCheckParameter1);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v10 = *(_QWORD *)(BugCheckParameter1 + 744);
    if ( v10 )
      PspClearProcessThreadCidRefs(CurrentThread, v10, BugCheckParameter1);
  }
  else
  {
    v5 = ObReferenceProcessHandleTable(BugCheckParameter1);
    if ( v5 )
    {
      LOBYTE(v6) = 1;
      ExSweepHandleTable(BugCheckParameter1, v5, v6);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
    }
  }
  return v3;
}
