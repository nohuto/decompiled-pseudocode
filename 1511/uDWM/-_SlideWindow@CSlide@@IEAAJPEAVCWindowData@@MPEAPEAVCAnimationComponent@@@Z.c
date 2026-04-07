/*
 * XREFs of ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x180095E1C
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800014A0 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001980 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800980D0 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800985F0 (-_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098A20 (-_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180003B74 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180095D9C (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180099188 (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindow(
        CSlide *this,
        struct CWindowData *a2,
        float a3,
        struct CAnimationComponent **a4)
{
  __int64 v4; // rax
  int v8; // eax
  int v9; // eax
  struct CAnimationComponent *v10; // rbx
  int v11; // edi
  HWND v12; // rdx
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rcx
  struct CAnimationComponent *v17; // [rsp+58h] [rbp-49h] BYREF
  struct tagPOINT v18; // [rsp+60h] [rbp-41h] BYREF
  struct tagPOINT v19; // [rsp+68h] [rbp-39h] BYREF
  struct tagRECT v20; // [rsp+78h] [rbp-29h]
  struct tagRECT rc; // [rsp+88h] [rbp-19h] BYREF
  struct tagRECT v22; // [rsp+98h] [rbp-9h] BYREF

  v4 = *(_QWORD *)this;
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(v4 + 88))(this, *((unsigned int *)a2 + 144));
  v9 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v8, 0LL, 0LL, -1, 1, &v17);
  v10 = v17;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = (HWND)*((_QWORD *)a2 + 5);
    rc = *(struct tagRECT *)((char *)v17 + 88);
    v22 = rc;
    v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
    v20 = rc;
    if ( (int)CWindowPropertyTracker::GetWindowBeginPosition((CWindowPropertyTracker *)(v13 + 48), v12, &v19) >= 0
      && (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(v13 + 48),
                *((HWND *)a2 + 5),
                &v18) >= 0 )
    {
      OffsetRect(&rc, v19.x - v20.left, v19.y - v20.top);
      OffsetRect(&v22, v18.x - v20.left, v18.y - v20.top);
    }
    v14 = *((_DWORD *)a2 + 144);
    if ( (v14 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 596);
    if ( (v14 & 0x800000) != 0 )
      v22 = *(struct tagRECT *)((char *)a2 + 628);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v10 + 5), &rc);
    v15 = *((_QWORD *)v10 + 5);
    *(struct tagRECT *)(v15 + 856) = v22;
    CVisual::SetDirtyFlags((CVisual *)(v15 + 8), 4096);
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v10 + 5), a3);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0xE1u);
  }
  if ( v11 < 0 && v10 )
    CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v10);
  if ( a4 )
  {
    if ( v11 < 0 )
    {
      *a4 = 0LL;
    }
    else
    {
      *a4 = v10;
      if ( !v10 )
        return (unsigned int)v11;
      _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
      v10 = v17;
    }
  }
  if ( v10 )
    CBaseObject::Release(v10);
  return (unsigned int)v11;
}
