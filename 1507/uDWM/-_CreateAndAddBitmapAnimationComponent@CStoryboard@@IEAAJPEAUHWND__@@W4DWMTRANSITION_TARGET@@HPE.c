/*
 * XREFs of ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x18009279C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094080 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094AD0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800955D0 (-_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000F3C4 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008BE50 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddBitmapAnimationComponent(
        CStoryboard *a1,
        HWND a2,
        int a3,
        int a4,
        volatile signed __int32 **a5)
{
  int BitmapAnimationComponent; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  struct CAnimationComponent *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  BitmapAnimationComponent = CTransitionVisualController::CreateBitmapAnimationComponent(
                               *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                               a2,
                               a3,
                               a4,
                               (__int64)a1,
                               (__int64 *)&v11);
  v7 = BitmapAnimationComponent;
  if ( BitmapAnimationComponent >= 0 )
  {
    v8 = (volatile signed __int32 *)v11;
    v9 = CStoryboard::_AddAnimationComponent(a1, v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0x1566u);
      goto LABEL_8;
    }
    *a5 = v8;
    if ( !v8 )
      return v7;
    _InterlockedIncrement(v8 + 2);
  }
  else
  {
    MilInstrumentationCheckHR(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      BitmapAnimationComponent,
      0x1565u);
  }
  v8 = (volatile signed __int32 *)v11;
LABEL_8:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v7;
}
