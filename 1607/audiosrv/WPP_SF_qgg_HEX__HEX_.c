/*
 * XREFs of WPP_SF_qgg_HEX__HEX_ @ 0x180060054
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18005D820 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qgg_HEX__HEX_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  va_list va1; // [rsp+D0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(a1, 43LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, 155LL, (__int64 *)va, 8LL, va1);
}
