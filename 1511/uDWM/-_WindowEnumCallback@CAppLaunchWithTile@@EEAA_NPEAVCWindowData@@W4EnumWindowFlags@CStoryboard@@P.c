/*
 * XREFs of ?_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z @ 0x1800011A8 (-MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180002518 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180003B74 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x180006BC0 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006DB0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18001138C (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800133C8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180013448 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x180090438 (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 *     ?GetPVLTarget@CAppLaunchWithTile@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180093850 (-GetPVLTarget@CAppLaunchWithTile@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x180095098 (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x180095D08 (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
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
  int BitmapRects; // eax
  int v22; // eax
  int v23; // eax
  bool v24; // di
  int v25; // edx
  int v26; // r8d
  int v27; // eax
  int v28; // eax
  struct tagRECT v29; // xmm0
  int v30; // eax
  int v31; // eax
  LONG v32; // edx
  int v33; // ebx
  float v34; // xmm0_4
  struct CAnimationComponent *v35; // rcx
  struct tagPOINT v36; // xmm0_8
  __int64 v37; // rax
  struct tagPOINT *v38; // rax
  struct tagRECT v39; // xmm6
  int v40; // eax
  int v41; // r8d
  int v42; // ecx
  LONG v43; // eax
  int v44; // r8d
  int v45; // ecx
  int v46; // eax
  int v47; // r8d
  struct CAnimationComponent *v48; // rbx
  __int64 v49; // rcx
  struct tagPOINT *v50; // rcx
  int v51; // r14d
  char result; // al
  char v53; // [rsp+58h] [rbp-69h]
  struct CAnimationComponent *v54; // [rsp+60h] [rbp-61h] BYREF
  struct tagRECT v55; // [rsp+68h] [rbp-59h] BYREF
  struct tagPOINT v56; // [rsp+78h] [rbp-49h] BYREF
  LONG v57; // [rsp+80h] [rbp-41h]
  struct tagRECT v58; // [rsp+88h] [rbp-39h] BYREF
  int *v59; // [rsp+98h] [rbp-29h]
  struct tagRECT rc; // [rsp+A8h] [rbp-19h] BYREF
  struct tagRECT v61; // [rsp+B8h] [rbp-9h] BYREF

  v4 = 0LL;
  v5 = *(_DWORD *)(a2 + 576) & 0xFFF;
  v59 = a4;
  v54 = 0LL;
  *(_QWORD *)&v55.left = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_90;
    v51 = v5 - 1;
    if ( v51 )
    {
      if ( v51 != 2 )
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
  v56.x = 0;
  v56.y = 0;
  v58 = 0LL;
  v10 = *(struct tagRECT *)(a2 + 48);
  v11 = *(HWND *)(a2 + 40);
  v12 = (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL);
  v53 = 0;
  rc = v10;
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(v12, v11, &v56) >= 0 )
    OffsetRect(&rc, v56.x - rc.left, v56.y - rc.top);
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
            PVLTarget = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 576));
            v18 = CStoryboard::_CreateAndAddNullComponentWithWindow(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    PVLTarget,
                    &v54);
            v8 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x9E9u);
            break;
          }
          if ( (*(_BYTE *)(a2 + 568) & 1) == 0 )
            goto LABEL_55;
          if ( (*(_BYTE *)(a2 + 572) & 1) != 0 )
            goto LABEL_55;
          v19 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 576));
          v20 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  0,
                  v19,
                  0LL,
                  0LL,
                  -1,
                  1,
                  &v54);
          v8 = v20;
          if ( v20 >= 0 )
            goto LABEL_55;
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x9EFu);
          break;
        case 30:
          *(_QWORD *)&v55.left = 0LL;
          CStoryboard::_GetIdealRects((struct CWindowData *)a2, 0LL, &rc, (struct tagRECT **)&v55, 0LL);
          v15 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 576));
          v16 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  0,
                  v15,
                  *(struct tagRECT **)&v55.left,
                  0LL,
                  -1,
                  1,
                  &v54);
          v8 = v16;
          if ( v16 >= 0 )
            goto LABEL_55;
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x9F8u);
          break;
        case 43:
          v13 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 576));
          v14 = CStoryboard::_CreateAndAddNullComponentWithWindow(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  v13,
                  &v54);
          v8 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0xA02u);
          break;
        default:
LABEL_55:
          v39 = rc;
          v55 = rc;
          if ( v53 )
          {
            if ( v5 == 4 )
            {
              CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v61);
              v40 = v61.right - v61.left;
              if ( v61.right - v61.left < 0 )
                v40 = 0;
              v41 = v58.right - v58.left;
              v42 = v58.right - v58.left;
              if ( v58.right - v58.left < 0 )
                v42 = 0;
              v43 = v61.left + (v40 - v42) / 2;
              v55.left = v43;
              if ( v41 < 0 )
                v41 = 0;
              v55.right = v41 + v43;
              v55.top = v58.top;
              v55.bottom = v58.bottom;
            }
            else
            {
              v44 = rc.bottom - rc.top;
              if ( rc.bottom - rc.top < 0 )
                v44 = 0;
              v55.top = v58.top;
              v45 = v58.bottom - v58.top;
              v55.bottom = v58.bottom;
              if ( v58.bottom - v58.top < 0 )
                v45 = 0;
              v46 = rc.right - rc.left;
              if ( rc.right - rc.left < 0 )
                v46 = 0;
              v47 = v45 * v46 / v44;
              v55.left = (v58.left + v58.right) / 2 - v47 / 2;
              v55.right = v47 + v55.left;
            }
          }
          v48 = v54;
          if ( v54 )
          {
            CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v54 + 5), &v55);
            v49 = *((_QWORD *)v48 + 5);
            *(struct tagRECT *)(v49 + 856) = v39;
            CVisual::SetDirtyFlags((CVisual *)(v49 + 8), 4096);
            *(_BYTE *)(*((_QWORD *)v48 + 5) + 955LL) = 1;
            if ( ((v5 - 1) & 0xFFFFFFFC) == 0 && v5 != 2 )
              *(_BYTE *)(*((_QWORD *)v48 + 5) + 968LL) = 1;
            CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v48 + 5), 0.0);
            if ( *((_DWORD *)v54 + 17) != 2 )
              *((_DWORD *)v54 + 17) = 3;
          }
          if ( v9 )
          {
            CAnimatedTransitionVisual::SetBeginRect(v9[5], &v58);
            v50 = v9[5];
            *(struct tagRECT *)&v50[107].x = v39;
            CVisual::SetDirtyFlags((CVisual *)&v50[1], 4096);
            HIBYTE(v9[5][119].x) = 1;
            LOBYTE(v9[5][121].x) = 1;
            if ( *((_DWORD *)v54 + 17) != 2 )
              *((_DWORD *)v54 + 17) = 3;
          }
          break;
      }
LABEL_86:
      if ( v54 )
        CBaseObject::Release(v54);
      goto LABEL_88;
    }
  }
  if ( !CStoryboard::_HasUsableBitmapResource((CStoryboard *)a1, *(HWND *)(a1 + 168)) )
  {
LABEL_30:
    if ( *(_DWORD *)(a2 + 112) == 1 )
      *(_DWORD *)(a2 + 576) |= 0x4000000u;
    if ( (*(_DWORD *)(a2 + 576) & 0x10000000) == 0
      || (v24 = 0, (int)CTransitionVisualController::GetClonableOwnedWindowCount((struct CWindowData *)a2) <= 0) )
    {
      v24 = 1;
    }
    if ( (*(_DWORD *)(a2 + 576) & 0x1000000) == 0 || IsRectEmpty((const RECT *)(a2 + 580)) )
    {
      v30 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 576));
      v31 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              v30,
              0LL,
              0LL,
              -1,
              v24,
              &v54);
      v8 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v31, 0x9ACu);
        goto LABEL_86;
      }
      if ( *(_DWORD *)(a2 + 112) != 1 )
      {
LABEL_47:
        v32 = 0;
        v56 = 0LL;
        v57 = 0;
        v33 = 1;
        if ( v5 == 3 )
        {
          v34 = (float)((float)((float)(v58.bottom + v58.top) * 0.5) + (float)((float)(rc.bottom + rc.top) * 0.5)) * 0.5;
          *(float *)&v55.left = (float)((float)((float)(v58.right + v58.left) * 0.5)
                                      + (float)((float)(rc.right + rc.left) * 0.5))
                              * 0.5;
        }
        else
        {
          if ( v5 != 4 )
          {
            v56.x = 1056964608;
            v33 = 2;
            v56.y = 1056964608;
LABEL_53:
            v35 = v54;
            v36 = v56;
            v37 = *((_QWORD *)v54 + 5);
            *(struct tagPOINT *)(v37 + 784) = v56;
            *(_DWORD *)(v37 + 792) = v32;
            *(_DWORD *)(v37 + 1004) = v33;
            *(_BYTE *)(v37 + 957) = 1;
            *(_BYTE *)(*((_QWORD *)v35 + 5) + 1020LL) = 1;
            if ( v9 )
            {
              v38 = v9[5];
              v38[98] = v36;
              v38[99].x = v32;
              v38[125].y = v33;
              BYTE1(v38[119].y) = 1;
              LOBYTE(v9[5][127].y) = 1;
            }
            goto LABEL_55;
          }
          v61 = 0LL;
          CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v61);
          *(float *)&v55.left = (float)(v61.right + v61.left) * 0.5;
          v34 = (float)(v61.bottom + v61.top) * 0.5;
        }
        *(float *)&v55.top = v34;
        MapPointIntoRectangle((const struct MilPoint2F *)&v55, &rc, (struct MilPoint3F *)&v56);
        v32 = v57;
        goto LABEL_53;
      }
      v29 = *(struct tagRECT *)(a1 + 152);
    }
    else
    {
      *(_QWORD *)&v61.left = 0LL;
      *(_QWORD *)&v61.right = 0LL;
      if ( v5 == 1 )
      {
        v25 = -*(_DWORD *)(a2 + 596);
        v26 = -HIDWORD(*(_QWORD *)(a2 + 596));
        v61 = *(struct tagRECT *)(a2 + 596);
        OffsetRect(&v61, v25, v26);
        v4 = &v61;
      }
      v27 = CAppLaunchWithTile::GetPVLTarget(a1, *(_DWORD *)(a2 + 576));
      v28 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              v27,
              (struct tagRECT *)(a2 + 580),
              v4,
              -1,
              v24,
              &v54);
      v8 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v28, 0x9A7u);
        goto LABEL_86;
      }
      v29 = *(struct tagRECT *)(a2 + 596);
    }
    rc = v29;
    goto LABEL_47;
  }
  BitmapRects = CTransitionVisualController::GetBitmapRects(
                  *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                  *(HWND *)(a1 + 168),
                  &v58,
                  0LL);
  v8 = BitmapRects;
  if ( BitmapRects < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, BitmapRects, 0x980u);
    goto LABEL_90;
  }
  if ( v5 == 4 )
  {
LABEL_29:
    v53 = 1;
    goto LABEL_30;
  }
  v22 = CAppLaunchWithTile::GetPVLTarget(a1, 5);
  v23 = CStoryboard::_CreateAndAddBitmapAnimationComponent(
          (CStoryboard *)a1,
          *(HWND *)(a1 + 168),
          5,
          v22,
          (volatile signed __int32 **)&v55);
  v8 = v23;
  if ( v23 >= 0 )
  {
    v9 = *(struct tagPOINT ***)&v55.left;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v23, 0x983u);
  v9 = *(struct tagPOINT ***)&v55.left;
LABEL_88:
  if ( v9 )
    CBaseObject::Release((CBaseObject *)v9);
LABEL_90:
  result = 1;
  *v59 = v8;
  return result;
}
