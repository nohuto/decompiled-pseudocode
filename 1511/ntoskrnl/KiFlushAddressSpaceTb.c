/*
 * XREFs of KiFlushAddressSpaceTb @ 0x1401C7210
 * Callers:
 *     KeFlushProcessTb @ 0x140005994 (KeFlushProcessTb.c)
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     KeFlushEntireTb @ 0x1401C7064 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x1400E2F30 (KxSetTimeStampBusy.c)
 *     HvlFlushAddressSpaceTb @ 0x140221430 (HvlFlushAddressSpaceTb.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // bl
  char v6; // di
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax

  v5 = a4;
  v6 = a3;
  if ( a1 || !a5 )
    return HvlFlushAddressSpaceTb(a1, 0LL, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp, a2, a3) )
  {
    LOBYTE(v9) = v5;
    LOBYTE(v8) = v6;
    HvlFlushAddressSpaceTb(0LL, 0LL, v8, v9);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
