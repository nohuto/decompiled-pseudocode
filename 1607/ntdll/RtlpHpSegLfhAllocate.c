/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x18003E7A0
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180041F0C (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegLfhAllocate(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r8d

  v3 = a3 & 1 | 0x4000000;
  if ( a2 >= 0x10000 )
    v3 |= 4u;
  return RtlpHpSegAlloc(a1, a2, a2, v3);
}
