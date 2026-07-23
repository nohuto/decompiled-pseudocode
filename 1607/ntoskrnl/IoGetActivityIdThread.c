/*
 * XREFs of IoGetActivityIdThread @ 0x140096050
 * Callers:
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140550C10 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

PVOID IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
}
