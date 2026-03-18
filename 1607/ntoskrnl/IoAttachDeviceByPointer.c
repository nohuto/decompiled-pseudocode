/*
 * XREFs of IoAttachDeviceByPointer @ 0x1401C8A1C
 * Callers:
 *     <none>
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400FAFC0 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceByPointer(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL) == 0LL ? 0xC000000E : 0;
}
