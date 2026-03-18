/*
 * XREFs of ?SetUncachedState@CWARPDrawListEntry@@QEAAXUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1800FF520
 * Callers:
 *     ?AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVID2DContext@@UD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1800FEB1C (-AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVID2DContext@@UD2D_MATRIX_4X4_F@@W4D2D1_A.c)
 * Callees:
 *     ?InterpolationModeToWarpFilterMode2@@YA?AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800FF408 (-InterpolationModeToWarpFilterMode2@@YA-AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@.c)
 *     ?SetAntialiasMode@CWARPDrawListEntry@@AEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800FF424 (-SetAntialiasMode@CWARPDrawListEntry@@AEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z @ 0x1800FF448 (-SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z.c)
 */

void __fastcall CWARPDrawListEntry::SetUncachedState(
        __int64 a1,
        __m128 *a2,
        enum D2D1_ANTIALIAS_MODE a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  unsigned __int32 v9; // xmm0_4
  __int64 v10; // rcx
  int v11; // r9d
  __m128 *v12; // r10
  __int64 v13; // rcx
  __int32 v14; // eax

  v6 = *a2;
  *(_BYTE *)(a1 + 72) = 1;
  v7 = a2[1];
  v8 = a2[3];
  *(_DWORD *)(a1 + 76) = v6.m128_i32[0];
  v9 = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  v6.m128_i32[0] = a2->m128_i32[3];
  *(_DWORD *)(a1 + 80) = v9;
  *(_DWORD *)(a1 + 92) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  *(_DWORD *)(a1 + 88) = v7.m128_i32[0];
  v7.m128_i32[0] = a2[1].m128_i32[3];
  *(_DWORD *)(a1 + 100) = v8.m128_i32[0];
  *(_DWORD *)(a1 + 108) = a2[3].m128_i32[3];
  *(_DWORD *)(a1 + 84) = v6.m128_i32[0];
  *(_DWORD *)(a1 + 96) = v7.m128_i32[0];
  *(_DWORD *)(a1 + 104) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  CWARPDrawListEntry::SetAntialiasMode((CWARPDrawListEntry *)a1, a3);
  CWARPDrawListEntry::SetBlendMode(v10, v11);
  if ( (*(_BYTE *)(v13 + 64) & 0x3C) != 0 )
  {
    v14 = InterpolationModeToWarpFilterMode2(&a5);
    v12[10].m128_i32[2] = v14;
  }
  CWARPDrawListEntry::SetOpacity(v12, COERCE_DOUBLE((unsigned __int64)a6));
}
