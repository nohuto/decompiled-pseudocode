/*
 * XREFs of WppInitKm @ 0x1C0050A54
 * Callers:
 *     DriverEntry @ 0x1C00505D0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppInitKm(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  _LIST_ENTRY *Blink; // rax

  v2 = &WPP_MAIN_CB;
  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
    {
      do
      {
        Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
        v2->Vpb = 0LL;
        ((void (__fastcall *)(_DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, _VPB **))Blink)(
          v2->DriverObject,
          0LL,
          WppClassicProviderCallback,
          v2,
          &v2->Vpb);
        v2 = v2->NextDevice;
      }
      while ( v2 );
    }
    else if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, a1, a2);
  }
}
