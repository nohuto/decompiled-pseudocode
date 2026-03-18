/*
 * XREFs of GetRedirectionBitmap @ 0x1C0059490
 * Callers:
 *     UpdateRedirectedDCE @ 0x1C000B310 (UpdateRedirectedDCE.c)
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C000BB60 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0057144 (_SetLayeredWindowAttributes.c)
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C005B600 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01E75FC (ChangeRedirectionBitmapOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRedirectionBitmap(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0LL;
  if ( v1 && atomLayer )
  {
    v3 = *(_DWORD *)(v1 + 4);
    v4 = v1 + 8;
    if ( v3 )
    {
      while ( *(_WORD *)(v4 + 8) != atomLayer || (*(_BYTE *)(v4 + 10) & 1) == 0 )
      {
        v4 += 16LL;
        if ( !--v3 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v4 = 0LL;
    }
    if ( v4 && *(_QWORD *)v4 )
      return **(_QWORD **)v4;
  }
  return v2;
}
