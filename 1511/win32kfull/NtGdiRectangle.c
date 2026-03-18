/*
 * XREFs of NtGdiRectangle @ 0x1C00FC010
 * Callers:
 *     NtGdiRoundRect @ 0x1C02937B0 (NtGdiRoundRect.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C003CBD8 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     GreRectangle @ 0x1C00FC0C4 (GreRectangle.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02912B4 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02912D4 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0291374 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0291454 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiRectangle(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp-80h]

  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v13 = v11;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v12) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v12) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v12);
        if ( (unsigned int)GreRectangle(a1, a5) )
          v6 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v12);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v12);
      }
    }
  }
  v8 = GreRectangle(a1, a5);
  if ( v6 )
  {
    v10 = UserReferenceDwmApiPort(v7);
    DwmSyncFlushAndWaitForBatch(v10);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  return v8;
}
