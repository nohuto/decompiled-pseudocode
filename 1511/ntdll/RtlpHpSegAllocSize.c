/*
 * XREFs of RtlpHpSegAllocSize @ 0x180019D50
 * Callers:
 *     RtlpHpExtrasGet @ 0x180019CBC (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x18005CAC8 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpSegAllocSizeInternal @ 0x18001B208 (RtlpHpSegAllocSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x18001B6F0 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegAllocSize(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  int v8; // r9d

  v7 = RtlpHpSegDescriptorValidate();
  if ( v7 )
    return RtlpHpSegAllocSizeInternal(a1, v7, a2, v8, a4);
  else
    return -1LL;
}
