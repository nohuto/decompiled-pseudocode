/*
 * XREFs of WPP_SF_q_guid_ @ 0x1800564F0
 * Callers:
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18002D960 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18005D820 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_q_guid_(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v6; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  v6 = va_arg(va1, _QWORD);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va, 8LL, v6);
}
