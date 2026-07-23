/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x180037930
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1800347E0 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpSegLfhAllocate(void *a1, unsigned int a2, char a3)
{
  unsigned int v3; // r8d

  v3 = a3 & 1 | 0x4000000;
  if ( a2 >= 0x10000 )
    v3 |= 4u;
  return RtlpHpSegAlloc(a1, a2, a2, v3);
}
