/*
 * XREFs of RtlpHpConvertSegmentFlagsToFlags @ 0x1800EA6DC
 * Callers:
 *     RtlHpQuerySegmentHeapRoutine @ 0x1800EA660 (RtlHpQuerySegmentHeapRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpConvertSegmentFlagsToFlags(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx

  v1 = (a1 & 1) != 0;
  if ( (a1 & 2) != 0 )
    v1 |= 8u;
  if ( (a1 & 0x20000000) != 0 )
    v1 |= 0x8000000u;
  if ( (a1 & 0x10000000) != 0 )
    v1 |= 0x20u;
  if ( (a1 & 0x40000000) != 0 )
    v1 |= 0x40000u;
  if ( (a1 & 0x100) != 0 )
    v1 |= 0x100u;
  v2 = a1 & 0xE00;
  if ( v2 )
    v1 |= v2;
  return v1;
}
