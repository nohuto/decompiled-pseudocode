/*
 * XREFs of ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180140150
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x1800266EC (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18005B478 (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?GetBounds@CFlipChain@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801420F0 (-GetBounds@CFlipChain@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z @ 0x180189B0C (-ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::GetLastKnownGoodDxClipShape(CWindowNode *this, struct CShape **a2)
{
  __int64 v4; // rcx
  int Bounds; // eax
  unsigned int v6; // ebx
  const struct CShape *DxClipShapeNoRef; // rax
  int v8; // eax
  _OWORD v10[4]; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+80h] [rbp+17h] BYREF
  int v13; // [rsp+84h] [rbp+1Bh]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  _DWORD v15[2]; // [rsp+90h] [rbp+27h] BYREF
  __int64 v16; // [rsp+98h] [rbp+2Fh]

  v4 = *((_QWORD *)this + 118) + 8LL;
  v10[0] = CMILMatrix::Identity;
  v10[1] = xmmword_1801EAD20;
  v10[2] = xmmword_1801EAD30;
  v10[3] = xmmword_1801EAD40;
  v11 = dword_1801EAD50;
  Bounds = CFlipChain::GetBounds(v4);
  v6 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0xD61u);
  }
  else
  {
    v15[0] = v12;
    v15[1] = v13;
    v16 = v14;
    CMILMatrix::SetTranslation((CMILMatrix *)v10, COERCE_FLOAT(v12 ^ _xmm), COERCE_FLOAT(v13 ^ _xmm), 0.0);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v10, (__int64)v15, (float *)&v12);
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    v8 = CShape::ClipWithRect(DxClipShapeNoRef, (const struct MilRectF *)&v12, a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xD71u);
  }
  return v6;
}
