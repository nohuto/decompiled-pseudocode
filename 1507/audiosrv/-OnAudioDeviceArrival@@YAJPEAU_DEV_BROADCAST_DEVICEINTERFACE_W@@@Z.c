/*
 * XREFs of ?OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009DAF4
 * Callers:
 *     ServiceDeviceEvent @ 0x18009DD20 (ServiceDeviceEvent.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009DBF0 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall OnAudioDeviceArrival(struct _DEV_BROADCAST_DEVICEINTERFACE_W *a1)
{
  int v1; // ebx

  v1 = PostDeviceEvent(0LL, a1);
  if ( v1 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x14u,
      (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids,
      v1);
  }
  return (unsigned int)v1;
}
