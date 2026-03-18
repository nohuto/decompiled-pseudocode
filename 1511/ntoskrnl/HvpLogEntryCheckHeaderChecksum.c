/*
 * XREFs of HvpLogEntryCheckHeaderChecksum @ 0x1405E3674
 * Callers:
 *     HvApplyLogFile @ 0x1405ED860 (HvApplyLogFile.c)
 * Callees:
 *     SymCryptMarvin32 @ 0x1400D1C60 (SymCryptMarvin32.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

_BOOL8 __fastcall HvpLogEntryCheckHeaderChecksum(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 != 1162638920 )
    return 0LL;
  SymCryptMarvin32(a1, (unsigned __int8 *)a1, 0x20uLL, &v3);
  return *(_QWORD *)(a1 + 32) == v3;
}
