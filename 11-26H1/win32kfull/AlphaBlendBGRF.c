/*
 * XREFs of AlphaBlendBGRF @ 0x1400F1A88
 * Callers:
 *     RepDIB_CY @ 0x1400F06B0 (RepDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1400F09B0 (ShrinkDIB_CY_SrkCX.c)
 *     BltDIB_CY @ 0x1400F16E0 (BltDIB_CY.c)
 *     FastExpAA_CY @ 0x1400F20D0 (FastExpAA_CY.c)
 *     ShrinkDIB_CY @ 0x1400F3480 (ShrinkDIB_CY.c)
 *     GrayShrinkDIB_CY @ 0x1400F3CD0 (GrayShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1400F4320 (SkipDIB_CY.c)
 *     ExpandDIB_CY @ 0x140199E90 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1401DF950 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x140268CD0 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1403097F0 (GrayExpandDIB_CY_ExpCX.c)
 *     TileDIB_CY @ 0x14030A360 (TileDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int16 __fastcall AlphaBlendBGRF(int *a1)
{
  unsigned __int8 *v1; // rbx
  int v3; // r13d
  int v4; // r12d
  unsigned __int16 *v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int8 *v9; // rbx
  unsigned __int8 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rdi
  unsigned __int8 *v14; // rbx
  unsigned __int8 *v15; // r10
  int v16; // r8d
  __int64 v17; // rax
  int v18; // r8d
  _BYTE *v19; // r14
  unsigned __int8 *v20; // rdi
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 v27; // cl
  __int64 v28; // rax
  _BYTE *v29; // rdi
  __int64 v30; // rdx
  int v31; // r8d
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // cl
  __int64 v37; // rax
  unsigned __int8 *v38; // rdi
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  unsigned __int8 v44; // cl
  __int64 v45; // rax
  unsigned __int8 v46; // cl
  __int64 v47; // rax
  _BYTE *v48; // rdi
  __int64 v49; // rax
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
  LOWORD(v8) = (*((__int64 (__fastcall **)(int *, unsigned __int8 *))a1 + 14))(a1 + 24, v1);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x80) != 0 )
    {
      if ( v4 )
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
            v11 = v10[1];
            *v10 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *v10 + 512) + *(_WORD *)(v7 + 2LL * *(v9 - 1) + 1536)) >> 8;
            v10[1] = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *v9 + 1536) + *(_WORD *)(v7 + 2 * v11 + 1024)) >> 8;
          }
          v10 += 4;
          v9 += 3;
          LOWORD(v8) = (_WORD)v10 - 1;
        }
        while ( (unsigned __int64)(v10 - 1) < v6 );
      }
    }
    else if ( v4 )
    {
      do
      {
        v12 = *v1++;
        LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1)) + *(_WORD *)(v7 + 2 * v12 + 1536);
        *v5 = v8;
        v5 += 2;
      }
      while ( (unsigned __int64)v5 < v6 );
    }
    else
    {
      v13 = v5 + 1;
      v14 = v1 + 2;
      do
      {
        *(v13 - 2) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v13 - 2))
                                      + *(_WORD *)(v7 + 2LL * *(v14 - 2) + 1536)) >> 8;
        *(v13 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v13 - 1) + 512)
                                      + *(_WORD *)(v7 + 2LL * *(v14 - 1) + 1536)) >> 8;
        v8 = *v14;
        v14 += 3;
        *v13 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*v13 + 1024) + *(_WORD *)(v7 + 2 * v8 + 1536)) >> 8;
        v13 += 4;
        LOWORD(v8) = (_WORD)v13 - 2;
      }
      while ( (unsigned __int64)(v13 - 2) < v6 );
    }
  }
  else
  {
    LOWORD(v8) = (*((__int64 (__fastcall **)(int *))a1 + 30))(a1);
    v15 = (unsigned __int8 *)*((_QWORD *)a1 + 43);
    if ( v4 )
    {
      if ( (v3 & 0x80) != 0 )
      {
        do
        {
          if ( *((_BYTE *)v5 + 3) )
          {
            v16 = (unsigned __int16)GrayIdxWORD[*v1];
            v8 = *v15;
            if ( (_BYTE)v8 )
            {
              if ( (_BYTE)v8 != 0xFF )
                *v5 = v16 + (((*v5 - v16) * ((unsigned __int16)GrayIdxWORD[v8] >> 4) + 2048) >> 12);
            }
            else
            {
              *v5 = v16;
            }
          }
          ++v15;
          ++v1;
          v5 += 2;
        }
        while ( (unsigned __int64)v5 < v6 );
      }
      else
      {
        do
        {
          v17 = *v1++;
          v18 = (unsigned __int16)GrayIdxWORD[v17];
          v8 = *v15;
          if ( (_BYTE)v8 )
          {
            if ( (_BYTE)v8 != 0xFF )
              *v5 = v18 + (((*v5 - v18) * ((unsigned __int16)GrayIdxWORD[v8] >> 4) + 2048) >> 12);
          }
          else
          {
            *v5 = v18;
          }
          ++v15;
          v5 += 2;
        }
        while ( (unsigned __int64)v5 < v6 );
      }
    }
    else if ( (v3 & 0x100000) != 0 )
    {
      v19 = (_BYTE *)(*((_QWORD *)a1 + 17) + 3LL);
      if ( (v3 & 0x80) != 0 )
      {
        v20 = (unsigned __int8 *)v5 + 1;
        do
        {
          if ( v20[2] )
          {
            v21 = *v15;
            if ( (_BYTE)v21 )
            {
              if ( (_BYTE)v21 == 0xFF )
              {
                v26 = *v20;
                *(v20 - 1) = *(_BYTE *)(*(v20 - 1) + v7);
                v27 = *(_BYTE *)(v26 + v7);
                v28 = v20[1];
                *v20 = v27;
                v20[1] = *(_BYTE *)(v28 + v7);
                *v19 = -1;
              }
              else
              {
                v22 = (unsigned __int16)GrayIdxWORD[v21];
                *v19 = v21 + *v19 - ((v22 * (unsigned int)(unsigned __int8)*v19 + 0x8000) >> 16);
                v23 = *v20;
                *(v20 - 1) = *v1 + ((v22 * (*(unsigned __int8 *)(*(v20 - 1) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
                v24 = *(unsigned __int8 *)(v23 + v7 + 256);
                v25 = v20[1];
                *v20 = v1[1] + ((v22 * (v24 - (unsigned int)v1[1]) + 0x8000) >> 16);
                v20[1] = v1[2] + ((v22 * (*(unsigned __int8 *)(v25 + v7 + 512) - (unsigned int)v1[2]) + 0x8000) >> 16);
              }
            }
            else
            {
              *(_WORD *)(v20 - 1) = *(_WORD *)v1;
              v20[1] = v1[2];
            }
          }
          v20 += 4;
          ++v15;
          v19 += 4;
          v1 += 3;
          LOWORD(v8) = (_WORD)v20 - 1;
        }
        while ( (unsigned __int64)(v20 - 1) < v6 );
      }
      else
      {
        v29 = v5 + 1;
        do
        {
          v30 = *v15++;
          if ( (_BYTE)v30 )
          {
            if ( (_BYTE)v30 == 0xFF )
            {
              v35 = (unsigned __int8)*(v29 - 1);
              *(v29 - 2) = *(_BYTE *)((unsigned __int8)*(v29 - 2) + v7);
              v36 = *(_BYTE *)(v35 + v7);
              v37 = (unsigned __int8)*v29;
              *(v29 - 1) = v36;
              *v29 = *(_BYTE *)(v37 + v7);
              *v19 = -1;
            }
            else
            {
              v31 = (unsigned __int16)GrayIdxWORD[v30];
              *v19 += v30 - ((v31 * (unsigned int)(unsigned __int8)*v19 + 0x8000) >> 16);
              v32 = (unsigned __int8)*(v29 - 1);
              *(v29 - 2) = *v1
                         + ((v31 * (*(unsigned __int8 *)((unsigned __int8)*(v29 - 2) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
              v33 = *(unsigned __int8 *)(v32 + v7 + 256);
              v34 = (unsigned __int8)*v29;
              *(v29 - 1) = v1[1] + ((v31 * (v33 - (unsigned int)v1[1]) + 0x8000) >> 16);
              *v29 = v1[2] + ((v31 * (*(unsigned __int8 *)(v34 + v7 + 512) - (unsigned int)v1[2]) + 0x8000) >> 16);
            }
          }
          else
          {
            *((_WORD *)v29 - 1) = *(_WORD *)v1;
            *v29 = v1[2];
          }
          v29 += 4;
          v19 += 4;
          v1 += 3;
          LOWORD(v8) = (_WORD)v29 - 2;
        }
        while ( (unsigned __int64)(v29 - 2) < v6 );
      }
    }
    else if ( (v3 & 0x80) != 0 )
    {
      v38 = (unsigned __int8 *)v5 + 1;
      do
      {
        if ( v38[2] )
        {
          v39 = *v15;
          if ( (_BYTE)v39 )
          {
            if ( (_BYTE)v39 == 0xFF )
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
              v40 = (unsigned __int16)GrayIdxWORD[v39];
              v41 = *v38;
              *(v38 - 1) = *v1 + ((v40 * (*(unsigned __int8 *)(*(v38 - 1) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
              v42 = *(unsigned __int8 *)(v41 + v7 + 256);
              v43 = v38[1];
              *v38 = v1[1] + ((v40 * (v42 - (unsigned int)v1[1]) + 0x8000) >> 16);
              v44 = v1[2] + ((v40 * (*(unsigned __int8 *)(v43 + v7 + 512) - (unsigned int)v1[2]) + 0x8000) >> 16);
            }
            v38[1] = v44;
          }
          else
          {
            *(_WORD *)(v38 - 1) = *(_WORD *)v1;
            v38[1] = v1[2];
          }
        }
        v38 += 4;
        ++v15;
        v1 += 3;
        LOWORD(v8) = (_WORD)v38 - 1;
      }
      while ( (unsigned __int64)(v38 - 1) < v6 );
    }
    else
    {
      v48 = v5 + 1;
      do
      {
        v49 = *v15;
        if ( (_BYTE)v49 )
        {
          if ( (_BYTE)v49 == 0xFF )
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
            v50 = (unsigned __int16)GrayIdxWORD[v49];
            v51 = (unsigned __int8)*(v48 - 1);
            *(v48 - 2) = *v1
                       + ((v50 * (*(unsigned __int8 *)((unsigned __int8)*(v48 - 2) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
            v52 = *(unsigned __int8 *)(v51 + v7 + 256);
            v53 = (unsigned __int8)*v48;
            *(v48 - 1) = v1[1] + ((v50 * (v52 - (unsigned int)v1[1]) + 0x8000) >> 16);
            v54 = v1[2] + ((v50 * (*(unsigned __int8 *)(v53 + v7 + 512) - (unsigned int)v1[2]) + 0x8000) >> 16);
          }
          *v48 = v54;
        }
        else
        {
          *((_WORD *)v48 - 1) = *(_WORD *)v1;
          *v48 = v1[2];
        }
        v48 += 4;
        ++v15;
        v1 += 3;
        LOWORD(v8) = (_WORD)v48 - 2;
      }
      while ( (unsigned __int64)(v48 - 2) < v6 );
    }
  }
  return v8;
}
