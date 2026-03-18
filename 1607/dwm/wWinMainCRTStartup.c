/*
 * XREFs of wWinMainCRTStartup @ 0x1400030C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1400035A4 (__security_init_cookie.c)
 */

int wWinMainCRTStartup()
{
  _security_init_cookie();
  return _wmainCRTStartup();
}
