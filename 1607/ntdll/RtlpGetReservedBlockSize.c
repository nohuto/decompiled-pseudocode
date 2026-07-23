/*
 * XREFs of RtlpGetReservedBlockSize @ 0x180001058
 * Callers:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpWalkLFHBlock @ 0x18004DBC8 (RtlpWalkLFHBlock.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAC8 (RtlpLowFragHeapFlushCaches.c)
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
