/*
 * XREFs of IoGetDeviceToVerify @ 0x140107614
 * Callers:
 *     VerifierIoGetDeviceToVerify @ 0x14020B920 (VerifierIoGetDeviceToVerify.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetDeviceToVerify(PETHREAD Thread)
{
  return (PDEVICE_OBJECT)Thread[1].ApcState.ApcListHead[0].Blink;
}
