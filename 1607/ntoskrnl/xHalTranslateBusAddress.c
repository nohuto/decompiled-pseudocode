/*
 * XREFs of xHalTranslateBusAddress @ 0x1401BA858
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __noreturn xHalTranslateBusAddress()
{
  KeBugCheckEx(0x5Cu, 0LL, 0LL, 0LL, 7uLL);
}
