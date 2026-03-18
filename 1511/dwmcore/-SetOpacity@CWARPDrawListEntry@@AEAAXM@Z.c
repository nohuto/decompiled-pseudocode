/*
 * XREFs of ?SetOpacity@CWARPDrawListEntry@@AEAAXM@Z @ 0x18011830C
 * Callers:
 *     ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@_N@Z @ 0x180118018 (-Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@_N@Z.c)
 *     ?SetUncachedState@CWARPDrawListEntry@@QEAAXAEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1801183A8 (-SetUncachedState@CWARPDrawListEntry@@QEAAXAEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@B.c)
 * Callees:
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18002E670 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CWARPDrawListEntry::SetOpacity(__m128 *this, double a2)
{
  __int32 v3; // edi
  unsigned __int64 v4; // rcx
  __m128 v5; // xmm2
  char IsOpaque; // al
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm2_4

  v3 = 0;
  v4 = this[7].m128_u64[0];
  v5 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0);
  if ( v4 )
  {
    this[3] = v5;
    IsOpaque = CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v4 + 48));
    if ( this[3].m128_f32[3] == 1.0 )
    {
      LOBYTE(v3) = IsOpaque != 0;
      this[9].m128_i32[2] = v3;
    }
    else
    {
      this[9].m128_i32[2] = (IsOpaque != 0) + 2;
    }
  }
  else
  {
    v7 = *(float *)&a2 * this[2].m128_f32[3];
    this[3].m128_f32[0] = *(float *)&a2 * this[2].m128_f32[0];
    this[3].m128_f32[3] = v7;
    v8 = v5.m128_f32[0] * this[2].m128_f32[1];
    v9 = v5.m128_f32[0] * this[2].m128_f32[2];
    this[3].m128_f32[1] = v8;
    this[3].m128_f32[2] = v9;
  }
}
