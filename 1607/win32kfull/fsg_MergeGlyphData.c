/*
 * XREFs of fsg_MergeGlyphData @ 0x1C00C52D0
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     itrp_SetSameTransformFlag @ 0x1C001E60C (itrp_SetSameTransformFlag.c)
 *     scl_UpdateParentElement @ 0x1C00C5560 (scl_UpdateParentElement.c)
 *     scl_ShiftCurrentCharPoints @ 0x1C00C5610 (scl_ShiftCurrentCharPoints.c)
 *     scl_CalcComponentOffset @ 0x1C00C56D4 (scl_CalcComponentOffset.c)
 *     mth_IntelMul @ 0x1C00C7178 (mth_IntelMul.c)
 *     scl_ScaleFixedCurrentCharPoints @ 0x1C014CE7C (scl_ScaleFixedCurrentCharPoints.c)
 *     scl_ScaleFixedCurrentPhantomPoints @ 0x1C014CF20 (scl_ScaleFixedCurrentPhantomPoints.c)
 *     scl_InitializeChildScaling @ 0x1C0152AA0 (scl_InitializeChildScaling.c)
 */

__int64 __fastcall fsg_MergeGlyphData(_BYTE *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int128 *v4; // r14
  int v5; // eax
  __int64 v7; // rdi
  __int64 v9; // r12
  int v10; // r15d
  __int64 v11; // rax
  __int128 v12; // xmm0
  int v13; // r9d
  __int128 v14; // xmm1
  int v15; // r8d
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int16 v19; // cx
  __int16 v20; // ax
  __int64 result; // rax
  __int64 v22; // rdx
  unsigned __int16 v23; // r8
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // eax
  __int16 v27; // ax
  __int64 v28; // r9
  __int64 v29; // r8
  int v30; // [rsp+20h] [rbp-60h]
  int v31; // [rsp+28h] [rbp-58h]
  __int128 v32; // [rsp+50h] [rbp-30h] BYREF
  __int128 v33; // [rsp+60h] [rbp-20h]
  int v34; // [rsp+70h] [rbp-10h]
  unsigned int v35; // [rsp+C8h] [rbp+48h] BYREF
  unsigned __int16 v36; // [rsp+D0h] [rbp+50h]
  unsigned int v37; // [rsp+D8h] [rbp+58h] BYREF

  v36 = a3;
  v3 = *(_QWORD *)(a2 + 24);
  v4 = (__int128 *)(a2 + 96);
  v5 = *(_DWORD *)(a2 + 96);
  v7 = *(_QWORD *)(a2 + 176);
  v9 = *(_QWORD *)(v3 + 176);
  if ( v5 != *(_DWORD *)(a2 + 112) || *(_DWORD *)(a2 + 100) || *(_DWORD *)(a2 + 108) || v5 != 0x10000 )
    mth_IntelMul(
      (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1)) + 9),
      *(_QWORD *)v7,
      *(_QWORD *)(v7 + 8),
      a2 + 96,
      0x10000,
      0x10000);
  if ( !*(_DWORD *)(a2 + 220) && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 220LL) )
  {
    itrp_SetSameTransformFlag(a1, 1);
    scl_ScaleFixedCurrentCharPoints(v7, a1);
    scl_ScaleFixedCurrentPhantomPoints(v7, a1);
    *(_DWORD *)(a2 + 220) = 1;
  }
  if ( *(_DWORD *)(v3 + 188) || *(_DWORD *)(v3 + 196) )
  {
    if ( *(_DWORD *)(v3 + 184) || (v10 = 1, *(_DWORD *)(v3 + 200)) )
      v10 = 2;
  }
  else
  {
    v10 = 0;
  }
  if ( *(_DWORD *)(a2 + 80) == 1 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    if ( !*(_DWORD *)(v11 + 220) )
    {
      v24 = *(_OWORD *)(v11 + 184);
      v25 = *(_OWORD *)(v11 + 200);
      v26 = *(_DWORD *)(v11 + 216);
      v32 = v24;
      v33 = v25;
      v34 = v26;
      scl_InitializeChildScaling(a1, &v32, v36);
    }
    v12 = *v4;
    v13 = *(_DWORD *)(a2 + 84);
    v14 = v4[1];
    v15 = *(unsigned __int16 *)(a2 + 90);
    v16 = *(unsigned __int16 *)(a2 + 88);
    v34 = *((_DWORD *)v4 + 8);
    v31 = *(_DWORD *)(a2 + 140);
    v30 = *(_DWORD *)(a2 + 220);
    v32 = v12;
    v33 = v14;
    scl_CalcComponentOffset((_DWORD)a1, v16, v15, v13, v30, v31, (__int64)&v32, v10, (__int64)&v37, (__int64)&v35);
    v17 = v35;
    v18 = v37;
  }
  else
  {
    v27 = *(_WORD *)(v9 + 80);
    if ( !v27 )
      return 5121LL;
    v28 = *(unsigned __int16 *)(a2 + 92);
    if ( (int)v28 > *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v27 - 1)) + 8 )
      return 5121LL;
    v29 = *(unsigned __int16 *)(a2 + 94);
    if ( (int)v29 > *(__int16 *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1)) + 8 )
      return 5121LL;
    v18 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v9 + 4 * v28) - *(_DWORD *)(*(_QWORD *)v7 + 4 * v29));
    v17 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v9 + 8) + 4LL * *(unsigned __int16 *)(a2 + 92))
                       - *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v29));
  }
  scl_ShiftCurrentCharPoints(v7, v18, v17);
  if ( *(_DWORD *)(a2 + 136) )
  {
    *(_DWORD *)(v3 + 132) = 1;
    v22 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1)) + 1);
    v23 = *(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1)) + 2;
    *(_DWORD *)(v3 + 144) = *(_DWORD *)(*(_QWORD *)v7 + 4 * v22);
    *(_DWORD *)(v3 + 148) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v22);
    *(_DWORD *)(v3 + 152) = *(_DWORD *)(*(_QWORD *)v7 + 4LL * v23);
    *(_DWORD *)(v3 + 156) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4LL * v23);
  }
  v19 = *(_WORD *)(v3 + 160);
  v20 = *(_WORD *)(a2 + 160);
  if ( v19 != -1 )
    v20 = (unsigned __int8)v19 & (v20 & 3 | 4);
  *(_WORD *)(v3 + 160) = v20;
  result = scl_UpdateParentElement(v7, v9);
  *(_WORD *)(v7 + 80) = 0;
  return result;
}
