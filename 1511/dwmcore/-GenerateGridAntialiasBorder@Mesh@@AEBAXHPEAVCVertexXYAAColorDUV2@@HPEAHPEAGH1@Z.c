/*
 * XREFs of ?GenerateGridAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z @ 0x18001E090
 * Callers:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z @ 0x18001E730 (-GenerateAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z.c)
 * Callees:
 *     ?OffsetBaseVertices@@YAXHHPEAVCVertexXYAAColorDUV2@@HHHH@Z @ 0x18001DF88 (-OffsetBaseVertices@@YAXHHPEAVCVertexXYAAColorDUV2@@HHHH@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall Mesh::GenerateGridAntialiasBorder(
        Mesh *this,
        int a2,
        struct CVertexXYAAColorDUV2 *a3,
        __int64 a4,
        int *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8)
{
  __int64 v9; // rsi
  struct CVertexXYAAColorDUV2 *v10; // r13
  int v11; // r12d
  int v12; // xmm5_4
  float v13; // xmm4_4
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // r8
  signed __int64 v21; // r10
  signed __int64 v22; // rcx
  __int64 v23; // r9
  _BYTE *v24; // r11
  __int64 v25; // rbx
  int v26; // r15d
  int v27; // r12d
  char *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  _OWORD *v31; // rcx
  __int128 v32; // xmm1
  int v33; // eax
  __int32 v34; // eax
  float v35; // xmm0_4
  float *v36; // rcx
  float v37; // xmm0_4
  __int64 v38; // rdx
  _DWORD *v39; // rcx
  int v40; // edx
  __int64 v41; // rcx
  __int32 *v42; // r8
  int v43; // eax
  __int32 v44; // eax
  __int64 v45; // rbx
  int v46; // r8d
  int v47; // r10d
  __int32 v48; // r12d
  float v49; // xmm1_4
  int v50; // esi
  __int64 v51; // r15
  unsigned int v52; // eax
  __int64 v53; // r11
  __int64 v54; // rdi
  float *v55; // rax
  float v56; // xmm0_4
  int v57; // r8d
  float *v58; // rax
  float v59; // xmm0_4
  int v60; // r9d
  __int64 v61; // r14
  __int64 v62; // rcx
  int v63; // ebx
  __int16 v64; // r12
  int v65; // r10d
  int v66; // edi
  int v67; // r11d
  int v68; // r15d
  unsigned __int16 *v69; // r8
  unsigned __int16 v70; // si
  unsigned __int16 v71; // dx
  unsigned __int16 v72; // ax
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // r13
  float *v75; // r8
  bool v76; // zf
  int v77; // [rsp+40h] [rbp-C0h]
  int v78; // [rsp+44h] [rbp-BCh]
  int v80; // [rsp+48h] [rbp-B8h]
  int v81; // [rsp+4Ch] [rbp-B4h]
  int v82; // [rsp+50h] [rbp-B0h]
  __int64 v83; // [rsp+58h] [rbp-A8h]
  _DWORD v85[4]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v86[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v87[4]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v88; // [rsp+D8h] [rbp-28h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v90[4]; // [rsp+F8h] [rbp-8h] BYREF

  v9 = -1LL;
  v10 = a3;
  v11 = *a5;
  v12 = 1060439283;
  v13 = FLOAT_0_5;
  v15 = *((_DWORD *)this + 20);
  v16 = *((_DWORD *)this + 19);
  v78 = *a8;
  v81 = *a5;
  v82 = *a5;
  v77 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v87[0] = v16;
  v88 = _mm_load_si128((const __m128i *)&_xmm);
  v87[1] = v15;
  v85[0] = v15 * (v16 - 1);
  v85[2] = v15 - 1;
  v87[2] = v16;
  v87[3] = v15;
  v85[1] = 0;
  v86[1] = 1;
  v86[2] = v15;
  v85[3] = v16 * v15 - 1;
  v86[3] = -1;
  v86[0] = -v15;
  if ( !a2 )
    goto LABEL_30;
  v17 = 0;
  v18 = (char *)v87 - (char *)this;
  v19 = (char *)v90 - (char *)this;
  v20 = (char *)v86 - (char *)this;
  v21 = (char *)v85 - (char *)this;
  v22 = (char *)&v88 - (char *)this;
  v23 = (char *)&si128 - (char *)this;
  v24 = (char *)this + 88;
  do
  {
    v25 = v9;
    if ( !v17 )
      v25 = 3LL;
    if ( *(_DWORD *)v24 == 12 )
    {
      v26 = *(_DWORD *)&v24[v18 - 88] - 1;
      if ( v26 <= 0 )
        goto LABEL_25;
LABEL_7:
      v27 = v77 + v11;
      v28 = (char *)v10 + 64 * (__int64)v27;
      *(_DWORD *)&v24[v19 - 88] = v27;
      v29 = v26;
      if ( v26 > 0 )
      {
        v30 = (__int64)*(int *)&v24[v20 - 88] << 6;
        v31 = (_OWORD *)((char *)v10 + 64 * (__int64)*(int *)&v24[v21 - 88]);
        do
        {
          v28 += 64;
          *((_OWORD *)v28 - 4) = *v31;
          *((_OWORD *)v28 - 3) = v31[1];
          *((_OWORD *)v28 - 2) = v31[2];
          v32 = v31[3];
          v31 = (_OWORD *)((char *)v31 + v30);
          *((_OWORD *)v28 - 1) = v32;
          --v29;
        }
        while ( v29 );
        v22 = (char *)&v88 - (char *)this;
      }
      if ( (*v24 & 8) != 0 )
      {
        OffsetBaseVertices(*(_DWORD *)&v24[v23 - 88], *(_DWORD *)&v24[v22 - 88] == 0, v10, v23, v26, v27, 1);
        v23 = (char *)&si128 - (char *)this;
        v21 = (char *)v85 - (char *)this;
      }
      v33 = *((_DWORD *)this + v25 + 22);
      if ( (v33 & 0xC) == 0 )
      {
LABEL_24:
        v77 += v26;
        v22 = (char *)&v88 - (char *)this;
        v19 = (char *)v90 - (char *)this;
        v20 = (char *)v86 - (char *)this;
        v11 = v81;
        goto LABEL_25;
      }
      if ( (v33 & 8) != 0 )
        v34 = v88.m128i_i32[v25] == 0;
      else
        v34 = v88.m128i_i32[v25];
      if ( v34 )
        v35 = v13;
      else
        v35 = FLOAT_N0_5;
      v36 = (float *)((char *)v10 + 64 * (__int64)v27);
      if ( si128.m128i_i32[v25] )
      {
        *v36 = v35 + v36[8];
        if ( v36[1] == v36[9] )
        {
          v37 = v13;
          goto LABEL_23;
        }
      }
      else
      {
        v36[1] = v35 + v36[9];
        if ( *v36 == v36[8] )
        {
          v37 = v13;
LABEL_23:
          v36[10] = v37;
          goto LABEL_24;
        }
      }
      v37 = *(float *)&v12;
      goto LABEL_23;
    }
    if ( *((_DWORD *)this + v25 + 22) == 12 )
    {
      v26 = 1;
      goto LABEL_7;
    }
LABEL_25:
    ++v17;
    ++v9;
    v24 += 4;
    v18 = (char *)v87 - (char *)this;
  }
  while ( (unsigned __int64)v17 < 4 );
  v38 = v77;
  if ( v77 > 0 )
  {
    v39 = (_DWORD *)((char *)v10 + 64 * (__int64)v11 + 12);
    do
    {
      v39[8] = 0;
      *v39 = 0;
      v39 += 16;
      --v38;
    }
    while ( v38 );
  }
  v81 = v77 + v11;
LABEL_30:
  v40 = 0;
  v41 = 0LL;
  while ( 2 )
  {
    v42 = &v88.m128i_i32[v41];
    v43 = *(_DWORD *)((char *)&v88 + v41 * 4 + this - (Mesh *)&v88 + 88);
    if ( (v43 & 0xC) != 0 )
    {
      if ( (v43 & 4) != 0 )
        v44 = *v42;
      else
        v44 = *v42 == 0;
      v45 = (int)v86[v41];
      v46 = v85[v41];
      v47 = v87[v41];
      v48 = si128.m128i_i32[v41];
      if ( v44 )
        v49 = v13;
      else
        v49 = FLOAT_N0_5;
      v50 = 0;
      if ( v47 >= 2 )
      {
        v51 = si128.m128i_i32[v41];
        v52 = ((unsigned int)(v47 - 2) >> 1) + 1;
        v53 = v52;
        v50 = 2 * v52;
        while ( 1 )
        {
          v54 = v46;
          v55 = (float *)((char *)a3 + 64 * (__int64)v46);
          if ( v51 )
          {
            *v55 = v49 + v55[8];
            if ( v55[1] != v55[9] )
            {
LABEL_40:
              v56 = *(float *)&v12;
              goto LABEL_41;
            }
            v56 = v13;
          }
          else
          {
            v55[1] = v49 + v55[9];
            if ( *v55 != v55[8] )
              goto LABEL_40;
            v56 = v13;
          }
LABEL_41:
          v55[10] = v56;
          v57 = v45 + v46;
          v58 = (float *)((char *)a3 + 64 * (v54 + v45));
          if ( v51 )
          {
            *v58 = v49 + v58[8];
            if ( v58[1] == v58[9] )
            {
              v59 = v13;
              goto LABEL_45;
            }
LABEL_44:
            v59 = *(float *)&v12;
            goto LABEL_45;
          }
          v58[1] = v49 + v58[9];
          if ( *v58 != v58[8] )
            goto LABEL_44;
          v59 = v13;
LABEL_45:
          v46 = v45 + v57;
          v58[10] = v59;
          if ( !--v53 )
          {
            v48 = si128.m128i_i32[v41];
            v10 = a3;
            break;
          }
        }
      }
      if ( v50 < v47 )
      {
        v75 = (float *)((char *)v10 + 64 * (__int64)v46);
        if ( v48 )
        {
          v76 = v75[1] == v75[9];
          *v75 = v49 + v75[8];
          if ( v76 )
          {
            v75[10] = v13;
            goto LABEL_48;
          }
        }
        else
        {
          v76 = *v75 == v75[8];
          v75[1] = v49 + v75[9];
          if ( v76 )
          {
            v75[10] = v13;
            goto LABEL_48;
          }
        }
        *((_DWORD *)v75 + 10) = v12;
      }
    }
LABEL_48:
    ++v40;
    ++v41;
    if ( (unsigned __int64)v40 < 4 )
      continue;
    break;
  }
  if ( a2 )
  {
    v60 = 0;
    v61 = this - (Mesh *)v85;
    v80 = 0;
    v83 = v61;
    v62 = 0LL;
    do
    {
      if ( *(_DWORD *)((char *)&v90[v62 + 2] + v61) == 12 )
      {
        v63 = 0;
        v64 = v82;
        v65 = v87[v62] - 1;
        v66 = v85[v62];
        v67 = v90[v62] - v82;
        if ( v65 > 0 )
        {
          v68 = v67 + 1;
          v69 = &a6[v78];
          do
          {
            v70 = v67 + v64 + v63;
            v71 = v64 + v68 % v77;
            v72 = v66 + LOWORD(v86[v62]);
            v73 = (unsigned __int64)v70 << 6;
            v74 = (unsigned __int64)v71 << 6;
            if ( *(float *)((char *)a3 + v73) != *(float *)((char *)a3 + v74)
              || *(float *)((char *)a3 + v73 + 4) != *(float *)((char *)a3 + v74 + 4) )
            {
              v78 += 6;
              *v69 = v70;
              v69[1] = v71;
              v69[2] = v72;
              v69[3] = v70;
              v69[4] = v72;
              v69[5] = v66;
              v69 += 6;
            }
            v66 += v86[v62];
            ++v63;
            v64 = v82;
            ++v68;
          }
          while ( v63 < v65 );
          v60 = v80;
          v61 = v83;
        }
      }
      ++v60;
      ++v62;
      v80 = v60;
    }
    while ( (unsigned __int64)v60 < 4 );
  }
  *a5 = v81;
  *a8 = v78;
}
