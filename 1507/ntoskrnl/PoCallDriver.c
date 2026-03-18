/*
 * XREFs of PoCallDriver @ 0x140139D50
 * Callers:
 *     IoCancelFileOpen @ 0x140673C54 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140752994 (ViFilterDispatchPower.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
