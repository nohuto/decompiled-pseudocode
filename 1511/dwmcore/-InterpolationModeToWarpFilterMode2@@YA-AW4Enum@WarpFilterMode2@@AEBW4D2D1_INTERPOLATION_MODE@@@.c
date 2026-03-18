/*
 * XREFs of ?InterpolationModeToWarpFilterMode2@@YA?AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@Z @ 0x180118204
 * Callers:
 *     ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@_N@Z @ 0x180118018 (-Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@_N@Z.c)
 *     ?SetUncachedState@CWARPDrawListEntry@@QEAAXAEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1801183A8 (-SetUncachedState@CWARPDrawListEntry@@QEAAXAEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@B.c)
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
