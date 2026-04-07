/*
 * XREFs of ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093D50
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180001A90 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180001DE0 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x180002C00 (-GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA-AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGE.c)
 *     ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180002C50 (-GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000B0C4 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000EFB4 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800936F4 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800939B4 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 */

__int64 __fastcall CAppArrangementImmediate::_HandleThumbnailTag(
        CAppArrangementImmediate *this,
        struct CWindowData *a2,
        char a3)
{
  struct tagRECT *v3; // r13
  struct CAnimationComponent *v6; // r12
  struct CAnimationComponent *v7; // rsi
  struct tagRECT v8; // xmm0
  int v9; // edx
  int PVLTarget; // eax
  int v11; // eax
  unsigned int v12; // r13d
  struct tagPOINT v13; // rdi
  struct tagRECT v14; // xmm0
  __int64 v15; // r8
  int v16; // edx
  int v17; // edx
  struct tagRECT *v18; // rdi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct tagRECT v22; // xmm0
  struct tagRECT v23; // xmm6
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rcx
  struct tagPOINT v28; // [rsp+58h] [rbp-49h] BYREF
  struct tagRECT v29; // [rsp+68h] [rbp-39h] BYREF
  struct CAnimationComponent *v30; // [rsp+78h] [rbp-29h] BYREF
  struct CAnimationComponent *v31; // [rsp+80h] [rbp-21h] BYREF
  struct tagRECT v32; // [rsp+88h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+98h] [rbp-9h] BYREF

  v3 = 0LL;
  *(_QWORD *)&v32.left = 0LL;
  *(_QWORD *)&v32.right = 0LL;
  v29 = (struct tagRECT)0LL;
  v6 = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  if ( a3 )
  {
    v8 = (struct tagRECT)*((_OWORD *)a2 + 3);
    v9 = *((_DWORD *)a2 + 146);
    rc = v8;
    if ( (v9 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 588);
    PVLTarget = CAppArrangementImmediate::GetPVLTarget((__int64)this, v9);
    v11 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
            this,
            a2,
            PVLTarget,
            &rc,
            1,
            (struct CAnimationComponent **)&v28);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0xE35u);
LABEL_6:
      v13 = v28;
      goto LABEL_32;
    }
  }
  else
  {
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    if ( (*((_DWORD *)a2 + 146) & 0x1000000) != 0 )
    {
      v14 = *(struct tagRECT *)((char *)a2 + 604);
      v15 = *(_QWORD *)((char *)a2 + 604);
      v16 = -*((_DWORD *)a2 + 151);
      rc = v14;
      OffsetRect(&rc, v16, -HIDWORD(v15));
    }
    v17 = *((_DWORD *)a2 + 146);
    v18 = (struct tagRECT *)((unsigned __int64)&rc & -(__int64)((v17 & 0x1000000) != 0));
    if ( (v17 & 0x1000000) != 0 )
      v3 = (struct tagRECT *)((char *)a2 + 588);
    v19 = CAppArrangementImmediate::GetPVLTarget((__int64)this, v17);
    v20 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            1,
            v19,
            v3,
            v18,
            -1,
            1,
            (struct CAnimationComponent **)&v28);
    v12 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0xE48u);
      goto LABEL_6;
    }
  }
  v21 = *((_DWORD *)a2 + 146);
  v13 = v28;
  if ( (v21 & 0x1000000) != 0 )
    v22 = *(struct tagRECT *)((char *)a2 + 604);
  else
    v22 = *(struct tagRECT *)(*(_QWORD *)&v28 + 88LL);
  v32 = v22;
  if ( (v21 & 0x800000) != 0 )
  {
    v23 = *(struct tagRECT *)((char *)a2 + 636);
  }
  else
  {
    if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                *((HWND *)a2 + 5),
                &v28) >= 0 )
    {
      v24 = v32.right - v32.left;
      v29.left = v28.x;
      if ( v32.right - v32.left < 0 )
        v24 = 0;
      v29.top = v28.y;
      v25 = v32.bottom - v32.top;
      v29.right = v28.x + v24;
      if ( v32.bottom - v32.top < 0 )
        v25 = 0;
      v29.bottom = v28.y + v25;
      v23 = v29;
      goto LABEL_26;
    }
    v23 = v32;
  }
  v29 = v23;
LABEL_26:
  CAnimatedTransitionVisual::SetBeginRect(*(struct tagPOINT **)(*(_QWORD *)&v13 + 40LL), &v32);
  v26 = *(_QWORD *)(*(_QWORD *)&v13 + 40LL);
  *(struct tagRECT *)(v26 + 856) = v23;
  CVisual::SetDirtyFlags((CVisual *)(v26 + 8), 4096);
  *(_BYTE *)(*(_QWORD *)&v13 + 73LL) = 0;
  if ( (CAppArrangementImmediate::GetSpecialTargetInfo((__int64)this, *((_WORD *)a2 + 292) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_SetUnifiedCenter(this, *(struct CAnimationComponent **)&v13);
    if ( CGroupingStoryboard::_IsPartOfGroup(this, a2) )
    {
      CGroupingStoryboard::_CreateGuttersForApp(
        this,
        (__int64)a2,
        &v32,
        &v29.left,
        *((_DWORD *)a2 + 146) & 0xFFF,
        (CBaseObject *)&v30,
        &v31);
      v6 = v30;
      if ( v30 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v30);
      v7 = v31;
      if ( v31 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v31);
    }
  }
LABEL_32:
  if ( v13 )
    CBaseObject::Release(*(CBaseObject **)&v13);
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v7 )
    CBaseObject::Release(v7);
  return v12;
}
