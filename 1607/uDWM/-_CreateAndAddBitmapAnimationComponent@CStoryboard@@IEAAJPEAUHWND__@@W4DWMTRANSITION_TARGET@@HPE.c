/*
 * XREFs of ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800934F8
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000EE54 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E4A0 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
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
                               *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
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
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0x1518u);
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
      0x1517u);
  }
  v8 = (volatile signed __int32 *)v11;
LABEL_8:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v7;
}
