/*
 * XREFs of VslFreeSecureHibernateResources @ 0x14062088C
 * Callers:
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return VslpEnterIumSecureMode(1, 32LL, 0LL, (__int64)v1);
}
