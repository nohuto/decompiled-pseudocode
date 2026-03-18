/*
 * XREFs of RemoveSwitchWindowInfo @ 0x1C01F84C0
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F75E8 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

void __fastcall RemoveSwitchWindowInfo(struct tagSwitchWndInfo **a1, __int64 a2, __int64 a3)
{
  struct tagSwitchWndInfo **v3; // rbx

  v3 = &gpswiFirst;
  if ( gpswiFirst )
  {
    do
    {
      if ( *v3 == *a1 )
      {
        *v3 = *(struct tagSwitchWndInfo **)*v3;
        SwitchWndCleanup(a1, a2, a3);
      }
      v3 = (struct tagSwitchWndInfo **)*v3;
    }
    while ( v3 && *v3 );
  }
}
