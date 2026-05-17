/*
 * XREFs of RtlpHpSegAllocSize @ 0x180029310
 * Callers:
 *     RtlpHpExtrasGet @ 0x18002926C (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x1800519EC (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x180043604 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegAllocSizeInternal @ 0x18004460C (RtlpHpSegAllocSizeInternal.c)
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
