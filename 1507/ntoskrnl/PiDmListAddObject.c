/*
 * XREFs of PiDmListAddObject @ 0x1404DF9D4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x140595210 (PiDmListInitEnumCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140439B88 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043ABF4 (PiDmObjectAcquireSharedLock.c)
 *     PiDmListAddObjectWorker @ 0x1404DFB04 (PiDmListAddObjectWorker.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E04DC (PiDmObjectAcquireExclusiveLock.c)
 */

void __fastcall PiDmListAddObject(unsigned int a1, int *a2, volatile signed __int64 *a3, __int64 a4)
{
  void *ObjectManagerForObjectType; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  volatile signed __int64 v15; // rtt
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v18; // ax
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  signed __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a2[7]);
  PiDmObjectAcquireExclusiveLock(a2);
  PiDmObjectAcquireSharedLock(a3, v9, v10, v11);
  PiDmListAddObjectWorker(a1, ObjectManagerForObjectType, a2, a3, a4);
  _m_prefetchw((const void *)a3);
  v13 = *a3;
  v14 = *a3 - 16;
  if ( (*a3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (v13 & 2) != 0 || (v15 = *a3, v15 != _InterlockedCompareExchange64(a3, v14, v13)) )
    ExfReleasePushLock(a3, v12);
  KeAbPostRelease((ULONG_PTR)a3);
  CurrentThread = KeGetCurrentThread();
  v18 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  _m_prefetchw(a2);
  v19 = *(_QWORD *)a2;
  v20 = *(_QWORD *)a2 - 16LL;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v20 = 0LL;
  if ( (v19 & 2) != 0
    || (v21 = *(_QWORD *)a2, v21 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v20, v19)) )
  {
    ExfReleasePushLock(a2, v16);
  }
  KeAbPostRelease((ULONG_PTR)a2);
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
