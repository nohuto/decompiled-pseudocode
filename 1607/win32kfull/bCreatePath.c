/*
 * XREFs of bCreatePath @ 0x1C02450C4
 * Callers:
 *     vtfdQueryFontData @ 0x1C014D798 (vtfdQueryFontData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall bCreatePath(char *a1, char *a2, __int64 a3, PATHOBJ *a4, int a5)
{
  __int64 v5; // r15
  __int64 v6; // r13
  char *v8; // rdi
  unsigned int v9; // r10d
  int v10; // eax
  __int64 v11; // r9
  float v12; // xmm6_4
  int v13; // ecx
  float v14; // xmm8_4
  __int64 v15; // rdx
  float v16; // xmm9_4
  float v17; // xmm7_4
  int v18; // r11d
  __int64 v19; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // r14d
  int v29; // eax
  char v30; // cl
  char *v31; // rdi
  __int64 v32; // rdx
  int *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r8
  __m128i v37; // xmm0
  int v38; // ecx
  int v39; // eax
  __int64 v40; // r11
  int v41; // r10d
  unsigned __int64 v42; // rdx
  float v43; // xmm3_4
  float v44; // xmm0_4
  int v45; // r9d
  int v46; // r8d
  __int64 v47; // rcx
  FIX *p_y; // rax
  int v49; // eax
  char *v50; // rdi
  int v51; // eax
  char *v52; // rdi
  int v54; // [rsp+28h] [rbp-B1h]
  int v55; // [rsp+28h] [rbp-B1h]
  int v56; // [rsp+28h] [rbp-B1h]
  int v57; // [rsp+2Ch] [rbp-ADh]
  int v59; // [rsp+38h] [rbp-A1h]
  int v60; // [rsp+3Ch] [rbp-9Dh]
  int v61; // [rsp+40h] [rbp-99h]
  __int64 v62; // [rsp+48h] [rbp-91h]
  __int64 v63; // [rsp+60h] [rbp-79h]
  __int64 v64; // [rsp+68h] [rbp-71h]
  int v65; // [rsp+70h] [rbp-69h] BYREF
  _DWORD v66[9]; // [rsp+74h] [rbp-65h]
  POINTFIX ptfx; // [rsp+98h] [rbp-41h] BYREF
  POINTFIX pptfx; // [rsp+A0h] [rbp-39h] BYREF

  LODWORD(v5) = 0;
  v6 = a3;
  v8 = a1;
  v9 = 1;
  v54 = 1;
  if ( a1 == a2 )
    return v9;
  v10 = *(_DWORD *)(a3 + 120);
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(float *)(a3 + 16);
  v13 = v10 & 1;
  v14 = *(float *)(a3 + 20);
  LODWORD(v15) = v10 & 2;
  v16 = *(float *)(a3 + 24);
  v17 = *(float *)(a3 + 28);
  v18 = *(__int16 *)(v11 + 62);
  LODWORD(a3) = v10 & 4;
  v19 = *(_QWORD *)(v6 + 80);
  v61 = v18;
  v20 = (v10 & 0xFF0) - 16;
  if ( !v20 )
  {
    v28 = a5 - 16;
    goto LABEL_20;
  }
  v21 = v20 - 16;
  if ( !v21 )
  {
    v28 = a5 - 16;
    v27 = *(_DWORD *)(v6 + 32) - 16;
    goto LABEL_21;
  }
  v22 = v21 - 32;
  if ( !v22 )
  {
    v28 = -16;
    v27 = *(_DWORD *)(v6 + 32) - 16;
    goto LABEL_21;
  }
  v23 = v22 - 64;
  if ( !v23 )
  {
    v28 = -16;
LABEL_20:
    v27 = -16 - *(_DWORD *)(v6 + 36);
    goto LABEL_21;
  }
  v24 = v23 - 128;
  if ( !v24 )
  {
    v28 = -16 - *(_DWORD *)(v6 + 36);
    goto LABEL_15;
  }
  v25 = v24 - 256;
  if ( !v25 )
  {
    v27 = -16;
    v28 = -16 - *(_DWORD *)(v6 + 36);
    goto LABEL_21;
  }
  v26 = v25 - 512;
  if ( !v26 )
  {
    v28 = *(_DWORD *)(v6 + 32) - 16;
LABEL_15:
    v27 = a5 - 16;
    goto LABEL_21;
  }
  if ( v26 == 1024 )
  {
    v27 = -16;
    v28 = *(_DWORD *)(v6 + 32) - 16;
  }
  else
  {
    v27 = v60;
    v28 = v59;
  }
LABEL_21:
  v29 = *(__int16 *)(v11 + 60);
  v65 = 0;
  v66[0] = -v29;
  if ( v8 <= a2 )
  {
    v15 = (int)v15;
    a3 = (int)a3;
    v64 = (int)v15;
    v63 = (int)a3;
    v62 = v13;
    while ( v8 != a2 )
    {
      v30 = *v8;
      if ( *v8 == (char)0x80 )
        break;
      if ( (unsigned int)v5 >= 5 )
        goto LABEL_33;
      v31 = v8 + 1;
      if ( (_DWORD)v5 )
      {
        v32 = (unsigned int)(v5 - 1);
        v66[2 * (unsigned int)v5 - 1] = v66[2 * v32 - 1] + v30;
        if ( v31 == a2 )
          return 0LL;
        v66[2 * (unsigned int)v5] = v66[2 * v32] + *v31;
      }
      else
      {
        v65 = v30;
        if ( v31 == a2 )
          return 0LL;
        v66[0] = *v31;
      }
      v8 = v31 + 1;
      LODWORD(v5) = v5 + 1;
LABEL_64:
      if ( v8 > a2 )
        return v9;
      a3 = v63;
      v15 = v64;
      v18 = v61;
    }
    if ( (unsigned int)v5 > 1 )
    {
LABEL_33:
      v5 = (unsigned int)(v5 - 1);
      v57 = v66[2 * v5 - 1];
      if ( v15 )
      {
        v33 = &v65;
        v34 = (unsigned int)(v5 + 1);
        do
        {
          *v33 += (v18 - v33[1]) >> 1;
          v33 += 2;
          --v34;
        }
        while ( v34 );
      }
      if ( a3 )
      {
        v35 = 0LL;
        v36 = (unsigned int)(v5 + 1);
        do
        {
          v37 = _mm_cvtsi32_si128(v66[v35 - 1]);
          v35 += 2LL;
          v38 = (int)(float)(_mm_cvtepi32_ps(v37).m128_f32[0] * v12);
          v39 = (int)(float)((float)*(int *)((char *)&v64 + v35 * 4 + 4) * v17);
          if ( v39 > v27 )
            v39 = v27;
          v66[v35 + 8] = v39;
          if ( v38 > v28 )
            v38 = v28;
          v66[v35 + 7] = v38;
          --v36;
        }
        while ( v36 );
      }
      else
      {
        v40 = (unsigned int)(v5 + 1);
        v41 = *(_DWORD *)(v6 + 120) & 0xFF0;
        v42 = 0LL;
        do
        {
          v43 = (float)v66[v42 / 4 - 1];
          v44 = (float)(int)v66[v42 / 4];
          v45 = (int)(float)(v43 * v12) + (int)(float)(v44 * v16);
          *(FIX *)((char *)&ptfx.x + v42) = v45;
          v46 = (int)(float)(v43 * v14) + (int)(float)(v44 * v17);
          *(FIX *)((char *)&ptfx.y + v42) = v46;
          if ( v41 )
          {
            if ( v46 > v27 )
              v46 = v27;
            *(FIX *)((char *)&ptfx.y + v42) = v46;
            if ( v45 > v28 )
              v45 = v28;
            *(FIX *)((char *)&ptfx.x + v42) = v45;
          }
          v42 += 8LL;
          --v40;
        }
        while ( v40 );
      }
      v55 = PATHOBJ_bMoveTo(a4, ptfx) & v54;
      v9 = PATHOBJ_bPolyLineTo(a4, &pptfx, v5) & v55;
      v54 = v9;
      if ( v62 )
      {
        v47 = (unsigned int)(v5 + 1);
        p_y = &ptfx.y;
        do
        {
          *(p_y - 1) += v19;
          *p_y += HIDWORD(v19);
          p_y += 2;
          --v47;
        }
        while ( v47 );
        v56 = PATHOBJ_bMoveTo(a4, ptfx) & v9;
        v9 = PATHOBJ_bPolyLineTo(a4, &pptfx, v5) & v56;
        v54 = v9;
      }
      if ( v8 != a2 && *v8 != (char)0x80 )
      {
        v65 = v57;
        v49 = v66[2 * (unsigned int)v5];
LABEL_63:
        LODWORD(v5) = 1;
        v66[0] = v49;
        goto LABEL_64;
      }
      v66[2 * v5 - 1] = v57;
    }
    v50 = v8 + 1;
    if ( v50 == a2 )
      return 0LL;
    v51 = *v50;
    v52 = v50 + 1;
    v65 = v66[2 * (unsigned int)v5 - 1] + v51;
    if ( v52 == a2 )
      return 0LL;
    v49 = v66[2 * (unsigned int)v5] + *v52;
    v8 = v52 + 1;
    goto LABEL_63;
  }
  return v9;
}
