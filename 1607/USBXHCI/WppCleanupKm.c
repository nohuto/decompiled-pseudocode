/*
 * XREFs of WppCleanupKm @ 0x1C0052A98
 * Callers:
 *     DriverEntry @ 0x1C004E8C0 (DriverEntry.c)
 *     DriverCleanup @ 0x1C0052A30 (DriverCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppCleanupKm(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
    {
      if ( WPP_GLOBAL_Control )
      {
        do
        {
          if ( v1->Vpb )
            ((void (*)(void))WPP_MAIN_CB.DeviceQueue.Lock)();
          v1 = v1->NextDevice;
        }
        while ( v1 );
        goto LABEL_10;
      }
    }
    else if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
LABEL_10:
      v1 = WPP_GLOBAL_Control;
    }
    WppAutoLogStop(v1, a1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
