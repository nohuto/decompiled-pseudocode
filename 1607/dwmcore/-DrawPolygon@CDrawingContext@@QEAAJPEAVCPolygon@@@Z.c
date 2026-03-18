/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180122CAC
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180122064 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800035A8 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180003A7C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MI@Z @ 0x180003C10 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180004874 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800A5C6C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800AD88C (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z @ 0x1801122A4 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z.c)
 *     ?Draw@CPolygon@@QEAAXPEAVCDrawingContext@@@Z @ 0x180154A24 (-Draw@CPolygon@@QEAAXPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x180154A68 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v2; // ebx
  char v3; // r12
  char v4; // r15
  char v5; // r14
  int v8; // eax
  unsigned int *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r13
  const struct CMILMatrix *TopByReference; // rax
  struct CGeometry *v14; // r8
  int v15; // eax
  int v16; // xmm0_4
  __int64 *v17; // rax
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  int v20; // eax
  bool v22; // [rsp+41h] [rbp-38h] BYREF
  char v23; // [rsp+42h] [rbp-37h]
  struct ID2D1Geometry *v24; // [rsp+48h] [rbp-31h] BYREF
  __int64 v25[2]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-19h]
  _OWORD v27[2]; // [rsp+68h] [rbp-11h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v23 = 0;
  v5 = 0;
  if ( !*((_QWORD *)a2 + 31) )
    return v2;
  CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v27);
  if ( LODWORD(v27[0]) )
  {
    v8 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v27, 1);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB99u);
      return v2;
    }
    v23 = 1;
  }
  *(float *)&v24 = *((float *)a2 + 56)
                 * *(float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 3016);
  v10 = CWatermarkStack<float,64,2,10>::Push(v9, &v24);
  v2 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB9Fu);
LABEL_21:
    if ( v4 )
      CDrawingContext::PopLayer(this);
    if ( !v3 )
    {
LABEL_25:
      if ( !v5 )
        goto LABEL_27;
      goto LABEL_26;
    }
LABEL_24:
    CDrawingContext::PopTransformInternal(this, 1);
    goto LABEL_25;
  }
  v11 = CDrawingContext::PushTransformInternal(this, 0LL, (struct CPolygon *)((char *)a2 + 144), 1, 1);
  v2 = v11;
  if ( v11 >= 0 )
  {
    v12 = *((_QWORD *)a2 + 27);
    v3 = 1;
    if ( *(_QWORD *)(v12 + 296) )
    {
      v22 = 1;
      v25[0] = 0LL;
      v24 = 0LL;
      v25[1] = 0LL;
      v26 = 0LL;
      TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
      v15 = CDrawingContext::D2DGeometryFromGeometry(
              (CDrawingContext *)&v24,
              (const struct D2D_SIZE_F *)(v12 + 192),
              v14,
              TopByReference,
              &v24,
              &v22);
      v2 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xBB3u);
      }
      else
      {
        if ( v22 )
        {
          v17 = 0LL;
        }
        else
        {
          v16 = *((_DWORD *)a2 + 36);
          v17 = v25;
          v18 = (__m128)*((unsigned int *)a2 + 49);
          DWORD1(v27[0]) = *((_DWORD *)a2 + 37);
          HIDWORD(v27[0]) = *((_DWORD *)a2 + 41);
          v19 = (__m128)*((unsigned int *)a2 + 48);
          LODWORD(v27[0]) = v16;
          DWORD2(v27[0]) = *((_DWORD *)a2 + 40);
          *(_OWORD *)v25 = v27[0];
          v26 = _mm_unpacklo_ps(v19, v18).m128_u64[0];
        }
        v20 = CDrawingContext::PushD2DLayer(this, (struct CVisual *)v12, 0LL, (__int64)v24, (__int64)v17, 1.0, 0);
        v2 = v20;
        if ( v20 >= 0 )
        {
          v4 = 1;
          goto LABEL_15;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xBBFu);
      }
      v5 = 1;
      goto LABEL_24;
    }
LABEL_15:
    *((_QWORD *)this + 397) = a2;
    CPolygon::Draw(a2, this);
    *((_QWORD *)this + 397) = 0LL;
    v5 = 1;
    goto LABEL_21;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBA3u);
LABEL_26:
  CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 754);
LABEL_27:
  if ( v23 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v2;
}
