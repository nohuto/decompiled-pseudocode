/*
 * XREFs of ?IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ @ 0x18012905C
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

char __fastcall COverlayContext::IsFullscreenSingleMonitor(COverlayContext *this)
{
  char v1; // di
  int CurrentDisplaySet; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  CDisplaySet *v5; // rbx
  CDisplaySet *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = 0;
  if ( *((_DWORD *)this + 66) == 1 && !*((_DWORD *)this + 74) || *((_QWORD *)this + 120) )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v7);
    v5 = v7;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xB25u);
    }
    else if ( *((_DWORD *)v7 + 18) == 1 )
    {
      v1 = 1;
    }
    if ( v5 )
      CDisplaySet::Release(v5, v3, v4);
  }
  return v1;
}
