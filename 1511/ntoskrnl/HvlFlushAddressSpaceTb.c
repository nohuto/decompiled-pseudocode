/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x140221430
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x1401C7210 (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401AE904 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushSecureAddressSpace @ 0x1401B3718 (HvlpFlushSecureAddressSpace.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140221584 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1402215E4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1402219C8 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140221A5C (HvlpSlowFlushAddressSpaceTbEx.c)
 */

NTSTATUS __fastcall HvlFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r10
  NTSTATUS result; // eax

  v5 = a1;
  if ( a2 && HvlpUseExtendedProcessorSetHypercalls() )
  {
    if ( (((unsigned int)HvlpFlags >> 9) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      result = HvlpSlowFlushAddressSpaceTbEx(v5);
    else
      result = HvlpFastFlushAddressSpaceTbEx(v5);
  }
  else if ( (HvlEnlightenments & 0x80u) == 0 )
  {
    result = HvlpSlowFlushAddressSpaceTb(v5);
  }
  else
  {
    result = HvlpFastFlushAddressSpaceTb(v5);
  }
  if ( a4 )
    return HvlpFlushSecureAddressSpace();
  return result;
}
