/*
 * XREFs of ?RenderDirtyRegion@CAnalogRenderTarget@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180127054
 * Callers:
 *     ?RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x1801272F4 (-RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x18003C95C (-GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::RenderDirtyRegion(
        __int64 a1,
        CDrawingContext *a2,
        float *a3,
        char a4,
        _BYTE *a5)
{
  unsigned int v7; // r12d
  const struct MilRectF *OptimizedDirtyRects; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  const struct MilRectF *v11; // r15
  unsigned int v12; // esi
  __int128 v13; // xmm0
  float v14; // xmm3_4
  char *v15; // rcx
  float v16; // xmm2_4
  __int64 v17; // rdx
  float v18; // xmm4_4
  float v19; // xmm5_4
  int v20; // r14d
  __int128 *i; // r15
  __int64 v22; // rdx
  int v23; // eax
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v28[8]; // [rsp+80h] [rbp-80h] BYREF

  v7 = 0;
  OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(*(CDirtyRegion **)(a1 + 264));
  v10 = *(unsigned int *)(v9 + 440);
  v11 = OptimizedDirtyRects;
  `vector constructor iterator'(
    (Mesh::MeshLine *)v28,
    16LL,
    8,
    (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  *a5 = 0;
  v12 = 0;
  if ( a4 )
  {
    v13 = *(_OWORD *)a3;
    v12 = 1;
    *a5 = 1;
    v28[0] = v13;
  }
  else
  {
    if ( !(_DWORD)v10 )
      return v7;
    v14 = *a3;
    v15 = (char *)v11 + 8;
    v16 = a3[1];
    v17 = v10;
    v18 = a3[2];
    v19 = a3[3];
    do
    {
      v27 = *(_OWORD *)(v15 - 8);
      v28[v12] = v27;
      if ( v14 > *(float *)&v28[v12] )
        *(float *)&v28[v12] = v14;
      if ( v16 > *((float *)&v28[v12] + 1) )
        *((float *)&v28[v12] + 1) = v16;
      if ( *((float *)&v28[v12] + 2) > v18 )
        *((float *)&v28[v12] + 2) = v18;
      if ( *((float *)&v28[v12] + 3) > v19 )
        *((float *)&v28[v12] + 3) = v19;
      if ( *((float *)&v28[v12] + 2) <= *(float *)&v28[v12] || *((float *)&v28[v12] + 3) <= *((float *)&v28[v12] + 1) )
      {
        *((_QWORD *)&v28[v12] + 1) = 0LL;
        *(_QWORD *)&v28[v12] = 0LL;
      }
      else
      {
        ++v12;
      }
      v15 += 16;
      --v17;
    }
    while ( v17 );
    if ( !v12 )
      return v7;
  }
  v20 = 0;
  for ( i = v28; ; ++i )
  {
    v22 = *(_QWORD *)(a1 + 56);
    v27 = *i;
    v23 = CDrawingContext::DrawVisualTree(a2, v22, (float *)&v27, 0LL, 0x7FFFFFFF, 0, 0, 0, 0, 1, 0);
    v7 = v23;
    if ( v23 < 0 )
      break;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 200) + 208LL))(*(_QWORD *)(a1 + 200), &v27);
    if ( ++v20 >= v12 )
    {
      *a5 = 1;
      return v7;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x3D7u);
  return v7;
}
