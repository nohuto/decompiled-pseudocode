/*
 * XREFs of ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18008319C
 * Callers:
 *     ServiceDeviceEvent @ 0x180083344 (ServiceDeviceEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180083220 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall OnAudioDeviceRemoval(struct _DEV_BROADCAST_DEVICEINTERFACE_W *a1)
{
  int v2; // edi

  v2 = PostDeviceEvent(1LL, a1);
  (*(void (__fastcall **)(CAudioSrv *, struct _DEV_BROADCAST_DEVICEINTERFACE_W *))(*(_QWORD *)g_AudioService + 72LL))(
    g_AudioService,
    a1);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, v2);
  }
  return (unsigned int)v2;
}
