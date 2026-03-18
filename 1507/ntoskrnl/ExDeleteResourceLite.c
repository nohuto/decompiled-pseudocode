/*
 * XREFs of ExDeleteResourceLite @ 0x1400F29E0
 * Callers:
 *     CmpDeleteHive @ 0x1400D2458 (CmpDeleteHive.c)
 *     CcDeallocateBcb @ 0x1400F29AC (CcDeallocateBcb.c)
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     PnpDereferenceNotify @ 0x14046120C (PnpDereferenceNotify.c)
 *     SepTokenDeleteMethod @ 0x1404883A0 (SepTokenDeleteMethod.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     MUIInitializeResourceLock @ 0x14053B410 (MUIInitializeResourceLock.c)
 *     CmpDelayFreeRMWorker @ 0x140559334 (CmpDelayFreeRMWorker.c)
 *     RtlCreateHeap @ 0x14057F114 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405839D0 (RtlDestroyHeap.c)
 *     DrvDbOpenContext @ 0x1405BAEA0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405BB0F0 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbDestroyNode @ 0x140696258 (PiDrvDbDestroyNode.c)
 *     PspSiloDelete @ 0x1406C2AE8 (PspSiloDelete.c)
 *     DrvDbDestroyDatabaseNode @ 0x14071D040 (DrvDbDestroyDatabaseNode.c)
 *     VerifierExDeleteResourceLite @ 0x14074BFA0 (VerifierExDeleteResourceLite.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // esi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rcx
  PVOID ExclusiveWaiters; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  __incgsdword(0x6320u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock);
  }
  else
  {
    v3 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock);
    while ( (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (ExpResourceSpinLock & 0x40000000) == 0 )
        _InterlockedCompareExchange(&ExpResourceSpinLock, ExpResourceSpinLock | 0x40000000, ExpResourceSpinLock);
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
  }
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
    goto LABEL_12;
  }
  if ( OwnerThread )
  {
    if ( (*(_BYTE *)&TableSize & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_12:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
    ExFreePoolWithTag(OwnerTable, 0);
  ExclusiveWaiters = Resource->ExclusiveWaiters;
  if ( ExclusiveWaiters )
    ExFreePoolWithTag(ExclusiveWaiters, 0);
  return 0;
}
