/*
 * XREFs of ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769A0
 * Callers:
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F500 (-GetBoundsInternal@CHwndBitmap@@AEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005B3C0 (-GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x18013CAF0 (-SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z @ 0x180075CB8 (-NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180075E90 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?Create@CDirtyRegion@@KAJPEAPEAV1@@Z @ 0x180076BC0 (-Create@CDirtyRegion@@KAJPEAPEAV1@@Z.c)
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180079700 (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CVisualTree::GetBounds(CVisualTree *this, __int64 a2)
{
  int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  struct CDirtyRegion *v7; // r12
  int i; // r14d
  int v9; // eax
  __int64 v10; // xmm1_8
  __int64 v11; // rcx
  struct CDirtyRegion *v13; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 72LL) & 0xF) == 0 )
    goto LABEL_19;
  v13 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    Template_x(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, this);
  v5 = CDirtyRegion::Create(&v13);
  v2 = v5;
  if ( v5 >= 0 )
  {
    v6 = *((_QWORD *)this + 2);
    v14 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    CDirtyRegion::Initialize(v13, *(_QWORD *)(v6 + 352), &v14, 0LL);
    if ( *((_BYTE *)this + 32) )
    {
      v7 = v13;
      for ( i = *((_DWORD *)this + 190); i > 0; --i )
        (*(void (__fastcall **)(_QWORD, CVisualTree *, struct CDirtyRegion *))(**(_QWORD **)(*((_QWORD *)this + 92)
                                                                                           + 8LL * (unsigned int)(i - 1))
                                                                             + 32LL))(
          *(_QWORD *)(*((_QWORD *)this + 92) + 8LL * (unsigned int)(i - 1)),
          this,
          v7);
    }
    v9 = CVisualTree::PreComputeWorker(this, v13);
    v2 = v9;
    if ( v9 >= 0 )
    {
      CVisualTree::NotifyClientsOfDirty(this, v13);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, this);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB2u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x95u);
  }
  if ( v13 )
    (*(void (__fastcall **)(struct CDirtyRegion *))(*(_QWORD *)v13 + 8LL))(v13);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x63u);
    *(_OWORD *)a2 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v10 = qword_1801A0578;
  }
  else
  {
LABEL_19:
    v11 = *((_QWORD *)this + 3);
    *(_OWORD *)a2 = *(_OWORD *)(v11 + 140);
    v10 = *(_QWORD *)(v11 + 156);
  }
  *(_QWORD *)(a2 + 16) = v10;
  return (unsigned int)v2;
}
