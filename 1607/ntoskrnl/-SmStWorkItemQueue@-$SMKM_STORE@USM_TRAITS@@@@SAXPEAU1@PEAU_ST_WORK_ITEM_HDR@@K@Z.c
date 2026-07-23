/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14011A894
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A664 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011E58C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140122E3C (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x14021D3D4 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140221C60 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140221D20 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeQueryPriorityThread @ 0x1400C5260 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140117780 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
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
  KPRIORITY v14; // esi
  KPRIORITY PriorityThread; // ebx
  struct _KTHREAD *v16; // rsi
  KIRQL v17; // al
  __int64 v18; // r8
  __int64 i; // rax

  v3 = (_DWORD *)(a1 + 5940);
  v4 = *(_DWORD *)a2 & 7;
  if ( v4 == 2 && (*(_BYTE *)(a1 + 5861) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead(a1, (__int128 *)a2) )
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6400));
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(a1 + 6392) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(a1 + 6392) = a2 | **(_DWORD **)(a1 + 6392) & 7;
      *(_QWORD *)(a1 + 6392) = a2;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 6400), v17);
      KeSetEvent((PRKEVENT)(a1 + 6360), 0, 0);
    }
  }
  else if ( (*(_BYTE *)(a1 + 5861) & 1) == 0 )
  {
    v8 = a3 & 4;
    if ( (a3 & 4) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 6572));
    v9 = a3 & 1;
    if ( (a3 & 1) != 0 )
    {
      v10 = a1 + 5920;
    }
    else if ( v4 != 2 || (*(_BYTE *)(a2 + 11) & 1) != 0 )
    {
      v10 = a1 + 5904;
    }
    else
    {
      v10 = a1 + 5888;
      v3 = (_DWORD *)(a1 + 5936);
    }
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 5880));
    if ( (a3 & 2) != 0 )
    {
      v18 = **(_QWORD **)(v10 + 8) >> 3;
      *(_QWORD *)a2 = *(_QWORD *)v10 | *(_DWORD *)a2 & 7;
      *(_QWORD *)v10 = a2;
      if ( *(_QWORD *)(v10 + 8) == v10 )
        *(_QWORD *)(v10 + 8) = a2;
      **(_QWORD **)(v10 + 8) = **(_DWORD **)(v10 + 8) & 7 | (unsigned __int64)(8 * (v18 + 1));
    }
    else
    {
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(v10 + 8) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(v10 + 8) = a2 | **(_DWORD **)(v10 + 8) & 7;
      *(_QWORD *)(v10 + 8) = a2;
    }
    if ( !*(_DWORD *)(a1 + 5940) && !*(_DWORD *)(a1 + 5936) )
      *(_QWORD *)(a1 + 5952) = MEMORY[0xFFFFF78000000320];
    ++*v3;
    if ( v4 == 2 && *(_BYTE *)(a1 + 5860) )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3856) + 16LL);
            *(_DWORD *)i < (unsigned __int8)*(_DWORD *)(a2 + 8) << 12;
            i += 32LL )
      {
        ;
      }
      *(_WORD *)(i + 4) = 0;
      *(_QWORD *)(a1 + 5960) += *(_QWORD *)(i + 8);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 5880), v11);
    CurrentThread = KeGetCurrentThread();
    if ( !v8 )
    {
      v13 = *(unsigned __int8 *)(a1 + 5862);
      if ( (_DWORD)v13 == 4 )
        v14 = *(_DWORD *)(a1 + 6568);
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
      v16 = *(struct _KTHREAD **)(a1 + 6040);
      if ( PriorityThread > KeQueryPriorityThread(v16) )
        KeSetActualBasePriorityThread((__int64)v16, PriorityThread);
      KeSetEvent((PRKEVENT)(a1 + 5968), 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 6572));
    }
  }
}
