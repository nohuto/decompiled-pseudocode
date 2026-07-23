/*
 * XREFs of PsGetNextProcessThread @ 0x1404F32E0
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x140457500 (PspBoostJobIoPriorityCallback.c)
 *     PsEnumProcessThreads @ 0x140459774 (PsEnumProcessThreads.c)
 *     PsResumeProcess @ 0x1404B270C (PsResumeProcess.c)
 *     NtGetNextThread @ 0x1404B8554 (NtGetNextThread.c)
 *     PspTerminateAllThreads @ 0x1404EC680 (PspTerminateAllThreads.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1404F68BC (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     ExSwapinWorkerThreads @ 0x14052F230 (ExSwapinWorkerThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140618800 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140619330 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x14067FEE0 (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x140682110 (PsSuspendProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  _QWORD **v3; // r12
  _QWORD *v5; // rbp
  int v6; // r14d
  unsigned __int64 *v7; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD **)(a1 + 1160);
  v5 = 0LL;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)(a1 + 728);
  v8 = KeAbPreAcquire(a1 + 728, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( a2 )
    v9 = (_QWORD *)a2[211];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v5 = v9 - 211;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 211)) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v3 )
        goto LABEL_10;
    }
    v6 = 1;
  }
LABEL_10:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v6 )
    return v5;
  else
    return 0LL;
}
