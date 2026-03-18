/*
 * XREFs of ?RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x1801272F4
 * Callers:
 *     ?Render@CAnalogRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180126F00 (-Render@CAnalogRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18000F834 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x180058584 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x1800E2940 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnsureRenderTarget@CAnalogRenderTarget@@AEAAJXZ @ 0x180126408 (-EnsureRenderTarget@CAnalogRenderTarget@@AEAAJXZ.c)
 *     ?RenderDirtyRegion@CAnalogRenderTarget@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180127054 (-RenderDirtyRegion@CAnalogRenderTarget@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 */

__int64 __fastcall CAnalogRenderTarget::RenderSlate(CAnalogRenderTarget *this, bool *a2)
{
  float v4; // xmm1_4
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  RTL_SRWLOCK *v7; // rcx
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // rsi
  int DrawingContext; // eax
  CDrawingContext *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  char v15; // r9
  int v16; // eax
  __int64 v17; // rsi
  struct CDrawingContext *v19; // [rsp+40h] [rbp-38h] BYREF
  __int128 v20; // [rsp+48h] [rbp-30h] BYREF

  v19 = 0LL;
  if ( !*((_BYTE *)this + 213)
    && *((_QWORD *)this + 7)
    && !g_AnalogCompositor
    && *((_DWORD *)this + 28) != *((_DWORD *)this + 26)
    && *((_DWORD *)this + 29) != *((_DWORD *)this + 27) )
  {
    v4 = (float)*((int *)this + 28);
    *(float *)&v20 = (float)*((int *)this + 26);
    v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 27));
    *((float *)&v20 + 2) = v4;
    v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 29));
    v7 = (RTL_SRWLOCK *)(*((_QWORD *)this + 2) + 568LL);
    DWORD1(v20) = _mm_cvtepi32_ps(v5).m128_u32[0];
    HIDWORD(v20) = _mm_cvtepi32_ps(v6).m128_u32[0];
    CReadWriteLock::EnterWrite(v7);
    v8 = CVisualTree::PreCompute(*((struct CVisualTree **)this + 7), &v20);
    if ( v8 >= 0 )
    {
      CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)this + 2) + 568LL));
      v9 = CAnalogRenderTarget::EnsureRenderTarget(this);
      if ( v9 >= 0 )
      {
        *a2 = 0;
        v10 = (_QWORD *)*((_QWORD *)this + 33);
        if ( v10 && v10[2] != *(_QWORD *)(*((_QWORD *)this + 2) + 352LL) )
        {
          (*(void (__fastcall **)(_QWORD))(*v10 + 8LL))(*((_QWORD *)this + 33));
          *((_QWORD *)this + 33) = 0LL;
        }
        DrawingContext = CRenderTarget::GetDrawingContext(this, &v19);
        if ( DrawingContext >= 0 )
        {
          v12 = v19;
          v13 = CDrawingContext::BeginFrame(
                  v19,
                  *((struct IRenderTarget **)this + 25),
                  (CAnalogRenderTarget *)((char *)this + 120),
                  1,
                  (CAnalogRenderTarget *)((char *)this + 136),
                  0LL,
                  0,
                  0LL);
          if ( v13 >= 0 )
          {
            v14 = *((_QWORD *)this + 33);
            if ( v14 )
            {
              v15 = *(_BYTE *)(v14 + 1012) != 0;
              if ( *((_BYTE *)this + 212) )
                v15 = 1;
              v16 = CAnalogRenderTarget::RenderDirtyRegion((__int64)this, v12, (float *)&v20, v15, a2);
              if ( v16 >= 0 )
                *((_BYTE *)this + 212) = 0;
              else
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x36Cu);
            }
            CDrawingContext::EndFrame(v12);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x357u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x352u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x345u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x342u);
    }
  }
  v17 = *((_QWORD *)this + 33);
  if ( v17 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*((_QWORD *)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
  return 0LL;
}
