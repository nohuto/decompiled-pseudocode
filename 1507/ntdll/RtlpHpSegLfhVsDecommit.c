/*
 * XREFs of RtlpHpSegLfhVsDecommit @ 0x180037080
 * Callers:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18002752C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180036DB0 (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x1800373EC (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegLfhVsDecommit(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // rax

  v4 = a2 & 0xFFFFFFFFFFF00000uLL;
  v7 = RtlpHpSegDescriptorValidate();
  return RtlpHpSegPageRangeDecommit(a1, v7, v4 + 32LL * (unsigned int)((a2 - v4) >> 12), a3 >> 12);
}
