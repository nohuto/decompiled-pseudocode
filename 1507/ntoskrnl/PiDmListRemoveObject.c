/*
 * XREFs of PiDmListRemoveObject @ 0x140680838
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140439B88 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043ABF4 (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E04DC (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmListRemoveObjectWorker @ 0x140680984 (PiDmListRemoveObjectWorker.c)
 */

void __fastcall PiDmListRemoveObject(unsigned int a1, ULONG_PTR a2, volatile signed __int64 *a3, __int64 a4)
{
  void *ObjectManagerForObjectType; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  volatile signed __int64 v18; // rtt
  __int64 v19; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v21; // ax
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  PiDmObjectAcquireExclusiveLock((unsigned __int64 *)a2, v9, v10, v11);
  PiDmObjectAcquireSharedLock(a3, v12, v13, v14);
  PiDmListRemoveObjectWorker(a1, ObjectManagerForObjectType, a2, a3, a4);
  _m_prefetchw((const void *)a3);
  v16 = *a3;
  v17 = *a3 - 16;
  if ( (*a3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v17 = 0LL;
  if ( (v16 & 2) != 0 || (v18 = *a3, v18 != _InterlockedCompareExchange64(a3, v17, v16)) )
    ExfReleasePushLock(a3, v15);
  KeAbPostRelease((ULONG_PTR)a3);
  CurrentThread = KeGetCurrentThread();
  v21 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  _m_prefetchw((const void *)a2);
  v22 = *(_QWORD *)a2;
  v23 = *(_QWORD *)a2 - 16LL;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v23 = 0LL;
  if ( (v22 & 2) != 0
    || (v24 = *(_QWORD *)a2, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v23, v22)) )
  {
    ExfReleasePushLock((_QWORD *)a2, v19);
  }
  KeAbPostRelease(a2);
  v25 = KeGetCurrentThread();
  v26 = v25->KernelApcDisable + 1;
  v25->KernelApcDisable = v26;
  if ( !v26
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
    && !v25->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
