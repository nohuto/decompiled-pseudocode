/*
 * XREFs of WppCleanupKm @ 0x1C00623FC
 * Callers:
 *     DriverCleanup @ 0x1C0001A50 (DriverCleanup.c)
 *     DriverEntry @ 0x1C0074000 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppCleanupKm(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      if ( WPP_GLOBAL_Control )
      {
        do
        {
          if ( v1->Vpb )
            ((void (*)(void))pfnEtwUnregister)();
          v1 = v1->NextDevice;
        }
        while ( v1 );
        goto LABEL_10;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
LABEL_10:
      v1 = WPP_GLOBAL_Control;
    }
    WppAutoLogStop(v1, a1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
