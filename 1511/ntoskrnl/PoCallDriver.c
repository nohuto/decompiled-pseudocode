/*
 * XREFs of PoCallDriver @ 0x1401262C4
 * Callers:
 *     IoCancelFileOpen @ 0x1405F99D8 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x1406CEEC8 (ViFilterDispatchPower.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
