/*
 * XREFs of ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180003CF8 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180011124 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180038BC4 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x18008CB34 (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 *     ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180090A80 (-GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800910C0 (-GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA-AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGE.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x180092124 (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x18009279C (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800929CC (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180092CA0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x180092D7C (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093204 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x180093538 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     ?_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z @ 0x180093554 (-_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180093594 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180093908 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180093FB0 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppArrangementImmediate::_WindowEnumCallback(CImmersiveState **a1, __int64 a2, char a3, int *a4)
{
  int v4; // r15d
  struct CAnimationComponent *v5; // rsi
  int v9; // edi
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  int SpecialTargetInfo; // eax
  HWND v15; // rdx
  int PVLTarget; // eax
  int BitmapRects; // eax
  CDesktopManager *v18; // rbx
  bool v19; // zf
  char v20; // r12
  int v21; // eax
  int v22; // eax
  struct CAnimationComponent *v23; // rdi
  struct CAnimationComponent *v24; // r14
  char result; // al
  int v26; // ebx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  struct tagRECT *v31; // rsi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  char v36; // bl
  int v37; // edx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  struct tagRECT v44; // xmm0
  __int64 v45; // rcx
  __int64 v46; // rcx
  float v47; // xmm1_4
  CDesktopManager *v48; // rbx
  int v49; // xmm6_4
  float v50; // xmm1_4
  __int64 v51; // rcx
  struct tagRECT *v52; // rax
  struct CAnimationComponent *v53; // rbx
  __int64 v54; // rcx
  char v55; // r12
  unsigned int v56; // eax
  unsigned int v57; // [rsp+28h] [rbp-B9h]
  char v58; // [rsp+58h] [rbp-89h]
  char v59; // [rsp+59h] [rbp-88h]
  char v60; // [rsp+5Ah] [rbp-87h]
  struct CAnimationComponent *v61; // [rsp+60h] [rbp-81h] BYREF
  struct CAnimationComponent *v62; // [rsp+68h] [rbp-79h] BYREF
  struct CAnimationComponent *v63; // [rsp+70h] [rbp-71h] BYREF
  int v64; // [rsp+78h] [rbp-69h]
  int v65; // [rsp+7Ch] [rbp-65h]
  struct CAnimationComponent *v66; // [rsp+80h] [rbp-61h] BYREF
  int *v67; // [rsp+88h] [rbp-59h]
  struct tagRECT v68; // [rsp+90h] [rbp-51h] BYREF
  struct tagRECT v69; // [rsp+A8h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+B8h] [rbp-29h] BYREF
  struct tagRECT v71; // [rsp+C8h] [rbp-19h] BYREF
  struct tagRECT v72; // [rsp+D8h] [rbp-9h] BYREF

  v67 = a4;
  v4 = 0;
  v61 = 0LL;
  v5 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v66 = 0LL;
  CAppArrangementBase::_WindowEnumCallback((CAppArrangementBase *)a1, a2, a3, a4);
  if ( (a3 & 1) == 0 )
    goto LABEL_46;
  v9 = *(_DWORD *)(a2 + 568) & 0xFFF;
  *(_QWORD *)&v69.left = 0LL;
  *(_QWORD *)&v69.right = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  *(_QWORD *)&v68.left = 0LL;
  *(_QWORD *)&v68.right = 0LL;
  *(_QWORD *)&v71.left = 0LL;
  *(_QWORD *)&v71.right = 0LL;
  v10 = (unsigned int)(v9 - 29);
  v64 = 0;
  if ( (unsigned int)v10 > 0x25 || (v11 = 0x2000020491LL, v59 = 1, !_bittest64(&v11, v10)) )
    v59 = 0;
  v12 = (unsigned int)(v9 - 23);
  v60 = 0;
  if ( (unsigned int)v12 <= 0x2D && (v13 = 0x280000210061LL, _bittest64(&v13, v12))
    || (v58 = 0, CGroupingStoryboard::_IsPartOfGroup((CGroupingStoryboard *)a1, (struct CWindowData *)a2)) )
  {
    v58 = 1;
  }
  SpecialTargetInfo = CAppArrangementImmediate::GetSpecialTargetInfo((__int64)a1, v9);
  v15 = *(HWND *)(a2 + 40);
  LOBYTE(SpecialTargetInfo) = (SpecialTargetInfo & 8) != 0;
  v65 = SpecialTargetInfo;
  if ( CStoryboard::_HasUsableBitmapResource((CStoryboard *)a1, v15) )
  {
    PVLTarget = CAppArrangementImmediate::GetPVLTarget((__int64)a1, v9);
    BitmapRects = CStoryboard::_CreateAndAddBitmapAnimationComponent(
                    (CStoryboard *)a1,
                    *(HWND *)(a2 + 40),
                    v9,
                    PVLTarget,
                    (volatile signed __int32 **)&v66);
    v4 = BitmapRects;
    if ( BitmapRects < 0 )
    {
      v57 = 3612;
LABEL_12:
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, BitmapRects, v57);
      goto LABEL_44;
    }
    v18 = CDesktopManager::s_pDesktopManagerInstance;
    BitmapRects = CTransitionVisualController::GetBitmapRects(
                    *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                    *(HWND *)(a2 + 40),
                    &v68,
                    &v71);
    v4 = BitmapRects;
    if ( BitmapRects < 0 )
    {
      v57 = 3613;
      goto LABEL_12;
    }
  }
  else
  {
    v18 = CDesktopManager::s_pDesktopManagerInstance;
  }
  if ( v9 > 36 )
  {
    if ( v9 <= 66 )
    {
      if ( v9 == 66 || v9 == 39 )
        goto LABEL_49;
      if ( v9 != 43 )
      {
        if ( v9 <= 43 || v9 > 47 && (v9 <= 52 || v9 > 55) )
          goto LABEL_28;
        goto LABEL_49;
      }
LABEL_34:
      v60 = 1;
      v21 = CAppArrangementImmediate::GetPVLTarget((__int64)a1, v9);
      v22 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v21, &v61);
      v4 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0xE7Eu);
LABEL_36:
        v5 = v61;
        goto LABEL_37;
      }
      goto LABEL_74;
    }
    if ( v9 == 70 )
      goto LABEL_49;
    if ( v9 > 70 )
    {
      if ( v9 > 74 )
      {
        v19 = v9 == 84;
LABEL_27:
        if ( !v19 )
          goto LABEL_28;
LABEL_49:
        if ( v59 )
        {
          v27 = *(_DWORD *)(a2 + 568);
          v72 = *(struct tagRECT *)(a2 + 48);
          if ( (v27 & 0x1000000) != 0 )
            v72 = *(struct tagRECT *)(a2 + 572);
          v28 = CAppArrangementImmediate::GetPVLTarget((__int64)a1, v27);
          v29 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  v28,
                  &v72,
                  1,
                  &v61);
          v4 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v29, 0xE49u);
            goto LABEL_36;
          }
        }
        else
        {
          if ( v9 == 47 )
          {
            v34 = CAppArrangementImmediate::GetPVLTarget((__int64)a1, *(_DWORD *)(a2 + 568));
            v35 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    0,
                    v34,
                    (struct tagRECT *)(a2 + 572),
                    0LL,
                    -1,
                    1,
                    &v61);
            v4 = v35;
            if ( v35 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v35, 0xE51u);
              goto LABEL_36;
            }
            goto LABEL_86;
          }
          v36 = v9 != 44;
          v37 = *(_DWORD *)(a2 + 568);
          if ( (v37 & 0x1000000) != 0 )
          {
            v38 = CAppArrangementImmediate::GetPVLTarget((__int64)a1, v37);
            v39 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    v36,
                    v38,
                    (struct tagRECT *)(a2 + 572),
                    0LL,
                    -1,
                    1,
                    &v61);
            v4 = v39;
            if ( v39 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v39, 0xE58u);
              goto LABEL_36;
            }
          }
          else
          {
            v40 = CAppArrangementImmediate::GetPVLTarget((__int64)a1, v37);
            v41 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    v36,
                    v40,
                    0LL,
                    0LL,
                    -1,
                    1,
                    &v61);
            v4 = v41;
            if ( v41 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v41, 0xE5Cu);
              goto LABEL_36;
            }
          }
        }
        if ( (unsigned int)(v9 - 45) <= 1 )
        {
          v5 = v61;
          if ( *((_DWORD *)v61 + 17) != 2 )
            *((_DWORD *)v61 + 17) = 3;
          goto LABEL_87;
        }
LABEL_86:
        v5 = v61;
LABEL_87:
        if ( (unsigned int)CAppArrangementImmediate::GetPVLTarget((__int64)a1, v9) == 4 )
          *((_BYTE *)v5 + 73) = 0;
LABEL_89:
        if ( !v5 || v60 )
          goto LABEL_28;
        if ( (*(_DWORD *)(a2 + 568) & 0x1000000) != 0 )
        {
          if ( *((_BYTE *)v5 + 67) )
          {
            v42 = (unsigned int)(v9 - 23);
            if ( (unsigned int)v42 <= 0x2F )
            {
              v43 = 0x800000000121LL;
              if ( _bittest64(&v43, v42) )
              {
                CStoryboard::ResizeToSnapshot(*(HWND *)(a2 + 40), (const struct tagRECT *)(a2 + 588), &v69);
LABEL_99:
                CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v5 + 5), &v69);
                if ( (*(_DWORD *)(a2 + 568) & 0x800000) != 0 )
                  rc = *(struct tagRECT *)(a2 + 620);
                else
                  rc = v69;
                OffsetRect(&rc, v64, 0);
                OffsetRect(&v71, v64, 0);
                v45 = *((_QWORD *)v5 + 5);
                *(struct tagRECT *)(v45 + 856) = rc;
                CVisual::SetDirtyFlags((CVisual *)(v45 + 8), 4096);
                if ( v9 == 20 || v9 == 33 )
                {
                  *(_BYTE *)(*((_QWORD *)v5 + 5) + 955LL) = 1;
                  if ( *((_DWORD *)v5 + 17) != 2 )
                    *((_DWORD *)v5 + 17) = 1;
                  v46 = *((_QWORD *)v5 + 5);
                  *(_DWORD *)(v46 + 916) = 0;
                  CVisual::SetDirtyFlags((CVisual *)(v46 + 8), 4096);
                }
                if ( (unsigned int)(v9 - 72) <= 2 )
                {
                  v48 = CDesktopManager::s_pDesktopManagerInstance;
                  v49 = 0;
                  if ( v9 == 72 )
                    v50 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 389);
                  else
                    v50 = 0.0;
                  CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v5 + 5), v50);
                  if ( v9 != 72 )
                    v49 = *((_DWORD *)v48 + 389);
                  v51 = *((_QWORD *)v5 + 5);
                  *(_DWORD *)(v51 + 916) = v49;
                  CVisual::SetDirtyFlags((CVisual *)(v51 + 8), 4096);
                }
                else
                {
                  if ( (unsigned int)(v9 - 45) <= 1 )
                    v47 = FLOAT_0_44999999;
                  else
                    v47 = FLOAT_1_0;
                  CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v5 + 5), v47);
                }
                v20 = v58;
                if ( (unsigned int)(v9 - 53) <= 1 )
                {
                  *(_BYTE *)(*((_QWORD *)v5 + 5) + 956LL) = v9 == 54;
                  *(_BYTE *)(*((_QWORD *)v5 + 5) + 968LL) = 1;
                  *(_BYTE *)(*((_QWORD *)v5 + 5) + 955LL) = 1;
                }
                goto LABEL_124;
              }
            }
          }
          v44 = *(struct tagRECT *)(a2 + 588);
        }
        else
        {
          v44 = *(struct tagRECT *)((char *)v5 + 88);
        }
        v69 = v44;
        goto LABEL_99;
      }
      if ( (*(_DWORD *)(a2 + 568) & 0x1000000) == 0
        || (v31 = (struct tagRECT *)(a2 + 572), IsRectEmpty((const RECT *)(a2 + 572))) )
      {
        v31 = 0LL;
      }
      v32 = CAppArrangementImmediate::GetPVLTarget((__int64)a1, *(_DWORD *)(a2 + 568));
      v33 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              (unsigned int)(v9 - 71) <= 1,
              v32,
              v31,
              0LL,
              -1,
              0,
              &v61);
      v4 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v33, 0xE90u);
        goto LABEL_36;
      }
LABEL_74:
      v5 = v61;
      goto LABEL_89;
    }
LABEL_28:
    if ( v9 == 68 || v9 == 32 )
    {
      v19 = (*(_DWORD *)(a2 + 568) & 0x800000) == 0;
      v52 = (struct tagRECT *)(a2 + 620);
      v69 = *(struct tagRECT *)(a2 + 588);
      if ( v19 )
        v52 = &v69;
      rc = *v52;
    }
    else if ( (unsigned int)(v9 - 35) > 1 )
    {
LABEL_31:
      v20 = 0;
      goto LABEL_124;
    }
    v20 = v58;
LABEL_124:
    v53 = v66;
    if ( v66 )
    {
      CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v66 + 5), &v68);
      v54 = *((_QWORD *)v53 + 5);
      *(struct tagRECT *)(v54 + 856) = v71;
      CVisual::SetDirtyFlags((CVisual *)(v54 + 8), 4096);
    }
    v19 = v20 == 0;
    v55 = v65;
    if ( !v19 )
    {
      v56 = 22;
      if ( (_BYTE)v65 )
        v56 = v9;
      CGroupingStoryboard::_CreateGuttersForApp((CStoryboard *)a1, a2, &v69, &rc.left, v56, &v62, &v63);
    }
    if ( v55 )
    {
      if ( v5 )
        CGroupingStoryboard::_SetUnifiedCenter((CGroupingStoryboard *)a1, v5);
      v24 = v62;
      if ( v62 )
        CGroupingStoryboard::_SetUnifiedCenter((CGroupingStoryboard *)a1, v62);
      v23 = v63;
      if ( v63 )
        CGroupingStoryboard::_SetUnifiedCenter((CGroupingStoryboard *)a1, v63);
      if ( v53 )
        CGroupingStoryboard::_SetUnifiedCenter((CGroupingStoryboard *)a1, v53);
      goto LABEL_38;
    }
LABEL_37:
    v23 = v63;
    v24 = v62;
LABEL_38:
    if ( v5 )
      CBaseObject::Release(v5);
    if ( v24 )
      CBaseObject::Release(v24);
    if ( v23 )
      CBaseObject::Release(v23);
    goto LABEL_44;
  }
  if ( v9 < 35 )
  {
    switch ( v9 )
    {
      case 7:
        v26 = (int)(*((double *)v18 + 165) * -50.0);
        v64 = v26;
        if ( CStoryboard::IsRTL() )
          v64 = -v26;
        goto LABEL_49;
      case 20:
        goto LABEL_49;
      case 22:
        if ( !CAppArrangementBase::_IsOnAnimatingMonitor((CAppArrangementBase *)a1, (const struct tagRECT *)(a2 + 48))
          || CImmersiveState::IsLauncherShownAboveWindow(a1[23], (const struct tagRECT *)a2) )
        {
          goto LABEL_31;
        }
        break;
      case 23:
        goto LABEL_49;
      default:
        if ( v9 <= 27 )
          goto LABEL_28;
        if ( v9 <= 29 || v9 == 31 )
          goto LABEL_49;
        if ( v9 != 32 )
        {
          v19 = v9 == 33;
          goto LABEL_27;
        }
        break;
    }
    goto LABEL_34;
  }
  v30 = CAppArrangementImmediate::_HandleThumbnailTag((CAppArrangementImmediate *)a1, (struct CWindowData *)a2, v59);
  v4 = v30;
  if ( v30 >= 0 )
    goto LABEL_28;
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v30, 0xE24u);
LABEL_44:
  if ( v66 )
    CBaseObject::Release(v66);
LABEL_46:
  result = 1;
  *v67 = v4;
  return result;
}
