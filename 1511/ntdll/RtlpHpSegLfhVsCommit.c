/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x18001B510
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x180057DFC (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x18001B6F0 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(PVOID BaseAddress, __int64 a2)
{
  RtlpHpSegDescriptorValidate(BaseAddress, a2);
  return RtlpHpSegPageRangeCommit(BaseAddress);
}
