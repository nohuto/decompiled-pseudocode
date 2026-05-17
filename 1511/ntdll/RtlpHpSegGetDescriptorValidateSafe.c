/*
 * XREFs of RtlpHpSegGetDescriptorValidateSafe @ 0x1800F29F4
 * Callers:
 *     RtlpHpSegDescriptorValidate @ 0x18001B6F0 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSizeHeap @ 0x18001BDD0 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

unsigned __int64 __fastcall RtlpHpSegGetDescriptorValidateSafe(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !a1
    || (a1 ^ RtlpHeapKey ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
  {
    return (a2 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
  }
  return v2;
}
