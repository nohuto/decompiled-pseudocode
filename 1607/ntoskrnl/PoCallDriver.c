/*
 * XREFs of PoCallDriver @ 0x14013063C
 * Callers:
 *     IoCancelFileOpen @ 0x14062333C (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x14071AF80 (ViFilterDispatchPower.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
