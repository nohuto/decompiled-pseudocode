/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x180074A8C
 * Callers:
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800744C0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180074870 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180092580 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180092900 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800F01C8 (RtlpValidateHeapSegment.c)
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
