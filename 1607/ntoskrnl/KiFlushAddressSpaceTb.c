/*
 * XREFs of KiFlushAddressSpaceTb @ 0x1401D61D4
 * Callers:
 *     KeFlushTb @ 0x14001DDEC (KeFlushTb.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     KeFlushEntireTb @ 0x14013CFC0 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x14009D6A8 (KxSetTimeStampBusy.c)
 *     HvlFlushAddressSpaceTb @ 0x1401C14DC (HvlFlushAddressSpaceTb.c)
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
