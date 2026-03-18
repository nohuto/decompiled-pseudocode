/*
 * XREFs of NtGdiRectangle @ 0x1C00A2B10
 * Callers:
 *     NtGdiRoundRect @ 0x1C0005000 (NtGdiRoundRect.c)
 * Callees:
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C0087320 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     GreRectangle @ 0x1C00A2BC4 (GreRectangle.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C0291584 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02915A4 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0291644 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0291724 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiRectangle(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // rax
  _QWORD v11[6]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v12[24]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v13; // [rsp+78h] [rbp-80h]

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
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v8;
}
