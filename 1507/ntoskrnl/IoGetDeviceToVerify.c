/*
 * XREFs of IoGetDeviceToVerify @ 0x14013A300
 * Callers:
 *     VerifierIoGetDeviceToVerify @ 0x14025AFBC (VerifierIoGetDeviceToVerify.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetDeviceToVerify(PETHREAD Thread)
{
  return (PDEVICE_OBJECT)Thread[1].ApcState.ApcListHead[0].Blink;
}
