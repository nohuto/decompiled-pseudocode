/*
 * XREFs of ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004660
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180004780 (-GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800048B0 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180004DE8 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180005990 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180009228 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180038BC4 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800929CC (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180092CA0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 */

char __fastcall CLauncherDismiss::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  char v8; // al
  char v9; // r13
  int v10; // edi
  char v11; // r12
  struct tagRECT *v12; // r14
  unsigned int v13; // r9d
  int v14; // eax
  int v16; // eax
  int v17; // eax
  bool v18; // al
  unsigned int v19; // r9d
  int v20; // eax
  int v21; // eax
  struct tagRECT v22; // xmm6
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int PVLTarget; // eax
  int v28; // eax
  struct CAnimationComponent *v29; // rbx
  struct tagRECT v30; // xmm0
  struct CAnimationComponent *v31; // rbx
  __int64 v32; // rcx
  struct tagRECT **v33; // [rsp+30h] [rbp-51h]
  struct CAnimationComponent *v34; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT *v35; // [rsp+60h] [rbp-21h] BYREF
  int *v36; // [rsp+68h] [rbp-19h]
  struct tagRECT v37; // [rsp+70h] [rbp-11h] BYREF
  struct tagRECT v38; // [rsp+80h] [rbp-1h] BYREF

  v36 = a4;
  v8 = CFlyoutPopup::_WindowEnumCallback();
  v9 = v8;
  if ( *a4 >= 0 && v8 )
  {
    v10 = 0;
    v11 = 0;
    v34 = 0LL;
    if ( (a3 & 1) == 0 )
    {
      if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 568) & 0xFFF) != 0x2B )
        goto LABEL_7;
      *(_BYTE *)(a1 + 136) = 1;
      goto LABEL_39;
    }
    CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v37);
    v35 = 0LL;
    v12 = (struct tagRECT *)(a1 + 120);
    CStoryboard::_GetIdealRects((struct CWindowData *)a2, (const struct tagRECT *)(a1 + 120), &v38, &v35, &v37, v33);
    v13 = *(_DWORD *)(a2 + 568);
    v14 = v13 & 0xFFF;
    switch ( v14 )
    {
      case 3:
        if ( *(_DWORD *)(a2 + 112) == 1 )
        {
          if ( *(_BYTE *)(a1 + 136) )
          {
            v38 = *v12;
            v22 = v38;
          }
          else
          {
            v22 = v37;
          }
          PVLTarget = CLauncherDismiss::GetPVLTarget(a1, v13);
          v28 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  PVLTarget,
                  &v38,
                  0,
                  &v34);
          v10 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v28, 0xC6Eu);
            goto LABEL_39;
          }
          v29 = v34;
          if ( *((_DWORD *)v34 + 17) != 2 )
          {
            v30 = *v12;
            *((_DWORD *)v34 + 17) = 2;
            *(struct tagRECT *)((char *)v29 + 104) = v30;
          }
          goto LABEL_36;
        }
        v25 = CLauncherDismiss::GetPVLTarget(a1, v13);
        v26 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v25,
                v35,
                0LL,
                -1,
                1,
                &v34);
        v10 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v26, 0xC62u);
          goto LABEL_39;
        }
        break;
      case 22:
        v18 = ContainsRect((const struct tagRECT *)(a1 + 120), (const struct tagRECT *)(a2 + 48));
        if ( !v18 || !*(_BYTE *)(a1 + 136) )
        {
          if ( (*(_BYTE *)(a2 + 552) & 1) == 0 || (*(_BYTE *)(a2 + 556) & 1) != 0 || !v18 )
            goto LABEL_7;
          v23 = CLauncherDismiss::GetPVLTarget(a1, v19);
          v24 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  0,
                  v23,
                  0LL,
                  0LL,
                  -1,
                  1,
                  &v34);
          v10 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v24, 0xC59u);
            goto LABEL_39;
          }
          v38 = *(struct tagRECT *)(a2 + 48);
          v22 = v38;
          goto LABEL_36;
        }
        v11 = 1;
        v20 = CLauncherDismiss::GetPVLTarget(a1, v19);
        v21 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v20, &v34);
        v10 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v21, 0xC4Cu);
          goto LABEL_39;
        }
        break;
      case 43:
        v11 = 1;
        v16 = CLauncherDismiss::GetPVLTarget(a1, v13);
        v17 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v16, &v34);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0xC80u);
          goto LABEL_39;
        }
        break;
      default:
LABEL_7:
        *v36 = v10;
        return v9;
    }
    v22 = v37;
LABEL_36:
    v31 = v34;
    if ( !v34 )
      goto LABEL_7;
    if ( !v11 )
    {
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v34 + 5), 0.0);
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v31 + 5), &v38);
      v32 = *((_QWORD *)v31 + 5);
      *(struct tagRECT *)(v32 + 856) = v22;
      CVisual::SetDirtyFlags((CVisual *)(v32 + 8), 0x1000u);
    }
LABEL_39:
    if ( v34 )
      CBaseObject::Release(v34);
    goto LABEL_7;
  }
  return v9;
}
