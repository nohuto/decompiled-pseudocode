/*
 * XREFs of HvlFlushRangeListTb @ 0x140270884
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140156C90 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlFlushRangeListTb(int a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  if ( a2 && (HvlpFlags & 0x100) != 0 && (unsigned __int16)KiActiveGroups > 1u )
    return HvlpFlushRangeListTbEx(a1, a2, a3, a4, a5, a6);
  else
    return HvlpFlushRangeListTb(a1, a2, a3, a4, a5, a6);
}
