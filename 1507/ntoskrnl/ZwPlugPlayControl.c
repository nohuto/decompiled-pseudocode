/*
 * XREFs of ZwPlugPlayControl @ 0x140181390
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x140436B0C (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     sub_1404DB414 @ 0x1404DB414 (sub_1404DB414.c)
 *     PlugPlayGetDeviceStatus @ 0x1404DCE8C (PlugPlayGetDeviceStatus.c)
 *     PlugPlayGetDeviceProperty @ 0x1404DE9A0 (PlugPlayGetDeviceProperty.c)
 *     PlugPlayGetRelatedDevice @ 0x1404DECD0 (PlugPlayGetRelatedDevice.c)
 *     PiCMSetProblem @ 0x14058B0D8 (PiCMSetProblem.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PlugPlayGetDeviceRelations @ 0x14071A620 (PlugPlayGetDeviceRelations.c)
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
