/*
 * XREFs of AlphaBlendBGRF @ 0x1C0250C08
 * Callers:
 *     RepDIB_CY @ 0x1C0008B70 (RepDIB_CY.c)
 *     BltDIB_CY @ 0x1C00F7080 (BltDIB_CY.c)
 *     ExpandDIB_CY @ 0x1C0252030 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0252A30 (ExpandDIB_CY_ExpCX.c)
 *     FastExpAA_CY @ 0x1C02539B0 (FastExpAA_CY.c)
 *     GrayExpandDIB_CY @ 0x1C0254320 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0254AE0 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0255770 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0256390 (ShrinkDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1C0256B50 (ShrinkDIB_CY_SrkCX.c)
 *     SkipDIB_CY @ 0x1C0257570 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C0257930 (TileDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AlphaBlendBGRF(int *a1)
{
  unsigned __int8 *v1; // rsi
  int v3; // r15d
  int v4; // r12d
  unsigned __int16 *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // rbx
  _BYTE *v11; // rbx
  unsigned __int8 *v12; // rsi
  int v13; // eax
  __int16 v14; // dx
  unsigned __int8 *v15; // r9
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // cx
  _BYTE *v18; // r14
  unsigned __int8 *v19; // rbx
  _BYTE *v20; // rsi
  unsigned __int8 v21; // dl
  int v22; // r8d
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 v27; // cl
  __int64 v28; // rax
  _BYTE *v29; // rbx
  _BYTE *v30; // rsi
  int v31; // edx
  int v32; // r8d
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // cl
  __int64 v38; // rax
  unsigned __int8 *v39; // rbx
  _BYTE *v40; // rsi
  int v41; // r8d
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  unsigned __int8 v45; // cl
  __int64 v46; // rax
  unsigned __int8 v47; // cl
  __int64 v48; // rax
  _BYTE *v49; // rbx
  _BYTE *v50; // rsi
  int v51; // r8d
  __int64 v52; // rax
  int v53; // ecx
  __int64 v54; // rax
  char v55; // cl
  __int64 v56; // rax
  char v57; // cl
  __int64 v58; // rax

  v1 = (unsigned __int8 *)*((_QWORD *)a1 + 67);
  v3 = *a1;
  v4 = a1[2] & 4;
  v5 = (unsigned __int16 *)*((_QWORD *)a1 + 68);
  v6 = *((_QWORD *)a1 + 69);
  v7 = *((_QWORD *)a1 + 42);
  LOBYTE(v8) = (*((__int64 (__fastcall **)(int *, unsigned __int8 *))a1 + 14))(a1 + 24, v1);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x80u) == 0 )
    {
      if ( v4 )
      {
        do
        {
          LODWORD(v8) = *v1++;
          LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1)) + *(_WORD *)(v7 + 2LL * ((int)v8 + 768));
          *v5 = v8;
          v5 += 2;
        }
        while ( (unsigned __int64)v5 < v6 );
      }
      else
      {
        v11 = v5 + 1;
        v12 = v1 + 2;
        do
        {
          *(v11 - 2) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v11 - 2))
                                        + *(_WORD *)(v7 + 2LL * (*(v12 - 2) + 768))) >> 8;
          v13 = (unsigned __int8)*v11 + 512;
          *(v11 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * ((unsigned __int8)*(v11 - 1) + 256))
                                        + *(_WORD *)(v7 + 2LL * (*(v12 - 1) + 768))) >> 8;
          v14 = *(_WORD *)(v7 + 2LL * v13);
          LODWORD(v8) = *v12;
          v12 += 3;
          *v11 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * ((int)v8 + 768)) + v14) >> 8;
          v11 += 4;
          LOBYTE(v8) = (_BYTE)v11 - 2;
        }
        while ( (unsigned __int64)(v11 - 2) < v6 );
      }
    }
    else if ( v4 )
    {
      do
      {
        if ( *((_BYTE *)v5 + 3) )
        {
          LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1)) + *(_WORD *)(v7 + 2LL * (*v1 + 768));
          *v5 = v8;
        }
        ++v1;
        v5 += 2;
      }
      while ( (unsigned __int64)v5 < v6 );
    }
    else
    {
      v9 = v1 + 2;
      v10 = (unsigned __int8 *)v5 + 1;
      do
      {
        if ( v10[2] )
        {
          *(v10 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *(v10 - 1)) + *(_WORD *)(v7 + 2LL * (*(v9 - 2) + 768))) >> 8;
          *v10 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (*v10 + 256)) + *(_WORD *)(v7 + 2LL * (*(v9 - 1) + 768))) >> 8;
          v10[1] = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (v10[1] + 512)) + *(_WORD *)(v7 + 2LL * (*v9 + 768))) >> 8;
        }
        v10 += 4;
        v9 += 3;
        LOBYTE(v8) = (_BYTE)v10 - 1;
      }
      while ( (unsigned __int64)(v10 - 1) < v6 );
    }
    return v8;
  }
  LOBYTE(v8) = (*((__int64 (__fastcall **)(int *))a1 + 30))(a1);
  v15 = (unsigned __int8 *)*((_QWORD *)a1 + 43);
  if ( v4 )
  {
    if ( (v3 & 0x80u) != 0 )
    {
      while ( 1 )
      {
        if ( *((_BYTE *)v5 + 3) )
        {
          v16 = GrayIdxWORD[*v1];
          LOBYTE(v8) = *v15;
          if ( !*v15 )
            goto LABEL_25;
          if ( (_BYTE)v8 != 0xFF )
            break;
        }
LABEL_26:
        ++v15;
        ++v1;
        v5 += 2;
        if ( (unsigned __int64)v5 >= v6 )
          return v8;
      }
      LODWORD(v8) = *v5 - v16;
      v16 += (int)(v8 * (GrayIdxWORD[*v15] >> 4) + 2048) >> 12;
LABEL_25:
      *v5 = v16;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v8 = *v1++;
      v17 = GrayIdxWORD[v8];
      LOBYTE(v8) = *v15;
      if ( !*v15 )
        goto LABEL_31;
      if ( (_BYTE)v8 != 0xFF )
        break;
LABEL_32:
      ++v15;
      v5 += 2;
      if ( (unsigned __int64)v5 >= v6 )
        return v8;
    }
    LODWORD(v8) = *v5 - v17;
    v17 += (int)(v8 * (GrayIdxWORD[*v15] >> 4) + 2048) >> 12;
LABEL_31:
    *v5 = v17;
    goto LABEL_32;
  }
  if ( (v3 & 0x100000) != 0 )
  {
    v18 = (_BYTE *)(*((_QWORD *)a1 + 17) + 3LL);
    if ( (v3 & 0x80u) == 0 )
    {
      v29 = v5 + 1;
      v30 = v1 + 2;
      do
      {
        v31 = *v15++;
        if ( (_BYTE)v31 )
        {
          if ( v31 == 255 )
          {
            v36 = (unsigned __int8)*(v29 - 1);
            *(v29 - 2) = *(_BYTE *)((unsigned __int8)*(v29 - 2) + v7);
            v37 = *(_BYTE *)(v36 + v7);
            v38 = (unsigned __int8)*v29;
            *(v29 - 1) = v37;
            *v29 = *(_BYTE *)(v38 + v7);
            *v18 = -1;
          }
          else
          {
            v32 = GrayIdxWORD[(unsigned __int8)v31];
            *v18 = v31 + *v18 - ((v32 * (unsigned int)(unsigned __int8)*v18 + 0x8000) >> 16);
            v33 = (unsigned __int8)*(v29 - 1) + 256;
            *(v29 - 2) = *(v30 - 2)
                       + ((v32
                         * (*(unsigned __int8 *)((unsigned __int8)*(v29 - 2) + v7)
                          - (unsigned int)(unsigned __int8)*(v30 - 2))
                         + 0x8000) >> 16);
            v34 = *(unsigned __int8 *)(v33 + v7);
            v35 = (unsigned __int8)*v29 + 512;
            *(v29 - 1) = *(v30 - 1) + ((v32 * (v34 - (unsigned int)(unsigned __int8)*(v30 - 1)) + 0x8000) >> 16);
            *v29 = *v30
                 + ((v32 * (*(unsigned __int8 *)(v35 + v7) - (unsigned int)(unsigned __int8)*v30) + 0x8000) >> 16);
          }
        }
        else
        {
          *((_WORD *)v29 - 1) = *((_WORD *)v30 - 1);
          *v29 = *v30;
        }
        v29 += 4;
        v18 += 4;
        v30 += 3;
        LOBYTE(v8) = (_BYTE)v29 - 2;
      }
      while ( (unsigned __int64)(v29 - 2) < v6 );
    }
    else
    {
      v19 = (unsigned __int8 *)v5 + 1;
      v20 = v1 + 2;
      do
      {
        if ( v19[2] )
        {
          v21 = *v15;
          if ( *v15 )
          {
            if ( v21 == 0xFF )
            {
              v26 = *v19;
              *(v19 - 1) = *(_BYTE *)(*(v19 - 1) + v7);
              v27 = *(_BYTE *)(v26 + v7);
              v28 = v19[1];
              *v19 = v27;
              v19[1] = *(_BYTE *)(v28 + v7);
              *v18 = -1;
            }
            else
            {
              v22 = GrayIdxWORD[v21];
              *v18 = v21 + *v18 - ((v22 * (unsigned int)(unsigned __int8)*v18 + 0x8000) >> 16);
              v23 = *v19 + 256;
              *(v19 - 1) = *(v20 - 2)
                         + ((v22 * (*(unsigned __int8 *)(*(v19 - 1) + v7) - (unsigned int)(unsigned __int8)*(v20 - 2))
                           + 0x8000) >> 16);
              v24 = *(unsigned __int8 *)(v23 + v7);
              v25 = v19[1] + 512;
              *v19 = *(v20 - 1) + ((v22 * (v24 - (unsigned int)(unsigned __int8)*(v20 - 1)) + 0x8000) >> 16);
              v19[1] = *v20
                     + ((v22 * (*(unsigned __int8 *)(v25 + v7) - (unsigned int)(unsigned __int8)*v20) + 0x8000) >> 16);
            }
          }
          else
          {
            *(_WORD *)(v19 - 1) = *((_WORD *)v20 - 1);
            v19[1] = *v20;
          }
        }
        v19 += 4;
        ++v15;
        v18 += 4;
        v20 += 3;
        LOBYTE(v8) = (_BYTE)v19 - 1;
      }
      while ( (unsigned __int64)(v19 - 1) < v6 );
    }
  }
  else if ( (v3 & 0x80u) == 0 )
  {
    v49 = v5 + 1;
    v50 = v1 + 2;
    do
    {
      if ( *v15 )
      {
        if ( *v15 == 0xFF )
        {
          v56 = (unsigned __int8)*(v49 - 1);
          *(v49 - 2) = *(_BYTE *)((unsigned __int8)*(v49 - 2) + v7);
          v57 = *(_BYTE *)(v56 + v7);
          v58 = (unsigned __int8)*v49;
          *(v49 - 1) = v57;
          v55 = *(_BYTE *)(v58 + v7);
        }
        else
        {
          v51 = GrayIdxWORD[*v15];
          v52 = (unsigned __int8)*(v49 - 1) + 256;
          *(v49 - 2) = *(v50 - 2)
                     + ((v51
                       * (*(unsigned __int8 *)((unsigned __int8)*(v49 - 2) + v7)
                        - (unsigned int)(unsigned __int8)*(v50 - 2))
                       + 0x8000) >> 16);
          v53 = *(unsigned __int8 *)(v52 + v7);
          v54 = (unsigned __int8)*v49 + 512;
          *(v49 - 1) = *(v50 - 1) + ((v51 * (v53 - (unsigned int)(unsigned __int8)*(v50 - 1)) + 0x8000) >> 16);
          v55 = *v50 + ((v51 * (*(unsigned __int8 *)(v54 + v7) - (unsigned int)(unsigned __int8)*v50) + 0x8000) >> 16);
        }
        *v49 = v55;
      }
      else
      {
        *((_WORD *)v49 - 1) = *((_WORD *)v50 - 1);
        *v49 = *v50;
      }
      v49 += 4;
      ++v15;
      v50 += 3;
      LOBYTE(v8) = (_BYTE)v49 - 2;
    }
    while ( (unsigned __int64)(v49 - 2) < v6 );
  }
  else
  {
    v39 = (unsigned __int8 *)v5 + 1;
    v40 = v1 + 2;
    do
    {
      if ( v39[2] )
      {
        if ( *v15 )
        {
          if ( *v15 == 0xFF )
          {
            v46 = *v39;
            *(v39 - 1) = *(_BYTE *)(*(v39 - 1) + v7);
            v47 = *(_BYTE *)(v46 + v7);
            v48 = v39[1];
            *v39 = v47;
            v45 = *(_BYTE *)(v48 + v7);
          }
          else
          {
            v41 = GrayIdxWORD[*v15];
            v42 = *v39 + 256;
            *(v39 - 1) = *(v40 - 2)
                       + ((v41 * (*(unsigned __int8 *)(*(v39 - 1) + v7) - (unsigned int)(unsigned __int8)*(v40 - 2))
                         + 0x8000) >> 16);
            v43 = *(unsigned __int8 *)(v42 + v7);
            v44 = v39[1] + 512;
            *v39 = *(v40 - 1) + ((v41 * (v43 - (unsigned int)(unsigned __int8)*(v40 - 1)) + 0x8000) >> 16);
            v45 = *v40 + ((v41 * (*(unsigned __int8 *)(v44 + v7) - (unsigned int)(unsigned __int8)*v40) + 0x8000) >> 16);
          }
          v39[1] = v45;
        }
        else
        {
          *(_WORD *)(v39 - 1) = *((_WORD *)v40 - 1);
          v39[1] = *v40;
        }
      }
      v39 += 4;
      ++v15;
      v40 += 3;
      LOBYTE(v8) = (_BYTE)v39 - 1;
    }
    while ( (unsigned __int64)(v39 - 1) < v6 );
  }
  return v8;
}
