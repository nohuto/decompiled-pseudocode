/*
 * XREFs of wWinMainCRTStartup @ 0x140018ED0
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x140019304 (__security_init_cookie.c)
 */

int wWinMainCRTStartup()
{
  _security_init_cookie();
  return _wmainCRTStartup();
}
