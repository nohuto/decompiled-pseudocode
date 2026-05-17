/*
 * XREFs of LdrpInitialize @ 0x180076D78
 * Callers:
 *     LdrInitializeThunk @ 0x180076D50 (LdrInitializeThunk.c)
 * Callees:
 *     InitSecurityCookie @ 0x1800865BC (InitSecurityCookie.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  if ( !SecurityCookieInitialized )
    InitSecurityCookie();
  return LdrpInitialize(a1, a2);
}
