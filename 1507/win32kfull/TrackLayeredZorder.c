/*
 * XREFs of TrackLayeredZorder @ 0x1C000F54C
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     LinkWindow @ 0x1C006616C (LinkWindow.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00100E4 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GreZorderSprite @ 0x1C0010648 (GreZorderSprite.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  HWND v6; // rdi
  struct tagWND *NextLayeredWindow; // rax

  v6 = 0LL;
  if ( (unsigned int)IsDesktopWindow(a1, a2, a3, a4) && (unsigned int)IsWindowDesktopComposed(v5) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 12);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  if ( NextLayeredWindow )
    v6 = *(HWND *)NextLayeredWindow;
  IsWindowDesktopComposed(a1);
  GreZorderSprite((HDEV)*gpDispInfo, *(HWND *)a1, v6);
  ReorderChildrenSpriteList(a1, a1);
}
