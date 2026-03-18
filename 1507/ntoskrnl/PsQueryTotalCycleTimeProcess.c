/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x140511240
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x14003FE30 (KeFlushProcessWriteBuffers.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400F0E94 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(_QWORD *a1, unsigned __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rbx
  _QWORD *i; // rcx
  __int64 v10; // rdx
  __int16 v11; // cx

  CurrentThread = KeGetCurrentThread();
  KeFlushProcessWriteBuffers(1);
  KeUpdateTotalCyclesCurrentThread((__int64)CurrentThread, a2);
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)(a1 + 211), 0LL, 0LL, v5);
  if ( _InterlockedCompareExchange64(a1 + 211, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 211, v6, (ULONG_PTR)(a1 + 211), v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = a1[74];
  for ( i = (_QWORD *)a1[144]; i != a1 + 144; v8 += v10 )
  {
    v10 = *(i - 201);
    i = (_QWORD *)*i;
  }
  if ( _InterlockedCompareExchange64(a1 + 211, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 211);
  KeAbPostRelease((ULONG_PTR)(a1 + 211));
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
