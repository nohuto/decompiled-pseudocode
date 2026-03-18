/*
 * XREFs of ?InterpolationModeToWarpFilterMode2@@YA?AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@Z @ 0x1801373CC
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPAlphaBltParameters@@@Z @ 0x180136F18 (--0CWARPDrawListEntry@@AEAA@AEBUWARPAlphaBltParameters@@@Z.c)
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
