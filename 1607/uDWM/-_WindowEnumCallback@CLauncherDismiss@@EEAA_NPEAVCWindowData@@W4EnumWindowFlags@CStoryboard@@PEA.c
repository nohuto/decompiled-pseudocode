/*
 * XREFs of ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180003AC0 (-GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003B40 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180004088 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180004280 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18000900C (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000EFB4 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180014A64 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800936F4 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
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
  struct tagRECT v18; // xmm6
  struct CAnimationComponent *v19; // rbx
  bool v20; // al
  unsigned int v21; // r9d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int PVLTarget; // eax
  int v29; // eax
  struct CAnimationComponent *v30; // rbx
  struct tagRECT v31; // xmm0
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
      if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 584) & 0xFFF) != 0x2B )
        goto LABEL_7;
      *(_BYTE *)(a1 + 136) = 1;
      goto LABEL_17;
    }
    CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v37);
    v35 = 0LL;
    v12 = (struct tagRECT *)(a1 + 120);
    CStoryboard::_GetIdealRects((struct CWindowData *)a2, (const struct tagRECT *)(a1 + 120), &v38, &v35, &v37, v33);
    v13 = *(_DWORD *)(a2 + 584);
    v14 = v13 & 0xFFF;
    switch ( v14 )
    {
      case 3:
        if ( *(_DWORD *)(a2 + 112) == 1 )
        {
          if ( *(_BYTE *)(a1 + 136) )
          {
            v38 = *v12;
            v18 = v38;
          }
          else
          {
            v18 = v37;
          }
          PVLTarget = CLauncherDismiss::GetPVLTarget(a1, v13);
          v29 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  PVLTarget,
                  &v38,
                  0,
                  &v34);
          v10 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v29, 0xBB3u);
            goto LABEL_17;
          }
          v30 = v34;
          if ( *((_DWORD *)v34 + 17) != 2 )
          {
            v31 = *v12;
            *((_DWORD *)v34 + 17) = 2;
            *(struct tagRECT *)((char *)v30 + 104) = v31;
          }
          goto LABEL_14;
        }
        v26 = CLauncherDismiss::GetPVLTarget(a1, v13);
        v27 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v26,
                v35,
                0LL,
                -1,
                1,
                &v34);
        v10 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v27, 0xBA7u);
          goto LABEL_17;
        }
        break;
      case 22:
        v20 = ContainsRect((const struct tagRECT *)(a1 + 120), (const struct tagRECT *)(a2 + 48));
        if ( !v20 || !*(_BYTE *)(a1 + 136) )
        {
          if ( (*(_BYTE *)(a2 + 576) & 1) == 0 || (*(_BYTE *)(a2 + 580) & 1) != 0 || !v20 )
            goto LABEL_7;
          v24 = CLauncherDismiss::GetPVLTarget(a1, v21);
          v25 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  0,
                  v24,
                  0LL,
                  0LL,
                  -1,
                  1,
                  &v34);
          v10 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v25, 0xB9Eu);
            goto LABEL_17;
          }
          v38 = *(struct tagRECT *)(a2 + 48);
          v18 = v38;
          goto LABEL_14;
        }
        v11 = 1;
        v22 = CLauncherDismiss::GetPVLTarget(a1, v21);
        v23 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v22, &v34);
        v10 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v23, 0xB91u);
          goto LABEL_17;
        }
        break;
      case 43:
        v11 = 1;
        v16 = CLauncherDismiss::GetPVLTarget(a1, v13);
        v17 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v16, &v34);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v17, 0xBC5u);
          goto LABEL_17;
        }
        break;
      default:
LABEL_7:
        *v36 = v10;
        return v9;
    }
    v18 = v37;
LABEL_14:
    v19 = v34;
    if ( !v34 )
      goto LABEL_7;
    if ( !v11 )
    {
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v34 + 5), 0.0);
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v19 + 5), &v38);
      v32 = *((_QWORD *)v19 + 5);
      *(struct tagRECT *)(v32 + 856) = v18;
      CVisual::SetDirtyFlags((CVisual *)(v32 + 8), 0x1000u);
    }
LABEL_17:
    if ( v34 )
      CBaseObject::Release(v34);
    goto LABEL_7;
  }
  return v9;
}
