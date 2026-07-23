/*
 * XREFs of HvlFlushSingleTb @ 0x1401C1404
 * Callers:
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x14012CDD0 (KeFlushSingleCurrentTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401BFEDC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTb @ 0x1401C17FC (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x1401C1880 (HvlpFlushRangeListTbEx.c)
 */

__int64 __fastcall HvlFlushSingleTb(int a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r9
  int v5; // r10d
  unsigned __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v4 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a1;
  v7 = v4;
  if ( a2 && HvlpUseExtendedProcessorSetHypercalls() )
  {
    LOBYTE(v4) = a3;
    LOBYTE(a3) = 1;
    return HvlpFlushRangeListTbEx(v5, a2, a3, v4, 1, (__int64)&v7);
  }
  else
  {
    LOBYTE(v4) = a3;
    LOBYTE(a3) = 1;
    return HvlpFlushRangeListTb(v5, a2, a3, v4, 1, (__int64)&v7);
  }
}
