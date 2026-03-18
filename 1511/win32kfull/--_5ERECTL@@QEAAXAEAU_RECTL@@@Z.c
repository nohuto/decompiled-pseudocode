/*
 * XREFs of ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0041E20
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D688 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     NtGdiPolyPatBlt @ 0x1C003CC00 (NtGdiPolyPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00BC010 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreSetBoundsRect @ 0x1C00FDB28 (GreSetBoundsRect.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C013C228 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
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
