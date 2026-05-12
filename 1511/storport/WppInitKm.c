/*
 * XREFs of WppInitKm @ 0x1C0050910
 * Callers:
 *     StorPortInitialize @ 0x1C000A450 (StorPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

void WppInitKm()
{
  struct _DEVICE_OBJECT *v0; // rbx
  _LIST_ENTRY *Blink; // rax

  v0 = &WPP_MAIN_CB;
  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 4 )
    {
      do
      {
        Blink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        v0->Vpb = 0LL;
        ((void (__fastcall *)(_DRIVER_OBJECT *, _QWORD, void (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, _VPB **))Blink)(
          v0->DriverObject,
          0LL,
          WppClassicProviderCallback,
          v0,
          &v0->Vpb);
        v0 = v0->NextDevice;
      }
      while ( v0 );
    }
    else if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
  }
}
