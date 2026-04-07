/*
 * XREFs of ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800048B0
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004660 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004CD0 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x180009F54 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18000F470 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180038BC4 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

char __fastcall CFlyoutPopup::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v6; // r12d
  struct CAnimationComponent *v7; // rdi
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  struct CAnimationComponent *v11; // rsi
  HWND v12; // rdx
  int WindowEndCloak; // eax
  bool v14; // di
  int v15; // r8d
  int v16; // edx
  struct tagRECT *p_rc; // rcx
  int v18; // eax
  __int64 v19; // rcx
  CAnimatedTransitionVisual *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  bool v25; // zf
  CAnimatedTransitionVisual *v26; // rcx
  __int64 v27; // rcx
  char result; // al
  bool v29; // [rsp+50h] [rbp-39h] BYREF
  int dy; // [rsp+54h] [rbp-35h] BYREF
  int v31; // [rsp+58h] [rbp-31h] BYREF
  struct CAnimationComponent *v32; // [rsp+60h] [rbp-29h] BYREF
  struct CAnimationComponent *v33; // [rsp+68h] [rbp-21h] BYREF
  int *v34; // [rsp+70h] [rbp-19h]
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v36; // [rsp+90h] [rbp+7h] BYREF

  v34 = a4;
  v33 = 0LL;
  v32 = 0LL;
  v6 = 0;
  v7 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *, __int64))(*(_QWORD *)a1 + 120LL))(a1, a2) )
    {
      v8 = *(_DWORD *)(a2 + 568) & 0xFFF;
      v31 = 0;
      dy = 0;
      if ( v8 >= 12 && (v8 <= 16 || (unsigned int)(v8 - 77) <= 5) )
      {
        v9 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, (unsigned int)v8);
        v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                a1,
                (struct CWindowData *)a2,
                1,
                v9,
                0LL,
                0LL,
                -1,
                1,
                &v33);
        v11 = v33;
        v6 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x49Au);
        }
        else
        {
          v12 = *(HWND *)(a2 + 40);
          v36 = *(struct tagRECT *)((char *)v33 + 88);
          rc = v36;
          WindowEndCloak = CWindowPropertyTracker::GetWindowEndCloak(
                             (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24)
                                                      + 48LL),
                             v12,
                             &v29);
          v14 = v29;
          if ( WindowEndCloak >= 0 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *, _QWORD, int *, int *))(*(_QWORD *)a1 + 128LL))(
                   a1,
                   (unsigned int)v8,
                   &v31,
                   &dy) )
            {
              v15 = dy;
              if ( v14 )
                v15 = -dy;
              v16 = v31;
              if ( v14 )
                v16 = -v31;
              p_rc = &v36;
              if ( !v14 )
                p_rc = &rc;
              OffsetRect(p_rc, v16, v15);
            }
            v18 = *(_DWORD *)(a2 + 568);
            if ( (v18 & 0x1000000) != 0 )
              rc = *(struct tagRECT *)(a2 + 588);
            if ( (v18 & 0x800000) != 0 )
              v36 = *(struct tagRECT *)(a2 + 620);
            CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v11 + 5), &rc);
            v19 = *((_QWORD *)v11 + 5);
            *(struct tagRECT *)(v19 + 856) = v36;
            CVisual::SetDirtyFlags((CVisual *)(v19 + 8), 0x1000u);
            v20 = (CAnimatedTransitionVisual *)*((_QWORD *)v11 + 5);
            if ( v14 )
            {
              CAnimatedTransitionVisual::SetBeginAlpha(v20, 1.0);
              v21 = *((_QWORD *)v11 + 5);
              *(_DWORD *)(v21 + 916) = 0;
            }
            else
            {
              CAnimatedTransitionVisual::SetBeginAlpha(v20, 0.0);
              v21 = *((_QWORD *)v11 + 5);
              *(_DWORD *)(v21 + 916) = 1065353216;
            }
            CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 0x1000u);
          }
          v22 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, (unsigned int)v8);
          v23 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v22, &v32);
          v6 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v23, 0x4C0u);
            v7 = v32;
          }
          else
          {
            v7 = v32;
            if ( v32 )
            {
              CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v32 + 5), &rc);
              v24 = *((_QWORD *)v7 + 5);
              *(struct tagRECT *)(v24 + 856) = v36;
              CVisual::SetDirtyFlags((CVisual *)(v24 + 8), 0x1000u);
              v25 = !v29;
              *(_BYTE *)(*((_QWORD *)v7 + 5) + 971LL) = 1;
              *((_BYTE *)v7 + 74) = 1;
              v26 = (CAnimatedTransitionVisual *)*((_QWORD *)v7 + 5);
              if ( v25 )
              {
                CAnimatedTransitionVisual::SetBeginAlpha(v26, 0.0);
                v27 = *((_QWORD *)v7 + 5);
                *(_DWORD *)(v27 + 916) = 1065353216;
              }
              else
              {
                CAnimatedTransitionVisual::SetBeginAlpha(v26, 1.0);
                v27 = *((_QWORD *)v7 + 5);
                *(_DWORD *)(v27 + 916) = 0;
              }
              CVisual::SetDirtyFlags((CVisual *)(v27 + 8), 0x1000u);
              if ( *((_DWORD *)v7 + 17) != 2 )
                *((_DWORD *)v7 + 17) = 1;
              *((_DWORD *)v11 + 14) = *((_DWORD *)v7 + 14) + 1;
            }
          }
        }
        if ( v11 )
          CBaseObject::Release(v11);
        if ( v7 )
          CBaseObject::Release(v7);
      }
    }
  }
  result = 1;
  *v34 = v6;
  return result;
}
