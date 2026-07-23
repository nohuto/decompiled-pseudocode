/*
 * XREFs of RtlpHpSegVsAllocate @ 0x18006BBF0
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x18006BA8C (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpSegVsAllocate(void *a1, unsigned int a2, char a3)
{
  unsigned int v3; // r8d

  v3 = a3 & 1 | 0x8000000;
  if ( a2 >= 0x10000 )
    v3 |= 4u;
  return RtlpHpSegAlloc(a1, a2, a2, v3);
}
