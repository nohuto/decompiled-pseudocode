/*
 * XREFs of ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C007A628
 * Callers:
 *     TrackLayeredZorder @ 0x1C007A464 (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C007A4D8 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C007AA7C (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetNextLayeredWindow(struct tagWND *a1)
{
  struct tagWND *NextLayeredWindowSubtree; // r10
  struct tagWND *v2; // r9
  __int64 v3; // rcx
  __int64 MessageWindow; // rax
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // r9

  NextLayeredWindowSubtree = 0LL;
  v2 = a1;
  if ( a1 )
  {
    while ( !(unsigned int)IsDesktopWindow(v2) )
    {
      MessageWindow = GetMessageWindow(v3);
      if ( v5 == MessageWindow )
        break;
      if ( v5 != v6 && (*(_BYTE *)(v5 + 50) & 8) != 0 )
        return (struct tagWND *)v5;
      NextLayeredWindowSubtree = GetNextLayeredWindowSubtree(*(struct tagWND **)(v5 + 72));
      if ( !NextLayeredWindowSubtree )
      {
        v2 = *(struct tagWND **)(v7 + 88);
        if ( v2 )
          continue;
      }
      return NextLayeredWindowSubtree;
    }
  }
  return NextLayeredWindowSubtree;
}
