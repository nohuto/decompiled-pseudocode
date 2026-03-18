/*
 * XREFs of ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x18012380C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetBounds@CFlipChain@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180125A10 (-GetBounds@CFlipChain@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?ClipWithRect@CShape@@SAJPEBV1@PEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAPEAV1@@Z @ 0x180158830 (-ClipWithRect@CShape@@SAJPEBV1@PEBV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::GetLastKnownGoodDxClipShape(CWindowNode *this, struct CShape **a2)
{
  __int64 v3; // rcx
  int Bounds; // eax
  unsigned int v6; // ebx
  struct CShape *DxClipShapeNoRef; // rax
  int v8; // eax
  _DWORD v10[12]; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+64h] [rbp+Bh]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  int v15; // [rsp+70h] [rbp+17h] BYREF
  int v16; // [rsp+74h] [rbp+1Bh]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  _DWORD v19[4]; // [rsp+80h] [rbp+27h] BYREF

  v13 = 0;
  v12 = 0;
  v3 = *((_QWORD *)this + 142);
  v11 = 0;
  v10[11] = 0;
  v10[9] = 0;
  v10[8] = 0;
  v10[7] = 0;
  v10[6] = 0;
  v10[4] = 0;
  v10[3] = 0;
  v10[2] = 0;
  v10[1] = 0;
  v14 = 1065353216;
  v10[10] = 1065353216;
  v10[5] = 1065353216;
  v10[0] = 1065353216;
  Bounds = CFlipChain::GetBounds(v3 + 8);
  v6 = Bounds;
  if ( Bounds >= 0 )
  {
    v19[0] = v15;
    v19[1] = v16;
    v11 = v15 ^ _xmm;
    v12 = v16 ^ _xmm;
    v19[2] = v17;
    v19[3] = v18;
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)v10, (const struct MilRectF *)v19, (struct MilRectF *)&v15);
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    v8 = CShape::ClipWithRect(DxClipShapeNoRef, &v15, a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xD75u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0xD65u);
  }
  return v6;
}
