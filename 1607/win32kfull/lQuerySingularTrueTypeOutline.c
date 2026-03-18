/*
 * XREFs of lQuerySingularTrueTypeOutline @ 0x1C02425DC
 * Callers:
 *     lQueryTTOutline @ 0x1C0117134 (lQueryTTOutline.c)
 * Callees:
 *     fs_NewGlyph @ 0x1C00C4E04 (fs_NewGlyph.c)
 *     vFillSingularGLYPHDATA @ 0x1C0243B48 (vFillSingularGLYPHDATA.c)
 */

__int64 __fastcall lQuerySingularTrueTypeOutline(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(v4 + 108) = 0;
  *(_DWORD *)(v4 + 112) = 0;
  *(_WORD *)(v4 + 104) = -1;
  *(_WORD *)(v4 + 106) = a2;
  if ( !(unsigned int)fs_NewGlyph(*(_QWORD *)(a1 + 176), *(_WORD **)(a1 + 184), a3, a4) && a3 )
    vFillSingularGLYPHDATA(a2, *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL), a1, a3);
  return 0LL;
}
