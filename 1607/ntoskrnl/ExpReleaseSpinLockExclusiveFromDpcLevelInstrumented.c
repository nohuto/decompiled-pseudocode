/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DE9C
 * Callers:
 *     ExInitializeResourceLite @ 0x14000ECC0 (ExInitializeResourceLite.c)
 *     MiIdentifyPfn @ 0x14000FC90 (MiIdentifyPfn.c)
 *     MiCheckControlArea @ 0x140027EE0 (MiCheckControlArea.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400295E0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140029A00 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiAddViewsForSection @ 0x14002C690 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14002C920 (MiCheckPurgeAndUpMapCount.c)
 *     MiComputeContiguousSubsectionPte @ 0x14002CA00 (MiComputeContiguousSubsectionPte.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140031030 (KiAbEntryRemoveFromTree.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140096CF0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400ECA30 (KiAbEntryGetLockedHeadEntry.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
