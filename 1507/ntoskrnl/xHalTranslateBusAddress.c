/*
 * XREFs of xHalTranslateBusAddress @ 0x1401E4880
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __noreturn xHalTranslateBusAddress()
{
  KeBugCheckEx(0x5Cu, 0LL, 0LL, 0LL, 7uLL);
}
