/*
 * XREFs of MNFreeItem @ 0x1C0072450
 * Callers:
 *     _DestroyMenu @ 0x1C006E710 (_DestroyMenu.c)
 *     xxxInsertMenuItem @ 0x1C006E9E0 (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0075940 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 * Callees:
 *     _DestroyMenu @ 0x1C006E710 (_DestroyMenu.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C00724A4 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 *     ?FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C00724D0 (-FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 */

struct tagMENU *__fastcall MNFreeItem(struct tagMENU *a1, __int64 a2, int a3)
{
  struct tagMENU *result; // rax

  *(_QWORD *)(a2 + 104) = 0LL;
  FreeItemString(a1, (struct tagITEM *)a2);
  result = UnlockSubMenu(a1, (struct tagMENU **)(a2 + 16));
  if ( result )
  {
    if ( a3 )
      return (struct tagMENU *)DestroyMenu(result);
  }
  return result;
}
