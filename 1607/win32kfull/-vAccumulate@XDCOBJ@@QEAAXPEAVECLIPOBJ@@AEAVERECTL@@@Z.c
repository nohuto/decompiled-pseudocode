/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0049004
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C000F9E4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFastPolyPolyline @ 0x1C0010D50 (NtGdiFastPolyPolyline.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGradientFill @ 0x1C005FD04 (GreGradientFill.c)
 *     NtGdiExtFloodFill @ 0x1C0137AF0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C003554C (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 */

void __fastcall XDCOBJ::vAccumulate(DC **this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __m128i v3; // xmm6
  DC *v4; // rcx
  struct EPOINTL *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r8d
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF

  v4 = *this;
  v9 = *a3;
  v3 = v9;
  v5 = DC::eptlOrigin(v4);
  v8 = *(_DWORD *)v5;
  LODWORD(v5) = *((_DWORD *)v5 + 1);
  v9.m128i_i32[1] -= (int)v5;
  v9.m128i_i32[3] -= (int)v5;
  v9.m128i_i32[2] -= v8;
  LODWORD(v5) = *(_DWORD *)(v6 + 36);
  v9.m128i_i32[0] = _mm_cvtsi128_si32(v3) - v8;
  if ( ((unsigned __int8)v5 & 0x20) != 0 )
    ERECTL::operator|=((_DWORD *)(v6 + 1456), &v9);
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 36LL) & 0x80u) != 0 )
    ERECTL::operator|=((_DWORD *)(*(_QWORD *)v7 + 1488LL), &v9);
}
