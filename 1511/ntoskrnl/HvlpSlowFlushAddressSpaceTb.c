/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x1402219C8
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x140221430 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 *     HvlpPrepareFlushHeader @ 0x140221978 (HvlpPrepareFlushHeader.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  PHYSICAL_ADDRESS v8[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF

  v6 = (_QWORD *)HvlpAcquireHypercallPage(v8, 1, (__int64)&v9, 24LL);
  HvlpPrepareFlushHeader(v6, a1, a2, a3);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(2LL, (PHYSICAL_ADDRESS)v8[3].QuadPart, 0LL);
  return HvlpReleaseHypercallPage((__int64)v8);
}
