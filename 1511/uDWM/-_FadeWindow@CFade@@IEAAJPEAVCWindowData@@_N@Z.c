/*
 * XREFs of ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18000123C
 * Callers:
 *     ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002700 (-_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180097D80 (-_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098050 (-_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CListFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098580 (-_WindowEnumCallback@CListFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180003868 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180007D8C (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000B8E4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18000BCB0 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800136E4 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x180094350 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 */

__int64 __fastcall CFade::_FadeWindow(CFade *this, struct CWindowData *a2, char a3)
{
  bool v4; // zf
  bool IsWindowTrackedAndCloakChanged; // si
  int v8; // eax
  bool IsLauncherShownAboveWindow; // al
  int v10; // r8d
  CStoryboard *v11; // rcx
  float v12; // xmm7_4
  unsigned int v13; // esi
  int v14; // r8d
  int v15; // edx
  int v16; // eax
  int v17; // eax
  CAnimatedTransitionVisual **v18; // rbx
  int v19; // eax
  struct tagRECT *v20; // rdi
  struct tagRECT v21; // xmm6
  CAnimatedTransitionVisual *v22; // rcx
  CAnimatedTransitionVisual *v23; // rcx
  int v25; // eax
  int v26; // eax
  struct CAnimationComponent *v27; // [rsp+58h] [rbp-29h] BYREF
  CImmersiveState *v28; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v29; // [rsp+68h] [rbp-19h] BYREF
  tagRECT rc; // [rsp+78h] [rbp-9h] BYREF

  v4 = (*((_DWORD *)a2 + 144) & 0x100000) == 0;
  v27 = 0LL;
  v28 = 0LL;
  if ( v4 )
    IsWindowTrackedAndCloakChanged = CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 24)
                                                                + 48LL),
                                       *((HWND *)a2 + 5),
                                       a3 == 0);
  else
    IsWindowTrackedAndCloakChanged = (*((_BYTE *)a2 + 572) & 1) == 0
                                  && a3 == CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 5));
  v8 = CImmersiveState::Create(&v28, *((_QWORD *)a2 + 15));
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v8, 0x1EAu);
    goto LABEL_20;
  }
  IsLauncherShownAboveWindow = CImmersiveState::IsLauncherShownAboveWindow(v28, a2);
  v11 = (CStoryboard *)IsWindowTrackedAndCloakChanged;
  if ( IsLauncherShownAboveWindow )
    v11 = 0LL;
  if ( !a3 )
  {
    if ( !(_BYTE)v11 )
      goto LABEL_20;
    if ( !CStoryboard::HasAnimatingOwnerWindow(v11, a2, v10) )
      goto LABEL_31;
    LOBYTE(v11) = 0;
  }
  if ( !(_BYTE)v11 )
    goto LABEL_20;
  if ( a3 )
  {
    v12 = 0.0;
    goto LABEL_10;
  }
LABEL_31:
  v12 = FLOAT_0_99000001;
LABEL_10:
  v13 = *((_DWORD *)a2 + 144);
  if ( (v13 & 0x20000) != 0 )
  {
    CTransitionVisualController::GetOwnedInclusiveClipRect(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
      a2,
      &v29);
    v14 = -*((_DWORD *)a2 + 13);
    v15 = -*((_DWORD *)a2 + 12);
    rc = v29;
    OffsetRect(&rc, v15, v14);
    v16 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 88LL))(this, *((unsigned int *)a2 + 144));
    v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v16, &rc, 0LL, -1, 1, &v27);
    if ( v17 >= 0 )
    {
      v18 = (CAnimatedTransitionVisual **)v27;
LABEL_13:
      v19 = *((_DWORD *)a2 + 144);
      if ( (v19 & 0x1000000) != 0 )
        v29 = *(struct tagRECT *)((char *)a2 + 596);
      if ( (v19 & 0x800000) != 0 )
        v20 = (struct tagRECT *)((char *)a2 + 596);
      else
        v20 = &v29;
      v21 = *v20;
      CAnimatedTransitionVisual::SetBeginRect(v18[5], &v29);
      v22 = v18[5];
      *(struct tagRECT *)((char *)v22 + 856) = v21;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v22 + 8), 0x1000u);
      CAnimatedTransitionVisual::SetBeginAlpha(v18[5], v12);
      v23 = v18[5];
      *((float *)v23 + 229) = 1.0 - v12;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v23 + 8), 0x1000u);
      goto LABEL_18;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v17, 0x209u);
  }
  else
  {
    v25 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 88LL))(this, v13);
    v26 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v25, 0LL, 0LL, -1, 1, &v27);
    if ( v26 >= 0 )
    {
      v18 = (CAnimatedTransitionVisual **)v27;
      v29 = *(struct tagRECT *)((char *)v27 + 88);
      goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v26, 0x20Du);
  }
  v18 = (CAnimatedTransitionVisual **)v27;
LABEL_18:
  if ( v18 )
    CBaseObject::Release((CBaseObject *)v18);
LABEL_20:
  if ( v28 )
    CBaseObject::Release(v28);
  return 0LL;
}
