/*
 * XREFs of RtlpHpConvertCreationFlags @ 0x180087384
 * Callers:
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpConvertCreationFlags(int a1, __int16 a2)
{
  unsigned int v2; // r8d

  v2 = (a1 & 1) != 0;
  if ( (a1 & 4) != 0 )
    v2 |= 0x80000000;
  if ( (a1 & 8) != 0 )
    v2 |= 2u;
  if ( (a1 & 0x8000000) != 0 || (a2 & 0x1000) != 0 )
    v2 |= 0x20000000u;
  if ( (a1 & 0x20) != 0 || (a2 & 0x10) != 0 )
    v2 |= 0x10000000u;
  if ( (a1 & 0x40000) != 0 )
    v2 |= 0x40000000u;
  if ( (a1 & 0x10) != 0 )
    v2 |= 0x2000000u;
  return v2;
}
