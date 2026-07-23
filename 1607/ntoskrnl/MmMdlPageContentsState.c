/*
 * XREFs of MmMdlPageContentsState @ 0x1400A43BC
 * Callers:
 *     SmKmIssueVolumeIo @ 0x140220978 (SmKmIssueVolumeIo.c)
 *     MdlInvariantPostProcessing1 @ 0x140222DAC (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140222FA8 (MdlInvariantPreProcessing1.c)
 *     SmKmStoreFileWriteHeader @ 0x1406999B0 (SmKmStoreFileWriteHeader.c)
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
