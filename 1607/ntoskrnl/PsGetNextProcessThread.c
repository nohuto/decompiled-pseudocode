/*
 * XREFs of PsGetNextProcessThread @ 0x140510350
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x140458630 (PspBoostJobIoPriorityCallback.c)
 *     PsEnumProcessThreads @ 0x14045A8A4 (PsEnumProcessThreads.c)
 *     PsResumeProcess @ 0x1404CCCE0 (PsResumeProcess.c)
 *     NtGetNextThread @ 0x1404D4F50 (NtGetNextThread.c)
 *     PspTerminateAllThreads @ 0x1405096F0 (PspTerminateAllThreads.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1405134CC (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     ExSwapinWorkerThreads @ 0x14052ECF0 (ExSwapinWorkerThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x14061874C (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x14061927C (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x14067FDFC (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x14068202C (PsSuspendProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006ADC0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
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
