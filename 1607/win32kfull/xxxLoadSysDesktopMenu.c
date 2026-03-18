/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C0130080
 * Callers:
 *     xxxGetSysMenuHandle @ 0x1C006F540 (xxxGetSysMenuHandle.c)
 *     xxxTranslateAccelerator @ 0x1C0095174 (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x1C0152B30 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x1C0067400 (xxxLoadSysMenu.c)
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     LockDesktopMenu @ 0x1C01300D8 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxLoadSysDesktopMenu(__int64 a1, int a2)
{
  struct tagMENU *result; // rax
  struct tagMENU *v4; // rbx

  result = (struct tagMENU *)xxxLoadSysMenu(a2);
  v4 = result;
  if ( result )
  {
    if ( *(_QWORD *)a1 )
    {
      DestroyMenu(result);
      return *(struct tagMENU **)a1;
    }
    else
    {
      *((_DWORD *)result + 10) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, result) )
      {
        DestroyMenu(v4);
        return 0LL;
      }
      return v4;
    }
  }
  return result;
}
