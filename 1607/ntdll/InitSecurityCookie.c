/*
 * XREFs of InitSecurityCookie @ 0x18008A338
 * Callers:
 *     LdrpInitialize @ 0x180078778 (LdrpInitialize.c)
 * Callees:
 *     LdrpGenRandom @ 0x18002F8DC (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18002FDD0 (LdrInitSecurityCookie.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 */

__int64 InitSecurityCookie()
{
  __int64 result; // rax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)_InterlockedIncrement(&SecurityCookieInitCount);
  if ( (_DWORD)result == 1 )
  {
    v1 = LdrpGenRandom();
    result = LdrInitSecurityCookie(0LL, 0LL, &_security_cookie, v1 ^ (unsigned int)dword_180163300, 0LL);
    _InterlockedOr(v2, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    v3 = -300000LL;
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution(0LL, &v3);
  }
  return result;
}
