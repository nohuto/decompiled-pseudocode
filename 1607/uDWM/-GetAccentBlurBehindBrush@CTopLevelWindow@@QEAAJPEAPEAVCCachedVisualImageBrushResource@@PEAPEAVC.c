/*
 * XREFs of ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x180026EF8
 * Callers:
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18000DF6C (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 * Callees:
 *     ?GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x180007C0C (-GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetAccentBlurBehindBrush(
        CTopLevelWindow *this,
        struct CCachedVisualImageBrushResource **a2,
        struct CResource **a3,
        struct MilPoint3F *a4)
{
  int v4; // ebx
  __int64 v5; // rax
  CAccentBlurBehind *v7; // rcx
  int AccentBlurBehindBrush; // eax

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  *(_DWORD *)a4 = 1065353216;
  *((_DWORD *)a4 + 1) = 1065353216;
  *((_DWORD *)a4 + 2) = 1065353216;
  v5 = *((_QWORD *)this + 36);
  if ( v5 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( *(_DWORD *)(v5 + 264) == 3 )
    {
      v7 = *(CAccentBlurBehind **)(v5 + 320);
      if ( v7 )
      {
        AccentBlurBehindBrush = CAccentBlurBehind::GetAccentBlurBehindBrush(v7, a2, a3, a4);
        v4 = AccentBlurBehindBrush;
        if ( AccentBlurBehindBrush < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, AccentBlurBehindBrush, 0x315u);
      }
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x51Fu);
    }
  }
  return (unsigned int)v4;
}
