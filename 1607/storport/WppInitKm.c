/*
 * XREFs of WppInitKm @ 0x1C0057888
 * Callers:
 *     StorPortInitialize @ 0x1C000D300 (StorPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

void WppInitKm()
{
  struct _DEVICE_OBJECT *v0; // rbx
  void (__fastcall *v1)(_DRIVER_OBJECT *, _QWORD, void (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, _VPB **); // rax

  v0 = &WPP_MAIN_CB;
  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( WPPTraceSuite == 4 )
    {
      do
      {
        v1 = (void (__fastcall *)(_DRIVER_OBJECT *, _QWORD, void (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, _VPB **))pfnEtwRegisterClassicProvider;
        v0->Vpb = 0LL;
        v1(v0->DriverObject, 0LL, WppClassicProviderCallback, v0, &v0->Vpb);
        v0 = v0->NextDevice;
      }
      while ( v0 );
    }
    else if ( WPPTraceSuite == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
  }
}
