/*
 * XREFs of MigrateRectMonitors @ 0x1C020AF84
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0045A88 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207048 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C020C370 (xxxEvaluateDestRectForMonitorMigration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01C3AA0 (ReduceArrangedRectangleByFrameMargin.c)
 *     TransformRectAroundPoint @ 0x1C01E61E8 (TransformRectAroundPoint.c)
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
  unsigned int v9; // edi
  int v10; // edx
  _DWORD *v13; // r15
  INT v14; // r10d
  INT v15; // r11d
  __m128i v16; // xmm0
  INT v17; // r9d
  int v18; // eax
  INT v19; // r14d
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i *v23; // rsi
  int v24; // edx
  INT v25; // edx
  INT v26; // ecx
  char v27; // r12
  int v28; // r8d
  INT v29; // eax
  INT v30; // r15d
  INT v31; // edx
  INT v32; // r14d
  INT v33; // eax
  INT v34; // eax
  INT v35; // ecx
  __int32 v36; // ecx
  int v37; // edx
  int v38; // r14d
  int v39; // r10d
  __int32 v40; // r11d
  int v41; // r9d
  int v42; // ecx
  INT v43; // ecx
  int v44; // eax
  __int64 v45; // rax
  INT v46; // r9d
  _DWORD *v47; // rcx
  int v48; // edx
  int v49; // r8d
  unsigned int v50; // r9d
  int v51; // ecx
  INT v52; // eax
  INT v54; // [rsp+30h] [rbp-61h]
  INT v55; // [rsp+30h] [rbp-61h]
  INT b; // [rsp+34h] [rbp-5Dh]
  INT c; // [rsp+38h] [rbp-59h]
  int v58; // [rsp+40h] [rbp-51h]
  int v59; // [rsp+44h] [rbp-4Dh]
  INT v60; // [rsp+48h] [rbp-49h]
  INT v61; // [rsp+48h] [rbp-49h]
  INT v62; // [rsp+58h] [rbp-39h]
  __m128i v64; // [rsp+78h] [rbp-19h] BYREF

  v8 = *a2;
  v9 = 0;
  v10 = *(_DWORD *)(a1 + 344);
  v64 = v8;
  if ( v10 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v10 != 1
      || (v13 = (_DWORD *)(a3 + 108),
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
    {
      v13 = (_DWORD *)(a3 + 76);
    }
  }
  else
  {
    v13 = (_DWORD *)(a3 + 92);
  }
  if ( (*(_BYTE *)(a1 + 289) & 3) != 0 )
  {
    ReduceArrangedRectangleByFrameMargin(a1, v13, v64.m128i_i32);
    v8 = v64;
  }
  v14 = v13[2] - *v13;
  v15 = v13[3] - v13[1];
  v16 = _mm_srli_si128(v8, 8);
  v17 = _mm_cvtsi128_si32(v16) - v8.m128i_i32[0];
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v54 = v17;
  v59 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
  v19 = v59 - v18;
  v58 = v18;
  v62 = v14;
  c = v15;
  if ( a6 )
  {
    v20 = *(_DWORD *)(a1 + 344);
    if ( v20 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v20 != 1
        || (v21 = a5 + 108, (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        v21 = a5 + 76;
      }
    }
    else
    {
      v21 = a5 + 92;
    }
    if ( v20 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v20 != 1
        || (v22 = a6 + 108, (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        v22 = a6 + 76;
      }
    }
    else
    {
      v22 = a6 + 92;
    }
    v23 = &v64;
    v64.m128i_i64[0] = *(_QWORD *)v21;
    v64.m128i_i32[2] = *(_DWORD *)(v21 + 8);
    v64.m128i_i32[3] = *(_DWORD *)(v22 + 12);
  }
  else
  {
    v24 = *(_DWORD *)(a1 + 344);
    if ( v24 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v24 != 1
        || (v23 = (__m128i *)(a5 + 108),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        v23 = (__m128i *)(a5 + 76);
      }
    }
    else
    {
      v23 = (__m128i *)(a5 + 92);
    }
  }
  v25 = v23->m128i_i32[2] - v23->m128i_i32[0];
  v26 = v23->m128i_i32[3] - v23->m128i_i32[1];
  v60 = v25;
  b = v26;
  if ( v25 < v17 )
  {
    v27 = a8;
    v46 = EngMulDiv(v17, v25, v14);
    v26 = b;
    v15 = c;
    v54 = v46;
    if ( (a8 & 0x20) != 0 )
    {
      if ( v46 <= a7[22] )
        v46 = a7[22];
      v54 = v46;
    }
LABEL_64:
    if ( (v27 & 1) != 0 )
    {
      v19 = v26;
    }
    else if ( v26 < v19 )
    {
      v52 = EngMulDiv(v19, v26, v15);
      v19 = v52;
      if ( (v27 & 0x20) != 0 )
      {
        v47 = a7;
        if ( v52 <= a7[23] )
          v19 = a7[23];
LABEL_67:
        if ( (v27 & 8) != 0 || v54 < v47[22] || v54 > v47[24] || v19 < v47[23] || v19 > v47[25] )
          return v9;
        v61 = EngMulDiv(v8.m128i_i32[0] - *v13, v60, v62);
        if ( (v27 & 1) == 0 )
          v9 = EngMulDiv(v58 - v13[1], b, c);
        v48 = v23->m128i_i32[0] + v61;
        v49 = v48 + v54;
        *a4 = v48;
        v50 = v9 + v23->m128i_i32[1];
        a4[2] = v48 + v54;
        a4[1] = v50;
        a4[3] = v50 + v19;
        if ( (v27 & 4) != 0 )
        {
          v51 = v23->m128i_i32[0] - v48;
        }
        else
        {
          if ( (v27 & 2) == 0 )
          {
LABEL_84:
            v9 = 1;
            if ( *(_DWORD *)(a1 + 344) == 2 && (v27 & 0x10) != 0 )
            {
              v64 = *(__m128i *)a4;
              TransformRectAroundPoint(&v64, *(_WORD *)(a3 + 152), 0LL, a4, *(_WORD *)(a5 + 152), v64.m128i_i64[0]);
            }
            return v9;
          }
          v51 = v23->m128i_i32[2] - v49;
        }
        a4[1] = v50;
        *a4 = v48 + v51;
        a4[2] = v49 + v51;
        a4[3] = v50 + v19;
        goto LABEL_84;
      }
    }
    v47 = a7;
    goto LABEL_67;
  }
  v27 = a8;
  v28 = a8 & 1;
  if ( (a8 & 1) == 0 && v26 < v19 )
    goto LABEL_64;
  *(__m128i *)a4 = v8;
  if ( v16.m128i_i32[0] <= v13[2] && ((a8 & 1) != 0 || v59 <= v13[3]) )
  {
    if ( v14 == v17 )
    {
      v55 = 0;
    }
    else
    {
      v29 = EngMulDiv(v8.m128i_i32[0] - *v13, v25 - v17, v14 - v17);
      v26 = b;
      v28 = a8 & 1;
      v15 = c;
      v55 = v29;
    }
    if ( v28 || v15 == v19 )
    {
      v30 = b;
      v31 = 0;
      v32 = v55;
      goto LABEL_46;
    }
    v33 = EngMulDiv(v58 - v13[1], v26 - v19, v15 - v19);
    v30 = b;
    v32 = v55;
  }
  else
  {
    v34 = EngMulDiv(v8.m128i_i32[0] - *v13, v25, v14);
    v28 = a8 & 1;
    v32 = v34;
    if ( (a8 & 1) != 0 )
    {
      v30 = b;
      v31 = 0;
      goto LABEL_46;
    }
    v35 = v58 - v13[1];
    v30 = b;
    v33 = EngMulDiv(v35, b, c);
  }
  v28 = a8 & 1;
  v31 = v33;
LABEL_46:
  v36 = v32 + v23->m128i_i32[0] - v8.m128i_i32[0];
  v37 = v23->m128i_i32[1] + v31 - v58;
  v38 = v37 + a4[3];
  v39 = v36 + *a4;
  v40 = v36 + a4[2];
  v41 = v37 + a4[1];
  *a4 = v39;
  a4[2] = v40;
  a4[3] = v38;
  a4[1] = v41;
  if ( (a8 & 4) != 0 )
  {
    v42 = v23->m128i_i32[0] - v39;
  }
  else
  {
    if ( (a8 & 2) == 0 )
      goto LABEL_51;
    v42 = v23->m128i_i32[2] - v40;
  }
  a4[1] = v41;
  *a4 = v39 + v42;
  a4[2] = v40 + v42;
  a4[3] = v38;
LABEL_51:
  if ( v28 )
  {
    if ( (a8 & 8) != 0 || (v43 = a7[25], v44 = v43 + v41, v30 < v43) )
      v44 = v23->m128i_i32[3];
    a4[3] = v44;
  }
  v45 = *(_QWORD *)a4 - v8.m128i_i64[0];
  if ( *(_QWORD *)a4 == v8.m128i_i64[0] )
    v45 = *((_QWORD *)a4 + 1) - v16.m128i_i64[0];
  if ( v45 )
    goto LABEL_84;
  return v9;
}
