/*
 * XREFs of ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800943DC
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180040730 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800409D0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000EFB4 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180094154 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowVertically(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  int v11; // eax
  int v12; // eax
  struct CAnimationComponent *v13; // rbx
  int v14; // edi
  LONG bottom; // r8d
  unsigned __int64 v16; // xmm0_8
  int v17; // r8d
  struct tagRECT *p_rc; // rcx
  int v19; // eax
  __int64 v20; // rcx
  struct tagRECT *v21; // rax
  struct CAnimationComponent *v23; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT v25; // [rsp+70h] [rbp-1h] BYREF

  v5 = *(_QWORD *)this;
  v7 = *((unsigned int *)a2 + 146);
  v23 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CSlide *, __int64))(v5 + 88))(this, v7);
  v12 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v11, 0LL, 0LL, -1, 1, &v23);
  v13 = v23;
  v14 = v12;
  if ( v12 >= 0 )
  {
    bottom = a3->bottom;
    v25 = *(struct tagRECT *)((char *)v23 + 88);
    rc = v25;
    v16 = _mm_srli_si128((__m128i)v25, 8).m128i_u64[0];
    if ( (int)abs32(bottom - HIDWORD(v16)) >= (int)abs32(a3->top - v25.top) )
      v17 = a3->top - HIDWORD(v16);
    else
      v17 = bottom - v25.top;
    p_rc = &v25;
    if ( !a4 )
      p_rc = &rc;
    OffsetRect(p_rc, 0, v17);
    v19 = *((_DWORD *)a2 + 146);
    if ( (v19 & 0x1000000) != 0 )
      v25 = *(struct tagRECT *)((char *)a2 + 604);
    if ( (v19 & 0x800000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 636);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v13 + 5), &v25);
    v20 = *((_QWORD *)v13 + 5);
    *(struct tagRECT *)(v20 + 856) = rc;
    CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 4096);
    v21 = &rc;
    if ( !a4 )
      v21 = &v25;
    *(struct tagRECT *)((char *)v13 + 88) = *v21;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x185u);
  }
  if ( v14 < 0 && v13 )
    CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v13);
  if ( a5 )
  {
    if ( v14 < 0 )
    {
      *a5 = 0LL;
    }
    else
    {
      *a5 = v13;
      if ( !v13 )
        return (unsigned int)v14;
      _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
      v13 = v23;
    }
  }
  if ( v13 )
    CBaseObject::Release(v13);
  return (unsigned int)v14;
}
