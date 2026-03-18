/*
 * XREFs of MiTbFlushType @ 0x140100DBC
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiNoFaultFound @ 0x14001F4F8 (MiNoFaultFound.c)
 *     MiSimpleAging @ 0x1400AC264 (MiSimpleAging.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiValidFault @ 0x1400E6250 (MiValidFault.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiDeletePteRange @ 0x1401007D0 (MiDeletePteRange.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140100DD4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140129C50 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiReplaceLockedPage @ 0x1401EB18C (MiReplaceLockedPage.c)
 *     MiCrcStillIntact @ 0x1401F94D4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushType(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return (*(_BYTE *)(a1 + 184) & 7u) < 2 ? 2 : 0;
  else
    return 1LL;
}
