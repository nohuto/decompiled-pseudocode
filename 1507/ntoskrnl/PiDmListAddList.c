/*
 * XREFs of PiDmListAddList @ 0x14058C898
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140439B88 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043ABF4 (PiDmObjectAcquireSharedLock.c)
 *     PiDmListAddObjectWorker @ 0x1404DFB04 (PiDmListAddObjectWorker.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E04DC (PiDmObjectAcquireExclusiveLock.c)
 */

void __fastcall PiDmListAddList(__int64 a1, ULONG_PTR a2, __int64 a3, volatile signed __int64 *a4)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  volatile signed __int64 *v9; // r9
  _QWORD **v10; // r15
  struct _ERESOURCE *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *i; // rsi
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  volatile signed __int64 v21; // rtt
  __int64 v22; // rdx
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  signed __int64 v25; // rax
  signed __int64 v26; // rcx
  unsigned __int64 v27; // rtt
  ULONG_PTR v28; // rcx
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  volatile signed __int64 *v31; // r14
  __int64 v32; // rdx
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  volatile signed __int64 v35; // rtt
  struct _KTHREAD *CurrentThread; // rcx
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

  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
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
    v31 = i - 8;
    PiDmObjectAcquireSharedLock(i - 8, v15, v16, v17);
    PiDmListAddObjectWorker(2, v11, a2, (__int64)(i - 8), 0LL);
    _m_prefetchw(i - 8);
    v33 = *(i - 8);
    v34 = v33 - 16;
    if ( (v33 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v34 = 0LL;
    if ( (v33 & 2) != 0 || (v35 = *v31, v35 != _InterlockedCompareExchange64(v31, v34, v33)) )
      ExfReleasePushLock(i - 8, v32);
    KeAbPostRelease((ULONG_PTR)(i - 8));
    CurrentThread = KeGetCurrentThread();
    v37 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v37;
    if ( !v37
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( a2 < (unsigned __int64)a4 )
  {
    _m_prefetchw((const void *)a4);
    v19 = *a4;
    v20 = *a4 - 16;
    if ( (*a4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v20 = 0LL;
    if ( (v19 & 2) != 0 || (v21 = *a4, v21 != _InterlockedCompareExchange64(a4, v20, v19)) )
      ExfReleasePushLock(a4, v15);
    KeAbPostRelease((ULONG_PTR)a4);
    v23 = KeGetCurrentThread();
    v24 = v23->KernelApcDisable + 1;
    v23->KernelApcDisable = v24;
    if ( !v24
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    _m_prefetchw((const void *)a2);
    v25 = *(_QWORD *)a2;
    v26 = *(_QWORD *)a2 - 16LL;
    if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v26 = 0LL;
    if ( (v25 & 2) != 0
      || (v27 = *(_QWORD *)a2, v27 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v26, v25)) )
    {
      ExfReleasePushLock((_QWORD *)a2, v22);
    }
    v28 = a2;
    goto LABEL_16;
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
    v28 = (ULONG_PTR)a4;
LABEL_16:
    KeAbPostRelease(v28);
    v29 = KeGetCurrentThread();
    v30 = v29->KernelApcDisable + 1;
    v29->KernelApcDisable = v30;
    if ( v30 )
      return;
    goto LABEL_59;
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
  v29 = KeGetCurrentThread();
  v51 = v29->KernelApcDisable + 1;
  v29->KernelApcDisable = v51;
  if ( !v51 )
  {
LABEL_59:
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 && !v29->SpecialApcDisable )
      KiCheckForKernelApcDelivery();
  }
}
