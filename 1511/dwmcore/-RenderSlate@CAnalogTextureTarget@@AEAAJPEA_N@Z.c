/*
 * XREFs of ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844
 * Callers:
 *     ?Render@CAnalogTextureTarget@@UEAAJ_NPEA_N@Z @ 0x18013C5D0 (-Render@CAnalogTextureTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001CD44 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800AD350 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18013C0F8 (-EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?RenderDirtyRegion@CAnalogTextureTarget@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18013C614 (-RenderDirtyRegion@CAnalogTextureTarget@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x18013CC30 (-UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z.c)
 *     ?SetProtectedContentInFrame@CAnalogDisplayRenderTarget@@QEAAX_N@Z @ 0x18013E01C (-SetProtectedContentInFrame@CAnalogDisplayRenderTarget@@QEAAX_N@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::RenderSlate(CAnalogTextureTarget *this, bool *a2)
{
  float v4; // xmm1_4
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  RTL_SRWLOCK *v7; // rcx
  int v8; // ebx
  int v9; // r9d
  int DrawingContext; // eax
  _QWORD *v11; // rsi
  struct CDrawingContext *v12; // rbx
  bool v13; // si
  __int64 v14; // rcx
  char v15; // r9
  int v16; // eax
  __int64 v17; // rsi
  unsigned int v19; // [rsp+20h] [rbp-58h]
  struct CDrawingContext *v20; // [rsp+40h] [rbp-38h] BYREF
  __int128 v21; // [rsp+48h] [rbp-30h] BYREF

  v20 = 0LL;
  if ( !*((_BYTE *)this + 197)
    && *((_QWORD *)this + 7)
    && !g_AnalogCompositor
    && *((_DWORD *)this + 24) != *((_DWORD *)this + 22)
    && *((_DWORD *)this + 25) != *((_DWORD *)this + 23) )
  {
    v4 = (float)*((int *)this + 24);
    *(float *)&v21 = (float)*((int *)this + 22);
    v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
    *((float *)&v21 + 2) = v4;
    v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 25));
    v7 = (RTL_SRWLOCK *)(*((_QWORD *)this + 2) + 568LL);
    DWORD1(v21) = _mm_cvtepi32_ps(v5).m128_u32[0];
    HIDWORD(v21) = _mm_cvtepi32_ps(v6).m128_u32[0];
    CReadWriteLock::EnterWrite(v7);
    v8 = CVisualTree::PreCompute(*((CVisualTree **)this + 7), &v21);
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)this + 2) + 568LL));
    if ( v8 < 0 )
    {
      v19 = 483;
      v9 = v8;
LABEL_8:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v19);
      goto LABEL_29;
    }
    DrawingContext = CAnalogTextureTarget::EnsureRenderTarget(this);
    if ( DrawingContext < 0 )
    {
      v19 = 485;
LABEL_11:
      v9 = DrawingContext;
      goto LABEL_8;
    }
    *a2 = 0;
    v11 = (_QWORD *)*((_QWORD *)this + 25);
    if ( v11 && v11[2] != *(_QWORD *)(*((_QWORD *)this + 2) + 352LL) )
    {
      (*(void (__fastcall **)(_QWORD))(*v11 + 8LL))(*((_QWORD *)this + 25));
      *((_QWORD *)this + 25) = 0LL;
    }
    DrawingContext = CRenderTarget::GetDrawingContext(this, &v20);
    if ( DrawingContext < 0 )
    {
      v19 = 498;
      goto LABEL_11;
    }
    v12 = v20;
    v13 = 1;
    DrawingContext = CDrawingContext::BeginFrame(
                       v20,
                       *((struct IRenderTarget **)this + 23),
                       (CAnalogTextureTarget *)((char *)this + 104),
                       1,
                       (CAnalogTextureTarget *)((char *)this + 120),
                       0LL,
                       0,
                       0LL);
    if ( DrawingContext < 0 )
    {
      v19 = 503;
      goto LABEL_11;
    }
    v14 = *((_QWORD *)this + 25);
    if ( v14 )
    {
      v15 = *(_BYTE *)(v14 + 1012) != 0;
      if ( *((_BYTE *)this + 196) )
        v15 = 1;
      v16 = CAnalogTextureTarget::RenderDirtyRegion((__int64)this, v12, (float *)&v21, v15, a2);
      if ( v16 >= 0 )
      {
        *((_BYTE *)this + 196) = 0;
        if ( !*((_BYTE *)v12 + 5970) && !*((_BYTE *)v12 + 5972) )
          v13 = 0;
        CAnalogTextureTarget::UpdateProtectedContentRegion(this, v13);
        CAnalogDisplayRenderTarget::SetProtectedContentInFrame(
          *((CAnalogDisplayRenderTarget **)this + 23),
          **((_DWORD **)this + 26) != 0);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x20Cu);
      }
    }
    CDrawingContext::EndFrame(v12);
  }
LABEL_29:
  v17 = *((_QWORD *)this + 25);
  if ( v17 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*((_QWORD *)this + 25));
    *((_QWORD *)this + 25) = 0LL;
  }
  return 0LL;
}
