/*
 * XREFs of LdrpInitialize @ 0x180078778
 * Callers:
 *     LdrInitializeThunk @ 0x180078750 (LdrInitializeThunk.c)
 * Callees:
 *     InitSecurityCookie @ 0x18008A338 (InitSecurityCookie.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  if ( !SecurityCookieInitialized )
    InitSecurityCookie();
  return LdrpInitialize(a1, a2);
}
