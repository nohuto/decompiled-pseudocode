/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x180029010
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlSetUserValueHeap @ 0x180029040 (RtlSetUserValueHeap.c)
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800917C4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B50 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetExtraStuffPointer(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 15) == 4 )
    return a1 - 32;
  else
    return a1 + 16LL * *(unsigned __int16 *)(a1 + 8) - 16;
}
