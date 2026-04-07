/*
 * XREFs of ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002850
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004870 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004A70 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x180003C14 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006DB0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006E50 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

char __fastcall CFlyoutPopup::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v6; // r15d
  struct CAnimationComponent *v7; // rdi
  unsigned int v8; // r14d
  unsigned int v9; // esi
  int v10; // eax
  int v11; // eax
  struct CAnimationComponent *v12; // r14
  HWND v13; // rdx
  int WindowEndCloak; // eax
  bool v15; // di
  int v16; // r8d
  int v17; // edx
  struct tagRECT *p_rc; // rcx
  int v19; // eax
  __int64 v20; // rcx
  CAnimatedTransitionVisual *v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  bool v26; // zf
  CAnimatedTransitionVisual *v27; // rcx
  __int64 v28; // rcx
  char result; // al
  int v30; // eax
  int v31; // eax
  bool v32; // [rsp+50h] [rbp-39h] BYREF
  int dy; // [rsp+54h] [rbp-35h] BYREF
  int v34; // [rsp+58h] [rbp-31h] BYREF
  struct CAnimationComponent *v35; // [rsp+60h] [rbp-29h] BYREF
  struct CAnimationComponent *v36; // [rsp+68h] [rbp-21h] BYREF
  int *v37; // [rsp+70h] [rbp-19h]
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v39; // [rsp+90h] [rbp+7h] BYREF

  v37 = a4;
  v35 = 0LL;
  v36 = 0LL;
  v6 = 0;
  v7 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_36;
  if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *, __int64))(*(_QWORD *)a1 + 120LL))(a1, a2) )
    goto LABEL_36;
  v8 = *(_DWORD *)(a2 + 576);
  v34 = 0;
  dy = 0;
  v9 = v8 & 0xFFF;
  if ( v9 < 0xC )
    goto LABEL_36;
  if ( (v8 & 0xFFF) > 0x10 )
  {
    if ( v9 == 43 )
    {
      v30 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8);
      v31 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v30, &v35);
      v6 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v31, 0x4F5u);
      goto LABEL_39;
    }
    if ( (v8 & 0xFFF) <= 0x4C || (v8 & 0xFFF) > 0x52 && ((v8 & 0xFFF) <= 0x57 || (v8 & 0xFFF) > 0x5C) )
      goto LABEL_36;
  }
  v10 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8 & 0xFFF);
  v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          1,
          v10,
          0LL,
          0LL,
          -1,
          1,
          &v35);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v12 = v35;
    v13 = *(HWND *)(a2 + 40);
    v39 = *(struct tagRECT *)((char *)v35 + 88);
    rc = v39;
    WindowEndCloak = CWindowPropertyTracker::GetWindowEndCloak(
                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
                       v13,
                       &v32);
    v15 = v32;
    if ( WindowEndCloak >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *, _QWORD, int *, int *))(*(_QWORD *)a1 + 128LL))(
             a1,
             v9,
             &v34,
             &dy) )
      {
        v16 = dy;
        if ( v15 )
          v16 = -dy;
        v17 = v34;
        if ( v15 )
          v17 = -v34;
        p_rc = &v39;
        if ( !v15 )
          p_rc = &rc;
        OffsetRect(p_rc, v17, v16);
      }
      v19 = *(_DWORD *)(a2 + 576);
      if ( (v19 & 0x1000000) != 0 )
        rc = *(struct tagRECT *)(a2 + 596);
      if ( (v19 & 0x800000) != 0 )
        v39 = *(struct tagRECT *)(a2 + 628);
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v12 + 5), &rc);
      v20 = *((_QWORD *)v12 + 5);
      *(struct tagRECT *)(v20 + 856) = v39;
      CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 0x1000u);
      v21 = (CAnimatedTransitionVisual *)*((_QWORD *)v12 + 5);
      if ( v15 )
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v21, 1.0);
        v22 = *((_QWORD *)v12 + 5);
        *(_DWORD *)(v22 + 916) = 0;
      }
      else
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v21, 0.0);
        v22 = *((_QWORD *)v12 + 5);
        *(_DWORD *)(v22 + 916) = 1065353216;
      }
      CVisual::SetDirtyFlags((CVisual *)(v22 + 8), 0x1000u);
    }
    v23 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v9);
    v24 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v23, &v36);
    v6 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v24, 0x4D7u);
      v7 = v36;
    }
    else
    {
      v7 = v36;
      if ( v36 )
      {
        CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v36 + 5), &rc);
        v25 = *((_QWORD *)v7 + 5);
        *(struct tagRECT *)(v25 + 856) = v39;
        CVisual::SetDirtyFlags((CVisual *)(v25 + 8), 0x1000u);
        v26 = !v32;
        *(_BYTE *)(*((_QWORD *)v7 + 5) + 971LL) = 1;
        *((_BYTE *)v7 + 74) = 1;
        v27 = (CAnimatedTransitionVisual *)*((_QWORD *)v7 + 5);
        if ( v26 )
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v27, 0.0);
          v28 = *((_QWORD *)v7 + 5);
          *(_DWORD *)(v28 + 916) = 1065353216;
        }
        else
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v27, 1.0);
          v28 = *((_QWORD *)v7 + 5);
          *(_DWORD *)(v28 + 916) = 0;
        }
        CVisual::SetDirtyFlags((CVisual *)(v28 + 8), 0x1000u);
        if ( *((_DWORD *)v7 + 17) != 2 )
          *((_DWORD *)v7 + 17) = 1;
        *((_DWORD *)v12 + 14) = *((_DWORD *)v7 + 14) + 1;
      }
    }
    goto LABEL_32;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v11, 0x4B1u);
LABEL_39:
  v12 = v35;
LABEL_32:
  if ( v12 )
    CBaseObject::Release(v12);
  if ( v7 )
    CBaseObject::Release(v7);
LABEL_36:
  result = 1;
  *v37 = v6;
  return result;
}
