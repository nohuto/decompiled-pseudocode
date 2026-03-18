/*
 * XREFs of ?SetOpacity@CWARPDrawListEntry@@AEAAXM@Z @ 0x1800FF4AC
 * Callers:
 *     ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@@Z @ 0x1800FF204 (-Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@@Z.c)
 *     ?SetUncachedState@CWARPDrawListEntry@@QEAAXUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1800FF520 (-SetUncachedState@CWARPDrawListEntry@@QEAAXUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@Blen.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CWARPDrawListEntry::SetOpacity(__m128 *this, double a2)
{
  unsigned __int64 v2; // rdx
  int v3; // eax
  __m128 v4; // xmm2
  char v5; // dl
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm2_4

  v2 = this[7].m128_u64[0];
  v3 = 0;
  v4 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0);
  if ( v2 )
  {
    this[3] = v4;
    v5 = *(_BYTE *)(v2 + 450);
    if ( v4.m128_f32[0] == 1.0 )
      LOBYTE(v3) = v5 != 0;
    else
      v3 = (v5 != 0) + 2;
    this[9].m128_i32[2] = v3;
  }
  else
  {
    v6 = *(float *)&a2 * this[2].m128_f32[3];
    this[3].m128_f32[0] = *(float *)&a2 * this[2].m128_f32[0];
    this[3].m128_f32[3] = v6;
    v7 = v4.m128_f32[0] * this[2].m128_f32[1];
    v8 = v4.m128_f32[0] * this[2].m128_f32[2];
    this[3].m128_f32[1] = v7;
    this[3].m128_f32[2] = v8;
  }
}
