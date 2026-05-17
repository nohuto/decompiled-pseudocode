/*
 * XREFs of RtlpOpenThreadToken @ 0x180078B94
 * Callers:
 *     RtlAcquirePrivilege @ 0x180078990 (RtlAcquirePrivilege.c)
 * Callees:
 *     NtOpenThreadTokenEx @ 0x1800A56A0 (NtOpenThreadTokenEx.c)
 */

__int64 __fastcall RtlpOpenThreadToken(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = 1;
  result = NtOpenThreadTokenEx(-2LL, a1, a3);
  if ( (int)result < 0 )
    return NtOpenThreadTokenEx(-2LL, a1, 0LL);
  return result;
}
