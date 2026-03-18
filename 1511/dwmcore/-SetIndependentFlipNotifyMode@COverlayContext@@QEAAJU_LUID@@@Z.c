/*
 * XREFs of ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180111B38
 * Callers:
 *     ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x180104F64 (-SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180006CF8 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007D60 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COverlayContext::SetIndependentFlipNotifyMode(COverlayContext *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ebx
  unsigned int v4; // r8d
  __int64 v5; // r11
  CDirectFlipInfo *v6; // rcx
  int v7; // eax
  int v9; // eax

  v2 = *((_DWORD *)this + 56);
  v3 = 0;
  v4 = 0;
  if ( !v2 )
    goto LABEL_5;
  v5 = *((_QWORD *)this + 25);
  while ( *(_QWORD *)(*(_QWORD *)(224LL * v4 + v5 + 16) + 40LL) != a2 )
  {
    if ( ++v4 >= v2 )
      goto LABEL_5;
  }
  if ( v4 == -1 )
  {
LABEL_5:
    v6 = (CDirectFlipInfo *)*((_QWORD *)this + 89);
    if ( v6 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v6 + 4) + 40LL) == a2 )
      {
        v7 = CDirectFlipInfo::EnsureIndependentFlipState(v6, 1, 1);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5D1u);
      }
    }
  }
  else
  {
    v9 = COverlayContext::EnsureIndependentFlipState(
           this,
           (struct COverlayContext::OverlayPlaneInfo *)(v5 + 224LL * v4),
           1,
           1);
    v3 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5CBu);
  }
  return v3;
}
