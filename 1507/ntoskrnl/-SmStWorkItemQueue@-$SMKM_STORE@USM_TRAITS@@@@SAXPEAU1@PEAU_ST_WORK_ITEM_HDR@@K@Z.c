/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14013E83C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014040C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140144264 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14014728C (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmEmptyQueueToStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1402517C0 (-SmEmptyQueueToStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140252B10 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ?SmStoresEtaCheck@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252B4C (-SmStoresEtaCheck@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StDmEtaQueueRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402543F0 (-StDmEtaQueueRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StStagingRegionMap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z @ 0x140256650 (-StStagingRegionMap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140259ABC (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140259BA0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1401400E0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, __int64 a2, char a3)
{
  int v4; // ebp
  _DWORD *v5; // r8
  _DWORD *v8; // r12
  __int64 v9; // rdi
  volatile signed __int32 *v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v14; // rax
  KPRIORITY v15; // esi
  KPRIORITY PriorityThread; // edi
  struct _KTHREAD *v17; // rsi
  volatile signed __int32 *v18; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v20; // rcx
  __int64 i; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 v23; // [rsp+68h] [rbp+10h]

  v4 = *(_DWORD *)a2 & 7;
  v5 = (_DWORD *)(a1 + 4564);
  v8 = (_DWORD *)(a1 + 4564);
  if ( v4 == 2 && (*(_BYTE *)(a1 + 4485) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead() )
    {
      v18 = (volatile signed __int32 *)(a1 + 5008);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 5008);
      }
      else if ( _interlockedbittestandset64(v18, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 5008));
      }
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(a1 + 5000) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(a1 + 5000) = a2 | **(_DWORD **)(a1 + 5000) & 7;
      *(_QWORD *)(a1 + 5000) = a2;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 5008, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
      __writecr8(CurrentIrql);
      KeSetEvent((PRKEVENT)(a1 + 4968), 0, 0);
    }
    return;
  }
  if ( (*(_BYTE *)(a1 + 4485) & 1) != 0 )
    return;
  if ( (a3 & 4) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5164));
  if ( (a3 & 1) != 0 )
  {
    v9 = a1 + 4544;
  }
  else if ( v4 != 2 || (*(_BYTE *)(a2 + 11) & 1) != 0 )
  {
    v9 = a1 + 4528;
  }
  else
  {
    v9 = a1 + 4512;
    v8 = (_DWORD *)(a1 + 4560);
  }
  v10 = (volatile signed __int32 *)(a1 + 4504);
  v23 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 4504);
    goto LABEL_42;
  }
  if ( _interlockedbittestandset64(v10, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 4504));
LABEL_42:
    v5 = (_DWORD *)(a1 + 4564);
  }
  v11 = **(_QWORD **)(v9 + 8);
  v12 = *(_DWORD *)a2 & 7;
  if ( (a3 & 2) != 0 )
  {
    *(_QWORD *)a2 = *(_QWORD *)v9 | v12;
    v20 = (v11 >> 3) + 1;
    *(_QWORD *)v9 = a2;
    if ( *(_QWORD *)(v9 + 8) == v9 )
      *(_QWORD *)(v9 + 8) = a2;
    **(_QWORD **)(v9 + 8) = **(_DWORD **)(v9 + 8) & 7 | (unsigned __int64)(8 * v20);
  }
  else
  {
    *(_QWORD *)a2 = v12 | ((v11 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    **(_QWORD **)(v9 + 8) = a2 | **(_DWORD **)(v9 + 8) & 7;
    *(_QWORD *)(v9 + 8) = a2;
  }
  if ( !*v5 && !*(_DWORD *)(a1 + 4560) )
    *(_QWORD *)(a1 + 4576) = MEMORY[0xFFFFF78000000320];
  ++*v8;
  if ( v4 == 2 && *(_BYTE *)(a1 + 4484) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 2448) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*(_DWORD *)(a2 + 8) << 12;
          i += 32LL )
    {
      ;
    }
    *(_WORD *)(i + 4) = 0;
    *(_QWORD *)(a1 + 4584) += *(_QWORD *)(i + 8);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v10, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  __writecr8(v23);
  CurrentThread = KeGetCurrentThread();
  if ( (a3 & 4) == 0 )
  {
    v14 = *(unsigned __int8 *)(a1 + 4486);
    if ( (_DWORD)v14 == 4 )
      v15 = *(_DWORD *)(a1 + 5160);
    else
      v15 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v14];
    if ( (a3 & 1) != 0 )
    {
      PriorityThread = 12;
    }
    else if ( v4 != 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      PriorityThread = v15;
    }
    else
    {
      PriorityThread = KeQueryPriorityThread(CurrentThread);
    }
    if ( PriorityThread <= v15 )
      PriorityThread = v15;
    v17 = *(struct _KTHREAD **)(a1 + 4664);
    if ( PriorityThread > KeQueryPriorityThread(v17) )
      KeSetActualBasePriorityThread((__int64)v17, PriorityThread);
    KeSetEvent((PRKEVENT)(a1 + 4592), 0, 0);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 5164));
  }
}
