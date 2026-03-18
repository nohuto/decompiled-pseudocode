/*
 * XREFs of ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C01081F4
 * Callers:
 *     xxxSetSysMenu @ 0x1C0107E60 (xxxSetSysMenu.c)
 *     ?SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0225380 (-SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     _SetMenuDefaultItem @ 0x1C00EDA84 (_SetMenuDefaultItem.c)
 */

void __fastcall _SetCloseDefault(struct tagMENU *a1)
{
  if ( !(unsigned int)SetMenuDefaultItem((__int64)a1, 0xF060u, 0)
    && !(unsigned int)SetMenuDefaultItem((__int64)a1, 0x8060u, 0) )
  {
    SetMenuDefaultItem((__int64)a1, 0xC070u, 0);
  }
}
