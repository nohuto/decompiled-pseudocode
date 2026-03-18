/*
 * XREFs of MmMdlPageContentsState @ 0x1400E7420
 * Callers:
 *     SmKmIssueVolumeIo @ 0x14020872C (SmKmIssueVolumeIo.c)
 *     MdlInvariantPostProcessing1 @ 0x14020B4C4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14020B6C0 (MdlInvariantPreProcessing1.c)
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
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
