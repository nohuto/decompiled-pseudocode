/*
 * XREFs of ZwPlugPlayControl @ 0x14015C0E0
 * Callers:
 *     PlugPlayGetDeviceProperty @ 0x1404CF7C8 (PlugPlayGetDeviceProperty.c)
 *     PlugPlayGetRelatedDevice @ 0x1404CFD20 (PlugPlayGetRelatedDevice.c)
 *     ExpHwidGetDeviceProperties @ 0x1404F63A4 (ExpHwidGetDeviceProperties.c)
 *     PlugPlayGetDeviceStatus @ 0x1404F88F8 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1404FB0A8 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14064879C (PiCMSetProblem.c)
 *     PlugPlayGetDeviceRelations @ 0x1406E090C (PlugPlayGetDeviceRelations.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPlugPlayControl(PLUGPLAY_CONTROL_CLASS PlugPlayControlClass, PVOID Buffer, ULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&PlugPlayControlClass, Buffer, *(_QWORD *)&BufferSize);
}
