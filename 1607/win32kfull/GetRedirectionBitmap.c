/*
 * XREFs of GetRedirectionBitmap @ 0x1C0053B30
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0061F00 (_SetLayeredWindowAttributes.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0075160 (GreUpdateSpriteVisRgn.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00D5880 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     UpdateRedirectedDCE @ 0x1C011D160 (UpdateRedirectedDCE.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01DE2BC (ChangeRedirectionBitmapOwner.c)
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
