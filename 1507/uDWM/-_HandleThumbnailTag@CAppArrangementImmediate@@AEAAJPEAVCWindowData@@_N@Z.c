/*
 * XREFs of ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093204
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094AD0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180009EAC (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180090A80 (-GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800910C0 (-GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA-AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGE.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800929CC (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x180092D7C (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180093594 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180093908 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CAppArrangementImmediate::_HandleThumbnailTag(
        CAppArrangementImmediate *this,
        struct CWindowData *a2,
        char a3)
{
  struct CAnimationComponent *v3; // r12
  struct CAnimationComponent *v4; // rsi
  struct tagRECT v7; // xmm0
  int v8; // edx
  int PVLTarget; // eax
  int v10; // eax
  unsigned int v11; // r13d
  struct tagRECT v12; // xmm0
  __int64 v13; // r8
  int v14; // edx
  int v15; // edx
  struct tagRECT *v16; // rdi
  struct tagRECT *v17; // r13
  int v18; // eax
  int v19; // eax
  struct tagPOINT v20; // rdi
  int v21; // eax
  struct tagRECT v22; // xmm0
  struct tagRECT v23; // xmm6
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rcx
  struct tagPOINT v28; // [rsp+58h] [rbp-49h] BYREF
  __m128i v29; // [rsp+68h] [rbp-39h] BYREF
  struct CAnimationComponent *v30; // [rsp+78h] [rbp-29h] BYREF
  struct CAnimationComponent *v31; // [rsp+80h] [rbp-21h] BYREF
  struct tagRECT v32; // [rsp+88h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+98h] [rbp-9h] BYREF

  v3 = 0LL;
  v28 = 0LL;
  v4 = 0LL;
  *(_QWORD *)&v32.left = 0LL;
  *(_QWORD *)&v32.right = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  if ( a3 )
  {
    v7 = (struct tagRECT)*((_OWORD *)a2 + 3);
    v8 = *((_DWORD *)a2 + 142);
    rc = v7;
    if ( (v8 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 572);
    PVLTarget = CAppArrangementImmediate::GetPVLTarget((__int64)this, v8);
    v10 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
            this,
            a2,
            PVLTarget,
            &rc,
            1,
            (struct CAnimationComponent **)&v28);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xF32u);
LABEL_13:
      v20 = v28;
      goto LABEL_33;
    }
  }
  else
  {
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    if ( (*((_DWORD *)a2 + 142) & 0x1000000) != 0 )
    {
      v12 = *(struct tagRECT *)((char *)a2 + 588);
      v13 = *(_QWORD *)((char *)a2 + 588);
      v14 = -*((_DWORD *)a2 + 147);
      rc = v12;
      OffsetRect(&rc, v14, -HIDWORD(v13));
    }
    v15 = *((_DWORD *)a2 + 142);
    v16 = (struct tagRECT *)((unsigned __int64)&rc & -(__int64)((v15 & 0x1000000) != 0));
    if ( (v15 & 0x1000000) != 0 )
      v17 = (struct tagRECT *)((char *)a2 + 572);
    else
      v17 = 0LL;
    v18 = CAppArrangementImmediate::GetPVLTarget((__int64)this, v15);
    v19 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            1,
            v18,
            v17,
            v16,
            -1,
            1,
            (struct CAnimationComponent **)&v28);
    v11 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0xF45u);
      goto LABEL_13;
    }
  }
  v21 = *((_DWORD *)a2 + 142);
  v20 = v28;
  if ( (v21 & 0x1000000) != 0 )
    v22 = *(struct tagRECT *)((char *)a2 + 588);
  else
    v22 = *(struct tagRECT *)(*(_QWORD *)&v28 + 88LL);
  v32 = v22;
  if ( (v21 & 0x800000) != 0 )
  {
    v23 = *(struct tagRECT *)((char *)a2 + 620);
  }
  else
  {
    if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
                *((HWND *)a2 + 5),
                &v28) >= 0 )
    {
      v24 = v32.right - v32.left;
      v29.m128i_i32[0] = v28.x;
      if ( v32.right - v32.left < 0 )
        v24 = 0;
      v29.m128i_i32[1] = v28.y;
      v25 = v32.bottom - v32.top;
      v29.m128i_i32[2] = v28.x + v24;
      if ( v32.bottom - v32.top < 0 )
        v25 = 0;
      v29.m128i_i32[3] = v28.y + v25;
      v23 = (struct tagRECT)_mm_load_si128(&v29);
      goto LABEL_27;
    }
    v23 = v32;
  }
  v29 = (__m128i)v23;
LABEL_27:
  CAnimatedTransitionVisual::SetBeginRect(*(struct tagPOINT **)(*(_QWORD *)&v20 + 40LL), &v32);
  v26 = *(_QWORD *)(*(_QWORD *)&v20 + 40LL);
  *(struct tagRECT *)(v26 + 856) = v23;
  CVisual::SetDirtyFlags((CVisual *)(v26 + 8), 4096);
  *(_BYTE *)(*(_QWORD *)&v20 + 73LL) = 0;
  if ( (CAppArrangementImmediate::GetSpecialTargetInfo((__int64)this, *((_WORD *)a2 + 284) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_SetUnifiedCenter(this, *(struct CAnimationComponent **)&v20);
    if ( CGroupingStoryboard::_IsPartOfGroup(this, a2) )
    {
      CGroupingStoryboard::_CreateGuttersForApp(
        this,
        (__int64)a2,
        &v32,
        v29.m128i_i32,
        *((_DWORD *)a2 + 142) & 0xFFF,
        &v31,
        &v30);
      v3 = v31;
      if ( v31 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v31);
      v4 = v30;
      if ( v30 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v30);
    }
  }
LABEL_33:
  if ( v20 )
    CBaseObject::Release(*(CBaseObject **)&v20);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v4 )
    CBaseObject::Release(v4);
  return v11;
}
