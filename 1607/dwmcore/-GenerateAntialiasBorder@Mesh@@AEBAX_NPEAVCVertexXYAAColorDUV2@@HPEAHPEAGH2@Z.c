/*
 * XREFs of ?GenerateAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z @ 0x180090FAC
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0PEAVCVertexXYAAColorDUV2@@PEAHGPEAG2@Z @ 0x1800929B0 (-GenerateGeometry@Mesh@@QEAAJ_N0PEAVCVertexXYAAColorDUV2@@PEAHGPEAG2@Z.c)
 * Callees:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z @ 0x180090760 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

void __fastcall Mesh::GenerateAntialiasBorder(
        Mesh *this,
        char a2,
        struct CVertexXYAAColorDUV2 *a3,
        __int64 a4,
        int *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8)
{
  Mesh *v8; // r13
  int v9; // r12d
  int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // rbx
  unsigned __int64 v15; // kr00_8
  int **v16; // rdi
  int **v17; // rax
  int **v18; // r15
  __int64 v19; // rcx
  bool v20; // zf
  char *v21; // rsi
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  char *v26; // r14
  __int128 v27; // xmm0
  __int64 v28; // rsi
  float v29; // xmm9_4
  float v30; // xmm8_4
  int v31; // eax
  unsigned __int64 v32; // kr08_8
  float v33; // xmm9_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  int v39; // r8d
  float *v40; // rax
  __int64 v41; // rcx
  _DWORD *v42; // rdx
  float v43; // xmm1_4
  float v44; // xmm1_4
  int v45; // ebx
  __int64 v46; // r11
  unsigned __int16 *v47; // r15
  __int64 v48; // r10
  char v49; // r14
  int v50; // esi
  unsigned __int16 **v51; // rcx
  unsigned __int16 v52; // r9
  unsigned __int16 v53; // cx
  __int64 v54; // rax
  int v55; // edi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // [rsp+38h] [rbp-D0h]
  int v62; // [rsp+48h] [rbp-C0h]
  __int16 v63; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v64; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v65; // [rsp+50h] [rbp-B8h]
  int **v66; // [rsp+58h] [rbp-B0h]
  char v68; // [rsp+160h] [rbp+58h]
  struct CVertexXYAAColorDUV2 *v69; // [rsp+168h] [rbp+60h]
  int v70; // [rsp+170h] [rbp+68h] BYREF

  v70 = a4;
  v69 = a3;
  v68 = a2;
  v8 = this;
  v9 = *a5;
  v70 = *a5;
  v10 = *a8;
  v11 = *((_DWORD *)this + 48);
  v62 = *a8;
  a7 = *a8;
  if ( (v11 & 0x20) != 0 && (v11 & 0x10) == 0 )
  {
    Mesh::GenerateGridAntialiasBorder(this, a2, a3, a4, &v70, a6, v61, &a7);
    v9 = v70;
    v10 = a7;
    goto LABEL_4;
  }
  v12 = *((_QWORD *)this + 2);
  v13 = 0;
  v63 = v9;
  a7 = 0;
  v14 = *(_QWORD *)(v12 + 64);
  if ( v14 )
  {
    do
    {
      if ( (*(_BYTE *)(v14 + 32) & 0xC) != 0 )
      {
        v20 = (*(_BYTE *)(v14 + 32) & 2) == 0;
        v64 = *(_QWORD *)(v14 + 16);
        v15 = v64;
        LOBYTE(v70) = 0;
        if ( v20 )
        {
          v16 = *(int ***)(v14 + 48);
          v17 = *(int ***)(v14 + 56);
        }
        else
        {
          v16 = *(int ***)(v14 + 56);
          v17 = *(int ***)(v14 + 48);
          LOBYTE(v70) = 1;
          v15 = __PAIR64__(HIDWORD(v64) ^ (unsigned int)_xmm, (unsigned int)v64 ^ (unsigned int)_xmm);
        }
        v66 = v17;
        v18 = v16;
        if ( v16 )
        {
          while ( 1 )
          {
            v19 = 0LL;
            if ( v18 == v16 )
              break;
            if ( v18 != v17 || (v19 = *(_QWORD *)(v14 + 80), (*(_BYTE *)(v19 + 32) & 0xC) != 0xC) )
            {
LABEL_15:
              v21 = 0LL;
              v22 = 0.0;
              v23 = 0.0;
              v24 = 0.0;
              v25 = 0.0;
              v26 = (char *)a3 + 64 * (__int64)**v18;
              if ( a2 && (*(_BYTE *)(v14 + 32) & 0xC) == 0xC )
              {
                v27 = *(_OWORD *)v26;
                v28 = (__int64)v9++ << 6;
                v21 = (char *)a3 + v28;
                a7 = v13 + 1;
                *(_OWORD *)v21 = v27;
                *((_OWORD *)v21 + 1) = *((_OWORD *)v26 + 1);
                *((_OWORD *)v21 + 2) = *((_OWORD *)v26 + 2);
                *((_OWORD *)v21 + 3) = *((_OWORD *)v26 + 3);
                *((_DWORD *)v21 + 11) = 0;
                if ( *((char *)v8 + 192) < 0 )
                  v21[15] = 0;
                else
                  *((_DWORD *)v21 + 3) = 0;
              }
              v29 = *((float *)&v15 + 1) * 0.5;
              v30 = COERCE_FLOAT(v15 ^ _xmm) * 0.5;
              if ( v19 )
              {
                v31 = *(_DWORD *)(v19 + 32);
                v65 = *(_QWORD *)(v19 + 16);
                v32 = v65;
                if ( (v31 & 2) != 0 )
                  v32 = __PAIR64__(HIDWORD(v65) ^ (unsigned int)_xmm, (unsigned int)v65 ^ (unsigned int)_xmm);
                v33 = (float)(v29 * *(float *)&v32) + (float)(v30 * *((float *)&v32 + 1));
                v30 = v33 * *((float *)&v32 + 1);
                v29 = v33 * *(float *)&v32;
                if ( (v31 & 0xC) != 0 )
                {
                  v34 = (float)((float)(COERCE_FLOAT(v32 ^ _xmm) * *((float *)&v15 + 1))
                              + (float)(*((float *)&v32 + 1) * *(float *)&v15))
                      * 0.5;
                  v35 = v34 * *((float *)&v15 + 1);
                  v36 = v34 * *(float *)&v15;
                  if ( (v31 & 4) != 0 )
                  {
                    v22 = 0.0 - v36;
                    v23 = 0.0 - v35;
                  }
                  else if ( (v31 & 8) != 0 )
                  {
                    v22 = v36 + 0.0;
                    v23 = v35 + 0.0;
                  }
                  if ( v21 )
                  {
                    if ( (v31 & 8) != 0 )
                    {
                      v24 = v36 + 0.0;
                      v25 = v35 + 0.0;
                    }
                    else if ( (v31 & 4) != 0 )
                    {
                      v24 = 0.0 - v36;
                      v25 = 0.0 - v35;
                    }
                  }
                }
              }
              if ( (*(_BYTE *)(v14 + 32) & 4) != 0 )
              {
                v22 = v22 - v29;
                v23 = v23 - v30;
              }
              else if ( (*(_BYTE *)(v14 + 32) & 8) != 0 )
              {
                v22 = v22 + v29;
                v23 = v23 + v30;
              }
              *((_DWORD *)v26 + 2) = 1065353216;
              v37 = v23 + *((float *)v26 + 9);
              *(float *)v26 = v22 + *((float *)v26 + 8);
              *((float *)v26 + 1) = v37;
              *((float *)v26 + 10) = sqrtf_0((float)(v23 * v23) + (float)(v22 * v22));
              if ( v21 )
              {
                v24 = v24 + v29;
                *((_DWORD *)v21 + 2) = 1065353216;
                v25 = v25 + v30;
                v38 = v25 + *((float *)v21 + 9);
                *(float *)v21 = v24 + *((float *)v21 + 8);
                *((float *)v21 + 1) = v38;
                *((float *)v21 + 10) = sqrtf_0((float)(v25 * v25) + (float)(v24 * v24));
              }
              v39 = 0;
              if ( *((int *)v8 + 12) > 0 )
              {
                v40 = (float *)(v26 + 16);
                v41 = v21 - v26;
                v42 = (_DWORD *)((char *)v8 + 104);
                do
                {
                  if ( *v42 )
                  {
                    v43 = v23 + v40[9];
                    *v40 = v22 + v40[8];
                    v40[1] = v43;
                    if ( v21 )
                    {
                      v44 = v25 + *(float *)((char *)v40 + v41 + 36);
                      *(float *)((char *)v40 + v41) = v24 + *(float *)((char *)v40 + v41 + 32);
                      *(float *)((char *)v40 + v41 + 4) = v44;
                    }
                  }
                  ++v39;
                  v42 += 14;
                  v40 += 2;
                }
                while ( v39 < *((_DWORD *)v8 + 12) );
              }
              v13 = a7;
              a3 = v69;
              a2 = v68;
              goto LABEL_39;
            }
            if ( v19 != *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL) )
            {
              v20 = (*(_BYTE *)(v14 + 32) & 0xC) == 12;
LABEL_14:
              if ( v20 )
                goto LABEL_15;
            }
LABEL_39:
            if ( (_BYTE)v70 )
              v18 = (int **)v18[7];
            else
              v18 = (int **)v18[8];
            v17 = v66;
            if ( !v18 )
              goto LABEL_42;
          }
          v19 = *(_QWORD *)(v14 + 72);
          if ( (*(_BYTE *)(v19 + 32) & 0xC) != 0xC )
            goto LABEL_15;
          if ( (*(_BYTE *)(v14 + 32) & 0xC) != 0xC )
            goto LABEL_39;
          v20 = v14 == *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL);
          goto LABEL_14;
        }
      }
LABEL_42:
      v14 = *(_QWORD *)(v14 + 80);
    }
    while ( v14 != *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL) && v14 );
    v10 = v62;
  }
  if ( a2 )
  {
    v45 = 0;
    v46 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL);
    if ( v46 )
    {
      v47 = a6;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v46 + 32) & 0xC) == 0xC )
        {
          if ( (*(_BYTE *)(v46 + 32) & 2) != 0 )
          {
            v48 = *(_QWORD *)(v46 + 56);
            v49 = 1;
          }
          else
          {
            v48 = *(_QWORD *)(v46 + 48);
            v49 = 0;
          }
          if ( v48 )
            break;
        }
LABEL_61:
        v46 = *(_QWORD *)(v46 + 80);
        if ( v46 == *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL) || !v46 )
          goto LABEL_4;
      }
      v50 = v45 + 1;
      while ( 1 )
      {
        v51 = v49 ? *(unsigned __int16 ***)(v48 + 56) : *(unsigned __int16 ***)(v48 + 64);
        if ( v51 )
          break;
        if ( (*(_BYTE *)(*(_QWORD *)(v46 + 80) + 32LL) & 0xC) != 0xC )
          goto LABEL_72;
LABEL_57:
        if ( v49 )
          v48 = *(_QWORD *)(v48 + 56);
        else
          v48 = *(_QWORD *)(v48 + 64);
        if ( !v48 )
        {
          v8 = this;
          goto LABEL_61;
        }
      }
      v52 = **(_WORD **)v48;
      v53 = **v51;
      v54 = v10;
      v55 = v10 + 1;
      v47[v54] = v45 + v63;
      v56 = v55++;
      v47[v56] = v63 + v50 % a7;
      v57 = v55++;
      v47[v57] = v53;
      v58 = v55++;
      v47[v58] = v45 + v63;
      v59 = v55++;
      v47[v59] = v53;
      v60 = v55;
      v10 = v55 + 1;
      v47[v60] = v52;
LABEL_72:
      ++v45;
      ++v50;
      goto LABEL_57;
    }
  }
LABEL_4:
  *a5 = v9;
  *a8 = v10;
}
