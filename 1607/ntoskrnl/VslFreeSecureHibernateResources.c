/*
 * XREFs of VslFreeSecureHibernateResources @ 0x1406207D8
 * Callers:
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

NTSTATUS VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return VslpEnterIumSecureMode(1, 32LL, 0LL, (__int64)v1);
}
