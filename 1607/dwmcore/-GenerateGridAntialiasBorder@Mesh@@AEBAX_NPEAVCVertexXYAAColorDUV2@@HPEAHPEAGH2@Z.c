/*
 * XREFs of ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z @ 0x180090760
 * Callers:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z @ 0x180090FAC (-GenerateAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z.c)
 * Callees:
 *     ?OffsetBaseVertices@@YAX_N0PEAVCVertexXYAAColorDUV2@@HHHH@Z @ 0x180093E00 (-OffsetBaseVertices@@YAX_N0PEAVCVertexXYAAColorDUV2@@HHHH@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

void __fastcall Mesh::GenerateGridAntialiasBorder(
        Mesh *this,
        char a2,
        struct CVertexXYAAColorDUV2 *a3,
        __int64 a4,
        int *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8)
{
  int v9; // r12d
  struct CVertexXYAAColorDUV2 *v10; // r10
  int v11; // r14d
  int v13; // edx
  int v14; // r13d
  int v15; // ecx
  int v16; // r11d
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // r8
  signed __int64 v20; // r9
  _DWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r15
  int v24; // r14d
  int v25; // r12d
  char *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  _OWORD *v29; // rcx
  __int128 v30; // xmm1
  char v31; // dl
  int v32; // eax
  char v33; // dl
  int v34; // edx
  int v35; // r14d
  char *v36; // r8
  __int64 v37; // r9
  __int64 v38; // r10
  __int64 v39; // rax
  Mesh *v40; // r9
  int v41; // edx
  struct CVertexXYAAColorDUV2 *v42; // rsi
  signed __int64 v43; // r9
  __int64 v44; // rcx
  int *v45; // r8
  int v46; // eax
  char v47; // al
  __int64 v48; // rdi
  __int64 v49; // r10
  int v50; // r14d
  char v51; // bl
  float v52; // xmm2_4
  int v53; // r15d
  float *v54; // r8
  __int64 v55; // r11
  __int64 v56; // rax
  float v57; // xmm0_4
  int v58; // r10d
  float *v59; // r8
  float v60; // xmm0_4
  int v61; // r8d
  Mesh *v62; // rsi
  __int64 v63; // rcx
  float *v64; // rax
  float v65; // xmm0_4
  float v66; // xmm0_4
  float v67; // xmm2_4
  int v68; // ebx
  __int16 v69; // r12
  int v70; // r10d
  int v71; // edi
  int v72; // r11d
  int v73; // r14d
  int v74; // esi
  struct CVertexXYAAColorDUV2 *v75; // r8
  unsigned __int16 *v76; // r9
  unsigned __int16 v77; // r15
  unsigned __int16 v78; // dx
  unsigned __int16 v79; // ax
  unsigned __int64 v80; // r12
  float v81; // xmm0_4
  float v82; // xmm0_4
  float v83; // xmm0_4
  float v84; // xmm0_4
  float v85; // xmm2_4
  __int64 v86; // r8
  __int64 v87; // rcx
  int v88; // [rsp+40h] [rbp-A9h] BYREF
  int v89; // [rsp+44h] [rbp-A5h]
  char v90; // [rsp+48h] [rbp-A1h]
  int v91; // [rsp+4Ch] [rbp-9Dh]
  int v92; // [rsp+50h] [rbp-99h]
  int v93; // [rsp+54h] [rbp-95h]
  int v94; // [rsp+58h] [rbp-91h]
  struct CVertexXYAAColorDUV2 *v95; // [rsp+60h] [rbp-89h]
  Mesh *v96; // [rsp+68h] [rbp-81h]
  signed __int64 v97; // [rsp+70h] [rbp-79h]
  int *v98; // [rsp+78h] [rbp-71h]
  int *v99; // [rsp+80h] [rbp-69h]
  signed __int64 v100; // [rsp+88h] [rbp-61h]
  signed __int64 v101; // [rsp+90h] [rbp-59h]
  signed __int64 v102; // [rsp+98h] [rbp-51h]
  unsigned __int16 *v103; // [rsp+A0h] [rbp-49h]
  _DWORD v104[4]; // [rsp+A8h] [rbp-41h] BYREF
  _DWORD v105[4]; // [rsp+B8h] [rbp-31h] BYREF
  _DWORD v106[4]; // [rsp+C8h] [rbp-21h] BYREF
  _DWORD v107[4]; // [rsp+D8h] [rbp-11h] BYREF

  v98 = a5;
  v9 = 0;
  v96 = this;
  v10 = a3;
  v11 = *a5;
  v103 = a6;
  v99 = a8;
  v95 = a3;
  v90 = a2;
  v13 = *((_DWORD *)this + 42);
  v14 = *a8;
  v15 = *((_DWORD *)this + 41);
  v91 = v11;
  v92 = v14;
  v94 = v11;
  v93 = 0;
  v89 = 65537;
  v88 = 257;
  v106[0] = v15;
  v106[1] = v13;
  v105[0] = v13 * (v15 - 1);
  v105[2] = v13 - 1;
  v106[2] = v15;
  v106[3] = v13;
  v105[1] = 0;
  v104[1] = 1;
  v104[2] = v13;
  v105[3] = v15 * v13 - 1;
  v104[3] = -1;
  v104[0] = -v13;
  if ( !a2 )
    goto LABEL_35;
  v16 = 0;
  v17 = (char *)v106 - (char *)this;
  v18 = (char *)v107 - (char *)this;
  v97 = (char *)v106 - (char *)this;
  v100 = (char *)v107 - (char *)this;
  v19 = (char *)v104 - (char *)this;
  v20 = (char *)v105 - (char *)this;
  v101 = (char *)v104 - (char *)this;
  v102 = (char *)v105 - (char *)this;
  v21 = (_DWORD *)((char *)this + 176);
  v22 = 0LL;
  do
  {
    if ( v16 )
    {
      v23 = (__int64)&v88 + v22 - ((_QWORD)&v88 + 1);
      v17 = v97;
    }
    else
    {
      v23 = 3LL;
    }
    if ( *v21 == 12 )
    {
      v24 = *(_DWORD *)((char *)v21 + v17 - 176) - 1;
      if ( v24 <= 0 )
        goto LABEL_19;
    }
    else
    {
      if ( *((_DWORD *)this + v23 + 44) != 12 )
        goto LABEL_19;
      v24 = 1;
    }
    v25 = v91 + v9;
    v26 = (char *)v10 + 64 * (__int64)v25;
    *(_DWORD *)((char *)v21 + v18 - 176) = v25;
    v27 = v24;
    if ( v24 > 0 )
    {
      v28 = (__int64)*(int *)((char *)v21 + v19 - 176) << 6;
      v29 = (_OWORD *)((char *)v10 + 64 * (__int64)*(int *)((char *)v21 + v20 - 176));
      do
      {
        v26 += 64;
        *((_OWORD *)v26 - 4) = *v29;
        *((_OWORD *)v26 - 3) = v29[1];
        *((_OWORD *)v26 - 2) = v29[2];
        v30 = v29[3];
        v29 = (_OWORD *)((char *)v29 + v28);
        *((_OWORD *)v26 - 1) = v30;
        --v27;
      }
      while ( v27 );
    }
    if ( (*v21 & 0xC) != 0 )
    {
      if ( (*v21 & 8) != 0 )
        v31 = *((_BYTE *)&v88 + v22) == 0;
      else
        v31 = *((_BYTE *)&v88 + v22);
      OffsetBaseVertices(*((_BYTE *)&v89 + v22), v31, v10, v20, v24, v25, 1);
      v10 = v95;
    }
    v32 = *((_DWORD *)this + v23 + 44);
    if ( (v32 & 0xC) != 0 )
    {
      if ( (v32 & 8) != 0 )
        v33 = *((_BYTE *)&v88 + v23) == 0;
      else
        v33 = *((_BYTE *)&v88 + v23);
      OffsetBaseVertices(*((_BYTE *)&v89 + v23), v33, v10, v20, 1, v25, 1);
    }
    v18 = v100;
    v9 = v24 + v93;
    v19 = v101;
    v20 = v102;
    v10 = v95;
    v93 += v24;
LABEL_19:
    ++v16;
    ++v21;
    ++v22;
    v17 = v97;
  }
  while ( (unsigned __int64)v16 < 4 );
  v34 = 0;
  if ( v9 >= 3 )
  {
    v35 = v91;
    v36 = (char *)v10 + 64 * (__int64)v91 + 15;
    v37 = (v91 + 1 - (__int64)v91) << 6;
    v38 = (v91 + 2 - (__int64)v91) << 6;
    v39 = (v9 - 3) / 3u + 1;
    v34 = 3 * v39;
    do
    {
      *(_DWORD *)(v36 + 29) = 0;
      if ( *((char *)this + 192) < 0 )
        *v36 = 0;
      else
        *(_DWORD *)(v36 - 3) = 0;
      *(_DWORD *)&v36[v37 + 29] = 0;
      if ( *((char *)this + 192) < 0 )
        v36[v37] = 0;
      else
        *(_DWORD *)&v36[v37 - 3] = 0;
      *(_DWORD *)&v36[v38 + 29] = 0;
      if ( *((char *)this + 192) < 0 )
        v36[v38] = 0;
      else
        *(_DWORD *)&v36[v38 - 3] = 0;
      v36 += 192;
      --v39;
    }
    while ( v39 );
  }
  else
  {
    v35 = v91;
  }
  if ( v34 < v9 )
  {
    v86 = (__int64)v95 + 64 * (__int64)(v34 + v35) + 15;
    v87 = (unsigned int)(v9 - v34);
    do
    {
      *(_DWORD *)(v86 + 29) = 0;
      if ( *((char *)this + 192) < 0 )
        *(_BYTE *)v86 = 0;
      else
        *(_DWORD *)(v86 - 3) = 0;
      v86 += 64LL;
      --v87;
    }
    while ( v87 );
  }
  v14 = v92;
  v91 = v9 + v35;
LABEL_35:
  v40 = this;
  v41 = 0;
  v42 = v95;
  v43 = v40 - (Mesh *)v104;
  v44 = 0LL;
  do
  {
    v45 = &v104[v44];
    v46 = *(int *)((char *)v45 + v43 + 176);
    if ( (v46 & 0xC) != 0 )
    {
      if ( (v46 & 4) != 0 )
        v47 = *((_BYTE *)&v88 + v44);
      else
        v47 = *((_BYTE *)&v88 + v44) == 0;
      v48 = *v45;
      v49 = (int)v105[v44];
      v50 = v106[v44];
      v51 = *((_BYTE *)&v89 + v44);
      if ( v47 )
        v52 = FLOAT_0_5;
      else
        v52 = FLOAT_N0_5;
      v53 = 0;
      if ( v50 >= 2 )
      {
        v54 = (float *)((char *)v42 + 64 * v49);
        v55 = v48 << 6;
        v56 = ((unsigned int)(v50 - 2) >> 1) + 1;
        v53 = 2 * v56;
        do
        {
          if ( v51 )
          {
            *v54 = v52 + v54[8];
            if ( v54[1] == v54[9] )
              v81 = FLOAT_0_5;
            else
              v81 = FLOAT_0_70710677;
            v54[10] = v81;
            v54[4] = v52 + v54[12];
            v54[6] = v52 + v54[14];
          }
          else
          {
            v54[1] = v52 + v54[9];
            if ( *v54 == v54[8] )
              v57 = FLOAT_0_5;
            else
              v57 = FLOAT_0_70710677;
            v54[10] = v57;
            v54[5] = v52 + v54[13];
            v54[7] = v52 + v54[15];
          }
          v58 = v48 + v49;
          v59 = (float *)((char *)v54 + v55);
          if ( v51 )
          {
            *v59 = v52 + v59[8];
            if ( v59[1] == v59[9] )
              v82 = FLOAT_0_5;
            else
              v82 = FLOAT_0_70710677;
            v59[10] = v82;
            v59[4] = v52 + v59[12];
            v59[6] = v52 + v59[14];
          }
          else
          {
            v59[1] = v52 + v59[9];
            if ( *v59 == v59[8] )
              v60 = FLOAT_0_5;
            else
              v60 = FLOAT_0_70710677;
            v59[10] = v60;
            v59[5] = v52 + v59[13];
            v59[7] = v52 + v59[15];
          }
          LODWORD(v49) = v48 + v58;
          v54 = (float *)((char *)v59 + v55);
          --v56;
        }
        while ( v56 );
      }
      if ( v53 < v50 )
      {
        v64 = (float *)((char *)v42 + 64 * (__int64)(int)v49);
        if ( v51 )
        {
          *v64 = v52 + v64[8];
          if ( v64[1] == v64[9] )
            v83 = FLOAT_0_5;
          else
            v83 = FLOAT_0_70710677;
          v64[10] = v83;
          v84 = v52 + v64[12];
          v85 = v52 + v64[14];
          v64[4] = v84;
          v64[6] = v85;
        }
        else
        {
          v64[1] = v52 + v64[9];
          if ( *v64 == v64[8] )
            v65 = FLOAT_0_5;
          else
            v65 = FLOAT_0_70710677;
          v64[10] = v65;
          v66 = v52 + v64[13];
          v67 = v52 + v64[15];
          v64[5] = v66;
          v64[7] = v67;
        }
      }
    }
    ++v41;
    ++v44;
  }
  while ( (unsigned __int64)v41 < 4 );
  if ( v90 )
  {
    v61 = 0;
    v62 = (Mesh *)(v96 - (Mesh *)v105);
    v89 = 0;
    v96 = (Mesh *)((char *)v96 - (unsigned __int64)v105);
    v63 = 0LL;
    while ( 1 )
    {
      if ( *(_DWORD *)((char *)&v105[v63 + 44] + (_QWORD)v62) == 12 )
      {
        v68 = 0;
        v69 = v94;
        v70 = v106[v63] - 1;
        v71 = v105[v63];
        v72 = v107[v63] - v94;
        if ( v70 > 0 )
        {
          v73 = v72 + 1;
          v74 = v93;
          v75 = v95;
          v76 = &v103[v14];
          do
          {
            v77 = v72 + v69 + v68;
            v78 = v69 + v73 % v74;
            v79 = v71 + LOWORD(v104[v63]);
            v80 = (unsigned __int64)v77 << 6;
            if ( *(float *)((char *)v75 + v80) != *((float *)v75 + 16 * (unsigned __int64)v78)
              || *(float *)((char *)v75 + v80 + 4) != *((float *)v75 + 16 * (unsigned __int64)v78 + 1) )
            {
              v92 += 6;
              *v76 = v77;
              v76[1] = v78;
              v76[2] = v79;
              v76[3] = v77;
              v76[4] = v79;
              v76[5] = v71;
              v76 += 6;
            }
            v71 += v104[v63];
            ++v68;
            v69 = v94;
            ++v73;
          }
          while ( v68 < v70 );
          v61 = v89;
          v62 = v96;
        }
      }
      ++v61;
      ++v63;
      v89 = v61;
      if ( (unsigned __int64)v61 >= 4 )
        break;
      v14 = v92;
    }
    *v98 = v91;
    *v99 = v92;
  }
  else
  {
    *v98 = v91;
    *v99 = v14;
  }
}
