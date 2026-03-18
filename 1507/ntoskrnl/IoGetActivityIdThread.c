/*
 * XREFs of IoGetActivityIdThread @ 0x1400064C0
 * Callers:
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

PVOID IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
}
