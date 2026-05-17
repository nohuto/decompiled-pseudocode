/*
 * XREFs of LdrpInitialize @ 0x18006BDE8
 * Callers:
 *     LdrInitializeThunk @ 0x18006BDC0 (LdrInitializeThunk.c)
 * Callees:
 *     InitSecurityCookie @ 0x1800BDAA0 (InitSecurityCookie.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  if ( !SecurityCookieInitialized )
    InitSecurityCookie();
  return LdrpInitialize(a1, a2);
}
