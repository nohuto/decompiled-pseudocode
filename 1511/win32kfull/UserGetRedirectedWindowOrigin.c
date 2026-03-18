/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x1C007A940
 * Callers:
 *     NtGdiGetRandomRgn @ 0x1C007A720 (NtGdiGetRandomRgn.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     GetDCOrgOnScreen @ 0x1C00CC890 (GetDCOrgOnScreen.c)
 *     GreGetRandomRgn @ 0x1C01475A0 (GreGetRandomRgn.c)
 *     DxgkEngBltViaGDI @ 0x1C0262980 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 */

__int64 __fastcall UserGetRedirectedWindowOrigin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 StyleWindow; // rax

  v4 = 0;
  GreLockVisRgnShared(*gpDispInfo);
  v5 = LookupDC(a1, 1LL);
  if ( v5 && (*(_DWORD *)(v5 + 64) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(*(_QWORD *)(v5 + 16)) )
    {
      *(_QWORD *)a2 = 0LL;
      goto LABEL_6;
    }
    StyleWindow = GetStyleWindow(v6, 2848);
    if ( StyleWindow )
    {
      *(_DWORD *)a2 = *(_DWORD *)(StyleWindow + 112);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(StyleWindow + 116);
LABEL_6:
      v4 = 1;
    }
  }
  GreUnlockVisRgn(*gpDispInfo);
  return v4;
}
