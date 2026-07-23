/*
 * XREFs of SymCryptSha256 @ 0x140136DE8
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140136CB0 (RtlDeriveCapabilitySidsFromName.c)
 *     KeComputeSha256 @ 0x1401D2584 (KeComputeSha256.c)
 * Callees:
 *     SymCryptSha256Init @ 0x1400B3D68 (SymCryptSha256Init.c)
 *     SymCryptSha256Result @ 0x140136E50 (SymCryptSha256Result.c)
 *     SymCryptSha256Append @ 0x1401381E8 (SymCryptSha256Append.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha256(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[128]; // [rsp+20h] [rbp-A8h] BYREF

  SymCryptSha256Init((__int64)v7);
  SymCryptSha256Append(v7, a1, a2);
  return SymCryptSha256Result(v7, a3);
}
