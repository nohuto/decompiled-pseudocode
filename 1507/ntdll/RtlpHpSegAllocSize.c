/*
 * XREFs of RtlpHpSegAllocSize @ 0x180036EDC
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x180037E74 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x1800582D4 (RtlpHpExtrasGet.c)
 * Callees:
 *     RtlpHpSegAllocSizeInternal @ 0x180036F30 (RtlpHpSegAllocSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800373EC (RtlpHpSegDescriptorValidate.c)
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
