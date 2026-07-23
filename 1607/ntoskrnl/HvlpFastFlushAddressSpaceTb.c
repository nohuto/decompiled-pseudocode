/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x1401C15B4
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x1401C13C0 (HvlFlushAddressSpaceTb.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     HvlpPrepareFlushHeader @ 0x1401C1938 (HvlpPrepareFlushHeader.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-48h]
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a4) = a3;
  HvlpPrepareFlushHeader(v6, a1, 0LL, a4, 2LL);
  LODWORD(v5) = 65538;
  return HvcallpExtendedFastHypercall(v5, v6, 24LL);
}
