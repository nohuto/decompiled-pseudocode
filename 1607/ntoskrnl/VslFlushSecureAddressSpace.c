/*
 * XREFs of VslFlushSecureAddressSpace @ 0x1401C28B8
 * Callers:
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     HvlpSlowFlushListTb @ 0x1401C1A10 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1401C1B5C (HvlpSlowFlushListTbEx.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS VslFlushSecureAddressSpace()
{
  _BYTE v1[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecurePid; // [rsp+28h] [rbp-80h]

  SecurePid = KeGetCurrentThread()->ApcState.Process->SecurePid;
  return VslpEnterIumSecureMode(1, 224LL, 0LL, (__int64)v1);
}
