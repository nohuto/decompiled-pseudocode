/*
 * XREFs of MmMdlPageContentsState @ 0x1400A5E44
 * Callers:
 *     SmKmIssueVolumeIo @ 0x140220B4C (SmKmIssueVolumeIo.c)
 *     MdlInvariantPostProcessing1 @ 0x140222F80 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14022317C (MdlInvariantPreProcessing1.c)
 *     SmKmStoreFileWriteHeader @ 0x1406998CC (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPageContentsState(__int64 a1, unsigned int a2)
{
  if ( a2 == 2 )
    return (*(_WORD *)(a1 + 10) & 0x4000u) >> 14;
  if ( a2 == 1 )
    *(_WORD *)(a1 + 10) |= 0x4000u;
  else
    *(_WORD *)(a1 + 10) &= ~0x4000u;
  return a2;
}
