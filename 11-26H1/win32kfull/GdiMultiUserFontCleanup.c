/*
 * XREFs of GdiMultiUserFontCleanup @ 0x14020E860
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanUpEUDC@@YAXXZ @ 0x14020E8D4 (-CleanUpEUDC@@YAXXZ.c)
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x14020EA48 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 *     ?vCleanUpFntCache@@YAXXZ @ 0x140296BF8 (-vCleanUpFntCache@@YAXXZ.c)
 *     ?vCleanupPrintKViewList@@YAXXZ @ 0x1403280DC (-vCleanupPrintKViewList@@YAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // rdx
  int v1; // ecx
  __int64 v2; // rbx

  CleanUpEUDC();
  v2 = *(_QWORD *)(W32GetSessionState(v1, v0) + 96);
  if ( *(_QWORD *)(v2 + 20384) )
    bCleanupFontTable((struct PFT **)(v2 + 20384));
  if ( *(_QWORD *)(v2 + 20392) )
    bCleanupFontTable((struct PFT **)(v2 + 20392));
  if ( *(_QWORD *)(v2 + 20400) )
    bCleanupFontTable((struct PFT **)(v2 + 20400));
  if ( *(_QWORD *)(v2 + 24008) )
    vCleanupPrintKViewList();
  vCleanUpFntCache();
}
