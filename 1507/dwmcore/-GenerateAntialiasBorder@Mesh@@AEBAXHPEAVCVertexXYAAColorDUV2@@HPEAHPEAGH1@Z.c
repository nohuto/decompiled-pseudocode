/*
 * XREFs of ?GenerateAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z @ 0x180074674
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJHHPEAVCVertexXYAAColorDUV2@@PEAHGPEAG1@Z @ 0x180075EB4 (-GenerateGeometry@Mesh@@QEAAJHHPEAVCVertexXYAAColorDUV2@@PEAHGPEAG1@Z.c)
 * Callees:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z @ 0x1800741D8 (-GenerateGridAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z.c)
 *     sqrtf_0 @ 0x180099BF6 (sqrtf_0.c)
 */

void __fastcall Mesh::GenerateAntialiasBorder(
        Mesh *this,
        int a2,
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
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rbx
  unsigned __int64 v14; // kr00_8
  int **v15; // rdi
  int **v16; // rax
  int **v17; // r15
  __int64 v18; // rcx
  bool v19; // zf
  char *v20; // rsi
  char *v21; // r14
  __int128 v22; // xmm0
  __int64 v23; // rsi
  float v24; // xmm9_4
  float v25; // xmm8_4
  int v26; // eax
  unsigned __int64 v27; // kr08_8
  float v28; // xmm9_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  float v40; // xmm6_4
  int v41; // ebx
  __int64 v42; // r11
  unsigned __int16 *v43; // r15
  __int64 v44; // r10
  char v45; // r14
  int v46; // esi
  unsigned __int16 **v47; // rcx
  unsigned __int16 v48; // r9
  unsigned __int16 v49; // cx
  __int64 v50; // rax
  int v51; // edi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // [rsp+38h] [rbp-B1h]
  int v58; // [rsp+48h] [rbp-A1h]
  __int16 v59; // [rsp+4Ch] [rbp-9Dh]
  __int64 v60; // [rsp+50h] [rbp-99h]
  unsigned __int64 v61; // [rsp+58h] [rbp-91h]
  unsigned __int64 v62; // [rsp+60h] [rbp-89h]
  int **v63; // [rsp+68h] [rbp-81h]
  int v65; // [rsp+140h] [rbp+57h]
  struct CVertexXYAAColorDUV2 *v66; // [rsp+148h] [rbp+5Fh]
  int v67; // [rsp+150h] [rbp+67h] BYREF

  v67 = a4;
  v66 = a3;
  v65 = a2;
  v19 = (*((_BYTE *)this + 104) & 0x20) == 0;
  v8 = this;
  v9 = *a5;
  v67 = *a5;
  v10 = *a8;
  v58 = *a8;
  a7 = *a8;
  if ( !v19 && (*((_BYTE *)this + 104) & 0x10) == 0 )
  {
    Mesh::GenerateGridAntialiasBorder(this, a2, a3, a4, &v67, a6, v57, &a7);
    v9 = v67;
    v10 = a7;
    goto LABEL_4;
  }
  v11 = *((_QWORD *)this + 2);
  v12 = 0;
  v59 = v9;
  a7 = 0;
  v13 = *(_QWORD *)(v11 + 64);
  if ( v13 )
  {
    do
    {
      if ( (*(_BYTE *)(v13 + 32) & 0xC) != 0 )
      {
        v19 = (*(_BYTE *)(v13 + 32) & 2) == 0;
        v61 = *(_QWORD *)(v13 + 16);
        v14 = v61;
        LOBYTE(v67) = 0;
        if ( v19 )
        {
          v15 = *(int ***)(v13 + 48);
          v16 = *(int ***)(v13 + 56);
        }
        else
        {
          v15 = *(int ***)(v13 + 56);
          v16 = *(int ***)(v13 + 48);
          LOBYTE(v67) = 1;
          v14 = __PAIR64__(HIDWORD(v61) ^ (unsigned int)_xmm, (unsigned int)v61 ^ (unsigned int)_xmm);
        }
        v63 = v16;
        v17 = v15;
        if ( v15 )
        {
          while ( 1 )
          {
            v18 = 0LL;
            if ( v17 == v15 )
              break;
            if ( v17 != v16 || (v18 = *(_QWORD *)(v13 + 80), (*(_BYTE *)(v18 + 32) & 0xC) != 0xC) )
            {
LABEL_15:
              v20 = 0LL;
              v21 = (char *)a3 + 64 * (__int64)**v17;
              v60 = *((_QWORD *)v21 + 4);
              if ( a2 && (*(_BYTE *)(v13 + 32) & 0xC) == 0xC )
              {
                v22 = *(_OWORD *)v21;
                v23 = (__int64)v9++ << 6;
                v20 = (char *)a3 + v23;
                a7 = v12 + 1;
                *(_OWORD *)v20 = v22;
                *((_OWORD *)v20 + 1) = *((_OWORD *)v21 + 1);
                *((_OWORD *)v20 + 2) = *((_OWORD *)v21 + 2);
                *((_OWORD *)v20 + 3) = *((_OWORD *)v21 + 3);
                *((_DWORD *)v20 + 11) = 0;
                *((_DWORD *)v20 + 3) = 0;
              }
              v24 = *((float *)&v14 + 1) * 0.5;
              v25 = COERCE_FLOAT(v14 ^ _xmm) * 0.5;
              if ( !v18 )
                goto LABEL_72;
              v26 = *(_DWORD *)(v18 + 32);
              v62 = *(_QWORD *)(v18 + 16);
              v27 = v62;
              if ( (v26 & 2) != 0 )
                v27 = __PAIR64__(HIDWORD(v62) ^ (unsigned int)_xmm, (unsigned int)v62 ^ (unsigned int)_xmm);
              v28 = (float)(v24 * *(float *)&v27) + (float)(v25 * *((float *)&v27 + 1));
              v25 = v28 * *((float *)&v27 + 1);
              v24 = v28 * *(float *)&v27;
              if ( (v26 & 0xC) != 0 )
              {
                v29 = *((float *)&v60 + 1);
                v30 = *(float *)&v60;
                v31 = (float)((float)(COERCE_FLOAT(v27 ^ _xmm) * *((float *)&v14 + 1))
                            + (float)(*((float *)&v27 + 1) * *(float *)&v14))
                    * 0.5;
                v32 = v31 * *((float *)&v14 + 1);
                v33 = v31 * *(float *)&v14;
                if ( (v26 & 4) != 0 )
                {
                  v30 = *(float *)&v60 - v33;
                  v29 = *((float *)&v60 + 1) - v32;
                }
                else if ( (v26 & 8) != 0 )
                {
                  v30 = *(float *)&v60 + v33;
                  v29 = *((float *)&v60 + 1) + v32;
                }
                if ( v20 )
                {
                  if ( (v26 & 8) != 0 )
                  {
                    v34 = *(float *)&v60 + v33;
                    v35 = *((float *)&v60 + 1) + v32;
LABEL_27:
                    if ( (*(_BYTE *)(v13 + 32) & 4) != 0 )
                    {
                      v30 = v30 - v24;
                      v29 = v29 - v25;
                    }
                    else if ( (*(_BYTE *)(v13 + 32) & 8) != 0 )
                    {
                      v30 = v30 + v24;
                      v29 = v29 + v25;
                    }
                    *((float *)v21 + 1) = v29;
                    v36 = v29 - *((float *)v21 + 9);
                    *(float *)v21 = v30;
                    v37 = v30 - *((float *)v21 + 8);
                    *((_DWORD *)v21 + 2) = 1065353216;
                    *((float *)v21 + 10) = sqrtf_0((float)(v36 * v36) + (float)(v37 * v37));
                    if ( v20 )
                    {
                      v38 = v35 + v25;
                      *((_DWORD *)v20 + 2) = 1065353216;
                      v39 = v34 + v24;
                      *((float *)v20 + 1) = v38;
                      v40 = v38 - *((float *)v20 + 9);
                      *(float *)v20 = v39;
                      *((float *)v20 + 10) = sqrtf_0(
                                               (float)(v40 * v40)
                                             + (float)((float)(v39 - *((float *)v20 + 8))
                                                     * (float)(v39 - *((float *)v20 + 8))));
                    }
                    v12 = a7;
                    a3 = v66;
                    a2 = v65;
                    goto LABEL_32;
                  }
                  if ( (v26 & 4) != 0 )
                  {
                    v34 = *(float *)&v60 - v33;
                    v35 = *((float *)&v60 + 1) - v32;
                    goto LABEL_27;
                  }
                }
              }
              else
              {
LABEL_72:
                v29 = *((float *)&v60 + 1);
                v30 = *(float *)&v60;
              }
              v34 = *(float *)&v60;
              v35 = *((float *)&v60 + 1);
              goto LABEL_27;
            }
            if ( v18 != *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL) )
            {
              v19 = (*(_BYTE *)(v13 + 32) & 0xC) == 12;
LABEL_14:
              if ( v19 )
                goto LABEL_15;
            }
LABEL_32:
            if ( (_BYTE)v67 )
              v17 = (int **)v17[7];
            else
              v17 = (int **)v17[8];
            v16 = v63;
            if ( !v17 )
              goto LABEL_35;
          }
          v18 = *(_QWORD *)(v13 + 72);
          if ( (*(_BYTE *)(v18 + 32) & 0xC) != 0xC )
            goto LABEL_15;
          if ( (*(_BYTE *)(v13 + 32) & 0xC) != 0xC )
            goto LABEL_32;
          v19 = v13 == *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL);
          goto LABEL_14;
        }
      }
LABEL_35:
      v13 = *(_QWORD *)(v13 + 80);
    }
    while ( v13 != *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL) && v13 );
    v10 = v58;
  }
  if ( a2 )
  {
    v41 = 0;
    v42 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL);
    if ( v42 )
    {
      v43 = a6;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v42 + 32) & 0xC) == 0xC )
        {
          if ( (*(_BYTE *)(v42 + 32) & 2) != 0 )
          {
            v44 = *(_QWORD *)(v42 + 56);
            v45 = 1;
          }
          else
          {
            v44 = *(_QWORD *)(v42 + 48);
            v45 = 0;
          }
          if ( v44 )
            break;
        }
LABEL_54:
        v42 = *(_QWORD *)(v42 + 80);
        if ( v42 == *(_QWORD *)(*((_QWORD *)v8 + 2) + 64LL) || !v42 )
          goto LABEL_4;
      }
      v46 = v41 + 1;
      while ( 1 )
      {
        v47 = v45 ? *(unsigned __int16 ***)(v44 + 56) : *(unsigned __int16 ***)(v44 + 64);
        if ( v47 )
          break;
        if ( (*(_BYTE *)(*(_QWORD *)(v42 + 80) + 32LL) & 0xC) != 0xC )
          goto LABEL_64;
LABEL_50:
        if ( v45 )
          v44 = *(_QWORD *)(v44 + 56);
        else
          v44 = *(_QWORD *)(v44 + 64);
        if ( !v44 )
        {
          v8 = this;
          goto LABEL_54;
        }
      }
      v48 = **(_WORD **)v44;
      v49 = **v47;
      v50 = v10;
      v51 = v10 + 1;
      v43[v50] = v41 + v59;
      v52 = v51++;
      v43[v52] = v59 + v46 % a7;
      v53 = v51++;
      v43[v53] = v49;
      v54 = v51++;
      v43[v54] = v41 + v59;
      v55 = v51++;
      v43[v55] = v49;
      v56 = v51;
      v10 = v51 + 1;
      v43[v56] = v48;
LABEL_64:
      ++v41;
      ++v46;
      goto LABEL_50;
    }
  }
LABEL_4:
  *a5 = v9;
  *a8 = v10;
}
