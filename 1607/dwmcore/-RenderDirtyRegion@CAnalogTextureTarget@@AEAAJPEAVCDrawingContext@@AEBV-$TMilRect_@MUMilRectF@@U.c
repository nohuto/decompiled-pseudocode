/*
 * XREFs of ?RenderDirtyRegion@CAnalogTextureTarget@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180166674
 * Callers:
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x18000CB04 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogTextureTarget::RenderDirtyRegion(
        __int64 a1,
        CDrawingContext *a2,
        float *a3,
        char a4,
        _BYTE *a5)
{
  unsigned int v7; // r14d
  const struct MilRectF *OptimizedDirtyRects; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  const struct MilRectF *v11; // r13
  unsigned int v12; // edi
  __int128 v13; // xmm0
  float v14; // xmm3_4
  char *v15; // rcx
  float v16; // xmm2_4
  __int64 v17; // rdx
  float v18; // xmm4_4
  float v19; // xmm5_4
  struct _D3DCOLORVALUE *v20; // rsi
  unsigned int v21; // ebx
  __int64 v22; // rdx
  int v23; // eax
  struct _D3DCOLORVALUE v27; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v28[8]; // [rsp+80h] [rbp-80h] BYREF

  v7 = 0;
  OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(*(CDirtyRegion **)(a1 + 280));
  v10 = *(unsigned int *)(v9 + 576);
  v11 = OptimizedDirtyRects;
  `vector constructor iterator'(
    (TemporaryConfiguration *)v28,
    16LL,
    8LL,
    (void (__fastcall *)(TemporaryConfiguration *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
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
      *(struct _D3DCOLORVALUE *)&v27.r = *(struct _D3DCOLORVALUE *)(v15 - 8);
      v28[v12] = *(struct _D3DCOLORVALUE *)&v27.r;
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
  v20 = (struct _D3DCOLORVALUE *)v28;
  v21 = 0;
  while ( 1 )
  {
    v22 = *(_QWORD *)(a1 + 128);
    *(struct _D3DCOLORVALUE *)&v27.r = *(struct _D3DCOLORVALUE *)&v20->r;
    v23 = CDrawingContext::DrawVisualTree(a2, v22, &v27, 0LL, 0x7FFFFFFF, 0, 0, 0, 0, 1, 0);
    v7 = v23;
    if ( v23 < 0 )
      break;
    (*(void (__fastcall **)(__int64, struct _D3DCOLORVALUE *))(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 176LL) + 216LL))(
      *(_QWORD *)(a1 + 264) + 176LL,
      &v27);
    ++v21;
    ++v20;
    if ( v21 >= v12 )
    {
      *a5 = 1;
      return v7;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x271u);
  return v7;
}
