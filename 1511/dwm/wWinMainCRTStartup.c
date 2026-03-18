/*
 * XREFs of wWinMainCRTStartup @ 0x140003100
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1400035F4 (__security_init_cookie.c)
 */

int wWinMainCRTStartup()
{
  _security_init_cookie();
  return _wmainCRTStartup();
}
