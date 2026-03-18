/*
 * XREFs of HvlFreeSecureHibernateResources @ 0x1405F6A44
 * Callers:
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS HvlFreeSecureHibernateResources()
{
  unsigned __int8 v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return HvlpEnterIumSecureMode(1u, 30, 0, v1);
}
