/*
 * XREFs of IoGetActivityIdThread @ 0x140096850
 * Callers:
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405506D0 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

PVOID IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
}
