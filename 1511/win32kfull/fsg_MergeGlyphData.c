/*
 * XREFs of fsg_MergeGlyphData @ 0x1C00AD7C8
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 * Callees:
 *     scl_UpdateParentElement @ 0x1C00ADA44 (scl_UpdateParentElement.c)
 *     scl_ShiftCurrentCharPoints @ 0x1C00ADAEC (scl_ShiftCurrentCharPoints.c)
 *     scl_CalcComponentOffset @ 0x1C00ADBAC (scl_CalcComponentOffset.c)
 *     mth_IntelMul @ 0x1C00ADF24 (mth_IntelMul.c)
 *     itrp_SetSameTransformFlag @ 0x1C00F2A6C (itrp_SetSameTransformFlag.c)
 *     scl_ScaleFixedCurrentCharPoints @ 0x1C014851C (scl_ScaleFixedCurrentCharPoints.c)
 *     scl_ScaleFixedCurrentPhantomPoints @ 0x1C01485A8 (scl_ScaleFixedCurrentPhantomPoints.c)
 *     scl_InitializeChildScaling @ 0x1C014D298 (scl_InitializeChildScaling.c)
 */

__int64 __fastcall fsg_MergeGlyphData(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int128 *v4; // r14
  int v5; // eax
  __int64 v7; // rdi
  __int64 v9; // r8
  __int64 v10; // r12
  int v11; // r15d
  __int64 v12; // rax
  __int128 v13; // xmm0
  int v14; // r9d
  __int128 v15; // xmm1
  int v16; // r8d
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int16 v20; // cx
  __int16 v21; // ax
  __int64 result; // rax
  __int64 v23; // rdx
  unsigned __int16 v24; // r8
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // eax
  __int16 v28; // ax
  __int64 v29; // r9
  __int64 v30; // r8
  int v31; // [rsp+20h] [rbp-60h]
  int v32; // [rsp+28h] [rbp-58h]
  __int128 v33; // [rsp+50h] [rbp-30h] BYREF
  __int128 v34; // [rsp+60h] [rbp-20h]
  int v35; // [rsp+70h] [rbp-10h]
  unsigned int v36; // [rsp+C8h] [rbp+48h] BYREF
  unsigned __int16 v37; // [rsp+D0h] [rbp+50h]
  unsigned int v38; // [rsp+D8h] [rbp+58h] BYREF

  v37 = a3;
  v3 = *(_QWORD *)(a2 + 24);
  v4 = (__int128 *)(a2 + 96);
  v5 = *(_DWORD *)(a2 + 96);
  v7 = *(_QWORD *)(a2 + 176);
  v9 = 0x10000LL;
  v10 = *(_QWORD *)(v3 + 176);
  if ( v5 != *(_DWORD *)(a2 + 112) || *(_DWORD *)(a2 + 100) || *(_DWORD *)(a2 + 108) || v5 != 0x10000 )
    mth_IntelMul(
      (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * *(__int16 *)(v7 + 80) - 2) + 9),
      *(_QWORD *)v7,
      *(_QWORD *)(v7 + 8),
      a2 + 96,
      0x10000,
      0x10000);
  if ( !*(_DWORD *)(a2 + 220) && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 220LL) )
  {
    itrp_SetSameTransformFlag(a1, 1LL, v9);
    scl_ScaleFixedCurrentCharPoints(v7, a1);
    scl_ScaleFixedCurrentPhantomPoints(v7, a1);
    *(_DWORD *)(a2 + 220) = 1;
  }
  if ( *(_DWORD *)(v3 + 188) || *(_DWORD *)(v3 + 196) )
  {
    if ( *(_DWORD *)(v3 + 184) || (v11 = 1, *(_DWORD *)(v3 + 200)) )
      v11 = 2;
  }
  else
  {
    v11 = 0;
  }
  if ( *(_DWORD *)(a2 + 80) == 1 )
  {
    v12 = *(_QWORD *)(a2 + 24);
    if ( !*(_DWORD *)(v12 + 220) )
    {
      v25 = *(_OWORD *)(v12 + 184);
      v26 = *(_OWORD *)(v12 + 200);
      v27 = *(_DWORD *)(v12 + 216);
      v33 = v25;
      v34 = v26;
      v35 = v27;
      scl_InitializeChildScaling(a1, &v33, v37);
    }
    v13 = *v4;
    v14 = *(_DWORD *)(a2 + 84);
    v15 = v4[1];
    v16 = *(unsigned __int16 *)(a2 + 90);
    v17 = *(unsigned __int16 *)(a2 + 88);
    v35 = *((_DWORD *)v4 + 8);
    v32 = *(_DWORD *)(a2 + 140);
    v31 = *(_DWORD *)(a2 + 220);
    v33 = v13;
    v34 = v15;
    scl_CalcComponentOffset(a1, v17, v16, v14, v31, v32, (__int64)&v33, v11, (__int64)&v38, (__int64)&v36);
    v18 = v36;
    v19 = v38;
  }
  else
  {
    v28 = *(_WORD *)(v10 + 80);
    if ( !v28 )
      return 5121LL;
    v29 = *(unsigned __int16 *)(a2 + 92);
    if ( (int)v29 > *(__int16 *)(*(_QWORD *)(v10 + 64) + 2LL * v28 - 2) + 8 )
      return 5121LL;
    v30 = *(unsigned __int16 *)(a2 + 94);
    if ( (int)v30 > *(__int16 *)(*(_QWORD *)(v7 + 64) + 2LL * *(__int16 *)(v7 + 80) - 2) + 8 )
      return 5121LL;
    v19 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v10 + 4 * v29) - *(_DWORD *)(*(_QWORD *)v7 + 4 * v30));
    v18 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 8) + 4LL * *(unsigned __int16 *)(a2 + 92))
                       - *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v30));
  }
  scl_ShiftCurrentCharPoints(v7, v19, v18);
  if ( *(_DWORD *)(a2 + 136) )
  {
    *(_DWORD *)(v3 + 132) = 1;
    v23 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * *(__int16 *)(v7 + 80) - 2) + 1);
    v24 = *(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * *(__int16 *)(v7 + 80) - 2) + 2;
    *(_DWORD *)(v3 + 144) = *(_DWORD *)(*(_QWORD *)v7 + 4 * v23);
    *(_DWORD *)(v3 + 148) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v23);
    *(_DWORD *)(v3 + 152) = *(_DWORD *)(*(_QWORD *)v7 + 4LL * v24);
    *(_DWORD *)(v3 + 156) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4LL * v24);
  }
  v20 = *(_WORD *)(v3 + 160);
  v21 = *(_WORD *)(a2 + 160);
  if ( v20 != -1 )
    v21 = (unsigned __int8)v20 & (v21 & 3 | 4);
  *(_WORD *)(v3 + 160) = v21;
  result = scl_UpdateParentElement(v7, v10);
  *(_WORD *)(v7 + 80) = 0;
  return result;
}
