/*
 * XREFs of ?_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800955D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x180001500 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180004DE8 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180005990 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180009228 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180009EAC (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180038BC4 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x18008CB34 (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 *     ?GetPVLTarget@CAppLaunchWithTile@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180090B20 (-GetPVLTarget@CAppLaunchWithTile@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z @ 0x180091690 (-MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z.c)
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x18009279C (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180092CA0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x180093538 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800936A4 (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 */

char __fastcall CAppLaunchWithTile::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  struct tagRECT *v4; // r13
  int v5; // r14d
  int v8; // edi
  struct tagPOINT **v9; // r15
  struct tagRECT v10; // xmm0
  HWND v11; // rdx
  CWindowPropertyTracker *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int PVLTarget; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  int BitmapRects; // eax
  int v24; // eax
  int v25; // eax
  char v26; // di
  int v27; // edx
  int v28; // r8d
  int v29; // eax
  int v30; // eax
  struct tagRECT v31; // xmm0
  int v32; // eax
  int v33; // eax
  LONG v34; // edx
  int v35; // ebx
  float v36; // xmm0_4
  struct CAnimationComponent *v37; // rcx
  struct tagPOINT v38; // xmm0_8
  __int64 v39; // rax
  struct tagPOINT *v40; // rax
  struct tagRECT v41; // xmm6
  int v42; // eax
  int v43; // r8d
  int v44; // ecx
  LONG v45; // eax
  int v46; // r8d
  int v47; // ecx
  int v48; // eax
  int v49; // r8d
  struct CAnimationComponent *v50; // rbx
  __int64 v51; // rcx
  struct tagPOINT *v52; // rcx
  int v53; // r14d
  char result; // al
  char v55; // [rsp+58h] [rbp-69h]
  struct CAnimationComponent *v56; // [rsp+60h] [rbp-61h] BYREF
  struct tagRECT v57; // [rsp+68h] [rbp-59h] BYREF
  struct tagPOINT v58; // [rsp+78h] [rbp-49h] BYREF
  LONG v59; // [rsp+80h] [rbp-41h]
  struct tagRECT v60; // [rsp+88h] [rbp-39h] BYREF
  int *v61; // [rsp+98h] [rbp-29h]
  struct tagRECT rc; // [rsp+A8h] [rbp-19h] BYREF
  struct tagRECT v63; // [rsp+B8h] [rbp-9h] BYREF

  v4 = 0LL;
  v5 = *(_DWORD *)(a2 + 568) & 0xFFF;
  v61 = a4;
  v56 = 0LL;
  *(_QWORD *)&v57.left = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_90;
    v53 = v5 - 1;
    if ( v53 )
    {
      if ( v53 != 2 )
        goto LABEL_90;
    }
    else
    {
      *(_BYTE *)(a1 + 176) = 1;
    }
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 40);
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_86;
  }
  v58.x = 0;
  v58.y = 0;
  v60 = 0LL;
  v10 = *(struct tagRECT *)(a2 + 48);
  v11 = *(HWND *)(a2 + 40);
  v12 = (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL);
  v55 = 0;
  rc = v10;
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(v12, v11, &v58) >= 0 )
    OffsetRect(&rc, v58.x - rc.left, v58.y - rc.top);
  if ( v5 != 1 )
  {
    if ( v5 <= 2 )
      goto LABEL_55;
    if ( v5 > 4 )
    {
      switch ( v5 )
      {
        case 22:
          if ( !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
            goto LABEL_55;
          if ( *(_BYTE *)(a1 + 176) )
          {
            PVLTarget = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 568));
            v18 = CStoryboard::_CreateAndAddNullComponentWithWindow(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    PVLTarget,
                    &v56);
            v8 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x9C1u);
            break;
          }
          if ( (*(_BYTE *)(a2 + 552) & 1) == 0 )
            goto LABEL_55;
          if ( (*(_BYTE *)(a2 + 556) & 1) != 0 )
            goto LABEL_55;
          v19 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 568));
          v20 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  0,
                  v19,
                  0LL,
                  0LL,
                  -1,
                  1,
                  &v56);
          v8 = v20;
          if ( v20 >= 0 )
            goto LABEL_55;
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x9C7u);
          break;
        case 30:
          *(_QWORD *)&v57.left = 0LL;
          CStoryboard::_GetIdealRects((struct CWindowData *)a2, 0LL, &rc, (struct tagRECT **)&v57, 0LL);
          v15 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 568));
          v16 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  0,
                  v15,
                  *(struct tagRECT **)&v57.left,
                  0LL,
                  -1,
                  1,
                  &v56);
          v8 = v16;
          if ( v16 >= 0 )
            goto LABEL_55;
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x9D0u);
          break;
        case 43:
          v13 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 568));
          v14 = CStoryboard::_CreateAndAddNullComponentWithWindow(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  v13,
                  &v56);
          v8 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x9DAu);
          break;
        default:
LABEL_55:
          v41 = rc;
          v57 = rc;
          if ( v55 )
          {
            if ( v5 == 4 )
            {
              CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v63);
              v42 = v63.right - v63.left;
              if ( v63.right - v63.left < 0 )
                v42 = 0;
              v43 = v60.right - v60.left;
              v44 = v60.right - v60.left;
              if ( v60.right - v60.left < 0 )
                v44 = 0;
              v45 = v63.left + (v42 - v44) / 2;
              v57.left = v45;
              if ( v43 < 0 )
                v43 = 0;
              v57.right = v43 + v45;
              v57.top = v60.top;
              v57.bottom = v60.bottom;
            }
            else
            {
              v46 = rc.bottom - rc.top;
              if ( rc.bottom - rc.top < 0 )
                v46 = 0;
              v57.top = v60.top;
              v47 = v60.bottom - v60.top;
              v57.bottom = v60.bottom;
              if ( v60.bottom - v60.top < 0 )
                v47 = 0;
              v48 = rc.right - rc.left;
              if ( rc.right - rc.left < 0 )
                v48 = 0;
              v49 = v47 * v48 / v46;
              v57.left = (v60.left + v60.right) / 2 - v49 / 2;
              v57.right = v49 + v57.left;
            }
          }
          v50 = v56;
          if ( v56 )
          {
            CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v56 + 5), &v57);
            v51 = *((_QWORD *)v50 + 5);
            *(struct tagRECT *)(v51 + 856) = v41;
            CVisual::SetDirtyFlags((CVisual *)(v51 + 8), 4096);
            *(_BYTE *)(*((_QWORD *)v50 + 5) + 955LL) = 1;
            if ( ((v5 - 1) & 0xFFFFFFFC) == 0 && v5 != 2 )
              *(_BYTE *)(*((_QWORD *)v50 + 5) + 968LL) = 1;
            CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v50 + 5), 0.0);
            if ( *((_DWORD *)v56 + 17) != 2 )
              *((_DWORD *)v56 + 17) = 3;
          }
          if ( v9 )
          {
            CAnimatedTransitionVisual::SetBeginRect(v9[5], &v60);
            v52 = v9[5];
            *(struct tagRECT *)&v52[107].x = v41;
            CVisual::SetDirtyFlags((CVisual *)&v52[1], 4096);
            HIBYTE(v9[5][119].x) = 1;
            LOBYTE(v9[5][121].x) = 1;
            if ( *((_DWORD *)v56 + 17) != 2 )
              *((_DWORD *)v56 + 17) = 3;
          }
          break;
      }
LABEL_86:
      if ( v56 )
        CBaseObject::Release(v56);
      goto LABEL_88;
    }
  }
  if ( !CStoryboard::_HasUsableBitmapResource((CStoryboard *)a1, *(HWND *)(a1 + 168)) )
  {
LABEL_30:
    if ( *(_DWORD *)(a2 + 112) == 1 )
      *(_DWORD *)(a2 + 568) |= 0x4000000u;
    if ( (*(_DWORD *)(a2 + 568) & 0x10000000) == 0
      || (v26 = 0, (int)CTransitionVisualController::GetClonableOwnedWindowCount((struct CWindowData *)a2, v21, v22) <= 0) )
    {
      v26 = 1;
    }
    if ( (*(_DWORD *)(a2 + 568) & 0x1000000) == 0 || IsRectEmpty((const RECT *)(a2 + 572)) )
    {
      v32 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 568));
      v33 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              v32,
              0LL,
              0LL,
              -1,
              v26,
              &v56);
      v8 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v33, 0x984u);
        goto LABEL_86;
      }
      if ( *(_DWORD *)(a2 + 112) != 1 )
      {
LABEL_47:
        v34 = 0;
        v58 = 0LL;
        v59 = 0;
        v35 = 1;
        if ( v5 == 3 )
        {
          v36 = (float)((float)((float)(v60.bottom + v60.top) * 0.5) + (float)((float)(rc.bottom + rc.top) * 0.5)) * 0.5;
          *(float *)&v57.left = (float)((float)((float)(v60.right + v60.left) * 0.5)
                                      + (float)((float)(rc.right + rc.left) * 0.5))
                              * 0.5;
        }
        else
        {
          if ( v5 != 4 )
          {
            v58.x = 1056964608;
            v35 = 2;
            v58.y = 1056964608;
LABEL_53:
            v37 = v56;
            v38 = v58;
            v39 = *((_QWORD *)v56 + 5);
            *(struct tagPOINT *)(v39 + 784) = v58;
            *(_DWORD *)(v39 + 792) = v34;
            *(_DWORD *)(v39 + 1004) = v35;
            *(_BYTE *)(v39 + 957) = 1;
            *(_BYTE *)(*((_QWORD *)v37 + 5) + 1020LL) = 1;
            if ( v9 )
            {
              v40 = v9[5];
              v40[98] = v38;
              v40[99].x = v34;
              v40[125].y = v35;
              BYTE1(v40[119].y) = 1;
              LOBYTE(v9[5][127].y) = 1;
            }
            goto LABEL_55;
          }
          v63 = 0LL;
          CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v63);
          *(float *)&v57.left = (float)(v63.right + v63.left) * 0.5;
          v36 = (float)(v63.bottom + v63.top) * 0.5;
        }
        *(float *)&v57.top = v36;
        MapPointIntoRectangle((const struct MilPoint2F *)&v57, &rc, (struct MilPoint3F *)&v58);
        v34 = v59;
        goto LABEL_53;
      }
      v31 = *(struct tagRECT *)(a1 + 152);
    }
    else
    {
      *(_QWORD *)&v63.left = 0LL;
      *(_QWORD *)&v63.right = 0LL;
      if ( v5 == 1 )
      {
        v27 = -*(_DWORD *)(a2 + 588);
        v28 = -HIDWORD(*(_QWORD *)(a2 + 588));
        v63 = *(struct tagRECT *)(a2 + 588);
        OffsetRect(&v63, v27, v28);
        v4 = &v63;
      }
      v29 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 568));
      v30 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              v29,
              (struct tagRECT *)(a2 + 572),
              v4,
              -1,
              v26,
              &v56);
      v8 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v30, 0x97Fu);
        goto LABEL_86;
      }
      v31 = *(struct tagRECT *)(a2 + 588);
    }
    rc = v31;
    goto LABEL_47;
  }
  BitmapRects = CTransitionVisualController::GetBitmapRects(
                  *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                  *(HWND *)(a1 + 168),
                  &v60,
                  0LL);
  v8 = BitmapRects;
  if ( BitmapRects < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, BitmapRects, 0x958u);
    goto LABEL_90;
  }
  if ( v5 == 4 )
  {
LABEL_29:
    v55 = 1;
    goto LABEL_30;
  }
  v24 = CAppLaunchWithTile::GetPVLTarget(a1, 5);
  v25 = CStoryboard::_CreateAndAddBitmapAnimationComponent(
          (CStoryboard *)a1,
          *(HWND *)(a1 + 168),
          5,
          v24,
          (volatile signed __int32 **)&v57);
  v8 = v25;
  if ( v25 >= 0 )
  {
    v9 = *(struct tagPOINT ***)&v57.left;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v25, 0x95Bu);
  v9 = *(struct tagPOINT ***)&v57.left;
LABEL_88:
  if ( v9 )
    CBaseObject::Release((CBaseObject *)v9);
LABEL_90:
  result = 1;
  *v61 = v8;
  return result;
}
