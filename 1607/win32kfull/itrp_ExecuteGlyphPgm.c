/*
 * XREFs of itrp_ExecuteGlyphPgm @ 0x1C001E630
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C001E1A8 (fsg_CompositeInnerGridFit.c)
 * Callees:
 *     itrp_Execute @ 0x1C00CAFA0 (itrp_Execute.c)
 */

__int64 __fastcall itrp_ExecuteGlyphPgm(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _WORD *a7,
        _WORD *a8,
        _DWORD *a9)
{
  int v9; // edi
  unsigned int v10; // r10d
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // r8d

  v9 = 0;
  v10 = 0;
  v11 = *(_OWORD *)(a5 + 48);
  *(_WORD *)(a5 + 332) = 512;
  v12 = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a5 + 104) = v11;
  v13 = *(_OWORD *)(a5 + 80);
  *(_OWORD *)(a5 + 120) = v12;
  *(_QWORD *)&v12 = *(_QWORD *)(a5 + 96);
  *(_OWORD *)(a5 + 136) = v13;
  *(_QWORD *)(a5 + 152) = v12;
  if ( (*(_DWORD *)(a5 + 120) & 1) == 0 )
    v10 = itrp_Execute(a1, a2, a3, a4, a5, a6);
  v14 = *(_DWORD *)(a5 + 116);
  LOBYTE(v9) = v14 != *(_DWORD *)(a5 + 60);
  *a9 = v9;
  *a8 = v14;
  *a7 = HIWORD(v14);
  return v10;
}
