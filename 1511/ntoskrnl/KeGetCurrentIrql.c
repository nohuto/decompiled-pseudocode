/*
 * XREFs of KeGetCurrentIrql @ 0x140079D9C
 * Callers:
 *     BgFreeContext @ 0x1406D91C4 (BgFreeContext.c)
 *     BgGetContext @ 0x1406D93BC (BgGetContext.c)
 *     BgDisplayFade @ 0x1406D97F4 (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x1406D9CE8 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x1406DC66C (BgLibraryDisable.c)
 *     BgDisplayString @ 0x1406DE244 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1406DE2B0 (BgLibraryDestroy.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
