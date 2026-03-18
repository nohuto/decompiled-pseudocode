/*
 * XREFs of ?IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ @ 0x1800F7080
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsDesktopContent@COverlayContext@@QEAA_NXZ @ 0x1800EA398 (-IsDesktopContent@COverlayContext@@QEAA_NXZ.c)
 */

bool __fastcall COverlayContext::IsFullscreenSingleMonitor(COverlayContext *this)
{
  bool v1; // bl
  int CurrentDisplaySet; // eax
  CDisplaySet *v3; // rdi
  struct CDisplaySet *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = 0;
  if ( *((_DWORD *)this + 56) == 1 && !COverlayContext::IsDesktopContent(this) || *((_QWORD *)this + 78) )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v5);
    v3 = v5;
    if ( CurrentDisplaySet >= 0 )
      v1 = *((_DWORD *)v5 + 18) == 1;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xA9Eu);
    if ( v3 )
      CDisplaySet::Release(v3);
  }
  return v1;
}
