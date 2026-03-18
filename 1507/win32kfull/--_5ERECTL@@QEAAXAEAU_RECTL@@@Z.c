/*
 * XREFs of ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C009DBE0
 * Callers:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019A20 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019A54 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiPolyPatBlt @ 0x1C0086690 (NtGdiPolyPatBlt.c)
 *     NtGdiPatBlt @ 0x1C00868F0 (NtGdiPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00A25E4 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreSetBoundsRect @ 0x1C00F64F8 (GreSetBoundsRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::operator|=(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  __int64 result; // rax

  if ( *a2 < *a1 )
    *a1 = *a2;
  v2 = a2[1];
  if ( v2 < a1[1] )
    a1[1] = v2;
  v3 = a2[2];
  if ( v3 > a1[2] )
    a1[2] = v3;
  result = (unsigned int)a2[3];
  if ( (int)result > a1[3] )
    a1[3] = result;
  return result;
}
