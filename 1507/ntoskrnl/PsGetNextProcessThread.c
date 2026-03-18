/*
 * XREFs of PsGetNextProcessThread @ 0x140420350
 * Callers:
 *     PsSuspendProcess @ 0x1404098CC (PsSuspendProcess.c)
 *     PsEnumProcessThreads @ 0x14041CB34 (PsEnumProcessThreads.c)
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14042027C (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404F5EBC (PspBoostJobIoPriorityCallback.c)
 *     PsResumeProcess @ 0x140551728 (PsResumeProcess.c)
 *     NtGetNextThread @ 0x140554914 (NtGetNextThread.c)
 *     ExSwapinWorkerThreads @ 0x140564D10 (ExSwapinWorkerThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140667284 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140667F30 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x1406C3EC4 (PspWaitForUsermodeExit.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD **v5; // r12
  _QWORD *v7; // r14
  int v8; // r15d
  unsigned __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r9
  _QWORD *v12; // rdi
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = (_QWORD **)(a1 + 1152);
  v7 = 0LL;
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  v9 = (unsigned __int64 *)(a1 + 728);
  v10 = KeAbPreAcquire(a1 + 728, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( a2 )
    v12 = (_QWORD *)a2[210];
  else
    v12 = *v5;
  if ( v12 != v5 )
  {
    while ( 1 )
    {
      v7 = v12 - 210;
      if ( ObReferenceObjectSafeWithTag((__int64)(v12 - 210)) )
        break;
      v12 = (_QWORD *)*v12;
      if ( v12 == v5 )
        goto LABEL_10;
    }
    v8 = 1;
  }
LABEL_10:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v13 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v8 )
    return v7;
  else
    return 0LL;
}
