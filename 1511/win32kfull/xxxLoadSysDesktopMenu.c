/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C010FC68
 * Callers:
 *     xxxGetSysMenuHandle @ 0x1C0071180 (xxxGetSysMenuHandle.c)
 *     xxxTranslateAccelerator @ 0x1C0092F94 (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x1C014DA10 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     _DestroyMenu @ 0x1C006E710 (_DestroyMenu.c)
 *     xxxLoadSysMenu @ 0x1C00CBF78 (xxxLoadSysMenu.c)
 *     LockDesktopMenu @ 0x1C010FCC0 (LockDesktopMenu.c)
 */

unsigned __int8 *__fastcall xxxLoadSysDesktopMenu(__int64 a1, int a2)
{
  unsigned __int8 *result; // rax
  struct tagMENU *v4; // rbx

  result = xxxLoadSysMenu(a2);
  v4 = (struct tagMENU *)result;
  if ( result )
  {
    if ( *(_QWORD *)a1 )
    {
      DestroyMenu((struct tagMENU *)result);
      return *(unsigned __int8 **)a1;
    }
    else
    {
      *((_DWORD *)result + 10) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, result) )
      {
        DestroyMenu(v4);
        return 0LL;
      }
      return (unsigned __int8 *)v4;
    }
  }
  return result;
}
