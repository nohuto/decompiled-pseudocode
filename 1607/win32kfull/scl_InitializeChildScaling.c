/*
 * XREFs of scl_InitializeChildScaling @ 0x1C0152AA0
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C001E1A8 (fsg_CompositeInnerGridFit.c)
 *     fsg_MergeGlyphData @ 0x1C00C52D0 (fsg_MergeGlyphData.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     scl_ComputeScaling @ 0x1C001B89C (scl_ComputeScaling.c)
 *     mth_max_abs @ 0x1C001B954 (mth_max_abs.c)
 */

__int64 __fastcall scl_InitializeChildScaling(_DWORD *a1, int *a2, unsigned __int16 a3)
{
  int v3; // ebx
  __int64 v5; // r9
  unsigned int v6; // esi
  unsigned int v7; // r10d
  __int64 result; // rax

  v3 = a3 << 16;
  if ( a1[118] )
  {
    v7 = a3 << 16;
    v6 = v7;
  }
  else
  {
    mth_max_abs(*a2, a2[1]);
    v6 = mth_max_abs(*(_DWORD *)(v5 + 12), *(_DWORD *)(v5 + 16));
  }
  a1[44] = scl_ComputeScaling(a1 + 58, v7, v3);
  result = scl_ComputeScaling(a1 + 62, v6, v3);
  a1[45] = result;
  return result;
}
