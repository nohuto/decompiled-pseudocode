/*
 * XREFs of MigrateRectMonitors @ 0x1C0202620
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FE80C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C0203C4C (xxxEvaluateDestRectForMonitorMigration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01C47C8 (ReduceArrangedRectangleByFrameMargin.c)
 *     TransformRectAroundPoint @ 0x1C01DCE14 (TransformRectAroundPoint.c)
 */

__int64 __fastcall MigrateRectMonitors(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        char a8)
{
  __m128i v8; // xmm2
  int v9; // edx
  unsigned int v10; // ebx
  __int64 v13; // r8
  int v15; // edx
  __int64 v16; // rax
  _DWORD *v17; // r15
  __int64 v18; // rax
  INT v19; // r10d
  INT v20; // r11d
  __m128i v21; // xmm0
  INT v22; // r9d
  int v23; // eax
  INT v24; // r14d
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __m128i *v32; // rsi
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  INT v36; // edx
  INT v37; // ecx
  char v38; // r12
  int v39; // r8d
  INT v40; // eax
  INT v41; // r15d
  INT v42; // eax
  int v43; // r14d
  INT v44; // edx
  INT v45; // r8d
  INT v46; // eax
  INT v47; // ecx
  int v48; // edx
  __int32 v49; // ecx
  int v50; // r10d
  __int32 v51; // r11d
  int v52; // r14d
  int v53; // r9d
  int v54; // ecx
  INT v55; // ecx
  int v56; // eax
  __int64 v57; // rax
  INT v58; // r9d
  _DWORD *v59; // rcx
  int v60; // edx
  int v61; // r8d
  unsigned int v62; // r9d
  int v63; // ecx
  INT v64; // eax
  INT b; // [rsp+30h] [rbp-61h]
  INT v67; // [rsp+34h] [rbp-5Dh]
  INT v68; // [rsp+34h] [rbp-5Dh]
  int v69; // [rsp+38h] [rbp-59h]
  INT c; // [rsp+3Ch] [rbp-55h]
  int v71; // [rsp+44h] [rbp-4Dh]
  INT v72; // [rsp+48h] [rbp-49h]
  INT v73; // [rsp+48h] [rbp-49h]
  INT v74; // [rsp+58h] [rbp-39h]
  __m128i v76; // [rsp+78h] [rbp-19h] BYREF

  v8 = *a2;
  v9 = *(_DWORD *)(a1 + 352);
  v10 = 0;
  v13 = a5;
  v76 = v8;
  v15 = v9 & 0xF;
  if ( !v15
    && (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v16 + 8) + 244LL) & 1) != 0 )
  {
    v17 = (_DWORD *)(a3 + 92);
  }
  else if ( v15 != 1
         || (v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
         || (v17 = (_DWORD *)(a3 + 108), (*(_DWORD *)(*(_QWORD *)(v18 + 8) + 244LL) & 1) == 0) )
  {
    v17 = (_DWORD *)(a3 + 76);
  }
  if ( (*(_BYTE *)(a1 + 289) & 3) != 0 )
  {
    ReduceArrangedRectangleByFrameMargin(a1, v17, v76.m128i_i32);
    v8 = v76;
    v13 = a5;
  }
  v19 = v17[2] - *v17;
  v20 = v17[3] - v17[1];
  v21 = _mm_srli_si128(v8, 8);
  v22 = _mm_cvtsi128_si32(v21) - v8.m128i_i32[0];
  v23 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v67 = v22;
  v71 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
  v24 = v71 - v23;
  v69 = v23;
  v74 = v19;
  c = v20;
  if ( a6 )
  {
    v25 = *(_DWORD *)(a1 + 352) & 0xF;
    if ( !v25
      && (v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v26 + 8) + 244LL) & 1) != 0 )
    {
      v27 = v13 + 92;
    }
    else if ( v25 == 1
           && (v28 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(*(_QWORD *)(v28 + 8) + 244LL) & 1) != 0 )
    {
      v27 = v13 + 108;
    }
    else
    {
      v27 = v13 + 76;
    }
    if ( !v25
      && (v29 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v29 + 8) + 244LL) & 1) != 0 )
    {
      v30 = a6 + 92;
    }
    else if ( v25 != 1
           || (v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
           || (v30 = a6 + 108, (*(_DWORD *)(*(_QWORD *)(v31 + 8) + 244LL) & 1) == 0) )
    {
      v30 = a6 + 76;
    }
    v32 = &v76;
    v76.m128i_i64[0] = *(_QWORD *)v27;
    v76.m128i_i32[2] = *(_DWORD *)(v27 + 8);
    v76.m128i_i32[3] = *(_DWORD *)(v30 + 12);
  }
  else
  {
    v33 = *(_DWORD *)(a1 + 352) & 0xF;
    if ( !v33
      && (v34 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v34 + 8) + 244LL) & 1) != 0 )
    {
      v32 = (__m128i *)(v13 + 92);
    }
    else if ( v33 != 1
           || (v35 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
           || (v32 = (__m128i *)(v13 + 108), (*(_DWORD *)(*(_QWORD *)(v35 + 8) + 244LL) & 1) == 0) )
    {
      v32 = (__m128i *)(v13 + 76);
    }
  }
  v36 = v32->m128i_i32[2] - v32->m128i_i32[0];
  v37 = v32->m128i_i32[3] - v32->m128i_i32[1];
  v72 = v36;
  b = v37;
  if ( v36 < v22 )
  {
    v38 = a8;
    v58 = EngMulDiv(v22, v36, v19);
    v37 = b;
    v20 = c;
    v67 = v58;
    if ( (a8 & 0x20) != 0 )
    {
      if ( v58 <= a7[22] )
        v58 = a7[22];
      v67 = v58;
    }
LABEL_73:
    if ( (v38 & 1) != 0 )
    {
      v24 = v37;
    }
    else if ( v37 < v24 )
    {
      v64 = EngMulDiv(v24, v37, v20);
      v24 = v64;
      if ( (v38 & 0x20) != 0 )
      {
        v59 = a7;
        if ( v64 <= a7[23] )
          v24 = a7[23];
LABEL_76:
        if ( (v38 & 8) != 0 || v67 < v59[22] || v67 > v59[24] || v24 < v59[23] || v24 > v59[25] )
          return v10;
        v73 = EngMulDiv(v8.m128i_i32[0] - *v17, v72, v74);
        if ( (v38 & 1) == 0 )
          v10 = EngMulDiv(v69 - v17[1], b, c);
        v60 = v32->m128i_i32[0] + v73;
        v61 = v60 + v67;
        *a4 = v60;
        v62 = v10 + v32->m128i_i32[1];
        a4[2] = v60 + v67;
        a4[1] = v62;
        a4[3] = v62 + v24;
        if ( (v38 & 4) != 0 )
        {
          v63 = v32->m128i_i32[0] - v60;
        }
        else
        {
          if ( (v38 & 2) == 0 )
          {
LABEL_93:
            v10 = 1;
            if ( (*(_DWORD *)(a1 + 352) & 0xF) == 2 && (v38 & 0x10) != 0 )
            {
              v76 = *(__m128i *)a4;
              TransformRectAroundPoint(&v76, *(_WORD *)(a3 + 154), 0LL, a4, *(_WORD *)(a5 + 154), v76.m128i_i64[0]);
            }
            return v10;
          }
          v63 = v32->m128i_i32[2] - v61;
        }
        a4[1] = v62;
        *a4 = v60 + v63;
        a4[2] = v61 + v63;
        a4[3] = v62 + v24;
        goto LABEL_93;
      }
    }
    v59 = a7;
    goto LABEL_76;
  }
  v38 = a8;
  v39 = a8 & 1;
  if ( (a8 & 1) == 0 && v37 < v24 )
    goto LABEL_73;
  *(__m128i *)a4 = v8;
  if ( v21.m128i_i32[0] <= v17[2] && ((a8 & 1) != 0 || v71 <= v17[3]) )
  {
    if ( v19 == v22 )
    {
      v68 = 0;
    }
    else
    {
      v40 = EngMulDiv(v8.m128i_i32[0] - *v17, v36 - v22, v19 - v22);
      v37 = b;
      v39 = a8 & 1;
      v20 = c;
      v68 = v40;
    }
    if ( v39 || v20 == v24 )
    {
      v41 = b;
      v42 = 0;
      v43 = v69;
      goto LABEL_55;
    }
    v44 = v37 - v24;
    v45 = v20 - v24;
    v43 = v69;
    v42 = EngMulDiv(v69 - v17[1], v44, v45);
    v41 = b;
  }
  else
  {
    v46 = EngMulDiv(v8.m128i_i32[0] - *v17, v36, v19);
    v39 = a8 & 1;
    v43 = v69;
    v68 = v46;
    if ( (a8 & 1) != 0 )
    {
      v41 = b;
      v42 = 0;
      goto LABEL_55;
    }
    v47 = v69 - v17[1];
    v41 = b;
    v42 = EngMulDiv(v47, b, c);
  }
  v39 = a8 & 1;
LABEL_55:
  v48 = v42 + v32->m128i_i32[1] - v43;
  v49 = v68 + v32->m128i_i32[0] - v8.m128i_i32[0];
  v50 = v49 + *a4;
  v51 = v49 + a4[2];
  v52 = v48 + a4[3];
  v53 = v48 + a4[1];
  *a4 = v50;
  a4[2] = v51;
  a4[3] = v52;
  a4[1] = v53;
  if ( (a8 & 4) != 0 )
  {
    v54 = v32->m128i_i32[0] - v50;
  }
  else
  {
    if ( (a8 & 2) == 0 )
      goto LABEL_60;
    v54 = v32->m128i_i32[2] - v51;
  }
  a4[1] = v53;
  *a4 = v50 + v54;
  a4[2] = v51 + v54;
  a4[3] = v52;
LABEL_60:
  if ( v39 )
  {
    if ( (a8 & 8) != 0 || (v55 = a7[25], v56 = v55 + v53, v41 < v55) )
      v56 = v32->m128i_i32[3];
    a4[3] = v56;
  }
  v57 = *(_QWORD *)a4 - v8.m128i_i64[0];
  if ( *(_QWORD *)a4 == v8.m128i_i64[0] )
    v57 = *((_QWORD *)a4 + 1) - v21.m128i_i64[0];
  if ( v57 )
    goto LABEL_93;
  return v10;
}
