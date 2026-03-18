/*
 * XREFs of HvlFlushRangeListTb @ 0x1401C14F0
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016FA0 (MmSetAddressRangeModified.c)
 *     KeFlushMultipleRangeTb @ 0x1400B5D3C (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012F798 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401BFFF8 (HvlpUseExtendedProcessorSetHypercalls.c)
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
