/*
 * XREFs of PiDqQueryUnlock @ 0x14044239C
 * Callers:
 *     PiDqIrpCancel @ 0x1401FBBF8 (PiDqIrpCancel.c)
 *     PiDqDispatch @ 0x140441804 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x1404419DC (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404420E4 (PiDqQuerySerializeActionQueue.c)
 *     PiDqIrpQueryGetResult @ 0x140444BEC (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14053CF2C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall PiDqQueryUnlock(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v6; // ax

  v2 = (volatile signed __int64 *)(a1 + 64);
  _m_prefetchw((const void *)(a1 + 64));
  v3 = *(_QWORD *)(a1 + 64);
  v4 = v3 - 16;
  if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v4 = 0LL;
  if ( (v3 & 2) != 0 || v3 != _InterlockedCompareExchange64(v2, v4, v3) )
    ExfReleasePushLock(v2, a2);
  KeAbPostRelease((ULONG_PTR)v2);
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v6;
  if ( !v6
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
