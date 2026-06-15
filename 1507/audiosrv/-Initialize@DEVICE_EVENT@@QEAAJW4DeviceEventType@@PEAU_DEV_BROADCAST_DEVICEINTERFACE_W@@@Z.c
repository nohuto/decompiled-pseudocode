/*
 * XREFs of ?Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009D688
 * Callers:
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009DBF0 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 */

__int64 __fastcall DEVICE_EVENT::Initialize(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  void *v6; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a3 )
  {
    v6 = malloc(*a3);
    *(_QWORD *)(a1 + 16) = v6;
    if ( v6 )
    {
      memcpy_0(v6, a3, *a3);
    }
    else
    {
      v3 = -2147024882;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0xFu,
          (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids,
          -2147024882);
      }
    }
  }
  return v3;
}
