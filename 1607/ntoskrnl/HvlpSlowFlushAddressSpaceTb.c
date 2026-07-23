/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x1401C1988
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x1401C13C0 (HvlFlushAddressSpaceTb.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpPrepareFlushHeader @ 0x1401C1938 (HvlpPrepareFlushHeader.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rax
  PHYSICAL_ADDRESS v7[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[48]; // [rsp+40h] [rbp-48h] BYREF

  v5 = (_QWORD *)HvlpAcquireHypercallPage(v7, 1, (__int64)v8, 24LL);
  HvlpPrepareFlushHeader(v5, a1, 0LL, a3);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(2LL, (PHYSICAL_ADDRESS)v7[3].QuadPart, 0LL);
  return HvlpReleaseHypercallPage((__int64)v7);
}
