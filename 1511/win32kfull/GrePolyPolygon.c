/*
 * XREFs of GrePolyPolygon @ 0x1C000FFD0
 * Callers:
 *     <none>
 * Callees:
 *     GrePolyPolygonInternal @ 0x1C0010084 (GrePolyPolygonInternal.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C003CBD8 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02912B4 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02912D4 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0291374 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0291454 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall GrePolyPolygon(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // edi
  unsigned int v7; // ebx
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v11[24]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp-80h]

  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v12 = v10;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v11) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v11) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v11);
        if ( (unsigned int)GrePolyPolygonInternal(a1, a5) )
          v6 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v11);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v11);
      }
    }
  }
  v7 = GrePolyPolygonInternal(a1, a5);
  if ( v6 )
  {
    v9 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v9);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return v7;
}
