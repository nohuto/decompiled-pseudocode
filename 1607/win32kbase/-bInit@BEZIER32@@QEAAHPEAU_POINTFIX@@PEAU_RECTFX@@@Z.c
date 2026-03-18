/*
 * XREFs of ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C00474E0
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C00469D8 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?lError@HFDBASIS32@@QEAAJXZ @ 0x1C0047764 (-lError@HFDBASIS32@@QEAAJXZ.c)
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0047794 (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YAHPEAU_RECTFX@@0@Z @ 0x1C00C1DEC (-bIntersect@@YAHPEAU_RECTFX@@0@Z.c)
 */

__int64 __fastcall BEZIER32::bInit(BEZIER32 *this, struct _POINTFIX *a2, struct _RECTFX *a3)
{
  struct _RECTFX *v3; // rsi
  int v5; // ebx
  struct _RECTFX *v6; // r11
  __m128i *v7; // r10
  int v8; // edx
  unsigned __int32 v9; // r9d
  int v10; // ebp
  unsigned __int32 v11; // r14d
  int v12; // eax
  __m128i v13; // xmm0
  int v14; // r8d
  int v15; // r15d
  int v16; // r12d
  int v17; // r13d
  HFDBASIS32 *v18; // r10
  int v19; // eax
  HFDBASIS32 *v20; // r9
  int v21; // r11d
  int v22; // eax
  int v23; // r11d
  int v24; // eax
  char v25; // cl
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  __int64 result; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // edx

  v3 = (struct _RECTFX *)((char *)this + 36);
  *(_DWORD *)this = 1;
  v5 = 0;
  vBoundBox(a2, (struct _RECTFX *)((char *)this + 36));
  v8 = *(_OWORD *)v7 - v3->xLeft;
  v9 = _mm_srli_si128(*v7, 8).m128i_u32[0] - v3->xLeft;
  v10 = *(_OWORD *)&v7[1] - v3->xLeft;
  v11 = _mm_srli_si128(v7[1], 8).m128i_u32[0] - v3->xLeft;
  v12 = *((_DWORD *)this + 10);
  v13 = v7[1];
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 4)) - v12;
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 12)) - v12;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 4)) - v12;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 12)) - v12;
  if ( ((v8 | v9 | v10 | v11 | v14 | v17 | v16 | v15) & 0xFFFFC000) != 0 )
    return 0LL;
  v18 = (BEZIER32 *)((char *)this + 4);
  *((_DWORD *)this + 1) = v8 << 10;
  *((_DWORD *)this + 2) = (v11 - v8) << 10;
  *((_DWORD *)this + 3) = 6144 * (v11 + v9 - 2 * v10);
  *((_DWORD *)this + 4) = 6144 * (v10 + v8 - 2 * v9);
  *((_DWORD *)this + 5) = v14 << 10;
  *((_DWORD *)this + 6) = (v15 - v14) << 10;
  *((_DWORD *)this + 7) = 6144 * (v15 + v17 - 2 * v16);
  *((_DWORD *)this + 8) = 6144 * (v16 + v14 - 2 * v17);
  if ( !v6 || (unsigned int)bIntersect(v3, v6) )
  {
    while ( 1 )
    {
      v19 = HFDBASIS32::lError(v18);
      if ( v19 <= v21 )
      {
        v22 = HFDBASIS32::lError(v20);
        if ( v22 <= v23 )
          break;
      }
      v33 = *((_DWORD *)v18 + 1);
      v5 += 2;
      v34 = (*((_DWORD *)v18 + 2) + *((_DWORD *)v18 + 3)) >> 1;
      *((_DWORD *)v18 + 2) = v34;
      *((_DWORD *)v18 + 1) = (v33 - (v34 >> v5)) >> 1;
      v35 = *((_DWORD *)v20 + 1);
      v36 = (*((_DWORD *)v20 + 2) + *((_DWORD *)v20 + 3)) >> 1;
      *((_DWORD *)v20 + 2) = v36;
      *((_DWORD *)v20 + 1) = (v35 - (v36 >> v5)) >> 1;
      *(_DWORD *)this *= 2;
    }
  }
  *(_DWORD *)v18 *= 8;
  v24 = v5 - 3;
  *((_DWORD *)v18 + 1) *= 8;
  v25 = v5 - 3;
  if ( v5 - 3 >= 0 )
  {
    *((int *)v18 + 2) >>= v25;
    *((int *)v18 + 3) >>= v25;
  }
  else
  {
    *((_DWORD *)v18 + 2) <<= 3 - v5;
    *((_DWORD *)v18 + 3) <<= 3 - v5;
  }
  *(_DWORD *)v20 *= 8;
  *((_DWORD *)v20 + 1) *= 8;
  if ( v24 >= 0 )
  {
    *((int *)v20 + 2) >>= v24;
    *((int *)v20 + 3) >>= v24;
  }
  else
  {
    *((_DWORD *)v20 + 2) <<= 3 - v5;
    *((_DWORD *)v20 + 3) <<= 3 - v5;
  }
  v26 = *((_DWORD *)v18 + 2);
  v27 = *((_DWORD *)v18 + 1);
  *(_DWORD *)v18 += v27;
  *((_DWORD *)v18 + 1) = v26 + v27;
  v28 = v26 - *((_DWORD *)v18 + 3);
  *((_DWORD *)v18 + 3) = v26;
  *((_DWORD *)v18 + 2) = v26 + v28;
  result = 1LL;
  v30 = *((_DWORD *)v20 + 2);
  v31 = *((_DWORD *)v20 + 1);
  *(_DWORD *)v20 += v31;
  *((_DWORD *)v20 + 1) = v30 + v31;
  v32 = v30 - *((_DWORD *)v20 + 3);
  *((_DWORD *)v20 + 3) = v30;
  *((_DWORD *)v20 + 2) = v30 + v32;
  --*(_DWORD *)this;
  return result;
}
