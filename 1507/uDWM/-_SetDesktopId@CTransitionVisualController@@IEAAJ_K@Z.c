/*
 * XREFs of ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000C950
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000CB78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18000E578 (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E93C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008C038 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_SetDesktopId(CTransitionVisualController *this, __int64 a2)
{
  unsigned int v2; // ebx
  signed int LastError; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 12) == -1LL )
  {
    SetLastError(0);
    if ( !(unsigned int)GetDesktopID(1LL, &v9) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v8 = 2945;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v2 = LastError;
      v7 = LastError;
      goto LABEL_15;
    }
    if ( v9 == a2 )
    {
      *((_QWORD *)this + 12) = a2;
      return v2;
    }
    v8 = 2954;
LABEL_14:
    v7 = -2003304443;
    v2 = -2003304443;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v7, v8);
    return v2;
  }
  if ( *((_QWORD *)this + 12) != a2 )
  {
    v8 = 2960;
    goto LABEL_14;
  }
  return v2;
}
