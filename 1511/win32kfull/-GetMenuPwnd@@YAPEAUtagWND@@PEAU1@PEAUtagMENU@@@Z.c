/*
 * XREFs of ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0143C5C
 * Callers:
 *     xxxGetMenuItemRect @ 0x1C0143B88 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C023B734 (xxxMenuItemFromPoint.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C00723EC (MNGetPopupFromMenu.c)
 */

struct tagWND *__fastcall GetMenuPwnd(struct tagWND *a1, struct tagMENU *a2)
{
  struct tagWND *v2; // rbx
  __int64 v4; // rax

  v2 = a1;
  if ( (*((_DWORD *)a2 + 10) & 1) != 0 && (!a1 || (*((_WORD *)a1 + 33) & 0x3FFF) != 0x29C) )
  {
    v4 = MNGetPopupFromMenu((__int64)a2, 0LL);
    if ( v4 )
      return *(struct tagWND **)(v4 + 16);
  }
  return v2;
}
