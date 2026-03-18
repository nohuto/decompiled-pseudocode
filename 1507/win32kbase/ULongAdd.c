/*
 * XREFs of ULongAdd @ 0x1C00317A0
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C004BA64 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C004BAF4 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  if ( ulAugend + ulAddend < ulAugend )
  {
    *pulResult = -1;
    return -2147024362;
  }
  else
  {
    *pulResult = ulAugend + ulAddend;
    return 0;
  }
}
