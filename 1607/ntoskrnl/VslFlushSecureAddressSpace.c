/*
 * XREFs of VslFlushSecureAddressSpace @ 0x1401C29D4
 * Callers:
 *     KeFlushTb @ 0x14001DDEC (KeFlushTb.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     HvlpSlowFlushListTb @ 0x1401C1B2C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1401C1C78 (HvlpSlowFlushListTbEx.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

NTSTATUS VslFlushSecureAddressSpace()
{
  _BYTE v1[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecurePid; // [rsp+28h] [rbp-80h]

  SecurePid = KeGetCurrentThread()->ApcState.Process->SecurePid;
  return VslpEnterIumSecureMode(1, 224LL, 0LL, (__int64)v1);
}
