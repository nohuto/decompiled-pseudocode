/*
 * XREFs of RtlpHpSegVsAllocate @ 0x180057F60
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x180057DFC (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegVsAllocate(void *a1, unsigned int a2)
{
  return RtlpHpSegAlloc(a1, a2);
}
