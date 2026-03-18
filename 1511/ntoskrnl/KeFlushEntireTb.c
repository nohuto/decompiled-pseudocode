/*
 * XREFs of KeFlushEntireTb @ 0x1401C7064
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     KxFlushEntireTb @ 0x140007A1C (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x1401C7210 (KiFlushAddressSpaceTb.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 *     ExFlushTb @ 0x140214D10 (ExFlushTb.c)
 */

__int64 KeFlushEntireTb()
{
  int v0; // edx
  int v1; // r8d
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl

  if ( KiFlushViaHypervisor() )
  {
    LOBYTE(v1) = 1;
    result = KiFlushAddressSpaceTb(0, v0, v1, 0, 1);
  }
  else
  {
    result = KxFlushEntireTb(2);
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(0LL, 0LL, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
