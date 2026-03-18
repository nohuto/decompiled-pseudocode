/*
 * XREFs of KeGetCurrentIrql @ 0x14010280C
 * Callers:
 *     BgFreeContext @ 0x14075C000 (BgFreeContext.c)
 *     BgGetContext @ 0x14075C3A8 (BgGetContext.c)
 *     BgDisplayFade @ 0x14075C83C (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x14075CD30 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x14075F6B4 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x1407612C4 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x140761330 (BgLibraryDestroy.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
