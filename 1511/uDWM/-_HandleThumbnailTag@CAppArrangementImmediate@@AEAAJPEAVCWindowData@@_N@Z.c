/*
 * XREFs of ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180095990
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096330 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000204C (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180002320 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180003B74 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800937B0 (-GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x180093DF0 (-GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA-AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGE.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800952CC (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800955A0 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
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
  struct tagRECT v22; // xmm6
  __int64 v23; // rcx
  int v25; // ecx
  int v26; // eax
  struct tagPOINT v27; // [rsp+58h] [rbp-49h] BYREF
  __m128i v28; // [rsp+68h] [rbp-39h] BYREF
  struct CAnimationComponent *v29; // [rsp+78h] [rbp-29h] BYREF
  struct CAnimationComponent *v30; // [rsp+80h] [rbp-21h] BYREF
  struct tagRECT v31; // [rsp+88h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+98h] [rbp-9h] BYREF

  v3 = 0LL;
  v27 = 0LL;
  v4 = 0LL;
  *(_QWORD *)&v31.left = 0LL;
  *(_QWORD *)&v31.right = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  if ( a3 )
  {
    v7 = (struct tagRECT)*((_OWORD *)a2 + 3);
    v8 = *((_DWORD *)a2 + 144);
    rc = v7;
    if ( (v8 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 580);
    PVLTarget = CAppArrangementImmediate::GetPVLTarget((__int64)this, v8);
    v10 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
            this,
            a2,
            PVLTarget,
            &rc,
            1,
            (struct CAnimationComponent **)&v27);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xFA3u);
LABEL_13:
      v20 = v27;
      goto LABEL_26;
    }
  }
  else
  {
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    if ( (*((_DWORD *)a2 + 144) & 0x1000000) != 0 )
    {
      v12 = *(struct tagRECT *)((char *)a2 + 596);
      v13 = *(_QWORD *)((char *)a2 + 596);
      v14 = -*((_DWORD *)a2 + 149);
      rc = v12;
      OffsetRect(&rc, v14, -HIDWORD(v13));
    }
    v15 = *((_DWORD *)a2 + 144);
    v16 = (struct tagRECT *)((unsigned __int64)&rc & -(__int64)((v15 & 0x1000000) != 0));
    if ( (v15 & 0x1000000) != 0 )
      v17 = (struct tagRECT *)((char *)a2 + 580);
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
            (struct CAnimationComponent **)&v27);
    v11 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0xFB6u);
      goto LABEL_13;
    }
  }
  v21 = *((_DWORD *)a2 + 144);
  v20 = v27;
  if ( (v21 & 0x1000000) != 0 )
    v22 = *(struct tagRECT *)((char *)a2 + 596);
  else
    v22 = *(struct tagRECT *)(*(_QWORD *)&v27 + 88LL);
  v31 = v22;
  if ( (v21 & 0x800000) != 0 )
  {
    v22 = *(struct tagRECT *)((char *)a2 + 628);
  }
  else if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                   (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
                   *((HWND *)a2 + 5),
                   &v27) >= 0 )
  {
    v25 = v31.right - v31.left;
    v28.m128i_i32[0] = v27.x;
    if ( v31.right - v31.left < 0 )
      v25 = 0;
    v28.m128i_i32[1] = v27.y;
    v26 = v31.bottom - v31.top;
    v28.m128i_i32[2] = v27.x + v25;
    if ( v31.bottom - v31.top < 0 )
      v26 = 0;
    v28.m128i_i32[3] = v27.y + v26;
    v22 = (struct tagRECT)_mm_load_si128(&v28);
    goto LABEL_20;
  }
  v28 = (__m128i)v22;
LABEL_20:
  CAnimatedTransitionVisual::SetBeginRect(*(struct tagPOINT **)(*(_QWORD *)&v20 + 40LL), &v31);
  v23 = *(_QWORD *)(*(_QWORD *)&v20 + 40LL);
  *(struct tagRECT *)(v23 + 856) = v22;
  CVisual::SetDirtyFlags((CVisual *)(v23 + 8), 4096);
  *(_BYTE *)(*(_QWORD *)&v20 + 73LL) = 0;
  if ( (CAppArrangementImmediate::GetSpecialTargetInfo((__int64)this, *((_WORD *)a2 + 288) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_SetUnifiedCenter(this, *(struct CAnimationComponent **)&v20);
    if ( CGroupingStoryboard::_IsPartOfGroup(this, a2) )
    {
      CGroupingStoryboard::_CreateGuttersForApp(
        this,
        (__int64)a2,
        &v31,
        v28.m128i_i32,
        *((_DWORD *)a2 + 144) & 0xFFF,
        &v30,
        &v29);
      v3 = v30;
      if ( v30 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v30);
      v4 = v29;
      if ( v29 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v29);
    }
  }
LABEL_26:
  if ( v20 )
    CBaseObject::Release(*(CBaseObject **)&v20);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v4 )
    CBaseObject::Release(v4);
  return v11;
}
