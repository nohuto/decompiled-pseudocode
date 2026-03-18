/*
 * XREFs of ?Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18011115C
 * Callers:
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180016204 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800961EC (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLOR.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 *     ?EstimatedArea@CDrawListPrimitiveBuilder@@KAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0BFC (-EstimatedArea@CDrawListPrimitiveBuilder@@KAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::Insert(
        CDrawListPrimitiveBuilder *this,
        const struct D2D_RECT_F *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  char v4; // r14
  const struct PrimitiveVertexAttributesDesc *v6; // rbp
  struct CPrimitiveColor *v9; // rsi
  CShape *v10; // rcx
  const struct D2D_MATRIX_3X2_F *v11; // rdx
  int BuiltPrimitiveEntry; // eax
  unsigned int v13; // ebx
  int appended; // eax
  int v15; // eax

  v4 = 0;
  v6 = a3;
  if ( a3 )
    v9 = (struct CPrimitiveColor *)*((_QWORD *)a3 + 3);
  else
    v9 = 0LL;
  if ( CCommonRegistryData::m_fEnableMegaRects )
  {
    if ( (*((_BYTE *)this + 24) & 1) != 0
      && CDrawListPrimitiveBuilder::EstimatedArea(a2, a4) > (float)(int)CCommonRegistryData::m_dwMegaRectSize )
    {
      v10 = (CShape *)*((_QWORD *)this + 2);
      if ( !v10
        || CShape::IsAxisAlignedRectangle(v10) && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)a4, v11) )
      {
        if ( *((_DWORD *)this + 584) )
        {
          BuiltPrimitiveEntry = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(this, 0, 0LL, 0LL);
          v13 = BuiltPrimitiveEntry;
          if ( BuiltPrimitiveEntry < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, BuiltPrimitiveEntry, 0x1F1u);
            return v13;
          }
        }
        v4 = 1;
      }
    }
  }
  appended = CDrawListPrimitiveBuilder::AppendRect(
               this,
               (const struct PrimitiveGeometryDesc *)a2,
               v6,
               (const struct D2D1::Matrix3x2F *)a4);
  v13 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x1F8u);
    return v13;
  }
  if ( *((_DWORD *)this + 602) >= 0xC8u )
    goto LABEL_18;
  if ( !v9 )
  {
    if ( !v4 )
      return v13;
LABEL_18:
    if ( !v9 )
      v6 = 0LL;
  }
  v15 = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(this, v4, v9, (const struct _D3DCOLORVALUE *)v6);
  v13 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x208u);
  return v13;
}
