/*
 * XREFs of ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800936F4
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003940 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x180091D5C (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093D50 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000EE54 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E680 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddDesktopAnimationComponent(
        CStoryboard *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  char v10; // al
  int v11; // eax
  unsigned int v12; // edi
  volatile signed __int32 *v13; // rbx
  int v14; // eax
  struct CAnimationComponent *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  v10 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)this + 96LL))(this, *((_DWORD *)a2 + 146) & 0xFFF);
  v11 = CTransitionVisualController::CreateDesktopAnimationComponent(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
          a2,
          a3,
          a4,
          a5,
          (v10 & 4) != 0,
          this,
          &v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (volatile signed __int32 *)v16;
    v14 = CStoryboard::_AddAnimationComponent(this, v16);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x1504u);
      goto LABEL_8;
    }
    *a6 = (struct CAnimationComponent *)v13;
    if ( !v13 )
      return v12;
    _InterlockedIncrement(v13 + 2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x1503u);
  }
  v13 = (volatile signed __int32 *)v16;
LABEL_8:
  if ( v13 )
    CBaseObject::Release((CBaseObject *)v13);
  return v12;
}
