/*
 * XREFs of RtlpHpConvertFlagsToSegmentFlags @ 0x18002AB24
 * Callers:
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlpValidateHeapInternal @ 0x180038748 (RtlpValidateHeapInternal.c)
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 *     RtlpSetUserValueHeapInternal @ 0x180058098 (RtlpSetUserValueHeapInternal.c)
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 *     RtlpSizeHeapInternal @ 0x1800DD7F8 (RtlpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpConvertFlagsToSegmentFlags(__int16 a1)
{
  unsigned int v1; // edx

  v1 = (a1 & 1) != 0;
  if ( (a1 & 8) != 0 )
    v1 |= 2u;
  if ( (a1 & 4) != 0 )
    v1 |= 0x80000000;
  if ( (a1 & 0x100) != 0 )
    v1 |= 0x100u;
  if ( (a1 & 0xE00) != 0 )
    v1 |= a1 & 0xE00;
  if ( (a1 & 0x10) != 0 )
    v1 |= 0x2000000u;
  if ( (a1 & 2) != 0 )
    v1 |= 0x1000000u;
  return v1;
}
