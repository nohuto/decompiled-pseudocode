/*
 * XREFs of HvlStartSecureThread @ 0x140670C80
 * Callers:
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS HvlStartSecureThread()
{
  unsigned __int8 v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return HvlpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, v1);
}
