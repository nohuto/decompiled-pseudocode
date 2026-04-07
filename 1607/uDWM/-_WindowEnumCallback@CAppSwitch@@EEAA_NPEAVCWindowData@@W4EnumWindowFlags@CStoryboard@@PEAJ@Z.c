/*
 * XREFs of ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094920
 * Callers:
 *     <none>
 * Callees:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001E70 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180004280 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18000900C (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000B268 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000EFB4 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180014A64 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x180091B54 (_lambda_81f2de84cd03038fe2b12ca1386d224e_--operator().c)
 *     ?GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180091F90 (-GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800939B4 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800940C0 (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 */

char __fastcall CAppSwitch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  int v7; // eax
  unsigned int v8; // r15d
  struct tagRECT *v9; // rdi
  CAnimatedTransitionVisual **v10; // r13
  char v11; // r14
  struct tagRECT *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct CAnimationComponent *v18; // r14
  int PVLTarget; // eax
  int v20; // eax
  int v21; // eax
  struct CAnimationComponent *v22; // r14
  int v23; // eax
  struct tagPOINT *v24; // rcx
  __int64 v25; // rcx
  CBaseObject *v26; // rbx
  char result; // al
  unsigned int v28; // [rsp+20h] [rbp-69h]
  struct CAnimationComponent *v29; // [rsp+50h] [rbp-39h] BYREF
  CBaseObject *v30; // [rsp+58h] [rbp-31h] BYREF
  CBaseObject *v31; // [rsp+60h] [rbp-29h] BYREF
  _DWORD *v32; // [rsp+68h] [rbp-21h]
  struct tagRECT v33; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v35; // [rsp+90h] [rbp+7h] BYREF

  v32 = a4;
  CGroupingStoryboard::_WindowEnumCallback((CStoryboard *)a1, a2, a3, a4);
  v7 = *(_DWORD *)(a2 + 584);
  v29 = 0LL;
  v8 = v7 & 0xFFF;
  v31 = 0LL;
  v30 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_87;
    if ( v8 == 2 )
    {
      *(_BYTE *)(a1 + 168) = 0;
      goto LABEL_87;
    }
    if ( v8 != 3 )
      goto LABEL_87;
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_79;
  }
  if ( (v7 & 0x1000000) == 0 || (v11 = 1, IsRectEmpty((const RECT *)(a2 + 588))) )
    v11 = 0;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v33);
  v12 = (struct tagRECT *)(a2 + 604);
  if ( !v11 )
    v12 = &v33;
  rc = *v12;
  v35 = rc;
  switch ( v8 )
  {
    case 2u:
      if ( *(_DWORD *)(a2 + 112) == 1 )
        *(_DWORD *)(a2 + 584) |= 0x4000000u;
      if ( v11 )
        v9 = (struct tagRECT *)(a2 + 588);
      PVLTarget = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 584));
      v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              PVLTarget,
              v9,
              0LL,
              17,
              1,
              &v29);
      LODWORD(v9) = v14;
      if ( v14 < 0 )
      {
        v28 = 2531;
        goto LABEL_14;
      }
      if ( *((_DWORD *)v29 + 17) != 2 )
        *((_DWORD *)v29 + 17) = 1;
      if ( CStoryboard::IsRTL() )
      {
        v20 = v33.right - v33.left;
        if ( v33.right - v33.left < 0 )
          v20 = 0;
      }
      else
      {
        v21 = v33.right - v33.left;
        if ( v33.right - v33.left < 0 )
          v21 = 0;
        v20 = -v21;
      }
      OffsetRect(&rc, v20, 0);
      goto LABEL_64;
    case 3u:
      if ( *(_DWORD *)(a2 + 112) == 1 )
        *(_DWORD *)(a2 + 584) |= 0x4000000u;
      if ( *(_BYTE *)(a1 + 168) )
        v17 = 3;
      else
        v17 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 584));
      if ( v11 )
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v17,
                (struct tagRECT *)(a2 + 588),
                0LL,
                -1,
                1,
                &v29);
        LODWORD(v9) = v14;
        if ( v14 < 0 )
        {
          v28 = 2465;
          goto LABEL_14;
        }
      }
      else
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v17,
                0LL,
                0LL,
                -1,
                1,
                &v29);
        LODWORD(v9) = v14;
        if ( v14 < 0 )
        {
          v28 = 2469;
          goto LABEL_14;
        }
      }
      v18 = v29;
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v29 + 5), 0.0);
      if ( *((_DWORD *)v18 + 17) != 2 )
        *((_DWORD *)v18 + 17) = 1;
      goto LABEL_64;
    case 0x16u:
      if ( (*(_BYTE *)(a2 + 576) & 1) == 0
        || (*(_BYTE *)(a2 + 580) & 1) != 0
        || !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
      {
        goto LABEL_87;
      }
      if ( *(_BYTE *)(a1 + 168) )
        v16 = 7;
      else
        v16 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 584));
      v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              v16,
              0LL,
              0LL,
              -1,
              1,
              &v29);
      LODWORD(v9) = v14;
      if ( v14 < 0 )
      {
        v28 = 2490;
        goto LABEL_14;
      }
      if ( *((_DWORD *)v29 + 17) != 2 )
        *((_DWORD *)v29 + 17) = 1;
      v35 = *(struct tagRECT *)((char *)v29 + 88);
      rc = v35;
      goto LABEL_64;
    case 0x1Cu:
      if ( *(_BYTE *)(a1 + 168) )
        v15 = 5;
      else
        v15 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 584));
      if ( v11 )
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                (struct tagRECT *)(a2 + 588),
                0LL,
                -1,
                1,
                &v29);
        LODWORD(v9) = v14;
        if ( v14 < 0 )
        {
          v28 = 2507;
          goto LABEL_14;
        }
      }
      else
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                0LL,
                0LL,
                -1,
                1,
                &v29);
        LODWORD(v9) = v14;
        if ( v14 < 0 )
        {
          v28 = 2511;
          goto LABEL_14;
        }
      }
      if ( *((_DWORD *)v29 + 17) != 2 )
        *((_DWORD *)v29 + 17) = 1;
LABEL_64:
      v22 = v29;
      if ( !v29 )
        goto LABEL_87;
      if ( v8 <= 0x1C )
      {
        v23 = 272629772;
        if ( _bittest(&v23, v8) )
        {
          v24 = (struct tagPOINT *)*((_QWORD *)v29 + 5);
          *(_QWORD *)&v33.left = a1;
          v33.right = v24[114].x;
          CAnimatedTransitionVisual::SetBeginRect(v24, &v35);
          v25 = *((_QWORD *)v22 + 5);
          *(struct tagRECT *)(v25 + 856) = rc;
          CVisual::SetDirtyFlags((CVisual *)(v25 + 8), 4096);
          if ( v8 - 2 <= 1 )
            lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v33, (CAnimatedTransitionVisual **)v22);
          if ( (*(_DWORD *)(a2 + 584) & 0x18000) != 0 )
          {
            CGroupingStoryboard::_CreateGuttersForApp(
              (CStoryboard *)a1,
              a2,
              &v35,
              &rc.left,
              v8,
              (CBaseObject *)&v31,
              &v30);
            v10 = (CAnimatedTransitionVisual **)v31;
            if ( v31 )
              lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v33, (CAnimatedTransitionVisual **)v31);
            v26 = v30;
            if ( v30 )
              lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v33, v10);
            goto LABEL_80;
          }
        }
      }
LABEL_79:
      v26 = v30;
LABEL_80:
      if ( v29 )
        CBaseObject::Release(v29);
      if ( v10 )
        CBaseObject::Release((CBaseObject *)v10);
      goto LABEL_85;
    case 0x2Bu:
      v13 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 584));
      v14 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v13, &v29);
      LODWORD(v9) = v14;
      if ( v14 < 0 )
      {
        v28 = 2540;
LABEL_14:
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, v28);
        goto LABEL_79;
      }
      goto LABEL_64;
  }
  v26 = v30;
LABEL_85:
  if ( v26 )
    CBaseObject::Release(v26);
LABEL_87:
  result = 1;
  *v32 = (_DWORD)v9;
  return result;
}
