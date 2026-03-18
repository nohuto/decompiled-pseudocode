/*
 * XREFs of PspAdjustKeepAliveCountProcess @ 0x1406C00C8
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140033110 (IopDeleteFileObjectExtension.c)
 *     IoIncrementKeepAliveCount @ 0x1401F6FAC (IoIncrementKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x1401F76B8 (IopKeepAliveWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 */

__int64 __fastcall PspAdjustKeepAliveCountProcess(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // r13
  char v5; // r15
  signed __int32 *v6; // rdi
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r9
  signed __int32 v12; // eax
  int v13; // r12d
  unsigned int v14; // ebx
  _QWORD *v15; // rdi
  __int16 v16; // ax

  v4 = a2;
  v5 = a4;
  v6 = (signed __int32 *)(a1 + 1800);
  if ( !(_BYTE)a4 )
    v6 = (signed __int32 *)(a1 + 1804);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (unsigned __int64 *)(a1 + 728);
  v10 = KeAbPreAcquire(a1 + 728, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  _m_prefetchw(v6);
  v12 = *v6;
  do
  {
    v13 = v12;
    v14 = v12 + v4;
    v12 = _InterlockedCompareExchange(v6, v12 + v4, v12);
  }
  while ( v12 != v13 );
  v15 = *(_QWORD **)(a1 + 944);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v16 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v5 )
  {
    if ( v13 < 0 )
      PspChargeJobWakeCounter(v15, 0LL, 1, v4, 1, a1, a3);
    v14 &= ~0x80000000;
  }
  return v14;
}
