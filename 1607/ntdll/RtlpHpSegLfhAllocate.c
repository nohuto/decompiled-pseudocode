/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x18003E790
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180041EFC (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegLfhAllocate(void *a1, unsigned int a2)
{
  return RtlpHpSegAlloc(a1, a2);
}
