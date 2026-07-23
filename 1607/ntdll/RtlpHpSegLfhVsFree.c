/*
 * XREFs of RtlpHpSegLfhVsFree @ 0x18004C900
 * Callers:
 *     RtlpHpVsContextFree @ 0x18001CC30 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCA4 (RtlpHpLfhBucketAddSubsegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegLfhVsFree(__int64 a1, __int64 a2, char a3)
{
  return RtlpHpSegFree(a1, a2, a3 & 1);
}
