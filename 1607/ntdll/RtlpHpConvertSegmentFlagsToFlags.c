/*
 * XREFs of RtlpHpConvertSegmentFlagsToFlags @ 0x1800F7494
 * Callers:
 *     RtlHpQuerySegmentHeapRoutine @ 0x18008A390 (RtlHpQuerySegmentHeapRoutine.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpConvertSegmentFlagsToFlags(int a1)
{
  int result; // eax
  int v2; // ecx

  result = (a1 & 1) != 0;
  if ( (a1 & 2) != 0 )
    result |= 8u;
  if ( (a1 & 0x20000000) != 0 )
    result |= 0x8000000u;
  if ( (a1 & 0x10000000) != 0 )
    result |= 0x20u;
  if ( (a1 & 0x40000000) != 0 )
    result |= 0x40000u;
  if ( (a1 & 0x100) != 0 )
    result |= 0x100u;
  v2 = a1 & 0xE00;
  if ( v2 )
    return v2 | result;
  return result;
}
