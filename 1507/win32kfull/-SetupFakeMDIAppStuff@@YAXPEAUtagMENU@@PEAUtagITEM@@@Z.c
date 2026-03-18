/*
 * XREFs of ?SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0225380
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C01081F4 (-_SetCloseDefault@@YAXPEAUtagMENU@@@Z.c)
 *     ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0225338 (-FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C024AB74 (_GetMenuDefaultItem.c)
 */

void __fastcall SetupFakeMDIAppStuff(struct tagMENU *a1, struct tagITEM *a2)
{
  __int64 v3; // rdi
  struct tagMENU *v4; // r9
  struct tagWND *FakeMDIChild; // rax

  if ( *((_QWORD *)a2 + 2) )
  {
    v3 = *((_QWORD *)a1 + 9);
    if ( (*(_BYTE *)(v3 + 45) & 2) == 0 && (unsigned int)GetMenuDefaultItem(*((_QWORD *)a2 + 2), 1LL, 1LL) == -1 )
      _SetCloseDefault(v4);
    FakeMDIChild = FindFakeMDIChild((struct tagWND *)v3);
    if ( FakeMDIChild )
      *((_QWORD *)a2 + 8) = *(_QWORD *)FakeMDIChild;
  }
}
