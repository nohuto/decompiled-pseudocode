/*
 * XREFs of PspRundownSingleProcess @ 0x140508838
 * Callers:
 *     PspProcessRundownWorkerSingle @ 0x14040A584 (PspProcessRundownWorkerSingle.c)
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14055AE78 (PspCreateProcess.c)
 *     PspProcessRundownWorker @ 0x1406C3E28 (PspProcessRundownWorker.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x1400097E8 (RtlInterlockedSetClearBits.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KeSetProcess @ 0x1400EFB40 (KeSetProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x1401FF814 (KeRundownSecureProcess.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PspClearProcessThreadCidRefs @ 0x140420C64 (PspClearProcessThreadCidRefs.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x140505DD8 (PspNotifyEmptyJobsInJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 *     ObKillProcess @ 0x14050BA98 (ObKillProcess.c)
 *     PspSendProcessNotificationToJobChain @ 0x140544944 (PspSendProcessNotificationToJobChain.c)
 *     ObClearProcessHandleTable @ 0x14055AC34 (ObClearProcessHandleTable.c)
 */

bool __fastcall PspRundownSingleProcess(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v5; // r15
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  __int16 v11; // ax
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  void *v14; // rcx
  __int64 v15; // rdx
  _BYTE v17[48]; // [rsp+20h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  if ( (_BYTE)a2 )
    goto LABEL_16;
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)(BugCheckParameter2 + 728);
  v8 = KeAbPreAcquire(BugCheckParameter2 + 728, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( !*(_DWORD *)(BugCheckParameter2 + 1168) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 772));
    v5 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 772), 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v5 )
  {
LABEL_16:
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 736), 1LL, 0LL);
    if ( v12 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)(BugCheckParameter2 + 736), v12);
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter2 + 736), 1LL);
    if ( *(_QWORD *)(BugCheckParameter2 + 944) )
    {
      a3 = BugCheckParameter2 + 768;
      if ( (*(_DWORD *)(BugCheckParameter2 + 768) & 1) == 0 )
      {
        RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter2 + 768), 8);
        PspSendProcessNotificationToJobChain(BugCheckParameter2, v13, *(_QWORD *)(BugCheckParameter2 + 744));
      }
    }
    if ( *(_QWORD *)(BugCheckParameter2 + 720) )
      KeRundownSecureProcess(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 772) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter2, 0, (__int64)v17);
      if ( *(_QWORD *)(BugCheckParameter2 + 1048) )
        ObKillProcess(BugCheckParameter2);
      MmCleanProcessAddressSpace(BugCheckParameter2);
      KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
    }
    if ( *(_QWORD *)(BugCheckParameter2 + 1960) )
    {
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter2 + 1960), 0);
      *(_QWORD *)(BugCheckParameter2 + 1960) = 0LL;
    }
    v14 = *(void **)(BugCheckParameter2 + 952);
    if ( v14 )
    {
      *(_QWORD *)(BugCheckParameter2 + 952) = 0LL;
      ObfDereferenceObject(v14);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 772) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter2, a2, a3);
    if ( *(_QWORD *)(BugCheckParameter2 + 944) )
    {
      PspRemoveProcessFromJobChain((volatile signed __int32 *)BugCheckParameter2, 0LL, 4u, 0);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter2);
    }
    v15 = *(_QWORD *)(BugCheckParameter2 + 744);
    if ( v15 )
      PspClearProcessThreadCidRefs((__int64)CurrentThread, v15, BugCheckParameter2);
  }
  else
  {
    ObClearProcessHandleTable(BugCheckParameter2);
  }
  return v5;
}
