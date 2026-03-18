/*
 * XREFs of bChangeXform @ 0x1C0243D98
 * Callers:
 *     lQueryTrueTypeOutlineVertical @ 0x1C0242658 (lQueryTrueTypeOutlineVertical.c)
 *     lGetGlyphBitmapVertical @ 0x1C024340C (lGetGlyphBitmapVertical.c)
 *     ttfdGlyphBitmap @ 0x1C0243854 (ttfdGlyphBitmap.c)
 * Callees:
 *     fs__NewTransformation @ 0x1C001AE3C (fs__NewTransformation.c)
 */

_BOOL8 __fastcall bChangeXform(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax

  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  if ( a2 )
    *(_QWORD *)(*(_QWORD *)(a1 + 176) + 120LL) = a1 + 320;
  else
    *(_QWORD *)(*(_QWORD *)(a1 + 176) + 120LL) = a1 + 356;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = *(_DWORD *)(a1 + 316);
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 108LL) = *(_WORD *)(a1 + 44);
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 110LL) = *(_WORD *)(a1 + 48);
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 92682;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 136LL) = *(_WORD *)(a1 + 402);
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 128LL) = 0LL;
  v3 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) == 0 )
  {
    *(_WORD *)(v3 + 138) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = 0;
    v4 = *(_QWORD *)(a1 + 176);
    goto LABEL_8;
  }
  *(_WORD *)(v3 + 138) = 20;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 20;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = *(_DWORD *)(a1 + 148);
  v4 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(a1 + 116) & 0x80u) == 0 )
  {
LABEL_8:
    *(_DWORD *)(v4 + 148) = 0;
    goto LABEL_9;
  }
  *(_DWORD *)(v4 + 148) = 1;
LABEL_9:
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 156LL) = 0;
  return !(unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184))
      || !(unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184));
}
