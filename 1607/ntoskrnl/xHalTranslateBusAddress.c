/*
 * XREFs of xHalTranslateBusAddress @ 0x1401BA73C
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __noreturn xHalTranslateBusAddress()
{
  KeBugCheckEx(0x5Cu, 0LL, 0LL, 0LL, 7uLL);
}
