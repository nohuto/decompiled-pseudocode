/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14010BE48
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14010BC20 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011044C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140113AA4 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmEmptyQueueToStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14020272C (-SmEmptyQueueToStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402038C8 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ?SmStoresEtaCheck@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140203904 (-SmStoresEtaCheck@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StDmEtaQueueRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14020515C (-StDmEtaQueueRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StStagingRegionMap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z @ 0x1402073F4 (-StStagingRegionMap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14020A5DC (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14020A6AC (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140109F6C (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // r15
  int v4; // ebp
  int v8; // r13d
  int v9; // r12d
  __int64 v10; // rbx
  KIRQL v11; // r9
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v13; // rax
  signed int v14; // esi
  KPRIORITY PriorityThread; // ebx
  struct _KTHREAD *v16; // rsi
  __int64 v17; // r8
  KIRQL v18; // al
  __int64 v19; // r8
  __int64 i; // rax

  v3 = (_DWORD *)(a1 + 4564);
  v4 = *(_DWORD *)a2 & 7;
  if ( v4 == 2 && (*(_BYTE *)(a1 + 4485) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead((_SLIST_HEADER *)a1, (__int128 *)a2) )
    {
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 5008));
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(a1 + 5000) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(a1 + 5000) = a2 | **(_DWORD **)(a1 + 5000) & 7;
      *(_QWORD *)(a1 + 5000) = a2;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 5008), v18);
      KeSetEvent((PRKEVENT)(a1 + 4968), 0, 0);
    }
  }
  else if ( (*(_BYTE *)(a1 + 4485) & 1) == 0 )
  {
    v8 = a3 & 4;
    if ( (a3 & 4) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 5172));
    v9 = a3 & 1;
    if ( (a3 & 1) != 0 )
    {
      v10 = a1 + 4544;
    }
    else if ( v4 != 2 || (*(_BYTE *)(a2 + 11) & 1) != 0 )
    {
      v10 = a1 + 4528;
    }
    else
    {
      v10 = a1 + 4512;
      v3 = (_DWORD *)(a1 + 4560);
    }
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4504));
    if ( (a3 & 2) != 0 )
    {
      v19 = **(_QWORD **)(v10 + 8) >> 3;
      *(_QWORD *)a2 = *(_QWORD *)v10 | *(_DWORD *)a2 & 7;
      *(_QWORD *)v10 = a2;
      if ( *(_QWORD *)(v10 + 8) == v10 )
        *(_QWORD *)(v10 + 8) = a2;
      **(_QWORD **)(v10 + 8) = **(_DWORD **)(v10 + 8) & 7 | (unsigned __int64)(8 * (v19 + 1));
    }
    else
    {
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(v10 + 8) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(v10 + 8) = a2 | **(_DWORD **)(v10 + 8) & 7;
      *(_QWORD *)(v10 + 8) = a2;
    }
    if ( !*(_DWORD *)(a1 + 4564) && !*(_DWORD *)(a1 + 4560) )
      *(_QWORD *)(a1 + 4576) = MEMORY[0xFFFFF78000000320];
    ++*v3;
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
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4504), v11);
    CurrentThread = KeGetCurrentThread();
    if ( !v8 )
    {
      v13 = *(unsigned __int8 *)(a1 + 4486);
      if ( (_DWORD)v13 == 4 )
        v14 = *(_DWORD *)(a1 + 5168);
      else
        v14 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v13];
      if ( v9 )
      {
        PriorityThread = 12;
      }
      else if ( v4 != 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        PriorityThread = v14;
      }
      else
      {
        PriorityThread = KeQueryPriorityThread(CurrentThread);
      }
      if ( PriorityThread <= v14 )
        PriorityThread = v14;
      v16 = *(struct _KTHREAD **)(a1 + 4664);
      if ( PriorityThread > KeQueryPriorityThread(v16) )
        KeSetActualBasePriorityThread((__int64)v16, (unsigned int)PriorityThread, v17);
      KeSetEvent((PRKEVENT)(a1 + 4592), 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 5172));
    }
  }
}
