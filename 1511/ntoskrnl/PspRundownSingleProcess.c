/*
 * XREFs of PspRundownSingleProcess @ 0x1403E770C
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     PspTerminateProcess @ 0x140450604 (PspTerminateProcess.c)
 *     PspCreateProcess @ 0x1404C3BAC (PspCreateProcess.c)
 *     PspProcessRundownWorkerSingle @ 0x1404C6750 (PspProcessRundownWorkerSingle.c)
 *     PspProcessRundownWorker @ 0x140641908 (PspProcessRundownWorker.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 * Callees:
 *     KeSetProcess @ 0x14001BFCC (KeSetProcess.c)
 *     RtlInterlockedSetClearBits @ 0x140021BEC (RtlInterlockedSetClearBits.c)
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x1401C38E8 (KeRundownSecureProcess.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     PspSendProcessNotificationToJobChain @ 0x1403E8DC0 (PspSendProcessNotificationToJobChain.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x1403E93C8 (PspNotifyEmptyJobsInJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     PspClearProcessThreadCidRefs @ 0x1403F1ED8 (PspClearProcessThreadCidRefs.c)
 *     ObKillProcess @ 0x14044A8F4 (ObKillProcess.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 */

bool __fastcall PspRundownSingleProcess(ULONG_PTR BugCheckParameter1, bool a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  bool v3; // si
  __int64 v5; // r11
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rdx
  $D4FCF91253F76F57393CBFE908971F67 v10; // [rsp+20h] [rbp-58h] BYREF

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
      PspSendProcessNotificationToJobChain(BugCheckParameter1, v5, *(_QWORD *)(BugCheckParameter1 + 744));
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 720) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v10);
      if ( *(_QWORD *)(BugCheckParameter1 + 1048) )
        ObKillProcess((PRKPROCESS)BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1);
      KiUnstackDetachProcess(&v10, 0LL);
    }
    v6 = *(void **)(BugCheckParameter1 + 952);
    if ( v6 )
    {
      *(_QWORD *)(BugCheckParameter1 + 952) = 0LL;
      ObfDereferenceObject(v6);
    }
    v7 = *(void **)(BugCheckParameter1 + 1096);
    if ( v7 )
    {
      ObfDereferenceObjectWithTag(v7, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1096) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 944) )
    {
      PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v8 = *(_QWORD *)(BugCheckParameter1 + 744);
    if ( v8 )
      PspClearProcessThreadCidRefs(CurrentThread, v8, BugCheckParameter1);
  }
  else if ( ObReferenceProcessHandleTable(BugCheckParameter1) )
  {
    ExSweepHandleTable((PRKPROCESS)BugCheckParameter1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  }
  return v3;
}
