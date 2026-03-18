/*
 * XREFs of PsGetNextProcessThread @ 0x140424290
 * Callers:
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14048FF24 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PsResumeProcess @ 0x1404A75D0 (PsResumeProcess.c)
 *     NtGetNextThread @ 0x1404BE9DC (NtGetNextThread.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404E23A0 (PspBoostJobIoPriorityCallback.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 *     PsEnumProcessThreads @ 0x140500CC0 (PsEnumProcessThreads.c)
 *     PsSuspendProcess @ 0x140518CC0 (PsSuspendProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x1405EEB1C (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1405EF678 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x1406419A4 (PspWaitForUsermodeExit.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
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
  v8 = KeAbPreAcquire(a1 + 728, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( a2 )
    v9 = (_QWORD *)a2[210];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v5 = v9 - 210;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 210)) )
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
