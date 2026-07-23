/*
 * XREFs of KiFlushAddressSpaceTb @ 0x1401D6000
 * Callers:
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KeFlushEntireTb @ 0x14013D530 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x14009CEA8 (KxSetTimeStampBusy.c)
 *     HvlFlushAddressSpaceTb @ 0x1401C13C0 (HvlFlushAddressSpaceTb.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  if ( a1 || !a4 )
    return HvlFlushAddressSpaceTb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    HvlFlushAddressSpaceTb();
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
