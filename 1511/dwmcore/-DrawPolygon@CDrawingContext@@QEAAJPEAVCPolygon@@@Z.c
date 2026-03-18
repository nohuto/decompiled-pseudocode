/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18010D0B8
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18010BF88 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800062E4 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E278 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?PopLayer@CDrawingContext@@AEAAJXZ @ 0x18003CB80 (-PopLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x18003CD30 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800A9F70 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800FE26C (-Pop@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBitmapI.c)
 *     ?Draw@CPolygon@@QEAAXPEAVCDrawingContext@@@Z @ 0x180132290 (-Draw@CPolygon@@QEAAXPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x180132300 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v2; // ebx
  char v3; // r15
  char v4; // r12
  int v7; // eax
  unsigned int *v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // r13
  const struct CMILMatrix *TopByReference; // rax
  struct CGeometry *v13; // r8
  int v14; // eax
  int v15; // xmm0_4
  __int64 *v16; // rax
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  int v19; // eax
  bool v21; // [rsp+30h] [rbp-39h] BYREF
  struct ID2D1Geometry *v22; // [rsp+38h] [rbp-31h] BYREF
  _OWORD v23[3]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v24[2]; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+17h]

  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( !*((_QWORD *)a2 + 30) )
    return v2;
  CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v23);
  if ( LODWORD(v23[0]) )
  {
    v7 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v23, 1);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBDDu);
      return v2;
    }
    v4 = 1;
  }
  *(float *)&v22 = *((float *)a2 + 54)
                 * *(float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 2584);
  v9 = CWatermarkStack<float,64,2,10>::Push(v8, &v22);
  v2 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBE3u);
    goto LABEL_24;
  }
  v10 = CDrawingContext::PushTransformInternal(this, 0LL, (struct CPolygon *)((char *)a2 + 144), 1, 1);
  v2 = v10;
  if ( v10 >= 0 )
  {
    v11 = *((_QWORD *)a2 + 26);
    if ( *(_QWORD *)(v11 + 352) )
    {
      v22 = 0LL;
      v21 = 1;
      v24[0] = 0LL;
      v24[1] = 0LL;
      v25 = 0LL;
      TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
      v14 = CDrawingContext::D2DGeometryFromGeometry(
              (CDrawingContext *)&v22,
              (const struct D2D_SIZE_F *)(v11 + 132),
              v13,
              TopByReference,
              &v22,
              &v21);
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xBF7u);
        goto LABEL_22;
      }
      if ( v21 )
      {
        v16 = 0LL;
      }
      else
      {
        v15 = *((_DWORD *)a2 + 36);
        v16 = v24;
        v17 = (__m128)*((unsigned int *)a2 + 49);
        DWORD1(v23[0]) = *((_DWORD *)a2 + 37);
        HIDWORD(v23[0]) = *((_DWORD *)a2 + 41);
        v18 = (__m128)*((unsigned int *)a2 + 48);
        LODWORD(v23[0]) = v15;
        DWORD2(v23[0]) = *((_DWORD *)a2 + 40);
        *(_OWORD *)v24 = v23[0];
        v25 = _mm_unpacklo_ps(v18, v17).m128_u64[0];
      }
      v19 = CDrawingContext::PushD2DLayer(this, (struct CVisual *)v11, 0LL, (__int64)v22, (__int64)v16, 1.0);
      v2 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC03u);
LABEL_22:
        CDrawingContext::PopTransformInternal(this, 1);
        goto LABEL_23;
      }
      v3 = 1;
    }
    *((_QWORD *)this + 342) = a2;
    CPolygon::Draw(a2, this);
    *((_QWORD *)this + 342) = 0LL;
    if ( v3 )
      CDrawingContext::PopLayer(this);
    goto LABEL_22;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xBE7u);
LABEL_23:
  CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop((_DWORD *)this + 646);
LABEL_24:
  if ( v4 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v2;
}
