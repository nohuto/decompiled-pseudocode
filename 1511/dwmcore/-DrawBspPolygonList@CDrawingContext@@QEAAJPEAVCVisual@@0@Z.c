/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18010BF88
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PopLayer@CDrawingContext@@AEAAJXZ @ 0x18003CB80 (-PopLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x18003CD30 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180071954 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsSimple3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1800F78C0 (-IsSimple3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18010D0B8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x18012027C (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x180132080 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  unsigned int v3; // edi
  unsigned int v6; // r12d
  struct CVisual *v7; // r8
  __int64 v8; // r15
  const struct CVisual *v9; // rdx
  __int64 v10; // r14
  struct CVisual *v11; // rsi
  CD3DDeviceManager *v12; // rcx
  int D2DFactoryNoRef; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-68h]
  struct ID2D1PathGeometry *v18; // [rsp+30h] [rbp-58h] BYREF
  struct CD2DFactory *v19; // [rsp+38h] [rbp-50h] BYREF
  unsigned int BspPolygonListCount; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v6 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  if ( !BspPolygonListCount )
    return v3;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = v7;
    v10 = *(_QWORD *)(v8 + **((_QWORD **)a2 + 51));
    v11 = *(struct CVisual **)(v10 + 208);
    if ( v11 != a2 )
      v9 = (const struct CVisual *)*((_QWORD *)v11 + 8);
    if ( !*(_BYTE *)(v10 + 232) && *((_DWORD *)this + 65) )
      goto LABEL_17;
    if ( (unsigned __int8)CVisual::IsSimple3DRoot(*(CVisual **)(v10 + 208), v9) )
      break;
    CDrawingContext::DrawPolygon(this, (struct CPolygon *)v10);
LABEL_16:
    v7 = a3;
LABEL_17:
    ++v6;
    v8 += 8LL;
    if ( v6 >= BspPolygonListCount )
      goto LABEL_25;
  }
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v12, &v19);
  v3 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef >= 0 )
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v19 + 3) + 80LL))(
                        *((_QWORD *)v19 + 3),
                        &v18);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v17 = 2988;
      goto LABEL_24;
    }
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
    D2DFactoryNoRef = CPolygon::D2DGeometryFromPolygon((CPolygon *)v10, v18, TopByReference);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v17 = 2992;
      goto LABEL_24;
    }
    v15 = CDrawingContext::PushD2DLayer(this, v11, 0LL, (__int64)v18, 0LL, 1.0);
    v3 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xBB7u);
      goto LABEL_25;
    }
    D2DFactoryNoRef = CDrawingContext::DrawVisual((struct CComposition **)this, v11, 0);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v17 = 3001;
      goto LABEL_24;
    }
    CDrawingContext::PopLayer(this);
    if ( v18 )
    {
      (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v18 + 16LL))(v18);
      v18 = 0LL;
    }
    goto LABEL_16;
  }
  v17 = 2987;
LABEL_24:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, v17);
LABEL_25:
  if ( v18 )
    (*(void (__fastcall **)(struct ID2D1PathGeometry *, const struct CVisual *, struct CVisual *))(*(_QWORD *)v18 + 16LL))(
      v18,
      v9,
      v7);
  return v3;
}
