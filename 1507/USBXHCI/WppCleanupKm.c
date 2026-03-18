/*
 * XREFs of WppCleanupKm @ 0x1C004F928
 * Callers:
 *     DriverEntry @ 0x1C004B5C0 (DriverEntry.c)
 *     DriverCleanup @ 0x1C004F8C0 (DriverCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppCleanupKm(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) == 4 )
    {
      if ( WPP_GLOBAL_Control )
      {
        do
        {
          if ( v1->Vpb )
            ((void (*)(void))WPP_MAIN_CB.DeviceQueue.32)();
          v1 = v1->NextDevice;
        }
        while ( v1 );
        goto LABEL_10;
      }
    }
    else if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
LABEL_10:
      v1 = WPP_GLOBAL_Control;
    }
    WppAutoLogStop(v1, a1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
