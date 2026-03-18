/*
 * XREFs of HvlFlushRangeListTb @ 0x1402214A4
 * Callers:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401AE904 (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 __fastcall HvlFlushRangeListTb(int a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  int v6; // r10d

  v6 = a1;
  if ( a2 && HvlpUseExtendedProcessorSetHypercalls() )
    return HvlpFlushRangeListTbEx(v6, a2, a3, a4, a5, a6);
  else
    return HvlpFlushRangeListTb(v6, a2, a3, a4, a5, a6);
}
