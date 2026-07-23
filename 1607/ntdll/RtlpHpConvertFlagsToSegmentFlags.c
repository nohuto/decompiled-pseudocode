/*
 * XREFs of RtlpHpConvertFlagsToSegmentFlags @ 0x18004667C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlSetUserValueHeap @ 0x180029040 (RtlSetUserValueHeap.c)
 *     RtlSizeHeap @ 0x180046170 (RtlSizeHeap.c)
 *     RtlValidateHeap @ 0x180076850 (RtlValidateHeap.c)
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E94E0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpConvertFlagsToSegmentFlags(__int16 a1)
{
  int result; // eax

  result = (a1 & 1) != 0;
  if ( (a1 & 8) != 0 )
    result |= 2u;
  if ( (a1 & 4) != 0 )
    result |= 0x80000000;
  if ( (a1 & 0x100) != 0 )
    result |= 0x100u;
  if ( (a1 & 0xE00) != 0 )
    result |= a1 & 0xE00;
  if ( (a1 & 0x10) != 0 )
    result |= 0x2000000u;
  if ( (a1 & 2) != 0 )
    return result | 0x1000000;
  return result;
}
