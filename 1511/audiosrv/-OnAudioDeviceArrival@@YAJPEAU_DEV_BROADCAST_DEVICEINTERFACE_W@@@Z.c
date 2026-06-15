/*
 * XREFs of ?OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009A964
 * Callers:
 *     ServiceDeviceEvent @ 0x18009AB90 (ServiceDeviceEvent.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009AA60 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall OnAudioDeviceArrival(struct _DEV_BROADCAST_DEVICEINTERFACE_W *a1)
{
  int v1; // ebx

  v1 = PostDeviceEvent(0LL, a1);
  if ( v1 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids, v1);
  }
  return (unsigned int)v1;
}
