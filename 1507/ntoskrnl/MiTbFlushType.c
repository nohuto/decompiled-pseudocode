/*
 * XREFs of MiTbFlushType @ 0x14003C144
 * Callers:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiNoFaultFound @ 0x14007EB84 (MiNoFaultFound.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiReplaceLockedPage @ 0x1400FC0AC (MiReplaceLockedPage.c)
 *     MiSimpleAging @ 0x1401271B8 (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCrcStillIntact @ 0x140229DF8 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
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
