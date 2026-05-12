/*
 * XREFs of WppCleanupKm @ 0x1C00576B0
 * Callers:
 *     RaDriverUnload @ 0x1C0028040 (RaDriverUnload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

void WppCleanupKm()
{
  PDEVICE_OBJECT v0; // rbx

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 4 )
    {
      while ( v0 )
      {
        if ( v0->Vpb )
          (*(void (**)(void))&WPP_MAIN_CB.SectorSize)();
        v0 = v0->NextDevice;
      }
    }
    else if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
