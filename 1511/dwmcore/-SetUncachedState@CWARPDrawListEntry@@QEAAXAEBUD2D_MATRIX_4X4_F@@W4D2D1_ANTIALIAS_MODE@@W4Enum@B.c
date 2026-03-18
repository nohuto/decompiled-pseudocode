/*
 * XREFs of ?SetUncachedState@CWARPDrawListEntry@@QEAAXAEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1801183A8
 * Callers:
 *     ?AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVCDrawingContext@@AEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1801178FC (-AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVCDrawingContext@@AEBUD2D_MATRIX_4X4_F@@W.c)
 * Callees:
 *     ?InterpolationModeToWarpFilterMode2@@YA?AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@Z @ 0x180118204 (-InterpolationModeToWarpFilterMode2@@YA-AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@.c)
 *     ?SetAntialiasMode@CWARPDrawListEntry@@AEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x180118284 (-SetAntialiasMode@CWARPDrawListEntry@@AEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z @ 0x1801182A8 (-SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z.c)
 */

void __fastcall CWARPDrawListEntry::SetUncachedState(
        __int64 a1,
        _DWORD *a2,
        enum D2D1_ANTIALIAS_MODE a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __int64 v6; // rcx
  int v7; // r9d
  __m128 *v8; // r10
  __int64 v9; // rcx
  __int32 v10; // eax

  *(_BYTE *)(a1 + 352) = 1;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 76) = a2[1];
  *(_DWORD *)(a1 + 80) = a2[3];
  *(_DWORD *)(a1 + 84) = a2[4];
  *(_DWORD *)(a1 + 88) = a2[5];
  *(_DWORD *)(a1 + 92) = a2[7];
  *(_DWORD *)(a1 + 96) = a2[12];
  *(_DWORD *)(a1 + 100) = a2[13];
  *(_DWORD *)(a1 + 104) = a2[15];
  CWARPDrawListEntry::SetAntialiasMode((CWARPDrawListEntry *)a1, a3);
  CWARPDrawListEntry::SetBlendMode(v6, v7);
  if ( (*(_BYTE *)(v9 + 64) & 0x3C) != 0 )
  {
    v10 = InterpolationModeToWarpFilterMode2(&a5);
    v8[10].m128_i32[2] = v10;
  }
  CWARPDrawListEntry::SetOpacity(v8, COERCE_DOUBLE((unsigned __int64)a6));
}
