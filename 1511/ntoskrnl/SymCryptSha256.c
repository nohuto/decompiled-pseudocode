/*
 * XREFs of SymCryptSha256 @ 0x1401346FC
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1401345C4 (RtlDeriveCapabilitySidsFromName.c)
 *     KeComputeSha256 @ 0x1401C3BBC (KeComputeSha256.c)
 * Callees:
 *     SymCryptSha256Init @ 0x1400F4680 (SymCryptSha256Init.c)
 *     SymCryptSha256Result @ 0x140134764 (SymCryptSha256Result.c)
 *     SymCryptSha256Append @ 0x140134830 (SymCryptSha256Append.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha256(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[128]; // [rsp+20h] [rbp-A8h] BYREF

  SymCryptSha256Init((__int64)v7);
  SymCryptSha256Append(v7, a1, a2);
  return SymCryptSha256Result(v7, a3);
}
