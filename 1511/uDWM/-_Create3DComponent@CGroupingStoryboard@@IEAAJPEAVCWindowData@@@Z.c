/*
 * XREFs of ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180094CE0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096D90 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180002320 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180002518 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18001138C (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800133C8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     sub_180093284 @ 0x180093284 (sub_180093284.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800955A0 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 */

_BOOL8 __fastcall CGroupingStoryboard::_Create3DComponent(CGroupingStoryboard *this, struct CWindowData *a2)
{
  int v2; // esi
  int v3; // esi
  BOOL v6; // r15d
  CBaseObject *v7; // r12
  CBaseObject *v8; // r14
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  struct tagRECT v15; // xmm0
  int v16; // eax
  int v17; // eax
  struct CAnimationComponent *v18; // rbx
  __int64 v19; // rcx
  struct tagRECT *p_rc; // [rsp+50h] [rbp-29h] BYREF
  struct CAnimationComponent *v22; // [rsp+58h] [rbp-21h] BYREF
  CAnimatedTransitionVisual **v23; // [rsp+60h] [rbp-19h] BYREF
  CAnimatedTransitionVisual **v24; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT v25; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp+7h] BYREF

  v2 = *((_DWORD *)a2 + 144);
  v22 = 0LL;
  v3 = v2 & 0xFFF;
  v23 = 0LL;
  v24 = 0LL;
  *(_QWORD *)&v25.left = 0LL;
  *(_QWORD *)&v25.right = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( v3 == 1 )
    goto LABEL_8;
  if ( v3 <= 2 )
    goto LABEL_27;
  if ( v3 <= 4 )
  {
LABEL_8:
    if ( *((_DWORD *)a2 + 28) == 1 )
      *((_DWORD *)a2 + 144) |= 0x4000000u;
    if ( (*((_DWORD *)a2 + 144) & 0x10000000) == 0
      || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0 )
    {
      LOBYTE(v6) = 1;
    }
    if ( (*((_DWORD *)a2 + 144) & 0x1000000) == 0 || IsRectEmpty((const RECT *)((char *)a2 + 580)) )
    {
      v16 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
              this,
              *((unsigned int *)a2 + 144));
      v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, v16, 0LL, 0LL, -1, v6, &v22);
      v6 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x87Eu);
        goto LABEL_35;
      }
      if ( *((_DWORD *)a2 + 28) == 1 )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)a2 + 3, &v25);
        goto LABEL_27;
      }
      v15 = *(struct tagRECT *)((char *)v22 + 88);
    }
    else
    {
      *(_QWORD *)&rc.left = 0LL;
      *(_QWORD *)&rc.right = 0LL;
      if ( v3 == 1 )
      {
        v11 = -*((_DWORD *)a2 + 149);
        v12 = -HIDWORD(*(_QWORD *)((char *)a2 + 596));
        rc = *(struct tagRECT *)((char *)a2 + 596);
        OffsetRect(&rc, v11, v12);
        p_rc = &rc;
      }
      else
      {
        p_rc = 0LL;
      }
      v13 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
              this,
              *((unsigned int *)a2 + 144));
      v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              this,
              a2,
              0,
              v13,
              (struct tagRECT *)((char *)a2 + 580),
              p_rc,
              -1,
              v6,
              &v22);
      v6 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x879u);
        goto LABEL_35;
      }
      v15 = *(struct tagRECT *)((char *)a2 + 596);
    }
    v25 = v15;
    goto LABEL_27;
  }
  if ( v3 == 30 )
  {
    p_rc = 0LL;
    CStoryboard::_GetIdealRects(a2, 0LL, &v25, &p_rc, 0LL);
    v9 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
           this,
           *((unsigned int *)a2 + 144));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, v9, p_rc, 0LL, -1, 1, &v22);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x891u);
      goto LABEL_35;
    }
  }
LABEL_27:
  v18 = v22;
  p_rc = (struct tagRECT *)this;
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v22 + 5), &v25);
  v19 = *((_QWORD *)v18 + 5);
  *(struct tagRECT *)(v19 + 856) = v25;
  CVisual::SetDirtyFlags((CVisual *)(v19 + 8), 4096);
  sub_180093284((CGroupingStoryboard **)&p_rc, (CAnimatedTransitionVisual **)v18);
  if ( *((_DWORD *)v18 + 17) != 2 )
    *((_DWORD *)v18 + 17) = 1;
  if ( (*((_DWORD *)a2 + 144) & 0x18000) != 0 && CGroupingStoryboard::_IsPartOfGroup(this, a2) )
  {
    CGroupingStoryboard::_CreateGuttersForApp(this, a2, &v25, &v25, v3, &v23, &v24);
    v7 = (CBaseObject *)v23;
    if ( v23 )
      sub_180093284((CGroupingStoryboard **)&p_rc, v23);
    v8 = (CBaseObject *)v24;
    if ( v24 )
      sub_180093284((CGroupingStoryboard **)&p_rc, v24);
  }
LABEL_35:
  if ( v22 )
    CBaseObject::Release(v22);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v8 )
    CBaseObject::Release(v8);
  return v6;
}
