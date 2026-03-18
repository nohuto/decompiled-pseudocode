/*
 * XREFs of UnsetRedirectedWindow @ 0x1C007FEDC
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     CleanupWindowRedirection @ 0x1C00686E8 (CleanupWindowRedirection.c)
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C007FC9C (UnsetLayeredWindow.c)
 *     xxxPrintWindow @ 0x1C01E7E84 (xxxPrintWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     GetRedirectionBitmap @ 0x1C006BF60 (GetRedirectionBitmap.c)
 *     UnredirectDCEs @ 0x1C007A574 (UnredirectDCEs.c)
 *     HintSpriteShape @ 0x1C007B8EC (HintSpriteShape.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C007C284 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C007F730 (DeleteOrSetRedirectionBitmap.c)
 *     DeleteOldRedirectionBitmap @ 0x1C007FFA4 (DeleteOldRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

__int64 __fastcall UnsetRedirectedWindow(HWND *a1)
{
  unsigned int v1; // edi
  __int64 Prop; // rsi
  int v4; // r10d
  __int64 RedirectionBitmap; // rsi

  v1 = 1;
  Prop = GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) &= ~v4;
  if ( (v4 & 1) != 0 && (*((_BYTE *)a1 + 50) & 0x20) == 0 )
    v1 = HintSpriteShape((HDEV)*gpDispInfo, a1, 0LL, 0);
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0LL, a1, 2848LL, 1LL);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
    if ( RedirectionBitmap )
    {
      UnredirectDCEs((struct tagWND *)a1);
      v1 = SetRedirectionBitmap((struct tagWND *)a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap((__int64)a1, RedirectionBitmap, 0);
    }
  }
  return v1;
}
