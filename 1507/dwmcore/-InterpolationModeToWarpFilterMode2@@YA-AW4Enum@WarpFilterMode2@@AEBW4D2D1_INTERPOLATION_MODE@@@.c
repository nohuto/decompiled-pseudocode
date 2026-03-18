/*
 * XREFs of ?InterpolationModeToWarpFilterMode2@@YA?AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800FF408
 * Callers:
 *     ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@@Z @ 0x1800FF204 (-Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@@Z.c)
 *     ?SetUncachedState@CWARPDrawListEntry@@QEAAXUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1800FF520 (-SetUncachedState@CWARPDrawListEntry@@QEAAXUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@Blen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InterpolationModeToWarpFilterMode2(_DWORD *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *a1 )
    return *a1 == 1;
  return v1;
}
