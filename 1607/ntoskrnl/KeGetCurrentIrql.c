/*
 * XREFs of KeGetCurrentIrql @ 0x14002E860
 * Callers:
 *     BgFreeContext @ 0x140725010 (BgFreeContext.c)
 *     BgGetContext @ 0x1407251F0 (BgGetContext.c)
 *     BgDisplayFade @ 0x140725814 (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x140725CB8 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x14072873C (BgLibraryDisable.c)
 *     BgDisplayString @ 0x14072A240 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14072A2C4 (BgLibraryDestroy.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
