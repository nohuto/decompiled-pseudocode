/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0
 * Callers:
 *     MiLockSectionControlArea @ 0x14002144C (MiLockSectionControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiReferenceControlArea @ 0x140025BE4 (MiReferenceControlArea.c)
 *     MiCanFileBeTruncatedInternal @ 0x140072E5C (MiCanFileBeTruncatedInternal.c)
 *     MiDeleteEmptySubsections @ 0x14008FAE0 (MiDeleteEmptySubsections.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1400964F0 (MmDoesFileHaveUserWritableReferences.c)
 *     MmFlushImageSection @ 0x1400A74E0 (MmFlushImageSection.c)
 *     MmForceSectionClosed @ 0x1400A75C0 (MmForceSectionClosed.c)
 *     PopPepWork @ 0x1400BFC34 (PopPepWork.c)
 *     MmChangeSectionBackingFile @ 0x1400FAD40 (MmChangeSectionBackingFile.c)
 *     MiCopyHeaderIfResident @ 0x1400FB338 (MiCopyHeaderIfResident.c)
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 *     MiDbgMarkPfnModified @ 0x14014829C (MiDbgMarkPfnModified.c)
 *     CcBcbProfiler @ 0x140156B50 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x1401DE304 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1401DECE4 (MiProcessDeleteOnClose.c)
 *     sub_1403E1000 @ 0x1403E1000 (sub_1403E1000.c)
 *     KiForceSymbolReferences @ 0x1407CFAC0 (KiForceSymbolReferences.c)
 * Callees:
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DD0C (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return _InterlockedCompareExchange(a1, 0x80000000, 0) == 0;
}
