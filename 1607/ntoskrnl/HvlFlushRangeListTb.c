/*
 * XREFs of HvlFlushRangeListTb @ 0x1401C13D4
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     KeFlushMultipleRangeTb @ 0x1400B3B64 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401BFEDC (HvlpUseExtendedProcessorSetHypercalls.c)
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
