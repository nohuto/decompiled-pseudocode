/*
 * XREFs of ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180093160
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800946F0 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180001DE0 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180004088 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000516C (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000EFB4 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     _lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator() @ 0x180091BA4 (_lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_--operator().c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800939B4 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 */

__int64 __fastcall CGroupingStoryboard::_Create3DComponent(
        CGroupingStoryboard *this,
        struct CWindowData *a2,
        __int64 a3)
{
  int v3; // esi
  char v4; // di
  int v5; // esi
  struct tagRECT *p_rc; // r15
  CBaseObject *v9; // r12
  CBaseObject *v10; // r14
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // eax
  int v16; // eax
  struct tagRECT v17; // xmm0
  int v18; // eax
  int v19; // eax
  struct CAnimationComponent *v20; // rdi
  __int64 v21; // rcx
  struct CAnimationComponent *v23; // [rsp+50h] [rbp-19h] BYREF
  CAnimatedTransitionVisual **v24; // [rsp+58h] [rbp-11h] BYREF
  CAnimatedTransitionVisual **v25; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v27; // [rsp+78h] [rbp+Fh] BYREF

  v3 = *((_DWORD *)a2 + 146);
  v4 = 0;
  v23 = 0LL;
  v5 = v3 & 0xFFF;
  v24 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&v27.left = 0LL;
  *(_QWORD *)&v27.right = 0LL;
  p_rc = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( v5 != 1 )
  {
    if ( v5 <= 2 )
      goto LABEL_26;
    if ( v5 > 4 )
    {
      if ( v5 == 30 )
      {
        *(_QWORD *)&rc.left = 0LL;
        CStoryboard::_GetIdealRects(a2, 0LL, &v27, (struct tagRECT **)&rc, 0LL);
        v11 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
                this,
                *((unsigned int *)a2 + 146));
        v12 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                this,
                a2,
                0,
                v11,
                *(struct tagRECT **)&rc.left,
                0LL,
                -1,
                1,
                &v23);
        LODWORD(p_rc) = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x8B4u);
          goto LABEL_34;
        }
      }
      goto LABEL_26;
    }
  }
  if ( *((_DWORD *)a2 + 28) == 1 )
    *((_DWORD *)a2 + 146) |= 0x4000000u;
  if ( (*((_DWORD *)a2 + 146) & 0x10000000) == 0
    || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2, (__int64)a2, a3) <= 0 )
  {
    v4 = 1;
  }
  if ( (*((_DWORD *)a2 + 146) & 0x1000000) != 0 && !IsRectEmpty((const RECT *)((char *)a2 + 588)) )
  {
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    if ( v5 == 1 )
    {
      v13 = -*((_DWORD *)a2 + 151);
      v14 = -HIDWORD(*(_QWORD *)((char *)a2 + 604));
      rc = *(struct tagRECT *)((char *)a2 + 604);
      OffsetRect(&rc, v13, v14);
      p_rc = &rc;
    }
    v15 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
            this,
            *((unsigned int *)a2 + 146));
    v16 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            0,
            v15,
            (struct tagRECT *)((char *)a2 + 588),
            p_rc,
            -1,
            v4,
            &v23);
    LODWORD(p_rc) = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x89Cu);
      goto LABEL_34;
    }
    v17 = *(struct tagRECT *)((char *)a2 + 604);
    goto LABEL_25;
  }
  v18 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
          this,
          *((unsigned int *)a2 + 146));
  v19 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, v18, 0LL, 0LL, -1, v4, &v23);
  LODWORD(p_rc) = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x8A1u);
    goto LABEL_34;
  }
  if ( *((_DWORD *)a2 + 28) != 1 )
  {
    v17 = *(struct tagRECT *)((char *)v23 + 88);
LABEL_25:
    v27 = v17;
    goto LABEL_26;
  }
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)a2 + 3, &v27);
LABEL_26:
  v20 = v23;
  *(_QWORD *)&rc.left = this;
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v23 + 5), &v27);
  v21 = *((_QWORD *)v20 + 5);
  *(struct tagRECT *)(v21 + 856) = v27;
  CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 4096);
  lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, (CAnimatedTransitionVisual **)v20);
  if ( *((_DWORD *)v20 + 17) != 2 )
    *((_DWORD *)v20 + 17) = 1;
  if ( (*((_DWORD *)a2 + 146) & 0x18000) != 0 && CGroupingStoryboard::_IsPartOfGroup(this, a2) )
  {
    CGroupingStoryboard::_CreateGuttersForApp(this, a2, &v27, &v27, v5, &v24, &v25);
    v9 = (CBaseObject *)v24;
    if ( v24 )
      lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, v24);
    v10 = (CBaseObject *)v25;
    if ( v25 )
      lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, v25);
  }
LABEL_34:
  if ( v23 )
    CBaseObject::Release(v23);
  if ( v9 )
    CBaseObject::Release(v9);
  if ( v10 )
    CBaseObject::Release(v10);
  return (unsigned int)p_rc;
}
