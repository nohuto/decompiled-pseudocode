/*
 * XREFs of ?Initialize@CRippleEffect@@IEAAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@@Z @ 0x18007C510
 * Callers:
 *     ?Create@CRippleEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18007C418 (-Create@CRippleEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800124AC (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 */

__int64 __fastcall CRippleEffect::Initialize(
        CRippleEffect *this,
        struct MIL_CHANNEL__ *const a2,
        struct CBitmapSource **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v8; // xmm1
  struct CVisual **v9; // rsi
  CDesktopManager *v10; // rcx
  __m128i v11; // xmm0
  int v12; // eax
  int inserted; // eax

  v6 = CVisual::Initialize((CBaseObject **)this, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_OWORD *)((char *)this + 312) = *(_OWORD *)a3;
    *(_OWORD *)((char *)this + 328) = *((_OWORD *)a3 + 1);
    *(_OWORD *)((char *)this + 344) = *((_OWORD *)a3 + 2);
    *(_OWORD *)((char *)this + 360) = *((_OWORD *)a3 + 3);
    *(_OWORD *)((char *)this + 376) = *((_OWORD *)a3 + 4);
    v8 = *((_OWORD *)a3 + 5);
    v9 = (struct CVisual **)((char *)this + 304);
    *(_OWORD *)((char *)this + 392) = v8;
    *((_QWORD *)this + 34) = *(_QWORD *)(*((_QWORD *)this + 39) + 24LL);
    v10 = CDesktopManager::s_pDesktopManagerInstance;
    v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 69));
    *((_DWORD *)this + 68) = (int)((double)*((int *)this + 68)
                                 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 165));
    *((_DWORD *)this + 69) = (int)(_mm_cvtepi32_pd(v11).m128d_f64[0] * *((double *)v10 + 166));
    v12 = CImage::Create(a2, (struct CImage **)this + 38);
    v7 = v12;
    if ( v12 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((CRippleEffect *)((char *)this + 32), *v9, 0LL, 0, 1);
      v7 = inserted;
      if ( inserted >= 0 )
        CVisual::SetSize((struct tagSIZE *)*v9, (const struct tagSIZE *)this + 34);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x55u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x54u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x46u);
  }
  return v7;
}
