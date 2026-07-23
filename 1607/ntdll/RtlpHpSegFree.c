/*
 * XREFs of RtlpHpSegFree @ 0x18004C910
 * Callers:
 *     RtlpHpSegLfhVsFree @ 0x18004C900 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpVsContextFree @ 0x18001CC30 (RtlpHpVsContextFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x18003E91C (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800435F4 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x18007726C (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089200 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F93BC (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v11; // r8
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  v7 = v6;
  if ( !v6 )
  {
    RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
    return 0;
  }
  v8 = (v6 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  if ( a2 > v8 )
  {
    if ( (*(_BYTE *)(v6 + 24) & 1) != 0 )
    {
      v9 = RtlpHpLfhSubsegmentFreeBlock(a1 + 288, v8, a2, a3);
    }
    else
    {
      v9 = RtlpHpVsContextFree(a1 + 176, v8, a2, a3, &v12);
      if ( v9 && (unsigned int)v12 <= 0x3FF0 )
        RtlpHpLfhBucketUpdateStats(a1 + 288, (unsigned int)v12, 0LL);
    }
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v9 )
    {
      v11 = ((*(_BYTE *)(v7 + 24) & 1) == 0) | 2u;
LABEL_13:
      RtlpLogHeapFreeEvent(a1, a2, v11);
    }
  }
  else
  {
    RtlpHpSegPageRangeShrink(a1, v6, 0, a3);
    v9 = 1;
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v11 = 3LL;
      goto LABEL_13;
    }
  }
  return v9;
}
