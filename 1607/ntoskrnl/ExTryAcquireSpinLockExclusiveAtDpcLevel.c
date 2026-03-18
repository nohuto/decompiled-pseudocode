/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C2F60
 * Callers:
 *     MiLockSectionControlArea @ 0x1400218CC (MiLockSectionControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiReferenceControlArea @ 0x140026064 (MiReferenceControlArea.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400732DC (MiCanFileBeTruncatedInternal.c)
 *     MiDeleteEmptySubsections @ 0x140090380 (MiDeleteEmptySubsections.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140096CF0 (MmDoesFileHaveUserWritableReferences.c)
 *     MmFlushImageSection @ 0x1400A8F60 (MmFlushImageSection.c)
 *     MmForceSectionClosed @ 0x1400A9040 (MmForceSectionClosed.c)
 *     PopPepWork @ 0x1400C1DA4 (PopPepWork.c)
 *     MmChangeSectionBackingFile @ 0x1400FCFC0 (MmChangeSectionBackingFile.c)
 *     MiCopyHeaderIfResident @ 0x1400FD5B8 (MiCopyHeaderIfResident.c)
 *     MiProcessDereferenceList @ 0x14012259C (MiProcessDereferenceList.c)
 *     MiDbgMarkPfnModified @ 0x140147D2C (MiDbgMarkPfnModified.c)
 *     CcBcbProfiler @ 0x1401565E0 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x1401DE4D8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1401DEEB8 (MiProcessDeleteOnClose.c)
 *     sub_1403E1000 @ 0x1403E1000 (sub_1403E1000.c)
 *     KiForceSymbolReferences @ 0x1407CFAC0 (KiForceSymbolReferences.c)
 * Callees:
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DEE0 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return _InterlockedCompareExchange(a1, 0x80000000, 0) == 0;
}
