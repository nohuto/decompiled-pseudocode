/*
 * XREFs of PoCallDriver @ 0x140130BAC
 * Callers:
 *     IoCancelFileOpen @ 0x1406233F0 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x14071AF80 (ViFilterDispatchPower.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
