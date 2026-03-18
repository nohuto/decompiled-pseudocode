/*
 * XREFs of HvlFreeSecureHibernateResources @ 0x140670914
 * Callers:
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS HvlFreeSecureHibernateResources()
{
  unsigned __int8 v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return HvlpEnterIumSecureMode(1u, 29, 0, v1);
}
