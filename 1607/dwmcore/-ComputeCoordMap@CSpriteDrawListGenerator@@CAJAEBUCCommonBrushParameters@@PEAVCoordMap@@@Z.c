/*
 * XREFs of ?ComputeCoordMap@CSpriteDrawListGenerator@@CAJAEBUCCommonBrushParameters@@PEAVCoordMap@@@Z @ 0x180133934
 * Callers:
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@AEBUD2D_SIZE_F@@1H@Z @ 0x1801354F4 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@AEBUD2D_SIZE_F@@1H@Z.c)
 *     ?Clear@CoordMap@@QEAAXXZ @ 0x180135B60 (-Clear@CoordMap@@QEAAXXZ.c)
 */

__int64 __fastcall CSpriteDrawListGenerator::ComputeCoordMap(struct D2D_RECT_F *a1, struct CoordMap *this)
{
  __m128 left_low; // xmm0
  __m128 top_low; // xmm1
  int v6; // eax
  unsigned int v7; // edi
  unsigned __int8 v8; // al
  __m128 v9; // xmm0
  __m128 bottom_low; // xmm1
  int v11; // eax
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  int v14; // eax
  int right_low; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+30h] [rbp-18h]
  struct D2D_SIZE_F v18; // [rsp+50h] [rbp+8h] BYREF

  CoordMap::Clear(this);
  if ( *(_QWORD *)&a1[4].left )
  {
    if ( LODWORD(a1[7].top) == 1 )
    {
      left_low = (__m128)LODWORD(a1[5].left);
      top_low = (__m128)LODWORD(a1[5].top);
      left_low.m128_f32[0] = left_low.m128_f32[0] - a1[4].right;
      top_low.m128_f32[0] = top_low.m128_f32[0] - a1[4].bottom;
      right_low = LOBYTE(a1[10].right);
      v18 = (struct D2D_SIZE_F)_mm_unpacklo_ps(left_low, top_low).m128_u64[0];
      v6 = CoordMap::AddNineGrid(
             this,
             0,
             (struct D2D_RECT_F *)((char *)a1 + 136),
             (const struct Insets *)&a1[9].right,
             &v18,
             (const struct Insets *)&a1[7].right,
             right_low);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x45u);
        return v7;
      }
    }
  }
  else
  {
    v8 = BYTE2(a1[18].left);
    if ( v8 )
    {
      v9 = (__m128)LODWORD(a1->right);
      bottom_low = (__m128)LODWORD(a1->bottom);
      v9.m128_f32[0] = v9.m128_f32[0] - a1->left;
      bottom_low.m128_f32[0] = bottom_low.m128_f32[0] - a1->top;
      v18 = (struct D2D_SIZE_F)_mm_unpacklo_ps(v9, bottom_low).m128_u64[0];
      v11 = CoordMap::AddNineGrid(this, 0, a1, (const struct Insets *)&a1[3], &v18, (const struct Insets *)&a1[3], v8);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x54u);
        return v7;
      }
    }
  }
  if ( !*(_QWORD *)&a1[11].left )
    return 0;
  if ( LODWORD(a1[14].top) != 1 )
    return 0;
  v12 = (__m128)LODWORD(a1[12].left);
  v13 = (__m128)LODWORD(a1[12].top);
  v12.m128_f32[0] = v12.m128_f32[0] - a1[11].right;
  v13.m128_f32[0] = v13.m128_f32[0] - a1[11].bottom;
  v17 = LOBYTE(a1[17].right);
  v18 = (struct D2D_SIZE_F)_mm_unpacklo_ps(v12, v13).m128_u64[0];
  v14 = CoordMap::AddNineGrid(
          this,
          1,
          (struct D2D_RECT_F *)((char *)a1 + 248),
          (const struct Insets *)&a1[16].right,
          &v18,
          (const struct Insets *)&a1[14].right,
          v17);
  v7 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x64u);
  else
    return 0;
  return v7;
}
