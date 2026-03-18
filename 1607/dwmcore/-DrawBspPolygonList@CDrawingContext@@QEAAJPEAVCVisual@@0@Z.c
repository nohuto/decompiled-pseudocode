/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180122064
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180003A7C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MI@Z @ 0x180003C10 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180004184 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18004FD80 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18010A074 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180122CAC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x180138294 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x180154844 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r14d
  unsigned int BspPolygonListCount; // r13d
  __int64 v8; // r15
  _QWORD *BspPolygonList; // rax
  const struct CVisual *v10; // r11
  const struct CVisual *v11; // rdx
  __int64 v12; // rbp
  struct CVisual *v13; // rsi
  CD3DDeviceManager *v14; // rcx
  int D2DFactoryNoRef; // eax
  int v16; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct CD2DFactory *v22; // [rsp+40h] [rbp-58h] BYREF
  struct ID2D1PathGeometry *v23; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v6 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  if ( !BspPolygonListCount )
    return v4;
  v8 = 0LL;
  while ( 1 )
  {
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList((__int64)a2);
    v11 = v10;
    v12 = *(_QWORD *)(v8 + *BspPolygonList);
    v13 = *(struct CVisual **)(v12 + 216);
    if ( v13 != a2 )
      v11 = (const struct CVisual *)*((_QWORD *)v13 + 18);
    if ( !*(_BYTE *)(v12 + 240) && *((_DWORD *)this + 85) )
      goto LABEL_16;
    if ( !CVisual::IsSimple3DRootOrHasEffects(*(CVisual **)(v12 + 216), v11) )
    {
      CDrawingContext::DrawPolygon(this, (struct CPolygon *)v12);
      goto LABEL_16;
    }
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v14, &v22);
    v4 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
      break;
    v16 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v22 + 3) + 80LL))(
            *((_QWORD *)v22 + 3),
            &v23);
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB68u);
      goto LABEL_23;
    }
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
    v18 = CPolygon::D2DGeometryFromPolygon((CPolygon *)v12, v23, TopByReference);
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xB6Cu);
      goto LABEL_23;
    }
    v19 = CDrawingContext::PushD2DLayer(this, v13, 0LL, (__int64)v23, 0LL, 1.0, 0);
    v4 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB73u);
      goto LABEL_23;
    }
    v20 = CDrawingContext::DrawVisual((struct CComposition **)this, v13, 0);
    v4 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xB75u);
      goto LABEL_23;
    }
    CDrawingContext::PopLayer(this);
    if ( v23 )
    {
      (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v23 + 16LL))(v23);
      v23 = 0LL;
    }
LABEL_16:
    ++v6;
    v8 += 8LL;
    if ( v6 >= BspPolygonListCount )
      goto LABEL_23;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0xB67u);
LABEL_23:
  if ( v23 )
    (*(void (__fastcall **)(struct ID2D1PathGeometry *, const struct CVisual *))(*(_QWORD *)v23 + 16LL))(v23, v11);
  return v4;
}
