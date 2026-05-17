/*
 * XREFs of InitSecurityCookie @ 0x1800865BC
 * Callers:
 *     LdrpInitialize @ 0x180076D78 (LdrpInitialize.c)
 * Callees:
 *     LdrpGenRandom @ 0x18000FDE0 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18000FE38 (LdrInitSecurityCookie.c)
 *     ZwDelayExecution @ 0x1800A5740 (ZwDelayExecution.c)
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
    result = LdrInitSecurityCookie(0LL, 0LL, &_security_cookie, v1 ^ (unsigned int)dword_1801552E0, 0LL);
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
