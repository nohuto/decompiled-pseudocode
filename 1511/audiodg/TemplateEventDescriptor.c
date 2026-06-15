/*
 * XREFs of TemplateEventDescriptor @ 0x14003321C
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140015660 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TemplateEventDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  return EtwEventWrite(Microsoft_Windows_AudioHandle, &CreateDeviceEndpointInstance_Task_Stop, 0LL, 0LL, a5, a6);
}
