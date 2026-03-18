/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x1C0012A30
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     GetDCOrgOnScreen @ 0x1C0113178 (GetDCOrgOnScreen.c)
 *     GreGetRandomRgn @ 0x1C011DA40 (GreGetRandomRgn.c)
 *     DxgkEngBltViaGDI @ 0x1C0264220 (DxgkEngBltViaGDI.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 */

__int64 __fastcall UserGetRedirectedWindowOrigin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 StyleWindow; // rax

  v4 = 0;
  GreLockVisRgnShared(*gpDispInfo);
  v5 = LookupDC(a1, 1LL);
  if ( v5 && (*(_DWORD *)(v5 + 64) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(*(_QWORD *)(v5 + 16), v6, v7, v8) )
    {
      *(_QWORD *)a2 = 0LL;
      goto LABEL_6;
    }
    StyleWindow = GetStyleWindow(v9, 2848LL);
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
