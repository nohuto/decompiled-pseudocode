/*
 * XREFs of ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C000F5C0
 * Callers:
 *     TrackLayeredZorder @ 0x1C000F54C (TrackLayeredZorder.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00100E4 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GreZorderSprite @ 0x1C0010648 (GreZorderSprite.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, HWND *a2)
{
  __int64 v2; // rax
  struct tagWND *v4; // rbx
  HWND v5; // rsi
  struct tagWND *i; // rcx
  struct tagWND *NextLayeredWindow; // rax

  v2 = *((_QWORD *)a1 + 12);
  if ( v2 )
  {
    do
    {
      v4 = (struct tagWND *)v2;
      v2 = *(_QWORD *)(v2 + 96);
    }
    while ( v2 );
    if ( v4 != a1 )
    {
      if ( (*((_BYTE *)v4 + 50) & 8) == 0 )
        goto LABEL_13;
      if ( a2 )
        v5 = *a2;
      else
        v5 = 0LL;
      for ( i = v4; ; i = NextLayeredWindow )
      {
        IsWindowDesktopComposed(i);
        GreZorderSprite((HDEV)*gpDispInfo, *(HWND *)v4, v5);
LABEL_13:
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
        if ( !NextLayeredWindow || NextLayeredWindow == (struct tagWND *)a2 )
          break;
        if ( a2 )
          v5 = *a2;
        else
          v5 = 0LL;
      }
    }
  }
}
