/*
 * XREFs of RtlpHpConvertFlagsToSegmentFlags @ 0x18004668C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlSetUserValueHeap @ 0x180029050 (RtlSetUserValueHeap.c)
 *     RtlSizeHeap @ 0x180046180 (RtlSizeHeap.c)
 *     RtlValidateHeap @ 0x180076860 (RtlValidateHeap.c)
 *     RtlGetUserInfoHeap @ 0x18007AB50 (RtlGetUserInfoHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E9420 (RtlSetUserFlagsHeap.c)
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
