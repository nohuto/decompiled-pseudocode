/*
 * XREFs of InitSecurityCookie @ 0x18008A328
 * Callers:
 *     LdrpInitialize @ 0x180078768 (LdrpInitialize.c)
 * Callees:
 *     LdrpGenRandom @ 0x18002F8CC (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18002FDC0 (LdrInitSecurityCookie.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 */

signed __int32 InitSecurityCookie()
{
  signed __int32 result; // eax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp+8h] BYREF

  result = _InterlockedIncrement(&SecurityCookieInitCount);
  if ( result == 1 )
  {
    v1 = LdrpGenRandom();
    result = LdrInitSecurityCookie(
               0LL,
               0LL,
               &_security_cookie,
               v1 ^ LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[7]),
               0LL);
    _InterlockedOr(v2, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    DelayInterval.QuadPart = -300000LL;
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution(0, &DelayInterval);
  }
  return result;
}
