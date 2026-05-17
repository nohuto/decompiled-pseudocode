/*
 * XREFs of RtlpGetReservedBlockSize @ 0x1800867D0
 * Callers:
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpWalkLFHBlock @ 0x180091FA4 (RtlpWalkLFHBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpGetReservedBlockSize(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 38) & 3) != 0 )
    return (((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
  else
    return *(unsigned __int16 *)(a1 + 36);
}
