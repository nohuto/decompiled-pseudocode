/*
 * XREFs of UnsetRedirectedWindow @ 0x1C000BB60
 * Callers:
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     CleanupWindowRedirection @ 0x1C008B0D0 (CleanupWindowRedirection.c)
 *     xxxPrintWindow @ 0x1C01E7A14 (xxxPrintWindow.c)
 * Callees:
 *     DeleteOldRedirectionBitmap @ 0x1C000BC28 (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C000BF8C (DeleteOrSetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C000E358 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x1C000E9D0 (HintSpriteShape.c)
 *     UnredirectDCEs @ 0x1C0010144 (UnredirectDCEs.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 Prop; // rsi
  int v5; // r10d
  __int64 RedirectionBitmap; // rsi

  v1 = 1;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) &= ~v5;
  if ( (v5 & 1) != 0 && (*(_BYTE *)(v3 + 50) & 0x20) == 0 )
    v1 = HintSpriteShape(*gpDispInfo, a1, 0LL, 0LL);
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0LL, a1, 2848LL, 1LL);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap(a1);
    if ( RedirectionBitmap )
    {
      UnredirectDCEs(a1);
      v1 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0LL);
    }
  }
  return v1;
}
