/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F2618
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180010918 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?PopLayer@CDrawingContext@@AEAAJXZ @ 0x180028020 (-PopLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x1800281B8 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180030040 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180031110 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18005BD54 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z @ 0x1800E06E8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1800F3BC0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?Draw@CPolygon@@QEAAXPEAVCDrawingContext@@@Z @ 0x18011B6EC (-Draw@CPolygon@@QEAAXPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v2; // edi
  char v3; // r12
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // r14d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // r14
  const struct CMILMatrix *TopByReference; // rax
  struct CGeometry *v18; // r8
  int v19; // eax
  int v20; // xmm0_4
  __int64 *v21; // rax
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  int v24; // eax
  bool v26; // [rsp+30h] [rbp-49h] BYREF
  struct ID2D1Geometry *v27; // [rsp+38h] [rbp-41h] BYREF
  __int128 v28; // [rsp+40h] [rbp-39h] BYREF
  __int128 v29; // [rsp+50h] [rbp-29h]
  __int128 v30; // [rsp+60h] [rbp-19h]
  __int128 v31; // [rsp+70h] [rbp-9h]
  __int64 v32[2]; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int64 v33; // [rsp+90h] [rbp+17h]

  v2 = 0;
  v3 = 0;
  if ( *((_QWORD *)a2 + 30) )
  {
    v6 = *((_DWORD *)a2 + 57);
    v7 = *((_DWORD *)a2 + 56);
    v8 = *((_DWORD *)a2 + 55);
    v9 = *((_DWORD *)a2 + 58);
    LODWORD(v28) = 1232;
    *(_QWORD *)((char *)&v28 + 4) = __PAIR64__(v6, v7);
    DWORD1(v29) = v8;
    HIDWORD(v29) = v9;
    if ( v6 == -1 )
      DWORD2(v28) = *((_DWORD *)this + 62);
    if ( v8 == 5 )
      DWORD1(v29) = *((_DWORD *)this + 63);
    if ( v7 == -1 )
      DWORD1(v28) = *((_DWORD *)this + 61);
    if ( v9 == -1 )
    {
      v9 = *((_DWORD *)this + 65);
      HIDWORD(v29) = v9;
    }
    v10 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)&v28, 1);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xBBDu);
      return v2;
    }
    LODWORD(v27) = *((_DWORD *)a2 + 54);
    v11 = CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 646, &v27);
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBC1u);
LABEL_32:
      CDrawingContext::PopRenderOptionsInternal(this, 1);
      return v2;
    }
    v12 = CDrawingContext::PushTransformInternal(this, 0LL, (struct CPolygon *)((char *)a2 + 144), 1, 1);
    v2 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xBC5u);
LABEL_31:
      CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 646);
      goto LABEL_32;
    }
    if ( v9 != 1 )
      goto LABEL_18;
    v13 = *((_OWORD *)this + 166);
    v28 = *((_OWORD *)this + 165);
    v14 = *((_OWORD *)this + 167);
    v29 = v13;
    v15 = *((_OWORD *)this + 168);
    v30 = v14;
    v31 = v15;
    D2DMatrixMultiply((struct D2DMatrix *)&v28, (struct CPolygon *)((char *)a2 + 144), (const struct D2DMatrix *)&v28);
    if ( CMILMatrix::IsFacingUser((CMILMatrix *)&v28) )
    {
LABEL_18:
      v16 = *((_QWORD *)a2 + 26);
      if ( *(_QWORD *)(v16 + 368) )
      {
        v27 = 0LL;
        v26 = 1;
        v32[0] = 0LL;
        v32[1] = 0LL;
        v33 = 0LL;
        TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
        v19 = CDrawingContext::D2DGeometryFromGeometry(
                (CDrawingContext *)&v27,
                (const struct D2D_SIZE_F *)(v16 + 148),
                v18,
                TopByReference,
                &v27,
                &v26);
        v2 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xBE1u);
          goto LABEL_30;
        }
        if ( v26 )
        {
          v21 = 0LL;
        }
        else
        {
          v20 = *((_DWORD *)a2 + 36);
          v21 = v32;
          v22 = (__m128)*((unsigned int *)a2 + 49);
          DWORD1(v28) = *((_DWORD *)a2 + 37);
          HIDWORD(v28) = *((_DWORD *)a2 + 41);
          v23 = (__m128)*((unsigned int *)a2 + 48);
          LODWORD(v28) = v20;
          DWORD2(v28) = *((_DWORD *)a2 + 40);
          *(_OWORD *)v32 = v28;
          v33 = _mm_unpacklo_ps(v23, v22).m128_u64[0];
        }
        v24 = CDrawingContext::PushD2DLayer(this, (struct CVisual *)v16, 0LL, (__int64)v27, (__int64)v21, 1.0);
        v2 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xBEDu);
          goto LABEL_30;
        }
        v3 = 1;
      }
      *((_QWORD *)this + 338) = a2;
      CPolygon::Draw(a2, this);
      *((_QWORD *)this + 338) = 0LL;
      if ( v3 )
        CDrawingContext::PopLayer(this);
    }
LABEL_30:
    CDrawingContext::PopTransformInternal(this, 1);
    goto LABEL_31;
  }
  return v2;
}
