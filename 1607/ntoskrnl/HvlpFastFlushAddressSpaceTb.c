/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x1401C16D0
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x1401C14DC (HvlFlushAddressSpaceTb.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401685A0 (HvcallpExtendedFastHypercall.c)
 *     HvlpPrepareFlushHeader @ 0x1401C1A54 (HvlpPrepareFlushHeader.c)
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
