/*
 * XREFs of ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00100E4
 * Callers:
 *     TrackLayeredZorder @ 0x1C000F54C (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C000F5C0 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000F7B8 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 */

struct tagWND *__fastcall GetNextLayeredWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagWND *NextLayeredWindowSubtree; // r10
  struct tagWND *v4; // r9
  __int64 v5; // rcx
  __int64 MessageWindow; // rax
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r9

  NextLayeredWindowSubtree = 0LL;
  v4 = a1;
  if ( a1 )
  {
    while ( !(unsigned int)IsDesktopWindow(v4, a2, a3, v4) )
    {
      MessageWindow = GetMessageWindow(v5);
      if ( v7 == MessageWindow )
        break;
      if ( v7 != v8 && (*(_BYTE *)(v7 + 50) & 8) != 0 )
        return (struct tagWND *)v7;
      NextLayeredWindowSubtree = GetNextLayeredWindowSubtree(*(struct tagWND **)(v7 + 72));
      if ( !NextLayeredWindowSubtree )
      {
        v4 = *(struct tagWND **)(v9 + 88);
        if ( v4 )
          continue;
      }
      return NextLayeredWindowSubtree;
    }
  }
  return NextLayeredWindowSubtree;
}
