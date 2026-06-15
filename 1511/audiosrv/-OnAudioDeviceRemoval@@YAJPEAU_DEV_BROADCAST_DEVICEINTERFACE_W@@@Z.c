/*
 * XREFs of ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009A9C0
 * Callers:
 *     ServiceDeviceEvent @ 0x18009AB90 (ServiceDeviceEvent.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009AA60 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall OnAudioDeviceRemoval(struct _DEV_BROADCAST_DEVICEINTERFACE_W *a1)
{
  int v2; // ebp

  v2 = PostDeviceEvent(1LL, a1);
  (*(void (__fastcall **)(CAudioSrv *, struct _DEV_BROADCAST_DEVICEINTERFACE_W *))(*(_QWORD *)g_AudioService + 72LL))(
    g_AudioService,
    a1);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids, v2);
  }
  return (unsigned int)v2;
}
