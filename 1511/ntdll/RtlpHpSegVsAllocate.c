/*
 * XREFs of RtlpHpSegVsAllocate @ 0x180057F60
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x180057DFC (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegVsAllocate(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r8d

  v3 = a3 & 1 | 0x8000000;
  if ( a2 >= 0x10000 )
    v3 |= 4u;
  return RtlpHpSegAlloc(a1, a2, a2, v3);
}
