/*
 * XREFs of RtlpHpConvertFlagsToSegmentFlags @ 0x18001C0D4
 * Callers:
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     RtlGetUserInfoHeap @ 0x1800744C0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180074870 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E02C0 (RtlSetUserFlagsHeap.c)
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
