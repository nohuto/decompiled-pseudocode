/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x180043410
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041EFC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006E8B0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentCreate @ 0x1800720F4 (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x1800435F4 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(PVOID BaseAddress, __int64 a2)
{
  RtlpHpSegDescriptorValidate(BaseAddress, a2);
  return RtlpHpSegPageRangeCommit(BaseAddress);
}
