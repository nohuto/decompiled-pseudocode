/*
 * XREFs of RtlpHpSegAllocSize @ 0x180029300
 * Callers:
 *     RtlpHpExtrasGet @ 0x18002925C (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x1800519DC (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x1800435F4 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegAllocSizeInternal @ 0x1800445FC (RtlpHpSegAllocSizeInternal.c)
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
