/*
 * XREFs of RtlpHpSegFree @ 0x18001B3B4
 * Callers:
 *     RtlpHpFreeHeap @ 0x18001ABF8 (RtlpHpFreeHeap.c)
 *     RtlpHpSegLfhVsFree @ 0x180050F00 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18001A548 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegDescriptorValidate @ 0x18001B6F0 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x18004F394 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpVsContextFree @ 0x180050AE0 (RtlpHpVsContextFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x180058A98 (RtlpHpSegPageRangeShrink.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F18BC (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpHpSegFree(_RTL_SRWLOCK *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v8; // edi
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  v7 = v6;
  if ( !v6 )
  {
    RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
    return 0;
  }
  v9 = (v6 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  if ( a2 <= v9 )
  {
    RtlpHpSegPageRangeShrink(a1, v6, 0LL, a3);
    v8 = 1;
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v10 = 3LL;
      goto LABEL_16;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 24) & 1) != 0 )
    {
      v8 = RtlpHpLfhSubsegmentFreeBlock(&a1[34].Value, v9, a2, a3);
    }
    else
    {
      v8 = RtlpHpVsContextFree(a1 + 21, (__int64)&v12);
      if ( v8 && (unsigned int)v12 <= 0x3FF0 )
        RtlpHpLfhBucketUpdateStats(&a1[34], (unsigned int)v12, 0LL);
    }
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v8 )
    {
      v10 = ((*(_BYTE *)(v7 + 24) & 1) == 0) | 2u;
LABEL_16:
      RtlpLogHeapFreeEvent(a1, a2, v10);
    }
  }
  return v8;
}
