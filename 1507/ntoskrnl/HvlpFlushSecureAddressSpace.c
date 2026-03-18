/*
 * XREFs of HvlpFlushSecureAddressSpace @ 0x1401EE0C0
 * Callers:
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     HvlFlushAddressSpaceTb @ 0x14017EA3C (HvlFlushAddressSpaceTb.c)
 *     HvlpFlushRangeListTb @ 0x140270BD0 (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x140270FD8 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS HvlpFlushSecureAddressSpace()
{
  unsigned __int8 v1[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecurePid; // [rsp+28h] [rbp-80h]

  SecurePid = KeGetCurrentThread()->ApcState.Process->SecurePid;
  return HvlpEnterIumSecureMode(1u, 224, 0, v1);
}
