/*
 * XREFs of ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18000FCDC
 * Callers:
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18000A190 (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 * Callees:
 *     ?GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18000F05C (-GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetAccentBlurBehindBrush(
        CTopLevelWindow *this,
        struct CCachedVisualImageBrushResource **a2,
        struct CResource **a3,
        struct MilPoint3F *a4)
{
  __int64 v4; // rax
  int v5; // ebx
  CAccentBlurBehind *v7; // rcx
  int AccentBlurBehindBrush; // eax

  v4 = *((_QWORD *)this + 36);
  v5 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v4 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( *(_DWORD *)(v4 + 264) == 3 )
    {
      v7 = *(CAccentBlurBehind **)(v4 + 320);
      if ( v7 )
      {
        AccentBlurBehindBrush = CAccentBlurBehind::GetAccentBlurBehindBrush(v7, a2, a3, a4);
        v5 = AccentBlurBehindBrush;
        if ( AccentBlurBehindBrush < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, AccentBlurBehindBrush, 0x329u);
      }
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5DDu);
    }
  }
  return (unsigned int)v5;
}
