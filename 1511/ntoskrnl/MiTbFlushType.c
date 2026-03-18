/*
 * XREFs of MiTbFlushType @ 0x1400A086C
 * Callers:
 *     MiReplaceLockedPage @ 0x140007BB8 (MiReplaceLockedPage.c)
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiNoFaultFound @ 0x14000A164 (MiNoFaultFound.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400E42B4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiSimpleAging @ 0x1400EB918 (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCrcStillIntact @ 0x140128AC0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushType(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
    return (*(_BYTE *)(a1 + 216) & 7u) < 2 ? 2 : 0;
  else
    return 1LL;
}
