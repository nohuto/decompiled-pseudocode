/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DD30
 * Callers:
 *     ExInitializeResourceLite @ 0x14000ECC0 (ExInitializeResourceLite.c)
 *     MiIdentifyPfn @ 0x14000FC90 (MiIdentifyPfn.c)
 *     MiInsertVadEvent @ 0x140014510 (MiInsertVadEvent.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400295E0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140029A00 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiAddViewsForSection @ 0x14002C690 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14002C920 (MiCheckPurgeAndUpMapCount.c)
 *     MiComputeContiguousSubsectionPte @ 0x14002CA00 (MiComputeContiguousSubsectionPte.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiGetWsAndInsertVad @ 0x140030AE0 (MiGetWsAndInsertVad.c)
 *     KiAbEntryRemoveFromTree @ 0x140031030 (KiAbEntryRemoveFromTree.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     MiCountSharedPages @ 0x140092C50 (MiCountSharedPages.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140096CF0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14002EC30 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x140228678 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // r8
  char v5; // di
  unsigned __int64 v6; // rax
  int InterruptCount; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rax
  int v13; // [rsp+60h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v6) << 32;
    v8 = v6;
  }
  else
  {
    v8 = v13;
    v5 = 0;
    InterruptCount = v13;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  LOBYTE(a2) = v3;
  v9 = ExpAcquireSpinLockExclusive(a1, a2);
  v10 = v9;
  if ( v9 )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v9;
  }
  if ( v5 )
  {
    v11 = __rdtsc();
    LOBYTE(v9) = PerfLogSpinLockAcquire((__int64)a1, v11, v11 - v8, v10, InterruptCount, 3);
  }
  return v9;
}
