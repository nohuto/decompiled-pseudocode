/*
 * XREFs of ExDeleteResourceLite @ 0x14000D800
 * Callers:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     CcDeallocateBcb @ 0x14000D7C8 (CcDeallocateBcb.c)
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     SepTokenDeleteMethod @ 0x1403C9070 (SepTokenDeleteMethod.c)
 *     MUIInitializeResourceLock @ 0x1404ABA74 (MUIInitializeResourceLock.c)
 *     CmpDelayFreeRMWorker @ 0x1404C2A84 (CmpDelayFreeRMWorker.c)
 *     PnpDereferenceNotify @ 0x1404E1F8C (PnpDereferenceNotify.c)
 *     RtlDestroyHeap @ 0x1404F4944 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 *     DrvDbOpenContext @ 0x1405242D0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140524640 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbDestroyNode @ 0x140618064 (PiDrvDbDestroyNode.c)
 *     PspCreateSilo @ 0x140640174 (PspCreateSilo.c)
 *     PspDeleteSilo @ 0x140640348 (PspDeleteSilo.c)
 *     DrvDbDestroyDatabaseNode @ 0x14069C9E4 (DrvDbDestroyDatabaseNode.c)
 *     VerifierExDeleteResourceLite @ 0x1406C93A0 (VerifierExDeleteResourceLite.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  unsigned __int8 CurrentIrql; // di
  signed __int32 v4; // edx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rcx
  PVOID ExclusiveWaiters; // rcx
  bool v12; // zf
  signed __int32 v13; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+30h] [rbp+8h] BYREF

  __incgsdword(0x6320u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    v15 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v15 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql, v1);
    v4 = ExpResourceSpinLock;
    while ( (v4 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v4 & 0x40000000) == 0 )
      {
        v13 = _InterlockedCompareExchange(&ExpResourceSpinLock, v4 | 0x40000000, v4);
        v12 = v4 == v13;
        v4 = v13;
        if ( !v12 )
          continue;
      }
      KeYieldProcessorEx(&v15);
      v4 = ExpResourceSpinLock;
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
    {
      LOBYTE(Flink) = 1;
      PsBoostThreadIoEx(OwnerThread, Flink, 0LL, 0LL);
    }
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
