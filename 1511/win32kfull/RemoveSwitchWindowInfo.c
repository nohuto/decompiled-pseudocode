/*
 * XREFs of RemoveSwitchWindowInfo @ 0x1C02011C0
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C020008C (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
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
