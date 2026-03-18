/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00383B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C00417DC (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0041848 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, LONG *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // r15
  LONG *v5; // rdi
  __int64 v8; // r9
  LONG v9; // ecx
  int v10; // r15d
  int *v11; // r8
  int *v12; // r10
  char v13; // dl
  int v14; // r9d
  __int64 v15; // r11
  _DWORD *v16; // rbx
  int v18; // r9d
  int v19; // ecx
  int v20; // edx
  int v21; // r15d
  int v22; // r12d
  int v23; // r10d
  int v24; // r11d
  int v25; // ecx
  int v26; // r10d
  int v27; // r11d
  int v28; // edx
  char *v29; // rdx
  size_t v30; // r15
  int v31; // r12d
  char *v32; // rbx
  int v33; // r8d
  int *v34; // rcx
  int v35; // r9d
  int j; // edx
  LONG v37; // ebx
  int v38; // r14d
  struct _XRUNLEN *v39; // rdx
  __int64 v40; // rcx
  LONG v41; // r10d
  int v42; // r8d
  int v43; // r14d
  int *v44; // r12
  int v45; // r11d
  int v46; // r15d
  __int64 v47; // rcx
  int *v48; // rdx
  LONG v49; // [rsp+30h] [rbp-40h]
  int v50; // [rsp+34h] [rbp-3Ch]
  int v51; // [rsp+34h] [rbp-3Ch]
  int v52; // [rsp+38h] [rbp-38h]
  int v53; // [rsp+38h] [rbp-38h]
  __int64 i; // [rsp+40h] [rbp-30h]
  __int64 v55; // [rsp+40h] [rbp-30h]
  int *v56; // [rsp+48h] [rbp-28h]
  __int64 v57; // [rsp+50h] [rbp-20h]
  LONG *v58; // [rsp+58h] [rbp-18h]
  struct _RECTL si128; // [rsp+60h] [rbp-10h] BYREF

  if ( a2 )
  {
    v4 = (XCLIPOBJ *)a4;
    v58 = (LONG *)((char *)a1 + 8);
    v5 = (LONG *)((char *)a1 + 8);
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v37 = *(_DWORD *)a1;
      v38 = *((_DWORD *)a1 + 1);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v49 = v37;
      XCLIPOBJ::vFindScan(v4, &si128, v37);
      while ( v38 )
      {
        v51 = --v38;
        if ( v37 >= si128.top && v37 < si128.bottom )
        {
          v39 = (struct _XRUNLEN *)a2;
          v40 = *((_QWORD *)a3 + 10) + v37 * *((_DWORD *)a3 + 22);
          v57 = v40;
          if ( v5 != a2 )
          {
            do
            {
              v41 = *v5;
              v42 = *v5 + v5[1];
              v53 = v42;
              v43 = *v5 & 0x1F;
              v44 = (int *)(v40 + 4 * ((__int64)*v5 >> 5));
              if ( *v5 < 0 || v41 >= *((_DWORD *)a3 + 14) )
              {
                v46 = 0;
                v45 = 0;
              }
              else
              {
                v45 = *v44;
                v46 = 1;
              }
              if ( v41 < v42 )
              {
                v47 = v43;
                v48 = v5 + 2;
                v55 = v43;
                v56 = v5 + 2;
                do
                {
                  if ( v41 < si128.left || v41 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v41, -1073741824);
                    v47 = v55;
                    v42 = v53;
                    v48 = v56;
                  }
                  if ( v41 >= si128.left && v41 < si128.right )
                  {
                    if ( *v48 )
                      v45 |= dword_1C02EDCF0[v47];
                    else
                      v45 &= ~dword_1C02EDCF0[v47];
                  }
                  ++v47;
                  ++v48;
                  ++v43;
                  v55 = v47;
                  ++v41;
                  v56 = v48;
                  if ( (v43 & 0x20) != 0 )
                  {
                    if ( v46 )
                      *v44 = v45;
                    v47 = 0LL;
                    ++v44;
                    v43 = 0;
                    v55 = 0LL;
                    if ( v41 < 0 || v41 >= *((_DWORD *)a3 + 14) )
                    {
                      v46 = 0;
                      v45 = 0;
                    }
                    else
                    {
                      v45 = *v44;
                      v46 = 1;
                    }
                  }
                }
                while ( v41 < v42 );
                v40 = v57;
                v39 = (struct _XRUNLEN *)a2;
              }
              if ( v46 )
                *v44 = v45;
              v5 += v5[1] + 2;
            }
            while ( v5 != (LONG *)v39 );
            v37 = v49;
            v4 = (XCLIPOBJ *)a4;
            v38 = v51;
          }
          v5 = v58;
        }
        v49 = ++v37;
        if ( v37 < si128.top || v37 >= si128.bottom )
          XCLIPOBJ::vFindScan(v4, &si128, v37);
      }
    }
    else
    {
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v8; v5 != a2; v5 += v5[1] + 2 )
      {
        v9 = *v5;
        v10 = *v5 + v5[1];
        v11 = (int *)(v8 + 4 * ((__int64)*v5 >> 5));
        v12 = v11;
        if ( *v5 < v10 )
        {
          v13 = v9 & 0x1F;
          v14 = *v11;
          if ( (unsigned __int64)v11 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
          {
            v15 = v9 & 0x1F;
            v16 = v5 + 2;
            do
            {
              if ( *v16++ )
                v14 |= dword_1C02EDCF0[v15];
              else
                v14 &= ~dword_1C02EDCF0[v15];
              ++v13;
              ++v15;
              if ( ++v9 >= v10 )
                break;
              if ( (v13 & 0x20) != 0 )
              {
                *v12 = v14;
                v13 = 0;
                ++v12;
                v15 = 0LL;
                v14 = *v12;
              }
            }
            while ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
          }
          *v12 = v14;
          v18 = *((_DWORD *)a1 + 1);
          if ( v18 > 1 )
          {
            v19 = *v5 >> 5;
            v20 = *v5 & 0x1F;
            v21 = (*v5 + v5[1]) >> 5;
            v22 = (*v5 + v5[1]) & 0x1F;
            v50 = v21;
            v52 = v22;
            if ( v19 == v21 )
            {
              v23 = *((_DWORD *)&aulMsk + v20) & ~*((_DWORD *)&aulMsk + v22);
              v24 = 1;
              do
              {
                v25 = v23 & *v11;
                ++v24;
                v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                *v11 = *v11 & ~v23 | v25;
              }
              while ( v24 < *((_DWORD *)a1 + 1) );
              v8 = i;
              continue;
            }
            if ( v20 )
            {
              v26 = 1;
              v27 = ~*((_DWORD *)&aulMsk + v20);
              v28 = *v11 & *((_DWORD *)&aulMsk + v20);
              do
              {
                ++v26;
                v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                *v11 = v28 | v27 & *v11;
              }
              while ( v26 < *((_DWORD *)a1 + 1) );
              ++v19;
            }
            v8 = i;
            if ( v19 != v21 )
            {
              v29 = (char *)(i + 4LL * v19);
              if ( *((int *)a1 + 1) > 1 )
              {
                v30 = 4 * (v21 - v19);
                v31 = 1;
                do
                {
                  v32 = &v29[*((int *)a3 + 22)];
                  memmove(v32, v29, v30);
                  ++v31;
                  v29 = v32;
                }
                while ( v31 < *((_DWORD *)a1 + 1) );
                v21 = v50;
                v22 = v52;
                v8 = i;
              }
            }
            if ( !v22 )
              continue;
            v33 = 1;
            v34 = (int *)(v8 + 4LL * v21);
            v35 = *((_DWORD *)&aulMsk + v22);
            for ( j = *v34 & ~v35; v33 < *((_DWORD *)a1 + 1); *v34 = j | v35 & *v34 )
            {
              ++v33;
              v34 = (int *)((char *)v34 + *((int *)a3 + 22));
            }
          }
          v8 = i;
        }
      }
    }
  }
}
