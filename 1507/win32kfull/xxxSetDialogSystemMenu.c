/*
 * XREFs of xxxSetDialogSystemMenu @ 0x1C0124610
 * Callers:
 *     <none>
 * Callees:
 *     LockWndMenu @ 0x1C004F214 (LockWndMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0128B38 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxSetDialogSystemMenu(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 *v6; // rcx
  __int64 SysDesktopMenu; // rbx

  v5 = 0;
  v6 = (__int64 *)(*(_QWORD *)(a1 + 24) + 56LL);
  SysDesktopMenu = *v6;
  if ( !*v6 )
    SysDesktopMenu = xxxLoadSysDesktopMenu(v6, 48LL, a3, a4);
  LockWndMenu(a1, (_QWORD *)(a1 + 184), SysDesktopMenu);
  LOBYTE(v5) = SysDesktopMenu != 0;
  return v5;
}
