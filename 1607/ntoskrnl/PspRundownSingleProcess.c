/*
 * XREFs of PspRundownSingleProcess @ 0x14045CF90
 * Callers:
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspCreateProcess @ 0x1404CDA18 (PspCreateProcess.c)
 *     PspProcessRundownWorkerSingle @ 0x1404D327C (PspProcessRundownWorkerSingle.c)
 *     PspTerminateProcess @ 0x1404EAEF8 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1404EC680 (PspTerminateAllThreads.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x14067FE44 (PspProcessRundownWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     KeSetProcess @ 0x140074F94 (KeSetProcess.c)
 *     RtlInterlockedSetClearBits @ 0x140076D48 (RtlInterlockedSetClearBits.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x1401D2040 (KeRundownSecureProcess.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObKillProcess @ 0x14045C564 (ObKillProcess.c)
 *     PspClearProcessThreadCidRefs @ 0x14045DC2C (PspClearProcessThreadCidRefs.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     ExSweepHandleTable @ 0x14045E200 (ExSweepHandleTable.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x140468F04 (PspNotifyEmptyJobsInJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x1404BF458 (PspSendProcessNotificationToJobChain.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
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
