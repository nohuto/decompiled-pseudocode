/*
 * XREFs of NtGdiInvertRgn @ 0x14023D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14023DAF4 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x140326118 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x140326140 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x140326204 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x140344A74 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiInvertRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v8; // rax
  _QWORD v9[14]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v10[24]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v11; // [rsp+A8h] [rbp-50h]

  v3 = 0;
  v4 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v11 = v9;
    if ( *(_DWORD *)(v9[0] + 492LL)
      && (*(_DWORD *)(v9[0] + 36LL) & 0x4000) != 0
      && !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v10) )
    {
      DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v10);
      if ( (unsigned int)GrepInvertRgn((struct XDCOBJ *)v9, a2) )
        v4 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v10);
      DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v10);
    }
    v6 = GrepInvertRgn((struct XDCOBJ *)v9, a2);
    if ( v4 )
    {
      v8 = UserReferenceDwmApiPort(v5);
      DwmSyncFlushAndWaitForBatch(v8);
    }
    v3 = v6;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  return v3;
}
