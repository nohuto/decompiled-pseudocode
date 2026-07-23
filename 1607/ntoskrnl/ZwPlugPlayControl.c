/*
 * XREFs of ZwPlugPlayControl @ 0x14015C650
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x1404D9330 (ExpHwidGetDeviceProperties.c)
 *     PlugPlayGetDeviceStatus @ 0x1404DB884 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1404DE034 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceProperty @ 0x14050C894 (PlugPlayGetDeviceProperty.c)
 *     PlugPlayGetRelatedDevice @ 0x14050CDEC (PlugPlayGetRelatedDevice.c)
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x140648880 (PiCMSetProblem.c)
 *     PlugPlayGetDeviceRelations @ 0x1406E0A44 (PlugPlayGetDeviceRelations.c)
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
