/*
 * XREFs of ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C007A4D8
 * Callers:
 *     TrackLayeredZorder @ 0x1C007A464 (TrackLayeredZorder.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 * Callees:
 *     GreZorderSprite @ 0x1C003C468 (GreZorderSprite.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C007A628 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, HWND *a2)
{
  __int64 v2; // rax
  struct tagWND *v4; // rbx
  struct tagWND *NextLayeredWindow; // rax
  HWND v6; // rsi
  struct tagWND *v7; // rcx
  int v8; // eax

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
      if ( (*((_BYTE *)v4 + 50) & 8) != 0 )
      {
        if ( a2 )
          v6 = *a2;
        else
          v6 = 0LL;
        v7 = v4;
        goto LABEL_11;
      }
      while ( 1 )
      {
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
        if ( !NextLayeredWindow || NextLayeredWindow == (struct tagWND *)a2 )
          break;
        if ( a2 )
          v6 = *a2;
        else
          v6 = 0LL;
        v7 = NextLayeredWindow;
LABEL_11:
        v8 = IsWindowDesktopComposed(v7);
        GreZorderSprite((HDEV)*gpDispInfo, *(HWND *)v4, v6, v8);
      }
    }
  }
}
