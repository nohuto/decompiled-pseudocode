/*
 * XREFs of ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180001324
 * Callers:
 *     ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800011E0 (-_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094ED0 (-_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180095190 (-_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180001154 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180004468 (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18000AED8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000B5A4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000EFB4 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180014A64 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180042168 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800929A0 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 */

__int64 __fastcall CFade::_FadeWindow(CFade *this, struct CWindowData *a2, char a3)
{
  bool v4; // zf
  bool IsWindowTrackedAndCloakChanged; // si
  int v8; // eax
  char IsLauncherShownAboveWindow; // al
  int v10; // r8d
  CStoryboard *v11; // rcx
  float v12; // xmm7_4
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  int v16; // eax
  CAnimatedTransitionVisual **v17; // rdi
  int v18; // eax
  struct tagRECT *v19; // rbx
  struct tagRECT v20; // xmm6
  CAnimatedTransitionVisual *v21; // rcx
  CAnimatedTransitionVisual *v22; // rcx
  int v24; // eax
  int v25; // eax
  struct CAnimationComponent *v26; // [rsp+58h] [rbp-29h] BYREF
  CImmersiveState *v27; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v28; // [rsp+68h] [rbp-19h] BYREF
  tagRECT rc; // [rsp+78h] [rbp-9h] BYREF

  v4 = (*((_DWORD *)a2 + 146) & 0x100000) == 0;
  v26 = 0LL;
  v27 = 0LL;
  if ( v4 )
    IsWindowTrackedAndCloakChanged = CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 22)
                                                                + 48LL),
                                       *((HWND *)a2 + 5),
                                       a3 == 0);
  else
    IsWindowTrackedAndCloakChanged = (*((_BYTE *)a2 + 580) & 1) == 0
                                  && a3 == CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 5));
  v8 = CImmersiveState::Create(&v27, *((_QWORD *)a2 + 15));
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v8, 0x1EEu);
    goto LABEL_20;
  }
  IsLauncherShownAboveWindow = CImmersiveState::IsLauncherShownAboveWindow(v27, (const struct tagRECT *)a2);
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
  if ( (*((_DWORD *)a2 + 146) & 0x20000) != 0 )
  {
    CTransitionVisualController::GetOwnedInclusiveClipRect(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
      a2,
      &v28);
    v13 = -*((_DWORD *)a2 + 13);
    v14 = -*((_DWORD *)a2 + 12);
    rc = v28;
    OffsetRect(&rc, v14, v13);
    v15 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 88LL))(this, *((unsigned int *)a2 + 146));
    v16 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v15, &rc, 0LL, -1, 1, &v26);
    if ( v16 >= 0 )
    {
      v17 = (CAnimatedTransitionVisual **)v26;
LABEL_13:
      v18 = *((_DWORD *)a2 + 146);
      if ( (v18 & 0x1000000) != 0 )
        v28 = *(struct tagRECT *)((char *)a2 + 604);
      if ( (v18 & 0x800000) != 0 )
        v19 = (struct tagRECT *)((char *)a2 + 604);
      else
        v19 = &v28;
      v20 = *v19;
      CAnimatedTransitionVisual::SetBeginRect(v17[5], &v28);
      v21 = v17[5];
      *(struct tagRECT *)((char *)v21 + 856) = v20;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v21 + 8), 0x1000u);
      CAnimatedTransitionVisual::SetBeginAlpha(v17[5], v12);
      v22 = v17[5];
      *((float *)v22 + 229) = 1.0 - v12;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v22 + 8), 0x1000u);
      goto LABEL_18;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v16, 0x20Du);
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(CFade *))(*(_QWORD *)this + 88LL))(this);
    v25 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v24, 0LL, 0LL, -1, 1, &v26);
    if ( v25 >= 0 )
    {
      v17 = (CAnimatedTransitionVisual **)v26;
      v28 = *(struct tagRECT *)((char *)v26 + 88);
      goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v25, 0x211u);
  }
  v17 = (CAnimatedTransitionVisual **)v26;
LABEL_18:
  if ( v17 )
    CBaseObject::Release((CBaseObject *)v17);
LABEL_20:
  if ( v27 )
    CBaseObject::Release(v27);
  return 0LL;
}
