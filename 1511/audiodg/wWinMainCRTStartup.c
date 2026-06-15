/*
 * XREFs of wWinMainCRTStartup @ 0x140018E10
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x140019244 (__security_init_cookie.c)
 */

int wWinMainCRTStartup()
{
  _security_init_cookie();
  return _wmainCRTStartup();
}
