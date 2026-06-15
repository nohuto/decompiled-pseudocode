/*
 * XREFs of TemplateEventDescriptor @ 0x1400133EC
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140012F70 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     <none>
 */

__int64 TemplateEventDescriptor()
{
  return EtwEventWrite(Microsoft_Windows_AudioHandle, &CreateDeviceEndpointInstance_Task_Stop, 0LL, 0LL);
}
