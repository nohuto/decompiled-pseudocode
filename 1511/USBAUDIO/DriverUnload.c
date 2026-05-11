/*
 * XREFs of DriverUnload @ 0x1C0013A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DriverUnload(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx
  PVOID v3; // rcx

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
  v3 = g_RegistryPath;
  if ( g_RegistryPath )
  {
    if ( *((_QWORD *)g_RegistryPath + 1) )
    {
      ExFreePool(*((PVOID *)g_RegistryPath + 1));
      v3 = g_RegistryPath;
    }
    ExFreePool(v3);
    g_RegistryPath = 0LL;
  }
}
