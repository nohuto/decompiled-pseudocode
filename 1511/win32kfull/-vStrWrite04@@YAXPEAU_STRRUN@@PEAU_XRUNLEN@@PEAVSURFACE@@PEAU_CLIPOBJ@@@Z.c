/*
 * XREFs of ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BB400
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002DCE8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002DD54 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

void __fastcall vStrWrite04(struct _STRRUN *a1, LONG *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // r12
  LONG *v5; // rsi
  struct _XRUNLEN *v7; // r13
  LONG *v8; // r14
  __int64 v9; // rcx
  int v10; // r11d
  int v11; // r13d
  int v12; // r9d
  int *v13; // r8
  int v14; // ebx
  int *v15; // r10
  int *v16; // r14
  __int64 v17; // r12
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // r10d
  int v22; // ecx
  int v23; // r13d
  int v24; // r12d
  int v25; // r13d
  int v26; // r12d
  int v27; // edx
  int v28; // r11d
  int v29; // r9d
  int v30; // ecx
  int v31; // r11d
  int v32; // r9d
  int v33; // edx
  __int64 v34; // rdx
  char *v35; // r9
  size_t v36; // r13
  int v37; // r12d
  char *v38; // rbx
  int v39; // r8d
  int *v40; // rcx
  int v41; // r9d
  int j; // edx
  LONG v43; // ebx
  LONG v44; // r14d
  __int64 v45; // rcx
  LONG v46; // r10d
  int v47; // r11d
  int *v48; // r12
  int v49; // r14d
  int v50; // r13d
  int *v51; // r9
  __int64 v52; // r8
  LONG v53; // [rsp+30h] [rbp-50h]
  __int64 i; // [rsp+38h] [rbp-48h]
  __int64 v55; // [rsp+38h] [rbp-48h]
  int v56; // [rsp+40h] [rbp-40h]
  int v57; // [rsp+40h] [rbp-40h]
  int v58; // [rsp+44h] [rbp-3Ch]
  LONG v59; // [rsp+44h] [rbp-3Ch]
  LONG *v60; // [rsp+48h] [rbp-38h]
  struct _RECTL si128; // [rsp+50h] [rbp-30h] BYREF
  __int64 v62; // [rsp+60h] [rbp-20h]
  int *v63; // [rsp+68h] [rbp-18h]
  LONG *v64; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v4 = (XCLIPOBJ *)a4;
    v64 = (LONG *)((char *)a1 + 8);
    v5 = (LONG *)((char *)a1 + 8);
    v60 = (LONG *)((char *)a1 + 8);
    v7 = (struct _XRUNLEN *)a2;
    v8 = (LONG *)a1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v43 = *v8;
      v44 = v8[1];
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v53 = v43;
      XCLIPOBJ::vFindScan(v4, &si128, v43);
      v45 = *((_QWORD *)a3 + 10) + v43 * *((_DWORD *)a3 + 22);
      v62 = v45;
      while ( v44 )
      {
        v59 = --v44;
        if ( v43 >= si128.top && v43 < si128.bottom )
        {
          if ( v5 != (LONG *)v7 )
          {
            do
            {
              v46 = *v5;
              v57 = *v5 + v5[1];
              v47 = *v5 & 7;
              v48 = (int *)(v45 + 4 * ((__int64)*v5 >> 3));
              if ( *v5 < 0 || v46 >= *((_DWORD *)a3 + 14) )
              {
                v50 = 0;
                v49 = 0;
              }
              else
              {
                v49 = *v48;
                v50 = 1;
              }
              if ( v46 < *v5 + v5[1] )
              {
                v51 = v5 + 2;
                v52 = v47;
                v55 = v47;
                v63 = v5 + 2;
                do
                {
                  if ( v46 < si128.left || v46 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v46);
                    v52 = v55;
                    v51 = v63;
                  }
                  if ( v46 >= si128.left && v46 < si128.right )
                    v49 = v49 & ~dword_1C02ED4B8[v52] | dword_1C02ED4B8[v52] & (*v51 << dword_1C02ED2F0[v52]);
                  ++v52;
                  ++v51;
                  ++v47;
                  v55 = v52;
                  ++v46;
                  v63 = v51;
                  if ( (v47 & 8) != 0 )
                  {
                    if ( v50 )
                      *v48 = v49;
                    v52 = 0LL;
                    ++v48;
                    v47 = 0;
                    v55 = 0LL;
                    if ( v46 < 0 || v46 >= *((_DWORD *)a3 + 14) )
                    {
                      v50 = 0;
                      v49 = 0;
                    }
                    else
                    {
                      v49 = *v48;
                      v50 = 1;
                    }
                  }
                }
                while ( v46 < v57 );
                v5 = v60;
                v45 = v62;
              }
              if ( v50 )
                *v48 = v49;
              v7 = (struct _XRUNLEN *)a2;
              v5 += v5[1] + 2;
              v60 = v5;
            }
            while ( v5 != a2 );
            v43 = v53;
            v4 = (XCLIPOBJ *)a4;
            v44 = v59;
          }
          v5 = v64;
          v60 = v64;
        }
        ++v43;
        v45 += *((int *)a3 + 22);
        v53 = v43;
        v62 = v45;
        if ( v43 < si128.top || v43 >= si128.bottom )
        {
          XCLIPOBJ::vFindScan(v4, &si128, v43);
          v45 = v62;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v9; v5 != a2; v60 = v5 )
      {
        v10 = *v5;
        v11 = *v5 + v5[1];
        v12 = *v5 & 7;
        v13 = (int *)(v9 + 4 * ((__int64)*v5 >> 3));
        v14 = *v13;
        v15 = v13;
        if ( *v5 < v11 && (unsigned __int64)v13 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
        {
          v16 = v5 + 2;
          v17 = v12;
          do
          {
            v18 = dword_1C02ED4B8[v17];
            LOBYTE(v12) = v12 + 1;
            v19 = *v16;
            ++v10;
            v20 = dword_1C02ED2F0[v17];
            ++v16;
            ++v17;
            v14 = v14 & ~v18 | v18 & (v19 << v20);
            if ( v10 >= v11 )
              break;
            if ( (v12 & 8) != 0 )
            {
              *v15 = v14;
              LOBYTE(v12) = 0;
              ++v15;
              v17 = 0LL;
              v14 = *v15;
            }
          }
          while ( (unsigned __int64)v15 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
          v5 = v60;
          v8 = (LONG *)a1;
        }
        *v15 = v14;
        v21 = v8[1];
        if ( v21 > 1 )
        {
          v22 = *v5 >> 3;
          v23 = *v5 + v5[1];
          v24 = v23 & 7;
          v25 = v23 >> 3;
          v26 = 4 * v24;
          v27 = 4 * (*v5 & 7);
          v56 = v25;
          v58 = v26;
          if ( v22 == v25 )
          {
            v28 = 1;
            v29 = dword_1C02ED310[v27] & ~dword_1C02ED310[v26];
            do
            {
              v30 = v29 & *v13;
              ++v28;
              v13 = (int *)((char *)v13 + *((int *)a3 + 22));
              *v13 = *v13 & ~v29 | v30;
            }
            while ( v28 < v8[1] );
          }
          else
          {
            if ( v27 )
            {
              v31 = 1;
              v32 = ~dword_1C02ED310[v27];
              v33 = *v13 & dword_1C02ED310[v27];
              do
              {
                ++v31;
                v13 = (int *)((char *)v13 + *((int *)a3 + 22));
                *v13 = v33 | v32 & *v13;
              }
              while ( v31 < v8[1] );
              ++v22;
            }
            v34 = i;
            if ( v22 != v25 )
            {
              v35 = (char *)(i + 4LL * v22);
              if ( v8[1] > 1 )
              {
                v36 = 4 * (v25 - v22);
                v37 = 1;
                do
                {
                  v38 = &v35[*((int *)a3 + 22)];
                  memmove(v38, v35, v36);
                  ++v37;
                  v35 = v38;
                }
                while ( v37 < v8[1] );
                v26 = v58;
                v25 = v56;
                v34 = i;
              }
            }
            if ( v26 )
            {
              v39 = 1;
              v40 = (int *)(v34 + 4LL * v25);
              v41 = dword_1C02ED310[v26];
              for ( j = *v40 & ~v41; v39 < v8[1]; *v40 = j | v41 & *v40 )
              {
                ++v39;
                v40 = (int *)((char *)v40 + *((int *)a3 + 22));
              }
            }
          }
        }
        v9 = i;
        v5 += v5[1] + 2;
      }
    }
  }
}
