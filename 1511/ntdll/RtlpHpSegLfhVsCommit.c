/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x18001B510
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x180057DFC (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x18001B6F0 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // rax

  v4 = a2 & 0xFFFFFFFFFFF00000uLL;
  v7 = RtlpHpSegDescriptorValidate(a1, a2);
  return RtlpHpSegPageRangeCommit(a1, v7, v4 + 32LL * (unsigned int)((a2 - v4) >> 12), a3 >> 12);
}
