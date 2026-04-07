/*
 * XREFs of ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093C94
 * Callers:
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18003C2D0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18003C590 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800938BC (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowVertically(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // rax
  int v10; // eax
  int v11; // eax
  struct CAnimationComponent *v12; // rbx
  int v13; // edi
  LONG bottom; // r8d
  unsigned __int64 v15; // xmm0_8
  int v16; // r8d
  struct tagRECT *p_rc; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct tagRECT *v20; // rax
  struct CAnimationComponent *v22; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT v24; // [rsp+70h] [rbp-1h] BYREF

  v5 = *(_QWORD *)this;
  v22 = 0LL;
  v10 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(v5 + 88))(this, *((unsigned int *)a2 + 142));
  v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v10, 0LL, 0LL, -1, 1, &v22);
  v12 = v22;
  v13 = v11;
  if ( v11 >= 0 )
  {
    bottom = a3->bottom;
    v24 = *(struct tagRECT *)((char *)v22 + 88);
    rc = v24;
    v15 = _mm_srli_si128((__m128i)v24, 8).m128i_u64[0];
    if ( (int)abs32(bottom - HIDWORD(v15)) >= (int)abs32(a3->top - v24.top) )
      v16 = a3->top - HIDWORD(v15);
    else
      v16 = bottom - v24.top;
    p_rc = &v24;
    if ( !a4 )
      p_rc = &rc;
    OffsetRect(p_rc, 0, v16);
    v18 = *((_DWORD *)a2 + 142);
    if ( (v18 & 0x1000000) != 0 )
      v24 = *(struct tagRECT *)((char *)a2 + 588);
    if ( (v18 & 0x800000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 620);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v12 + 5), &v24);
    v19 = *((_QWORD *)v12 + 5);
    *(struct tagRECT *)(v19 + 856) = rc;
    CVisual::SetDirtyFlags((CVisual *)(v19 + 8), 4096);
    v20 = &rc;
    if ( !a4 )
      v20 = &v24;
    *(struct tagRECT *)((char *)v12 + 88) = *v20;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x17Du);
  }
  if ( v13 < 0 && v12 )
    CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v12);
  if ( a5 )
  {
    if ( v13 < 0 )
    {
      *a5 = 0LL;
    }
    else
    {
      *a5 = v12;
      if ( !v12 )
        return (unsigned int)v13;
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
      v12 = v22;
    }
  }
  if ( v12 )
    CBaseObject::Release(v12);
  return (unsigned int)v13;
}
