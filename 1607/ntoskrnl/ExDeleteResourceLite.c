/*
 * XREFs of ExDeleteResourceLite @ 0x14010C7A0
 * Callers:
 *     CmpDeleteHive @ 0x14010C288 (CmpDeleteHive.c)
 *     CcDeallocateBcb @ 0x14010C768 (CcDeallocateBcb.c)
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     PnpDereferenceNotify @ 0x140489340 (PnpDereferenceNotify.c)
 *     MUIInitializeResourceLock @ 0x1404B42FC (MUIInitializeResourceLock.c)
 *     CmpDelayFreeRMWorker @ 0x1404CD388 (CmpDelayFreeRMWorker.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     SepTokenDeleteMethod @ 0x14051A9E0 (SepTokenDeleteMethod.c)
 *     RtlDestroyHeap @ 0x140533E40 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 *     DrvDbOpenContext @ 0x140578EA0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405790F0 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbDestroyNode @ 0x14064CE68 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x14067A3B0 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x1406D6FDC (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x1406E3704 (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ExpOwnerEntryToThread @ 0x14010CA8C (ExpOwnerEntryToThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rax
  PVOID ExclusiveWaiters; // rcx
  ULONG v10; // esi
  ULONG *p_TableSize; // rdi
  struct _KTHREAD *v12; // rax
  volatile signed __int32 *p_Lock; // rbp
  void *retaddr; // [rsp+38h] [rbp+0h]

  __incgsdword(0x63A0u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&ExpResourceSpinLock, CurrentIrql);
  Flink = Resource->SystemResourcesList.Flink;
  Blink = Resource->SystemResourcesList.Blink;
  if ( (PERESOURCE)Resource->SystemResourcesList.Flink->Blink != Resource || (PERESOURCE)Blink->Flink != Resource )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  __writecr8(CurrentIrql);
  Resource->SystemResourcesList.Flink = 0LL;
  Resource->SystemResourcesList.Blink = 0LL;
  TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( (*(_BYTE *)&TableSize & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_10;
  }
  if ( OwnerThread )
  {
    if ( ExpResourceEnforceOwnerTransfer
      && (*(_BYTE *)&TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1788));
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDelete((PVOID)OwnerThread);
  }
LABEL_10:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v10 = 1;
    p_TableSize = &OwnerTable->TableSize;
    if ( OwnerTable->TableSize > 1 )
    {
      do
      {
        p_TableSize += 4;
        v12 = (struct _KTHREAD *)ExpOwnerEntryToThread(p_TableSize - 2);
        p_Lock = &v12->Header.Lock;
        if ( v12 )
        {
          if ( ExpResourceEnforceOwnerTransfer && (*p_TableSize & 2) == 0 && v12 != KeGetCurrentThread() )
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v12, 2uLL);
          if ( (*p_TableSize & 1) != 0 )
            PsBoostThreadIoEx((__int64)v12, 1, 0, 0LL);
          if ( (*p_TableSize & 4) != 0 )
            _InterlockedDecrement(p_Lock + 447);
          if ( (*p_TableSize & 2) != 0 )
            ObDereferenceObjectDeferDelete((PVOID)p_Lock);
        }
        ++v10;
      }
      while ( v10 < Resource->OwnerTable->TableSize );
    }
    ExFreePoolWithTag(Resource->OwnerTable, 0);
  }
  ExclusiveWaiters = Resource->ExclusiveWaiters;
  if ( ExclusiveWaiters )
    ExFreePoolWithTag(ExclusiveWaiters, 0);
  return 0;
}
