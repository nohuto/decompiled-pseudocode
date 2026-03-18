/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C0128B38
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C00414D0 (xxxTranslateAccelerator.c)
 *     xxxGetSysMenuHandle @ 0x1C0094380 (xxxGetSysMenuHandle.c)
 *     xxxSetDialogSystemMenu @ 0x1C0124610 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x1C004FD24 (xxxLoadSysMenu.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     LockDesktopMenu @ 0x1C0128B90 (LockDesktopMenu.c)
 */

_DWORD *__fastcall xxxLoadSysDesktopMenu(__int64 a1, int a2)
{
  _DWORD *result; // rax
  __int64 v4; // rbx

  result = xxxLoadSysMenu(a2);
  v4 = (__int64)result;
  if ( result )
  {
    if ( *(_QWORD *)a1 )
    {
      DestroyMenu((__int64)result);
      return *(_DWORD **)a1;
    }
    else
    {
      result[10] |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, result) )
      {
        DestroyMenu(v4);
        return 0LL;
      }
      return (_DWORD *)v4;
    }
  }
  return result;
}
