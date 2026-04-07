/*
 * XREFs of ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800923E4
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094080 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800953A0 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x180001500 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180004DE8 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180009228 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     _lambda_ce7033fd26fde6ee41d93c51ce6ad988_::operator() @ 0x1800903E4 (_lambda_ce7033fd26fde6ee41d93c51ce6ad988_--operator().c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x180092D7C (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180093594 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_Create3DComponent(
        CGroupingStoryboard *this,
        struct CWindowData *a2,
        __int64 a3)
{
  int v3; // esi
  int v4; // esi
  unsigned int v7; // r15d
  CBaseObject *v8; // r12
  CBaseObject *v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  struct tagRECT v16; // xmm0
  int v17; // eax
  int v18; // eax
  struct CAnimationComponent *v19; // rbx
  __int64 v20; // rcx
  struct tagRECT *p_rc; // [rsp+50h] [rbp-29h] BYREF
  struct CAnimationComponent *v23; // [rsp+58h] [rbp-21h] BYREF
  CAnimatedTransitionVisual **v24; // [rsp+60h] [rbp-19h] BYREF
  CAnimatedTransitionVisual **v25; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT v26; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp+7h] BYREF

  v3 = *((_DWORD *)a2 + 142);
  v23 = 0LL;
  v4 = v3 & 0xFFF;
  v24 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&v26.left = 0LL;
  *(_QWORD *)&v26.right = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( v4 == 1 )
    goto LABEL_8;
  if ( v4 <= 2 )
    goto LABEL_27;
  if ( v4 <= 4 )
  {
LABEL_8:
    if ( *((_DWORD *)a2 + 28) == 1 )
      *((_DWORD *)a2 + 142) |= 0x4000000u;
    if ( (*((_DWORD *)a2 + 142) & 0x10000000) == 0
      || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2, (__int64)a2, a3) <= 0 )
    {
      LOBYTE(v7) = 1;
    }
    if ( (*((_DWORD *)a2 + 142) & 0x1000000) == 0 || IsRectEmpty((const RECT *)((char *)a2 + 572)) )
    {
      v17 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
              this,
              *((unsigned int *)a2 + 142));
      v18 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, v17, 0LL, 0LL, -1, v7, &v23);
      v7 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x856u);
        goto LABEL_35;
      }
      if ( *((_DWORD *)a2 + 28) == 1 )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)a2 + 3, &v26);
        goto LABEL_27;
      }
      v16 = *(struct tagRECT *)((char *)v23 + 88);
    }
    else
    {
      *(_QWORD *)&rc.left = 0LL;
      *(_QWORD *)&rc.right = 0LL;
      if ( v4 == 1 )
      {
        v12 = -*((_DWORD *)a2 + 147);
        v13 = -HIDWORD(*(_QWORD *)((char *)a2 + 588));
        rc = *(struct tagRECT *)((char *)a2 + 588);
        OffsetRect(&rc, v12, v13);
        p_rc = &rc;
      }
      else
      {
        p_rc = 0LL;
      }
      v14 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
              this,
              *((unsigned int *)a2 + 142));
      v15 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              this,
              a2,
              0,
              v14,
              (struct tagRECT *)((char *)a2 + 572),
              p_rc,
              -1,
              v7,
              &v23);
      v7 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x851u);
        goto LABEL_35;
      }
      v16 = *(struct tagRECT *)((char *)a2 + 588);
    }
    v26 = v16;
    goto LABEL_27;
  }
  if ( v4 == 30 )
  {
    p_rc = 0LL;
    CStoryboard::_GetIdealRects(a2, 0LL, &v26, &p_rc, 0LL);
    v10 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
            this,
            *((unsigned int *)a2 + 142));
    v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, v10, p_rc, 0LL, -1, 1, &v23);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x869u);
      goto LABEL_35;
    }
  }
LABEL_27:
  v19 = v23;
  p_rc = (struct tagRECT *)this;
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v23 + 5), &v26);
  v20 = *((_QWORD *)v19 + 5);
  *(struct tagRECT *)(v20 + 856) = v26;
  CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 4096);
  lambda_ce7033fd26fde6ee41d93c51ce6ad988_::operator()((CGroupingStoryboard **)&p_rc, (CAnimatedTransitionVisual **)v19);
  if ( *((_DWORD *)v19 + 17) != 2 )
    *((_DWORD *)v19 + 17) = 1;
  if ( (*((_DWORD *)a2 + 142) & 0x18000) != 0 && CGroupingStoryboard::_IsPartOfGroup(this, a2) )
  {
    CGroupingStoryboard::_CreateGuttersForApp(this, a2, &v26, &v26, v4, &v24, &v25);
    v8 = (CBaseObject *)v24;
    if ( v24 )
      lambda_ce7033fd26fde6ee41d93c51ce6ad988_::operator()((CGroupingStoryboard **)&p_rc, v24);
    v9 = (CBaseObject *)v25;
    if ( v25 )
      lambda_ce7033fd26fde6ee41d93c51ce6ad988_::operator()((CGroupingStoryboard **)&p_rc, v25);
  }
LABEL_35:
  if ( v23 )
    CBaseObject::Release(v23);
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v9 )
    CBaseObject::Release(v9);
  return v7;
}
