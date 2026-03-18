/*
 * XREFs of PsCaptureExceptionPort @ 0x140420D34
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     DbgkForwardException @ 0x1405478A4 (DbgkForwardException.c)
 *     PspFreezeProcessWorker @ 0x1406C3DD0 (PspFreezeProcessWorker.c)
 *     ExpRaiseHardError @ 0x1406F7B94 (ExpRaiseHardError.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r9
  void *v9; // rsi
  __int16 v10; // ax

  if ( !*(_QWORD *)(a1 + 848) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (unsigned __int64 *)(a1 + 728);
  v7 = KeAbPreAcquire(a1 + 728, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = (void *)(*(_QWORD *)(a1 + 848) & 0xFFFFFFFFFFFFFFF8uLL);
  ObfReferenceObject(v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v10 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
