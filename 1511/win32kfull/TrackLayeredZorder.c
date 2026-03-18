/*
 * XREFs of TrackLayeredZorder @ 0x1C007A464
 * Callers:
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 * Callees:
 *     GreZorderSprite @ 0x1C003C468 (GreZorderSprite.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C007A628 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  __int64 v2; // rcx
  HWND v3; // rdi
  struct tagWND *NextLayeredWindow; // rax
  int v5; // eax

  v3 = 0LL;
  if ( (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 12);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  if ( NextLayeredWindow )
    v3 = *(HWND *)NextLayeredWindow;
  v5 = IsWindowDesktopComposed(a1);
  GreZorderSprite((HDEV)*gpDispInfo, *(HWND *)a1, v3, v5);
  ReorderChildrenSpriteList(a1, a1);
}
