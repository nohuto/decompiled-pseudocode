/*
 * XREFs of ?Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180082CD8
 * Callers:
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180083220 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
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
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xFu,
          (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids,
          -2147024882);
      }
    }
  }
  return v3;
}
