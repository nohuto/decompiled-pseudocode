/*
 * XREFs of fsg_RunPreProgram @ 0x1C00A5424
 * Callers:
 *     fs__NewTransformation @ 0x1C00A26A4 (fs__NewTransformation.c)
 *     fs__Contour @ 0x1C00AE090 (fs__Contour.c)
 * Callees:
 *     itrp_ExecutePrePgm @ 0x1C00A5C38 (itrp_ExecutePrePgm.c)
 *     scl_ZeroOutlineData @ 0x1C00A5CE4 (scl_ZeroOutlineData.c)
 *     sfac_CopyCVT @ 0x1C00A5D90 (sfac_CopyCVT.c)
 *     scl_Scale @ 0x1C00B3094 (scl_Scale.c)
 */

__int64 __fastcall fsg_RunPreProgram(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v9; // edx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int16 v14; // ax
  __int16 v15; // dx

  *(_DWORD *)(a4 + 408) = 10000000;
  v9 = *(_DWORD *)(a3 + 52);
  *(_WORD *)(a4 + 76) = 3;
  if ( (*(_BYTE *)(a4 + 452) & 1) == 0 || (v10 = 1LL, (*(_BYTE *)(a4 + 120) & 4) == 0) )
    v10 = 0LL;
  *(_DWORD *)(a4 + 68) = 64;
  *(_QWORD *)(a4 + 48) = 68LL;
  *(_DWORD *)(a4 + 96) = 128;
  *(_DWORD *)(a4 + 72) = *((_DWORD *)&unk_1C02E871C + 8 * v10);
  *(_BYTE *)(a4 + 100) = 1;
  *(_DWORD *)(a4 + 92) = 196617;
  *(_QWORD *)(a4 + 60) = 0LL;
  v11 = (93194 - v9) >> 10;
  *(_DWORD *)(a4 + 36) = v11;
  *(_QWORD *)(a4 + 40) = (unsigned int)-v11;
  *(_DWORD *)(a4 + 32) = 0;
  v12 = *(_QWORD *)(a4 + 16);
  result = sfac_CopyCVT(a1, v12);
  if ( !(_DWORD)result )
  {
    v14 = *(_WORD *)(a4 + 360);
    if ( v14 )
      scl_Scale(a4 + 296, *(_DWORD *)(a4 + 192), v12, *(_QWORD *)(a4 + 16), v14);
    scl_ZeroOutlineData(a6, *(unsigned __int16 *)(a2 + 16));
    v15 = *(_WORD *)(a2 + 16) - 1;
    **(_WORD **)(a6 + 56) = 0;
    **(_WORD **)(a6 + 64) = v15;
    *(_WORD *)(a6 + 80) = 1;
    return itrp_ExecutePrePgm(a6, *(_QWORD *)(a5 + 16), a4, a7);
  }
  return result;
}
