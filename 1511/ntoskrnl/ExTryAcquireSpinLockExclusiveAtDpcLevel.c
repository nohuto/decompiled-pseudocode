/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80
 * Callers:
 *     MiLockSectionControlArea @ 0x14000C6E4 (MiLockSectionControlArea.c)
 *     MiCopyHeaderIfResident @ 0x14000E7B8 (MiCopyHeaderIfResident.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x140011AD8 (MiCanFileBeTruncatedInternal.c)
 *     MiReferenceControlArea @ 0x14003AD80 (MiReferenceControlArea.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1400A6440 (MmDoesFileHaveUserWritableReferences.c)
 *     PopPepWork @ 0x1400DAB48 (PopPepWork.c)
 *     MmChangeSectionBackingFile @ 0x1400DD00C (MmChangeSectionBackingFile.c)
 *     MiDeleteEmptySubsections @ 0x1400E755C (MiDeleteEmptySubsections.c)
 *     MmFlushImageSection @ 0x1400E956C (MmFlushImageSection.c)
 *     MmForceSectionClosed @ 0x1400E964C (MmForceSectionClosed.c)
 *     MiProcessDereferenceList @ 0x140113D70 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x14014D260 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x1401D0A74 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1401D1414 (MiProcessDeleteOnClose.c)
 *     MiDbgMarkPfnModified @ 0x1401DDAA0 (MiDbgMarkPfnModified.c)
 *     sub_1403B4000 @ 0x1403B4000 (sub_1403B4000.c)
 *     KiForceSymbolReferences @ 0x140784248 (KiForceSymbolReferences.c)
 * Callees:
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140214270 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return _InterlockedCompareExchange(a1, 0x80000000, 0) == 0;
}
