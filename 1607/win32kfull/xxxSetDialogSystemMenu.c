/*
 * XREFs of xxxSetDialogSystemMenu @ 0x1C0152B30
 * Callers:
 *     <none>
 * Callees:
 *     LockWndMenu @ 0x1C00BB48C (LockWndMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0130080 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxSetDialogSystemMenu(__int64 a1)
{
  unsigned int v2; // edi
  struct tagMENU **v3; // rcx
  struct tagMENU *SysDesktopMenu; // rbx

  v2 = 0;
  v3 = (struct tagMENU **)(*(_QWORD *)(a1 + 24) + 56LL);
  SysDesktopMenu = *v3;
  if ( !*v3 )
    SysDesktopMenu = xxxLoadSysDesktopMenu((__int64)v3, 48);
  LockWndMenu(a1, (_QWORD *)(a1 + 184), (__int64)SysDesktopMenu);
  LOBYTE(v2) = SysDesktopMenu != 0LL;
  return v2;
}
