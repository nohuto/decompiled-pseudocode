/*
 * XREFs of ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BE3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C00417DC (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0041848 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

void __fastcall vStrWrite04(struct _STRRUN *a1, LONG *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // r12
  LONG *v5; // rdi
  struct _XRUNLEN *v7; // r13
  LONG *v8; // r14
  __int64 v9; // r10
  int v10; // r11d
  int v11; // r13d
  int *v12; // r8
  int *v13; // r9
  char v14; // r10
  int v15; // ebx
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
  char *v34; // rdx
  size_t v35; // r13
  int v36; // r12d
  char *v37; // rbx
  int v38; // r8d
  int *v39; // rcx
  int v40; // r9d
  int j; // edx
  LONG v42; // ebx
  LONG v43; // r14d
  __int64 v44; // rcx
  LONG v45; // r10d
  int v46; // r11d
  int *v47; // r12
  int v48; // r14d
  int v49; // r13d
  int *v50; // r9
  __int64 v51; // r8
  __int64 i; // [rsp+30h] [rbp-50h]
  __int64 v53; // [rsp+30h] [rbp-50h]
  LONG v54; // [rsp+38h] [rbp-48h]
  int v55; // [rsp+3Ch] [rbp-44h]
  LONG v56; // [rsp+3Ch] [rbp-44h]
  int v57; // [rsp+40h] [rbp-40h]
  int v58; // [rsp+40h] [rbp-40h]
  LONG *v59; // [rsp+48h] [rbp-38h]
  struct _RECTL si128; // [rsp+50h] [rbp-30h] BYREF
  int *v61; // [rsp+60h] [rbp-20h]
  __int64 v62; // [rsp+68h] [rbp-18h]
  LONG *v63; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v4 = (XCLIPOBJ *)a4;
    v63 = (LONG *)((char *)a1 + 8);
    v5 = (LONG *)((char *)a1 + 8);
    v59 = (LONG *)((char *)a1 + 8);
    v7 = (struct _XRUNLEN *)a2;
    v8 = (LONG *)a1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v42 = *v8;
      v43 = v8[1];
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v54 = v42;
      XCLIPOBJ::vFindScan(v4, &si128, v42);
      while ( v43 )
      {
        v56 = --v43;
        if ( v42 >= si128.top && v42 < si128.bottom )
        {
          v44 = *((_QWORD *)a3 + 10) + v42 * *((_DWORD *)a3 + 22);
          v62 = v44;
          if ( v5 != (LONG *)v7 )
          {
            do
            {
              v45 = *v5;
              v58 = *v5 + v5[1];
              v46 = *v5 & 7;
              v47 = (int *)(v44 + 4 * ((__int64)*v5 >> 3));
              if ( *v5 < 0 || v45 >= *((_DWORD *)a3 + 14) )
              {
                v49 = 0;
                v48 = 0;
              }
              else
              {
                v48 = *v47;
                v49 = 1;
              }
              if ( v45 < *v5 + v5[1] )
              {
                v50 = v5 + 2;
                v51 = v46;
                v53 = v46;
                v61 = v5 + 2;
                do
                {
                  if ( v45 < si128.left || v45 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v45);
                    v51 = v53;
                    v50 = v61;
                  }
                  if ( v45 >= si128.left && v45 < si128.right )
                    v48 = v48 & ~dword_1C02ED598[v51] | dword_1C02ED598[v51] & (*v50 << dword_1C02ED578[v51]);
                  ++v51;
                  ++v50;
                  ++v46;
                  v53 = v51;
                  ++v45;
                  v61 = v50;
                  if ( (v46 & 8) != 0 )
                  {
                    if ( v49 )
                      *v47 = v48;
                    v51 = 0LL;
                    ++v47;
                    v46 = 0;
                    v53 = 0LL;
                    if ( v45 < 0 || v45 >= *((_DWORD *)a3 + 14) )
                    {
                      v49 = 0;
                      v48 = 0;
                    }
                    else
                    {
                      v48 = *v47;
                      v49 = 1;
                    }
                  }
                }
                while ( v45 < v58 );
                v5 = v59;
                v44 = v62;
              }
              if ( v49 )
                *v47 = v48;
              v7 = (struct _XRUNLEN *)a2;
              v5 += v5[1] + 2;
              v59 = v5;
            }
            while ( v5 != a2 );
            v42 = v54;
            v4 = (XCLIPOBJ *)a4;
            v43 = v56;
          }
          v5 = v63;
          v59 = v63;
        }
        v54 = ++v42;
        if ( v42 < si128.top || v42 >= si128.bottom )
          XCLIPOBJ::vFindScan(v4, &si128, v42);
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v9; v5 != a2; v59 = v5 )
      {
        v10 = *v5;
        v11 = *v5 + v5[1];
        v12 = (int *)(v9 + 4 * ((__int64)*v5 >> 3));
        v13 = v12;
        if ( *v5 < v11 )
        {
          v14 = v10 & 7;
          v15 = *v12;
          if ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
          {
            v16 = v5 + 2;
            v17 = v10 & 7;
            do
            {
              v18 = dword_1C02ED598[v17];
              ++v14;
              v19 = *v16;
              ++v10;
              v20 = dword_1C02ED578[v17];
              ++v16;
              ++v17;
              v15 = v15 & ~v18 | v18 & (v19 << v20);
              if ( v10 >= v11 )
                break;
              if ( (v14 & 8) != 0 )
              {
                *v13 = v15;
                v14 = 0;
                ++v13;
                v17 = 0LL;
                v15 = *v13;
              }
            }
            while ( (unsigned __int64)v13 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
            v5 = v59;
            v8 = (LONG *)a1;
          }
          *v13 = v15;
          v21 = v8[1];
          if ( v21 > 1 )
          {
            v22 = *v5 >> 3;
            v23 = *v5 + v5[1];
            v24 = v23 & 7;
            v25 = v23 >> 3;
            v26 = 4 * v24;
            v27 = 2 * (*v5 & 7);
            v57 = v25;
            v55 = v26;
            if ( v22 != v25 )
            {
              if ( v27 * 2 )
              {
                v31 = 1;
                v32 = ~LODWORD((&aulMsk)[v27]);
                v33 = *v12 & (__int64)(&aulMsk)[v27];
                do
                {
                  ++v31;
                  v12 = (int *)((char *)v12 + *((int *)a3 + 22));
                  *v12 = v33 | v32 & *v12;
                }
                while ( v31 < v8[1] );
                ++v22;
              }
              v9 = i;
              if ( v22 != v25 )
              {
                v34 = (char *)(i + 4LL * v22);
                if ( v8[1] > 1 )
                {
                  v35 = 4 * (v25 - v22);
                  v36 = 1;
                  do
                  {
                    v37 = &v34[*((int *)a3 + 22)];
                    memmove(v37, v34, v35);
                    ++v36;
                    v34 = v37;
                  }
                  while ( v36 < v8[1] );
                  v26 = v55;
                  v25 = v57;
                  v9 = i;
                }
              }
              if ( v26 )
              {
                v38 = 1;
                v39 = (int *)(v9 + 4LL * v25);
                v40 = *((_DWORD *)&aulMsk + v26);
                for ( j = *v39 & ~v40; v38 < v8[1]; *v39 = j | v40 & *v39 )
                {
                  ++v38;
                  v39 = (int *)((char *)v39 + *((int *)a3 + 22));
                }
              }
              goto LABEL_17;
            }
            v28 = 1;
            v29 = (__int64)(&aulMsk)[v27] & ~*((_DWORD *)&aulMsk + v26);
            do
            {
              v30 = v29 & *v12;
              ++v28;
              v12 = (int *)((char *)v12 + *((int *)a3 + 22));
              *v12 = *v12 & ~v29 | v30;
            }
            while ( v28 < v8[1] );
          }
          v9 = i;
        }
LABEL_17:
        v5 += v5[1] + 2;
      }
    }
  }
}
