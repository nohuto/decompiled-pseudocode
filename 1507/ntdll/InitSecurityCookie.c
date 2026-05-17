/*
 * XREFs of InitSecurityCookie @ 0x1800BDAA0
 * Callers:
 *     LdrpInitialize @ 0x18006BDE8 (LdrpInitialize.c)
 * Callees:
 *     LdrInitSecurityCookie @ 0x180041130 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x18004133C (LdrpGenRandom.c)
 *     ZwDelayExecution @ 0x180093C40 (ZwDelayExecution.c)
 */

__int64 InitSecurityCookie()
{
  __int64 result; // rax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF

  result = (unsigned int)_InterlockedIncrement(&SecurityCookieInitCount);
  if ( (_DWORD)result == 1 )
  {
    v1 = LdrpGenRandom();
    result = LdrInitSecurityCookie(0LL, 0LL, &_security_cookie, v1 ^ (unsigned int)dword_1801572E0, 0LL);
    _InterlockedOr(v2, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution();
  }
  return result;
}
