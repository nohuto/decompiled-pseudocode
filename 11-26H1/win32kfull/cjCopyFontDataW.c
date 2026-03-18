/*
 * XREFs of cjCopyFontDataW @ 0x1401003B4
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x140100054 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x140100D48 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAUPARAMETERS@EFSTATE@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x140100E0C (-bIFIMetricsToTextMetricW2@@YAHAEAUPARAMETERS@EFSTATE@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOAT.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     InitializeScripts @ 0x1403FA504 (InitializeScripts.c)
 */

__int64 __fastcall cjCopyFontDataW(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        wchar_t *Src,
        int a6,
        int a7,
        unsigned int a8)
{
  __int64 v11; // rdi
  int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  bool v15; // zf
  int v16; // eax
  int v17; // esi
  int v18; // r13d
  float v19; // xmm6_4
  char v20; // al
  int v21; // eax
  char v22; // cl
  __int64 v23; // rcx
  __m128i v24; // xmm0
  int v25; // r8d
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  int v31; // r9d
  unsigned int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  unsigned int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r12
  int v41; // eax
  __int64 v42; // r14
  __int64 v43; // rax
  int v44; // eax
  _DWORD *v45; // rcx
  unsigned int v46; // r12d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  _WORD *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rax
  _DWORD *v56; // rcx
  _WORD **v57; // rdx
  _WORD *v58; // rdx
  __int64 v59; // rcx
  _WORD *v60; // rax
  const wchar_t *v61; // r8
  int *v62; // rcx
  int v63; // eax
  __int64 v65; // rcx
  __m128i v66; // xmm0
  int v67; // r8d
  unsigned int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  BOOL v72; // ecx
  __m128i v73; // xmm0
  __int64 v74; // rcx
  int v75; // r8d
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rax
  __m128i v79; // xmm0
  float v80; // xmm1_4
  int v81; // eax
  unsigned int *v82; // rdx
  int v83; // eax
  unsigned int v84; // edx
  int v85; // eax
  int v86; // r13d
  float v87; // [rsp+48h] [rbp-59h] BYREF
  float v88; // [rsp+50h] [rbp-51h] BYREF
  float v89; // [rsp+54h] [rbp-4Dh]
  float v90; // [rsp+58h] [rbp-49h] BYREF
  float v91; // [rsp+5Ch] [rbp-45h]
  int v92; // [rsp+60h] [rbp-41h]
  int v93; // [rsp+64h] [rbp-3Dh]
  char v94[8]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v95; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v96; // [rsp+78h] [rbp-29h]
  __int64 v97; // [rsp+80h] [rbp-21h] BYREF
  __int64 v98; // [rsp+88h] [rbp-19h]

  v11 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v12 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 1;
  v96 = v12;
  v13 = *(__int16 *)(v11 + 56);
  v14 = *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62);
  v15 = *(_WORD *)(v11 + 56) == 0;
  v93 = *(_DWORD *)(v11 + 132);
  v92 = *(_DWORD *)(v11 + 128);
  if ( v14 == 0 || v15 )
    return 0LL;
  if ( v12 && (*(_DWORD *)(v11 + 48) & 0x3000010) == 0 )
  {
    v93 = *(_DWORD *)(a1 + 36);
    v92 = *(_DWORD *)(a1 + 40);
  }
  v16 = *(_DWORD *)(v11 + 48);
  v17 = 2;
  v18 = 4;
  if ( (v16 & 0x3000010) != 0 )
  {
    if ( (v16 & 1) != 0 || (v16 & 2) == 0 && (v16 & 4) == 0 && (v16 & 8) != 0 )
    {
      v93 = *(_DWORD *)(a1 + 40);
      v92 = *(_DWORD *)(a1 + 36);
    }
    if ( v12 )
    {
      v85 = *(_DWORD *)(a1 + 44);
      if ( v85 >= 0 )
      {
        v79 = _mm_cvtsi32_si128(v14);
      }
      else
      {
        v85 = -v85;
        v79 = _mm_cvtsi32_si128(v13);
      }
      v80 = (float)v85;
    }
    else
    {
      v79 = _mm_cvtsi32_si128(v13);
      v80 = (float)*(int *)(a1 + 40) * 0.33333334;
    }
    v19 = v80 / _mm_cvtepi32_ps(v79).m128_f32[0];
  }
  else
  {
    v19 = *(float *)&a8;
  }
  *(_DWORD *)(a2 + 12) = v14;
  *(_DWORD *)(a2 + 16) = *(__int16 *)(v11 + 76);
  *(_DWORD *)(a2 + 28) = *(unsigned __int16 *)(v11 + 46);
  v20 = *(_BYTE *)(v11 + 52) & 1;
  v97 = v11;
  *(_BYTE *)(a2 + 32) = -(v20 != 0);
  *(_BYTE *)(a2 + 33) = *(_BYTE *)(v11 + 52) & 2;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(v11 + 52) & 0x10;
  *(_BYTE *)(a2 + 35) = *(_BYTE *)(v11 + 44);
  *(_DWORD *)(a2 + 20) = IFIOBJ::lfOrientation((IFIOBJ *)&v97);
  *(_DWORD *)(a2 + 24) = IFIOBJ::lfOrientation((IFIOBJ *)&v97);
  *(_BYTE *)(a2 + 39) = *(_BYTE *)(v11 + 45);
  v21 = *(_DWORD *)(v11 + 48);
  if ( (v21 & 1) != 0 )
  {
    v22 = 3;
  }
  else if ( (v21 & 2) != 0 )
  {
    v22 = 1;
  }
  else
  {
    v22 = 3;
    if ( (v21 & 4) == 0 )
      v22 = (v21 & 8) != 0 ? 3 : 0;
  }
  *(_BYTE *)(a2 + 36) = v22;
  *(_WORD *)(a2 + 37) = 258;
  wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, (const wchar_t *)(v11 + *(int *)(v11 + 8)), 0x1FuLL);
  *(_WORD *)(a2 + 102) = 0;
  wcsncpy_s((wchar_t *)(a2 + 104), 0x40uLL, (const wchar_t *)(v11 + *(int *)(v11 + 16)), 0x3FuLL);
  *(_WORD *)(a2 + 230) = 0;
  wcsncpy_s((wchar_t *)(a2 + 232), 0x20uLL, (const wchar_t *)(v11 + *(int *)(v11 + 12)), 0x1FuLL);
  *(_WORD *)(a2 + 294) = 0;
  if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
  {
    LODWORD(v23) = 0;
    v24 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 76));
    *(float *)v24.m128i_i32 = *(float *)v24.m128i_i32 * v19;
    v25 = _mm_cvtsi128_si32(v24);
    v26 = (unsigned __int8)(v25 >> 23);
    if ( v26 <= 0x9E )
    {
      v27 = v25 & 0x7FFFFFLL | 0x800000;
      v28 = v26 < 0x76 ? v27 >> (118 - (unsigned __int8)v26) : v27 << ((unsigned __int8)v26 - 118);
      v23 = (v28 + 0x80000000LL) >> 32;
      if ( v25 < 0 )
        LODWORD(v23) = -(int)v23;
    }
    *(_DWORD *)(a2 + 16) = v23;
    LODWORD(v29) = 0;
    v30 = (__m128i)COERCE_UNSIGNED_INT((float)(*(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62)));
    *(float *)v30.m128i_i32 = *(float *)v30.m128i_i32 * v19;
    v31 = _mm_cvtsi128_si32(v30);
    v32 = (unsigned __int8)(v31 >> 23);
    if ( v32 <= 0x9E )
    {
      v33 = v31 & 0x7FFFFFLL | 0x800000;
      v34 = v32 < 0x76 ? v33 >> (118 - (unsigned __int8)v32) : v33 << ((unsigned __int8)v32 - 118);
      v29 = (v34 + 0x80000000LL) >> 32;
      if ( v31 < 0 )
        LODWORD(v29) = -(int)v29;
    }
    *(_DWORD *)(a2 + 12) = v29;
  }
  v95 = a1;
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
  {
    v98 = *(_QWORD *)(v11 + 120);
    v88 = (float)(v98 == 0);
    v89 = (float)SHIDWORD(v98);
    EFLOAT::eqLength(&a8, v94, &v88);
    v90 = v88 / *(float *)&a8;
    v91 = v89 / *(float *)&a8;
    if ( (*(_DWORD *)(v95 + 32) & 2) == 0
      && !EXFORMOBJ::bXform((EXFORMOBJ *)&v95, (const struct VECTORFL *)&v90, (struct VECTORFL *)&v90, 1uLL) )
    {
      return 0LL;
    }
    EFLOAT::eqLength(&a8, v94, &v90);
    LODWORD(v65) = 0;
    v66 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 16));
    *(float *)v66.m128i_i32 = *(float *)v66.m128i_i32 * *(float *)&a8;
    v67 = _mm_cvtsi128_si32(v66);
    v68 = (unsigned __int8)(v67 >> 23);
    if ( v68 <= 0x9E )
    {
      v69 = v67 & 0x7FFFFF | 0x800000LL;
      v70 = v68 < 0x76 ? v69 >> (118 - (unsigned __int8)v68) : v69 << ((unsigned __int8)v68 - 118);
      v65 = (v70 + 0x80000000LL) >> 32;
      if ( v67 < 0 )
        LODWORD(v65) = -(int)v65;
    }
    *(_DWORD *)(a2 + 16) = v65;
    v71 = *(_QWORD *)(v11 + 120);
    v98 = v71;
    v72 = v71;
    if ( !(_DWORD)v71 )
      v72 = HIDWORD(v71) == 0;
    v91 = (float)v72;
    v90 = (float)-HIDWORD(v71);
    EFLOAT::eqLength(&v87, v94, &v90);
    v88 = v90 / v87;
    v89 = v91 / v87;
    if ( (*(_DWORD *)(v95 + 32) & 2) == 0
      && !EXFORMOBJ::bXform((EXFORMOBJ *)&v95, (const struct VECTORFL *)&v88, (struct VECTORFL *)&v88, 1uLL) )
    {
      return 0LL;
    }
    EFLOAT::eqLength(&v87, v94, &v88);
    v73 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 12));
    LODWORD(v74) = 0;
    *(float *)v73.m128i_i32 = *(float *)v73.m128i_i32 * v87;
    v75 = _mm_cvtsi128_si32(v73);
    v76 = (unsigned __int8)(v75 >> 23);
    if ( v76 <= 0x9E )
    {
      v77 = v75 & 0x7FFFFF | 0x800000LL;
      v78 = v76 < 0x76 ? v77 >> (118 - (unsigned __int8)v76) : v77 << ((unsigned __int8)v76 - 118);
      v74 = (v78 + 0x80000000LL) >> 32;
      if ( v75 < 0 )
        LODWORD(v74) = -(int)v74;
    }
    *(_DWORD *)(a2 + 12) = v74;
  }
  v35 = 368LL;
  v36 = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
  *(_DWORD *)a2 = v36;
  a8 = v36;
  v37 = *(_DWORD **)(*(_QWORD *)a3 + 32LL);
  v38 = v37[12];
  if ( (v38 & 0x4000) == 0 )
  {
    if ( (v38 & 0x4000001) == 0 )
      goto LABEL_25;
    if ( v37[1] <= 0xCu )
      goto LABEL_25;
    v39 = (unsigned int)v37[51];
    if ( !(_DWORD)v39 )
      goto LABEL_25;
    if ( !*(_DWORD *)((char *)v37 + v39 + 4) )
      goto LABEL_25;
    v83 = *(_DWORD *)((char *)v37 + v39);
    if ( v83 != 134248052 && v83 != 134248035 )
      goto LABEL_25;
    goto LABEL_90;
  }
  v84 = v37[1];
  if ( v84 > 0xC )
  {
LABEL_90:
    v35 = (unsigned int)(4 * *(_DWORD *)((char *)v37 + v37[51] + 4) + 368);
    goto LABEL_25;
  }
  DbgPrint("Test it %d %Iu \n", v84, 12);
LABEL_25:
  *(_DWORD *)(a2 + 4) = v35;
  LODWORD(v40) = 0;
  v41 = *(_DWORD *)(v11 + 48);
  v42 = a2 + v35;
  if ( ((v41 & 0x4000) != 0
     || (v41 & 0x4000001) != 0
     && *(_DWORD *)(v11 + 4) > 0xCu
     && (v43 = *(unsigned int *)(v11 + 204), (_DWORD)v43)
     && *(_DWORD *)(v43 + v11 + 4)
     && ((v81 = *(_DWORD *)(v43 + v11), v81 == 134248052) || v81 == 134248035))
    && *(_DWORD *)(v11 + 4) > 0xCu )
  {
    v82 = (unsigned int *)(v11 + *(int *)(v11 + 204));
    v40 = v82[1];
    if ( (unsigned int)v40 > 0x10 )
      v40 = 16LL;
    memmove((void *)(a2 + 360), v82, 4 * v40 + 8);
    v44 = v40;
  }
  else
  {
    v44 = 0;
    *(_DWORD *)(a2 + 360) = 134248036;
  }
  *(_DWORD *)(a2 + 364) = v44;
  v45 = (_DWORD *)(v42 + 108);
  if ( (*(_DWORD *)(v11 + 48) & 0x4000) != 0 && *(_DWORD *)(v11 + 4) > 0x10u )
  {
    memmove(v45, (const void *)(v11 + *(int *)(v11 + 208)), 40LL * (unsigned int)v40 + 8);
  }
  else
  {
    *v45 = 134245473;
    *(_DWORD *)(v42 + 112) = 0;
  }
  v46 = v96;
  if ( !(unsigned int)bIFIMetricsToTextMetricW2(a1, v42, a3, v96) )
    return 0LL;
  if ( a7 )
  {
    *(_BYTE *)(a2 + 35) = a6;
    *(_BYTE *)(v42 + 64) = a6;
    v50 = (_WORD *)(a2 + 296);
    if ( (unsigned int)InitializeScripts(v48, v47, v49, 0LL) )
    {
      v54 = *(_QWORD *)(W32GetSessionState(v52, v51, v53) + 96);
      v55 = 0LL;
      v56 = (_DWORD *)(v54 + 19776);
      while ( *v56 != a6 + 1000 )
      {
        v55 = (unsigned int)(v55 + 1);
        v56 += 4;
        if ( (unsigned int)v55 >= 0x13 )
        {
          v57 = (_WORD **)(v54 + 20072);
          goto LABEL_40;
        }
      }
      v57 = (_WORD **)(16 * v55 + v54 + 19784);
LABEL_40:
      v58 = *v57;
      v59 = 32LL;
      do
      {
        if ( v59 == -2147483614 )
          break;
        if ( !*v58 )
          break;
        *v50++ = *v58++;
        --v59;
      }
      while ( v59 );
      v60 = v50 - 1;
      if ( v59 )
        v60 = v50;
      *v60 = 0;
    }
    v18 = 4;
  }
  else
  {
    *(_WORD *)(a2 + 296) = 0;
  }
  v61 = Src;
  if ( !Src )
  {
    if ( a4 != 5 )
      goto LABEL_50;
    v61 = (const wchar_t *)(a2 + 104);
  }
  wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v61, 0x1FuLL);
  *(_WORD *)(a2 + 102) = 0;
LABEL_50:
  v62 = (int *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  v63 = *(_DWORD *)(v11 + 48);
  if ( (v63 & 1) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 50) && !*(_BYTE *)(a1 + 51) && *(_BYTE *)(a1 + 52) )
      v18 = 6;
    *v62 = v18;
  }
  else if ( (v63 & 2) != 0 )
  {
    *v62 = 1;
    v18 = 1;
  }
  else
  {
    v18 = 0;
    if ( v63 < 0 )
    {
      *v62 = 2;
      v18 = 2;
    }
  }
  if ( v46 )
  {
    v86 = v18 | 2;
    if ( (*(_DWORD *)(v11 + 48) & 0x3000010) == 0 )
      v17 = v86;
    *v62 = v17;
    if ( *(_BYTE *)(a1 + 48) && !*(_BYTE *)(a1 + 49) && (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
      *(_DWORD *)(a2 + 8) = v17 | 0x80000000;
  }
  return a8;
}
