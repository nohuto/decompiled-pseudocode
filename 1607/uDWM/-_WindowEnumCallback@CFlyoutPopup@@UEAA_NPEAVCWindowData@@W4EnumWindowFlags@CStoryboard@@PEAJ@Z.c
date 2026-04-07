/*
 * XREFs of ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003B40
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003940 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003F70 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180004280 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x18000B16C (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18000EEFC (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000EFB4 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180014A64 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlyoutPopup::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  struct CAnimationComponent *v4; // rbx
  int *v5; // r13
  int v8; // r14d
  int v9; // edi
  int v10; // eax
  int v11; // eax
  struct CAnimationComponent *v12; // rsi
  HWND v13; // rdx
  int WindowEndCloak; // eax
  bool v15; // r13
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
  CAnimatedTransitionVisual *v26; // rcx
  __int64 v27; // rcx
  int v29; // eax
  int v30; // eax
  bool v31; // [rsp+50h] [rbp-39h] BYREF
  int v32; // [rsp+54h] [rbp-35h] BYREF
  int v33; // [rsp+58h] [rbp-31h] BYREF
  struct CAnimationComponent *v34; // [rsp+60h] [rbp-29h] BYREF
  struct CAnimationComponent *v35; // [rsp+68h] [rbp-21h] BYREF
  int *v36; // [rsp+70h] [rbp-19h]
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v38; // [rsp+90h] [rbp+7h] BYREF

  v36 = a4;
  v34 = 0LL;
  v4 = 0LL;
  v35 = 0LL;
  v5 = a4;
  v8 = 0;
  if ( (a3 & 1) == 0 )
    goto LABEL_37;
  if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 120LL))(a1) )
    goto LABEL_37;
  v9 = *(_DWORD *)(a2 + 584) & 0xFFF;
  v33 = 0;
  v32 = 0;
  if ( v9 < 12 )
    goto LABEL_37;
  if ( v9 > 16 )
  {
    if ( v9 == 43 )
    {
      v29 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 88LL))(a1);
      v30 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v29, &v34);
      v8 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v30, 0x4F9u);
      goto LABEL_40;
    }
    if ( v9 <= 76 || v9 > 82 && (v9 <= 87 || v9 > 92) )
      goto LABEL_37;
  }
  v10 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, (unsigned int)v9);
  v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          1,
          v10,
          0LL,
          0LL,
          -1,
          1,
          &v34);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v12 = v34;
    v13 = *(HWND *)(a2 + 40);
    v38 = *(struct tagRECT *)((char *)v34 + 88);
    rc = v38;
    WindowEndCloak = CWindowPropertyTracker::GetWindowEndCloak(
                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                       v13,
                       &v31);
    v15 = v31;
    if ( WindowEndCloak >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *, _QWORD, int *, int *))(*(_QWORD *)a1 + 128LL))(
             a1,
             (unsigned int)v9,
             &v33,
             &v32) )
      {
        v16 = v32;
        if ( v15 )
          v16 = -v32;
        v17 = v33;
        if ( v15 )
          v17 = -v33;
        p_rc = &v38;
        if ( !v15 )
          p_rc = &rc;
        OffsetRect(p_rc, v17, v16);
      }
      v19 = *(_DWORD *)(a2 + 584);
      if ( (v19 & 0x1000000) != 0 )
        rc = *(struct tagRECT *)(a2 + 604);
      if ( (v19 & 0x800000) != 0 )
        v38 = *(struct tagRECT *)(a2 + 636);
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v12 + 5), &rc);
      v20 = *((_QWORD *)v12 + 5);
      *(struct tagRECT *)(v20 + 856) = v38;
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
    v23 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, (unsigned int)v9);
    v24 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v23, &v35);
    v8 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v24, 0x4DBu);
      v4 = v35;
    }
    else
    {
      v4 = v35;
      if ( v35 )
      {
        CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v35 + 5), &rc);
        v25 = *((_QWORD *)v4 + 5);
        *(struct tagRECT *)(v25 + 856) = v38;
        CVisual::SetDirtyFlags((CVisual *)(v25 + 8), 0x1000u);
        *(_BYTE *)(*((_QWORD *)v4 + 5) + 971LL) = 1;
        *((_BYTE *)v4 + 74) = 1;
        v26 = (CAnimatedTransitionVisual *)*((_QWORD *)v4 + 5);
        if ( v15 )
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v26, 1.0);
          v27 = *((_QWORD *)v4 + 5);
          *(_DWORD *)(v27 + 916) = 0;
        }
        else
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v26, 0.0);
          v27 = *((_QWORD *)v4 + 5);
          *(_DWORD *)(v27 + 916) = 1065353216;
        }
        CVisual::SetDirtyFlags((CVisual *)(v27 + 8), 0x1000u);
        if ( *((_DWORD *)v4 + 17) != 2 )
          *((_DWORD *)v4 + 17) = 1;
        *((_DWORD *)v12 + 14) = *((_DWORD *)v4 + 14) + 1;
      }
    }
    v5 = v36;
    goto LABEL_33;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v11, 0x4B5u);
LABEL_40:
  v12 = v34;
LABEL_33:
  if ( v12 )
    CBaseObject::Release(v12);
  if ( v4 )
    CBaseObject::Release(v4);
LABEL_37:
  *v5 = v8;
  return 1;
}
