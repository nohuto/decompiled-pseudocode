/*
 * XREFs of WPP_SF_qqq @ 0x180060128
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180002E30 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x18007C8A0 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qqq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va, 8LL, va1);
}
