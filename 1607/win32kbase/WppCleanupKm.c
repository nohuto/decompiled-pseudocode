/*
 * XREFs of WppCleanupKm @ 0x1C01422FC
 * Callers:
 *     RIMUnInitialize @ 0x1C006F360 (RIMUnInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void WppCleanupKm()
{
  PDEVICE_OBJECT v0; // rbx
  PVOID v1; // rdi

  v0 = WPP_GLOBAL_Control;
  v1 = gpWin32kDriverObject;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      if ( !WPP_GLOBAL_Control )
      {
LABEL_8:
        WppAutoLogStop(v0, v1);
        WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
        return;
      }
      do
      {
        if ( v0->Vpb )
          ((void (*)(void))pfnEtwUnregister)();
        v0 = v0->NextDevice;
      }
      while ( v0 );
    }
    else
    {
      if ( WPPTraceSuite != 2 )
        goto LABEL_8;
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    v0 = WPP_GLOBAL_Control;
    goto LABEL_8;
  }
}
