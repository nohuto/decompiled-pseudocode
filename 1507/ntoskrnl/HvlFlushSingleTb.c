/*
 * XREFs of HvlFlushSingleTb @ 0x1402708A8
 * Callers:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x14014A648 (KeFlushSingleCurrentTb.c)
 * Callees:
 *     HvlpFlushRangeListTb @ 0x140270BD0 (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x140270FD8 (HvlpFlushRangeListTbEx.c)
 */

__int64 __fastcall HvlFlushSingleTb(int a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v4 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v6 = v4;
  if ( a2 && (HvlpFlags & 0x100) != 0 && (unsigned __int16)KiActiveGroups > 1u )
  {
    LOBYTE(v4) = a3;
    LOBYTE(a3) = 1;
    return HvlpFlushRangeListTbEx(a1, a2, a3, v4, 1, (__int64)&v6);
  }
  else
  {
    LOBYTE(v4) = a3;
    LOBYTE(a3) = 1;
    return HvlpFlushRangeListTb(a1, a2, a3, v4, 1, (__int64)&v6);
  }
}
