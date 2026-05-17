/*
 * XREFs of RtlpHpSegLfhVsFree @ 0x18004C910
 * Callers:
 *     RtlpHpVsContextFree @ 0x18001CC40 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCB4 (RtlpHpLfhBucketAddSubsegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegLfhVsFree(__int64 a1, __int64 a2, char a3)
{
  return RtlpHpSegFree(a1, a2, a3 & 1);
}
