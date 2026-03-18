/*
 * XREFs of AlphaBlendBGRF @ 0x1C0253D48
 * Callers:
 *     RepDIB_CY @ 0x1C0006840 (RepDIB_CY.c)
 *     BltDIB_CY @ 0x1C000CED0 (BltDIB_CY.c)
 *     ExpandDIB_CY @ 0x1C0255130 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0255AC0 (ExpandDIB_CY_ExpCX.c)
 *     FastExpAA_CY @ 0x1C02569B0 (FastExpAA_CY.c)
 *     GrayExpandDIB_CY @ 0x1C0257320 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0257AC0 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0258720 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0259340 (ShrinkDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1C0259AF0 (ShrinkDIB_CY_SrkCX.c)
 *     SkipDIB_CY @ 0x1C025A4E0 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C025A8A0 (TileDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rdx
  _BYTE *v12; // rbx
  unsigned __int8 *v13; // rsi
  unsigned __int8 *v14; // r9
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // cx
  _BYTE *v17; // r14
  unsigned __int8 *v18; // rbx
  _BYTE *v19; // rsi
  unsigned __int8 v20; // dl
  int v21; // r8d
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // cl
  __int64 v27; // rax
  _BYTE *v28; // rbx
  _BYTE *v29; // rsi
  int v30; // edx
  int v31; // r8d
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // cl
  __int64 v37; // rax
  unsigned __int8 *v38; // rbx
  _BYTE *v39; // rsi
  int v40; // r8d
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  unsigned __int8 v44; // cl
  __int64 v45; // rax
  unsigned __int8 v46; // cl
  __int64 v47; // rax
  _BYTE *v48; // rbx
  _BYTE *v49; // rsi
  int v50; // r8d
  __int64 v51; // rax
  int v52; // ecx
  __int64 v53; // rax
  char v54; // cl
  __int64 v55; // rax
  char v56; // cl
  __int64 v57; // rax

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
          v11 = *v1++;
          LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1)) + *(_WORD *)(v7 + 2 * v11 + 1536);
          *v5 = v8;
          v5 += 2;
        }
        while ( (unsigned __int64)v5 < v6 );
      }
      else
      {
        v12 = v5 + 1;
        v13 = v1 + 2;
        do
        {
          *(v12 - 2) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v12 - 2))
                                        + *(_WORD *)(v7 + 2LL * *(v13 - 2) + 1536)) >> 8;
          *(v12 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v12 - 1) + 512)
                                        + *(_WORD *)(v7 + 2LL * *(v13 - 1) + 1536)) >> 8;
          v8 = *v13;
          v13 += 3;
          *v12 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*v12 + 1024) + *(_WORD *)(v7 + 2 * v8 + 1536)) >> 8;
          v12 += 4;
          LOBYTE(v8) = (_BYTE)v12 - 2;
        }
        while ( (unsigned __int64)(v12 - 2) < v6 );
      }
    }
    else if ( v4 )
    {
      do
      {
        if ( *((_BYTE *)v5 + 3) )
        {
          LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1)) + *(_WORD *)(v7 + 2LL * *v1 + 1536);
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
          *(v10 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *(v10 - 1)) + *(_WORD *)(v7 + 2LL * *(v9 - 2) + 1536)) >> 8;
          *v10 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *v10 + 512) + *(_WORD *)(v7 + 2LL * *(v9 - 1) + 1536)) >> 8;
          v10[1] = (unsigned __int16)(*(_WORD *)(v7 + 2LL * v10[1] + 1024) + *(_WORD *)(v7 + 2LL * *v9 + 1536)) >> 8;
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
  v14 = (unsigned __int8 *)*((_QWORD *)a1 + 43);
  if ( v4 )
  {
    if ( (v3 & 0x80u) != 0 )
    {
      while ( 1 )
      {
        if ( *((_BYTE *)v5 + 3) )
        {
          v15 = GrayIdxWORD[*v1];
          LOBYTE(v8) = *v14;
          if ( !*v14 )
            goto LABEL_25;
          if ( (_BYTE)v8 != 0xFF )
            break;
        }
LABEL_26:
        ++v14;
        ++v1;
        v5 += 2;
        if ( (unsigned __int64)v5 >= v6 )
          return v8;
      }
      LODWORD(v8) = *v5 - v15;
      v15 += (int)(v8 * (GrayIdxWORD[*v14] >> 4) + 2048) >> 12;
LABEL_25:
      *v5 = v15;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v8 = *v1++;
      v16 = GrayIdxWORD[v8];
      LOBYTE(v8) = *v14;
      if ( !*v14 )
        goto LABEL_31;
      if ( (_BYTE)v8 != 0xFF )
        break;
LABEL_32:
      ++v14;
      v5 += 2;
      if ( (unsigned __int64)v5 >= v6 )
        return v8;
    }
    LODWORD(v8) = *v5 - v16;
    v16 += (int)(v8 * (GrayIdxWORD[*v14] >> 4) + 2048) >> 12;
LABEL_31:
    *v5 = v16;
    goto LABEL_32;
  }
  if ( (v3 & 0x100000) != 0 )
  {
    v17 = (_BYTE *)(*((_QWORD *)a1 + 17) + 3LL);
    if ( (v3 & 0x80u) == 0 )
    {
      v28 = v5 + 1;
      v29 = v1 + 2;
      do
      {
        v30 = *v14++;
        if ( (_BYTE)v30 )
        {
          if ( v30 == 255 )
          {
            v35 = (unsigned __int8)*(v28 - 1);
            *(v28 - 2) = *(_BYTE *)((unsigned __int8)*(v28 - 2) + v7);
            v36 = *(_BYTE *)(v35 + v7);
            v37 = (unsigned __int8)*v28;
            *(v28 - 1) = v36;
            *v28 = *(_BYTE *)(v37 + v7);
            *v17 = -1;
          }
          else
          {
            v31 = GrayIdxWORD[(unsigned __int8)v30];
            *v17 = v30 + *v17 - ((v31 * (unsigned int)(unsigned __int8)*v17 + 0x8000) >> 16);
            v32 = (unsigned __int8)*(v28 - 1);
            *(v28 - 2) = *(v29 - 2)
                       + ((v31
                         * (*(unsigned __int8 *)((unsigned __int8)*(v28 - 2) + v7)
                          - (unsigned int)(unsigned __int8)*(v29 - 2))
                         + 0x8000) >> 16);
            v33 = *(unsigned __int8 *)(v32 + v7 + 256);
            v34 = (unsigned __int8)*v28;
            *(v28 - 1) = *(v29 - 1) + ((v31 * (v33 - (unsigned int)(unsigned __int8)*(v29 - 1)) + 0x8000) >> 16);
            *v28 = *v29
                 + ((v31 * (*(unsigned __int8 *)(v34 + v7 + 512) - (unsigned int)(unsigned __int8)*v29) + 0x8000) >> 16);
          }
        }
        else
        {
          *((_WORD *)v28 - 1) = *((_WORD *)v29 - 1);
          *v28 = *v29;
        }
        v28 += 4;
        v17 += 4;
        v29 += 3;
        LOBYTE(v8) = (_BYTE)v28 - 2;
      }
      while ( (unsigned __int64)(v28 - 2) < v6 );
    }
    else
    {
      v18 = (unsigned __int8 *)v5 + 1;
      v19 = v1 + 2;
      do
      {
        if ( v18[2] )
        {
          v20 = *v14;
          if ( *v14 )
          {
            if ( v20 == 0xFF )
            {
              v25 = *v18;
              *(v18 - 1) = *(_BYTE *)(*(v18 - 1) + v7);
              v26 = *(_BYTE *)(v25 + v7);
              v27 = v18[1];
              *v18 = v26;
              v18[1] = *(_BYTE *)(v27 + v7);
              *v17 = -1;
            }
            else
            {
              v21 = GrayIdxWORD[v20];
              *v17 = v20 + *v17 - ((v21 * (unsigned int)(unsigned __int8)*v17 + 0x8000) >> 16);
              v22 = *v18;
              *(v18 - 1) = *(v19 - 2)
                         + ((v21 * (*(unsigned __int8 *)(*(v18 - 1) + v7) - (unsigned int)(unsigned __int8)*(v19 - 2))
                           + 0x8000) >> 16);
              v23 = *(unsigned __int8 *)(v22 + v7 + 256);
              v24 = v18[1];
              *v18 = *(v19 - 1) + ((v21 * (v23 - (unsigned int)(unsigned __int8)*(v19 - 1)) + 0x8000) >> 16);
              v18[1] = *v19
                     + ((v21 * (*(unsigned __int8 *)(v24 + v7 + 512) - (unsigned int)(unsigned __int8)*v19) + 0x8000) >> 16);
            }
          }
          else
          {
            *(_WORD *)(v18 - 1) = *((_WORD *)v19 - 1);
            v18[1] = *v19;
          }
        }
        v18 += 4;
        ++v14;
        v17 += 4;
        v19 += 3;
        LOBYTE(v8) = (_BYTE)v18 - 1;
      }
      while ( (unsigned __int64)(v18 - 1) < v6 );
    }
  }
  else if ( (v3 & 0x80u) == 0 )
  {
    v48 = v5 + 1;
    v49 = v1 + 2;
    do
    {
      if ( *v14 )
      {
        if ( *v14 == 0xFF )
        {
          v55 = (unsigned __int8)*(v48 - 1);
          *(v48 - 2) = *(_BYTE *)((unsigned __int8)*(v48 - 2) + v7);
          v56 = *(_BYTE *)(v55 + v7);
          v57 = (unsigned __int8)*v48;
          *(v48 - 1) = v56;
          v54 = *(_BYTE *)(v57 + v7);
        }
        else
        {
          v50 = GrayIdxWORD[*v14];
          v51 = (unsigned __int8)*(v48 - 1);
          *(v48 - 2) = *(v49 - 2)
                     + ((v50
                       * (*(unsigned __int8 *)((unsigned __int8)*(v48 - 2) + v7)
                        - (unsigned int)(unsigned __int8)*(v49 - 2))
                       + 0x8000) >> 16);
          v52 = *(unsigned __int8 *)(v51 + v7 + 256);
          v53 = (unsigned __int8)*v48;
          *(v48 - 1) = *(v49 - 1) + ((v50 * (v52 - (unsigned int)(unsigned __int8)*(v49 - 1)) + 0x8000) >> 16);
          v54 = *v49
              + ((v50 * (*(unsigned __int8 *)(v53 + v7 + 512) - (unsigned int)(unsigned __int8)*v49) + 0x8000) >> 16);
        }
        *v48 = v54;
      }
      else
      {
        *((_WORD *)v48 - 1) = *((_WORD *)v49 - 1);
        *v48 = *v49;
      }
      v48 += 4;
      ++v14;
      v49 += 3;
      LOBYTE(v8) = (_BYTE)v48 - 2;
    }
    while ( (unsigned __int64)(v48 - 2) < v6 );
  }
  else
  {
    v38 = (unsigned __int8 *)v5 + 1;
    v39 = v1 + 2;
    do
    {
      if ( v38[2] )
      {
        if ( *v14 )
        {
          if ( *v14 == 0xFF )
          {
            v45 = *v38;
            *(v38 - 1) = *(_BYTE *)(*(v38 - 1) + v7);
            v46 = *(_BYTE *)(v45 + v7);
            v47 = v38[1];
            *v38 = v46;
            v44 = *(_BYTE *)(v47 + v7);
          }
          else
          {
            v40 = GrayIdxWORD[*v14];
            v41 = *v38;
            *(v38 - 1) = *(v39 - 2)
                       + ((v40 * (*(unsigned __int8 *)(*(v38 - 1) + v7) - (unsigned int)(unsigned __int8)*(v39 - 2))
                         + 0x8000) >> 16);
            v42 = *(unsigned __int8 *)(v41 + v7 + 256);
            v43 = v38[1];
            *v38 = *(v39 - 1) + ((v40 * (v42 - (unsigned int)(unsigned __int8)*(v39 - 1)) + 0x8000) >> 16);
            v44 = *v39
                + ((v40 * (*(unsigned __int8 *)(v43 + v7 + 512) - (unsigned int)(unsigned __int8)*v39) + 0x8000) >> 16);
          }
          v38[1] = v44;
        }
        else
        {
          *(_WORD *)(v38 - 1) = *((_WORD *)v39 - 1);
          v38[1] = *v39;
        }
      }
      v38 += 4;
      ++v14;
      v39 += 3;
      LOBYTE(v8) = (_BYTE)v38 - 1;
    }
    while ( (unsigned __int64)(v38 - 1) < v6 );
  }
  return v8;
}
