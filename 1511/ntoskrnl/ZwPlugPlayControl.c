/*
 * XREFs of ZwPlugPlayControl @ 0x140152A20
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x14043F3E8 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x140441E20 (PlugPlayGetDeviceStatus.c)
 *     sub_14045913C @ 0x14045913C (sub_14045913C.c)
 *     PlugPlayGetDeviceProperty @ 0x14045C234 (PlugPlayGetDeviceProperty.c)
 *     PlugPlayGetRelatedDevice @ 0x1404F2094 (PlugPlayGetRelatedDevice.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x140614004 (PiCMSetProblem.c)
 *     PlugPlayGetDeviceRelations @ 0x14069A660 (PlugPlayGetDeviceRelations.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPlugPlayControl(PLUGPLAY_CONTROL_CLASS PlugPlayControlClass, PVOID Buffer, ULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&PlugPlayControlClass);
}
