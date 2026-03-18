/*
 * XREFs of ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898
 * Callers:
 *     ?Render@CAnalogTextureTarget@@UEAAJ_NPEA_N@Z @ 0x180166630 (-Render@CAnalogTextureTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800091AC (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001FF38 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001FF70 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18016624C (-EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?RenderDirtyRegion@CAnalogTextureTarget@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180166674 (-RenderDirtyRegion@CAnalogTextureTarget@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x180166CBC (-UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z.c)
 *     ?GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z @ 0x180167530 (-GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z.c)
 *     ?SetProtectedContentInFrame@CAnalogDisplayRenderTarget@@QEAAX_N@Z @ 0x180167E20 (-SetProtectedContentInFrame@CAnalogDisplayRenderTarget@@QEAAX_N@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::RenderSlate(CAnalogTextureTarget *this, bool *a2)
{
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __m128i v8; // xmm1
  RTL_SRWLOCK *v9; // rcx
  int v10; // edi
  int DrawingContext; // eax
  _QWORD *v12; // rcx
  struct CDrawingContext *v13; // rdi
  bool v14; // si
  __int64 v15; // rcx
  char v16; // r9
  int v17; // eax
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-58h]
  struct CDrawingContext *v22; // [rsp+40h] [rbp-38h] BYREF
  float v23[4]; // [rsp+48h] [rbp-30h] BYREF

  v22 = 0LL;
  if ( *((_BYTE *)this + 277) )
    goto LABEL_29;
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_29;
  if ( CAnalogCompositorClient::GetExclusiveView(this, dword_1801F0398) )
    goto LABEL_29;
  v4 = *((_DWORD *)this + 42);
  v5 = *((_DWORD *)this + 40);
  if ( v4 == v5 )
    goto LABEL_29;
  v6 = *((_DWORD *)this + 43);
  v7 = *((_DWORD *)this + 41);
  if ( v6 == v7 )
    goto LABEL_29;
  v8 = _mm_cvtsi32_si128(v4);
  v9 = (RTL_SRWLOCK *)(*((_QWORD *)this + 2) + 576LL);
  LODWORD(v23[2]) = _mm_cvtepi32_ps(v8).m128_u32[0];
  v23[0] = (float)v5;
  v23[1] = (float)v7;
  v23[3] = (float)v6;
  CReadWriteLock::EnterWrite(v9);
  v10 = CVisualTree::PreCompute(*((CVisualTree **)this + 16));
  CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)this + 2) + 576LL));
  if ( v10 < 0 )
  {
    v21 = 472;
    v18 = v10;
    goto LABEL_28;
  }
  DrawingContext = CAnalogTextureTarget::EnsureRenderTarget(this);
  if ( DrawingContext < 0 )
  {
    v21 = 474;
    goto LABEL_24;
  }
  *a2 = 0;
  v12 = (_QWORD *)*((_QWORD *)this + 35);
  if ( v12 && v12[2] != *(_QWORD *)(*((_QWORD *)this + 2) + 352LL) )
  {
    (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
    *((_QWORD *)this + 35) = 0LL;
  }
  DrawingContext = CRenderTarget::GetDrawingContext(this, &v22);
  if ( DrawingContext < 0 )
  {
    v21 = 487;
    goto LABEL_24;
  }
  v13 = v22;
  v14 = 1;
  DrawingContext = CDrawingContext::BeginFrame(
                     v22,
                     *((struct IRenderTarget **)this + 33),
                     (__int128 *)this + 11,
                     1,
                     (__int64)this + 192,
                     0LL,
                     0,
                     0LL);
  if ( DrawingContext < 0 )
  {
    v21 = 492;
LABEL_24:
    v18 = DrawingContext;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v21);
    goto LABEL_29;
  }
  v15 = *((_QWORD *)this + 35);
  if ( v15 )
  {
    v16 = *(_BYTE *)(v15 + 2724) != 0;
    if ( *((_BYTE *)this + 276) )
      v16 = 1;
    v17 = CAnalogTextureTarget::RenderDirtyRegion((__int64)this, v13, v23, v16, a2);
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x201u);
    }
    else
    {
      *((_BYTE *)this + 276) = 0;
      if ( !*((_BYTE *)v13 + 6534) && !*((_BYTE *)v13 + 6536) )
        v14 = 0;
      CAnalogTextureTarget::UpdateProtectedContentRegion(this, v14);
      CAnalogDisplayRenderTarget::SetProtectedContentInFrame(
        *((CAnalogDisplayRenderTarget **)this + 33),
        **((_DWORD **)this + 36) != 0);
    }
  }
  CDrawingContext::EndFrame(v13);
LABEL_29:
  v19 = *((_QWORD *)this + 35);
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    *((_QWORD *)this + 35) = 0LL;
  }
  return 0LL;
}
