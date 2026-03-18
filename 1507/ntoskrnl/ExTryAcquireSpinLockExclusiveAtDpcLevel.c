/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0
 * Callers:
 *     PopPepWork @ 0x140028D6C (PopPepWork.c)
 *     MiDeleteEmptySubsections @ 0x140081CCC (MiDeleteEmptySubsections.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400834A8 (MiCanFileBeTruncatedInternal.c)
 *     MiLockSectionControlArea @ 0x140086F60 (MiLockSectionControlArea.c)
 *     MiReferenceControlArea @ 0x140089080 (MiReferenceControlArea.c)
 *     MiCopyHeaderIfResident @ 0x1400E0408 (MiCopyHeaderIfResident.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14010B680 (MmDoesFileHaveUserWritableReferences.c)
 *     MmFlushImageSection @ 0x140119354 (MmFlushImageSection.c)
 *     MmForceSectionClosed @ 0x1401194D0 (MmForceSectionClosed.c)
 *     MmChangeSectionBackingFile @ 0x14012753C (MmChangeSectionBackingFile.c)
 *     MiProcessDereferenceList @ 0x140145AB0 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x14017B2D0 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x140210914 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402119C8 (MiProcessDeleteOnClose.c)
 *     MiDbgMarkPfnModified @ 0x140222E0C (MiDbgMarkPfnModified.c)
 *     sub_140406000 @ 0x140406000 (sub_140406000.c)
 *     KiForceSymbolReferences @ 0x1407FA9CC (KiForceSymbolReferences.c)
 * Callees:
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264254 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return _InterlockedCompareExchange(a1, 0x80000000, 0) == 0;
}
