/*
 * XREFs of Template_q @ 0x1400049CC
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001F70 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003130 (__security_check_cookie.c)
 */

__int64 Template_q()
{
  int v1; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v2[2]; // [rsp+28h] [rbp-20h] BYREF

  v2[1] = 4LL;
  v1 = 0;
  v2[0] = &v1;
  return EtwEventWrite(Microsoft_Windows_Dwm_DwmHandle, &StartDWMTransport, 1LL, v2);
}
