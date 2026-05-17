/*
 * XREFs of RtlpHpSegGetDescriptorValidateSafe @ 0x1800F13D0
 * Callers:
 *     RtlpHpSizeHeap @ 0x18002A810 (RtlpHpSizeHeap.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800373EC (RtlpHpSegDescriptorValidate.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
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
