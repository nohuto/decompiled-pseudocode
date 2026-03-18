/*
 * XREFs of HvlStartSecureThread @ 0x1405F6D70
 * Callers:
 *     PspUserThreadStartup @ 0x140445974 (PspUserThreadStartup.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS HvlStartSecureThread()
{
  unsigned __int8 v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return HvlpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, v1);
}
