/*
 * XREFs of PiDmListRemoveList @ 0x140680530
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

void __fastcall PiDmListRemoveList(__int64 a1, ULONG_PTR a2, __int64 a3, volatile signed __int64 *a4)
{
  void *ObjectManagerForObjectType; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  volatile signed __int64 *v9; // r9
  _QWORD **v10; // r15
  void *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *i; // rsi
  volatile signed __int64 *v19; // r14
  __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  volatile signed __int64 v23; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v25; // ax
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  volatile signed __int64 v28; // rtt
  __int64 v29; // rdx
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  unsigned __int64 v34; // rtt
  ULONG_PTR v35; // rcx
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  signed __int64 v38; // rax
  unsigned __int64 v39; // rcx
  bool v40; // cc
  signed __int64 v41; // rcx
  unsigned __int64 v42; // rtt
  __int64 v43; // rdx
  struct _KTHREAD *v44; // rcx
  __int16 v45; // ax
  signed __int64 v46; // rax
  signed __int64 v47; // rcx
  volatile signed __int64 v48; // rtt
  signed __int64 v49; // rcx
  unsigned __int64 v50; // rtt
  __int16 v51; // ax

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  v10 = (_QWORD **)(v9 + 9);
  v11 = ObjectManagerForObjectType;
  if ( a2 >= (unsigned __int64)v9 )
  {
    if ( a2 > (unsigned __int64)v9 )
      PiDmObjectAcquireSharedLock(v9, v7, v8, (__int64)v9);
    PiDmObjectAcquireExclusiveLock((unsigned __int64 *)a2, v7, v8, (__int64)v9);
  }
  else
  {
    PiDmObjectAcquireExclusiveLock((unsigned __int64 *)a2, v7, v8, (__int64)v9);
    PiDmObjectAcquireSharedLock(a4, v12, v13, v14);
  }
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v19 = i - 8;
    PiDmObjectAcquireSharedLock(i - 8, v15, v16, v17);
    PiDmListRemoveObjectWorker(2LL, v11, a2, i - 8, 0LL);
    _m_prefetchw(i - 8);
    v21 = *(i - 8);
    v22 = v21 - 16;
    if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v22 = 0LL;
    if ( (v21 & 2) != 0 || (v23 = *v19, v23 != _InterlockedCompareExchange64(v19, v22, v21)) )
      ExfReleasePushLock(i - 8, v20);
    KeAbPostRelease((ULONG_PTR)(i - 8));
    CurrentThread = KeGetCurrentThread();
    v25 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v25;
    if ( !v25
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( a2 < (unsigned __int64)a4 )
  {
    _m_prefetchw((const void *)a4);
    v26 = *a4;
    v27 = *a4 - 16;
    if ( (*a4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v27 = 0LL;
    if ( (v26 & 2) != 0 || (v28 = *a4, v28 != _InterlockedCompareExchange64(a4, v27, v26)) )
      ExfReleasePushLock(a4, v15);
    KeAbPostRelease((ULONG_PTR)a4);
    v30 = KeGetCurrentThread();
    v31 = v30->KernelApcDisable + 1;
    v30->KernelApcDisable = v31;
    if ( !v31
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
      && !v30->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    _m_prefetchw((const void *)a2);
    v32 = *(_QWORD *)a2;
    v33 = *(_QWORD *)a2 - 16LL;
    if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v33 = 0LL;
    if ( (v32 & 2) != 0
      || (v34 = *(_QWORD *)a2, v34 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v33, v32)) )
    {
      ExfReleasePushLock((_QWORD *)a2, v29);
    }
    v35 = a2;
    goto LABEL_34;
  }
  _m_prefetchw((const void *)a2);
  v38 = *(_QWORD *)a2;
  v39 = *(_QWORD *)a2;
  if ( a2 > (unsigned __int64)a4 )
  {
    v40 = (v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10;
    v41 = v38 - 16;
    if ( v40 )
      v41 = 0LL;
    if ( (v38 & 2) != 0
      || (v42 = *(_QWORD *)a2, v42 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v41, v38)) )
    {
      ExfReleasePushLock((_QWORD *)a2, v15);
    }
    KeAbPostRelease(a2);
    v44 = KeGetCurrentThread();
    v45 = v44->KernelApcDisable + 1;
    v44->KernelApcDisable = v45;
    if ( !v45
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
      && !v44->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    _m_prefetchw((const void *)a4);
    v46 = *a4;
    v47 = *a4 - 16;
    if ( (*a4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v47 = 0LL;
    if ( (v46 & 2) != 0 || (v48 = *a4, v48 != _InterlockedCompareExchange64(a4, v47, v46)) )
      ExfReleasePushLock(a4, v43);
    v35 = (ULONG_PTR)a4;
LABEL_34:
    KeAbPostRelease(v35);
    v36 = KeGetCurrentThread();
    v37 = v36->KernelApcDisable + 1;
    v36->KernelApcDisable = v37;
    if ( v37 )
      return;
    goto LABEL_58;
  }
  v40 = (v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10;
  v49 = v38 - 16;
  if ( v40 )
    v49 = 0LL;
  if ( (v38 & 2) != 0
    || (v50 = *(_QWORD *)a2, v50 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v49, v38)) )
  {
    ExfReleasePushLock((_QWORD *)a2, v15);
  }
  KeAbPostRelease(a2);
  v36 = KeGetCurrentThread();
  v51 = v36->KernelApcDisable + 1;
  v36->KernelApcDisable = v51;
  if ( !v51 )
  {
LABEL_58:
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 && !v36->SpecialApcDisable )
      KiCheckForKernelApcDelivery();
  }
}
