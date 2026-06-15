/*
 * XREFs of WPP_SF_l @ 0x18007EFB4
 * Callers:
 *     ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18007D8B0 (-OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_l(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, 85LL, &v5, 4LL, 0LL);
}
