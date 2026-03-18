/*
 * XREFs of BgpRasPrintGlyph @ 0x14015078C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140150300 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x140761D5C (BgpTxtDisplayString.c)
 * Callees:
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     RaspAntiAlias @ 0x140150AE0 (RaspAntiAlias.c)
 *     BgpFmRoundUp @ 0x140151818 (BgpFmRoundUp.c)
 *     RaspRectangleCreate @ 0x140151848 (RaspRectangleCreate.c)
 *     RaspRasterize @ 0x140152018 (RaspRasterize.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     RaspFreeMemory @ 0x140152734 (RaspFreeMemory.c)
 *     RaspGetCacheEntry @ 0x140152B2C (RaspGetCacheEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RaspAddCacheEntry @ 0x14075F2F0 (RaspAddCacheEntry.c)
 *     RaspDestroyCachedBitmap @ 0x14075F354 (RaspDestroyCachedBitmap.c)
 *     BgpGxCopyRectangle @ 0x1407621C8 (BgpGxCopyRectangle.c)
 */

__int64 __fastcall BgpRasPrintGlyph(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8,
        _QWORD *a9)
{
  int v9; // edi
  _QWORD *v10; // rsi
  char *Memory; // rbx
  unsigned __int64 v12; // r15
  __m128i *v13; // r14
  bool v14; // r12
  char v16; // al
  int v18; // r8d
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  unsigned __int16 v22; // r15
  __int64 v23; // rdx
  _DWORD *v24; // r8
  int v25; // ecx
  __int64 v26; // rcx
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // r9d
  int v31; // r10d
  int v32; // r13d
  int v33; // eax
  unsigned int v34; // r13d
  unsigned int v35; // r13d
  __int64 v36; // rdx
  __int128 v37; // xmm0
  __m128i v38; // xmm3
  __int128 v39; // xmm1
  bool v40; // zf
  __int64 v41; // xmm0_8
  int v42; // ecx
  unsigned __int64 v43; // xmm3_8
  int v45; // eax
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh]
  _DWORD *v48; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v49; // [rsp+60h] [rbp-A0h]
  char *v50; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+88h] [rbp-78h]
  __m128i *v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h]
  int *v57; // [rsp+A0h] [rbp-60h]
  _QWORD v58[3]; // [rsp+A8h] [rbp-58h] BYREF
  char v59; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v60; // [rsp+110h] [rbp+10h] BYREF
  __m128i v61; // [rsp+120h] [rbp+20h]
  __int128 v62; // [rsp+130h] [rbp+30h]
  __int128 v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+150h] [rbp+50h]
  char v65; // [rsp+1E8h] [rbp+E8h]

  v9 = 0;
  v10 = a9;
  Memory = 0LL;
  v46 = 0;
  v12 = 0LL;
  v57 = a7;
  v13 = 0LL;
  *a7 = 0;
  v14 = 0;
  v51 = a4;
  v65 = a6 & 1;
  v16 = 0;
  v49 = a3;
  v52 = a2;
  v56 = a1;
  v50 = 0LL;
  v53 = 0LL;
  v55 = 0LL;
  v47 = 0;
  if ( !a9 )
  {
    v10 = v58;
    memset(v58, 0, sizeof(v58));
  }
  if ( a3 >= 0x20u )
  {
    v18 = *(_DWORD *)(a2 + 16);
    v48 = *(_DWORD **)(a2 + 8);
    RaspGetCacheEntry((unsigned int)&RaspBitmapCache, a3, v18, v48[10], (__int64)v48, (__int64)&v50);
    Memory = v50;
    if ( v50 )
    {
      v24 = v48;
LABEL_14:
      v26 = *((__int16 *)v24 + 43);
      v27 = *((_DWORD *)Memory + 11);
      v48 = (_DWORD *)*((_QWORD *)Memory + 2);
      v28 = *(_QWORD *)(a2 + 8);
      v46 = *v48 / *((_DWORD *)Memory + 14);
      LODWORD(v50) = v27;
      v29 = *(unsigned int *)(a2 + 16) * v26 * *(unsigned int *)(v28 + 96);
      v32 = BgpFmRoundUp(
              (v29 << 6) / (72LL * *(unsigned __int16 *)(v28 + 120)),
              (v29 << 6) % (72LL * *(unsigned __int16 *)(v28 + 120)));
      v33 = *((_DWORD *)Memory + 12);
      v34 = a5 + v32;
      if ( v33 >= 0 && v33 > v34 )
      {
        v35 = 0;
        DbgPrintEx(0x65u, 0, "BGFX internal font error char %x!\n", *((unsigned __int16 *)Memory + 30));
        v30 = (int)v50;
        v31 = v46;
      }
      else
      {
        v35 = v34 - v33;
      }
      if ( *(_DWORD *)v56 < v31 + v35 || *(_DWORD *)(v56 + 4) < v30 + v51 )
      {
        v9 = -2147483643;
        goto LABEL_27;
      }
      if ( v65 )
      {
        v36 = v52;
        v13 = &v60;
        v37 = *(_OWORD *)(v56 + 32);
        v38 = *(__m128i *)(v56 + 16);
        v39 = *(_OWORD *)(v56 + 48);
        v40 = (*(_BYTE *)(v52 + 20) & 1) == 0;
        v60 = *(__m128i *)v56;
        v61 = v38;
        v62 = v37;
        v41 = *(_QWORD *)(v56 + 64);
        v42 = _mm_cvtsi128_si32(_mm_srli_si128(v60, 4));
        v43 = _mm_srli_si128(v38, 8).m128i_u64[0];
        v63 = v39;
        if ( v40 )
          v42 = v30;
        v64 = v41;
        v46 = v42;
        v60.m128i_i64[0] = __PAIR64__(v42, v31);
        v61.m128i_i64[1] = v35 * ((unsigned __int32)v60.m128i_i32[2] >> 3) * v42 + v43;
        goto LABEL_23;
      }
      v46 = v30;
      v53 = __PAIR64__(v31, v30);
      v54 = v30;
      v45 = RaspRectangleCreate(&v53, 32LL, &v55, v10);
      v13 = v55;
      v9 = v45;
      if ( v45 >= 0 )
      {
        v36 = v52;
LABEL_23:
        RaspAntiAlias((_DWORD)v48, (_DWORD)v13, *((_DWORD *)Memory + 13), *((_DWORD *)Memory + 14), v36);
        if ( !v65 )
        {
          v52 = 0LL;
          v48 = (_DWORD *)__PAIR64__(v35, v51);
          BgpGxCopyRectangle(v56, v13, &v48, &v52);
        }
        *v57 = v46;
        if ( v14 )
          RaspAddCacheEntry(&RaspBitmapCache, Memory);
LABEL_27:
        if ( v9 >= 0 )
          goto LABEL_28;
      }
LABEL_41:
      if ( !v14 )
      {
LABEL_29:
        v16 = v47;
        goto LABEL_30;
      }
      if ( Memory )
        RaspDestroyCachedBitmap(Memory);
LABEL_28:
      if ( v14 )
      {
LABEL_35:
        if ( v9 >= 0 || Memory )
          goto LABEL_33;
        goto LABEL_31;
      }
      goto LABEL_29;
    }
    v21 = v47;
    if ( (dword_140323CF0 & 4) != 0 )
      v21 = 1;
    v47 = v21;
    if ( (v21 & 1) == 0 && !*v10 )
      v14 = (*(_BYTE *)(a2 + 20) & 1) == 0;
    v22 = v49;
    v9 = RaspRasterize(a2, v49, v19, v20, v21, (__int64)&v53, (__int64)&v46, (__int64)&v50, (__int64)v10);
    if ( v9 >= 0 )
    {
      if ( !v14 )
      {
        Memory = &v59;
LABEL_13:
        v23 = v10[2];
        v24 = v48;
        v25 = v48[10];
        *((_DWORD *)Memory + 10) = *(_DWORD *)(a2 + 16);
        *((_DWORD *)Memory + 11) = v46;
        *((_DWORD *)Memory + 12) = (_DWORD)v50;
        *((_WORD *)Memory + 30) = v22;
        v12 = v53;
        *((_DWORD *)Memory + 13) = 4;
        *((_DWORD *)Memory + 14) = 4;
        *((_DWORD *)Memory + 9) = v25;
        *((_QWORD *)Memory + 3) = v24;
        *((_QWORD *)Memory + 2) = v12;
        *(_QWORD *)(Memory + 62) = v23;
        goto LABEL_14;
      }
      Memory = (char *)BgpFwAllocateMemory(70LL);
      if ( Memory )
        goto LABEL_13;
      v9 = -1073741801;
    }
    v12 = v53;
    goto LABEL_41;
  }
LABEL_30:
  if ( (v16 & 1) != 0 )
    goto LABEL_35;
LABEL_31:
  if ( v12 )
    RaspFreeMemory(v12, v10);
LABEL_33:
  if ( !v65 && v13 )
    RaspFreeMemory(v13, v10);
  v10[2] = 0LL;
  return (unsigned int)v9;
}
