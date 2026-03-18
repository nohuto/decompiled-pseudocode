/*
 * XREFs of RemoveSwitchWindowInfo @ 0x1C0200E20
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01FF9DC (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

void __fastcall RemoveSwitchWindowInfo(struct tagSwitchWndInfo **a1)
{
  struct tagSwitchWndInfo **v1; // rbx

  v1 = &gpswiFirst;
  if ( gpswiFirst )
  {
    do
    {
      if ( *v1 == *a1 )
      {
        *v1 = *(struct tagSwitchWndInfo **)*v1;
        SwitchWndCleanup(a1);
      }
      v1 = (struct tagSwitchWndInfo **)*v1;
    }
    while ( v1 && *v1 );
  }
}
