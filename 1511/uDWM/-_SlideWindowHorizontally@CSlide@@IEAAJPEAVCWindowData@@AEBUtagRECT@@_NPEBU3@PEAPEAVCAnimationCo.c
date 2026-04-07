/*
 * XREFs of ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x180001764
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800014A0 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001980 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000761C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180095D9C (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowHorizontally(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        __m128i *a5,
        struct CAnimationComponent **a6)
{
  __int64 v6; // rax
  __m128i *v8; // rdi
  __int64 (__fastcall *v11)(CSlide *, _QWORD); // rbx
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  struct CAnimationComponent *v15; // rbx
  int v16; // r8d
  LONG right; // edi
  __int64 v18; // kr00_8
  int v19; // r9d
  int v20; // edi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rcx
  struct tagRECT *p_rc; // rcx
  __int64 v28; // rcx
  struct CAnimationComponent *v30; // [rsp+50h] [rbp-29h] BYREF
  const struct tagRECT *v31; // [rsp+58h] [rbp-21h]
  struct tagRECT rc; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v33; // [rsp+70h] [rbp-9h] BYREF

  v6 = *(_QWORD *)this;
  v8 = a5;
  v31 = a3;
  v11 = *(__int64 (__fastcall **)(CSlide *, _QWORD))(v6 + 88);
  v30 = 0LL;
  v12 = v11(this, *((unsigned int *)a2 + 144));
  v13 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v12, 0LL, 0LL, -1, 1, &v30);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v13, 0x120u);
    v15 = v30;
    goto LABEL_16;
  }
  v15 = v30;
  if ( !a5 )
    v8 = (__m128i *)((char *)v30 + 88);
  v16 = _mm_cvtsi128_si32(*v8);
  rc = (struct tagRECT)*v8;
  right = v31->right;
  v18 = v31->left - v16;
  v33 = rc;
  v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 8));
  if ( (int)abs32(right - v19) >= (int)((HIDWORD(v18) ^ v18) - HIDWORD(v18)) )
    v20 = v31->left - v19;
  else
    v20 = right - v16;
  v21 = *((_DWORD *)a2 + 144) & 0xFFF;
  if ( a4 )
  {
    if ( v21 == 42 )
    {
      v22 = 0LL;
      v23 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      v24 = *(_DWORD *)(v23 + 40);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v23 + 16);
        while ( 1 )
        {
          v26 = *(_QWORD *)(v25 + 8 * v22);
          if ( *(_DWORD *)(v26 + 72) == 16 && *(_DWORD *)(v26 + 24) != 4 )
            break;
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= v24 )
            goto LABEL_12;
        }
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
        v20 -= *(_DWORD *)(v26 + 120);
        CStoryboard::Release((CStoryboard *)v26);
        v15 = v30;
      }
    }
LABEL_12:
    if ( (*((_DWORD *)a2 + 144) & 0x1000000) != 0 )
    {
      rc = *(struct tagRECT *)((char *)a2 + 596);
      goto LABEL_15;
    }
    p_rc = &rc;
  }
  else
  {
    if ( v21 == 24 )
      *((_DWORD *)this + 30) = v20;
    if ( (*((_DWORD *)a2 + 144) & 0x800000) != 0 )
    {
      v33 = *(struct tagRECT *)((char *)a2 + 628);
      goto LABEL_15;
    }
    p_rc = &v33;
  }
  OffsetRect(p_rc, v20, 0);
LABEL_15:
  CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v15 + 5), &rc);
  v28 = *((_QWORD *)v15 + 5);
  *(struct tagRECT *)(v28 + 856) = v33;
  CVisual::SetDirtyFlags((CVisual *)(v28 + 8), 0x1000u);
LABEL_16:
  if ( v14 < 0 && v15 )
    CStoryboard::_RemoveAnimationComponent(this, v15);
  if ( a6 )
  {
    if ( v14 < 0 )
    {
      *a6 = 0LL;
    }
    else
    {
      *a6 = v15;
      if ( !v15 )
        return (unsigned int)v14;
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
      v15 = v30;
    }
  }
  if ( v15 )
    CBaseObject::Release(v15);
  return (unsigned int)v14;
}
