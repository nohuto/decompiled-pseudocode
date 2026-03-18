/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0019560
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002DCE8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002DD54 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, LONG *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // r15
  LONG *v5; // rdi
  struct SURFACE *v6; // r13
  __int64 v8; // rbx
  LONG v9; // edx
  int v10; // r15d
  int v11; // ecx
  int *v12; // r9
  int v13; // r8d
  int *v14; // r10
  __int64 v15; // r11
  _DWORD *v16; // rbx
  int v18; // r8d
  LONG v19; // ebx
  int v20; // r14d
  __int64 v21; // rcx
  struct _XRUNLEN *v22; // rdx
  LONG v23; // r10d
  int v24; // r8d
  int v25; // r15d
  int *v26; // r12
  int v27; // r11d
  int v28; // r14d
  __int64 v29; // rcx
  int *v30; // rdx
  int v31; // ecx
  int v32; // edx
  int v33; // r15d
  int v34; // r12d
  int v35; // r10d
  int v36; // r11d
  int v37; // ecx
  int v38; // r10d
  int v39; // r11d
  int v40; // edx
  int v41; // r13d
  char *v42; // rdx
  size_t v43; // r15
  char *v44; // rbx
  int v45; // r8d
  int *v46; // rcx
  int v47; // r9d
  int j; // edx
  LONG v49; // [rsp+30h] [rbp-40h]
  int v50; // [rsp+30h] [rbp-40h]
  int v51; // [rsp+34h] [rbp-3Ch]
  __int64 i; // [rsp+38h] [rbp-38h]
  int v53; // [rsp+38h] [rbp-38h]
  struct _RECTL si128; // [rsp+40h] [rbp-30h] BYREF
  __int64 v55; // [rsp+50h] [rbp-20h]
  __int64 v56; // [rsp+58h] [rbp-18h]
  int *v57; // [rsp+60h] [rbp-10h]
  LONG *v58; // [rsp+68h] [rbp-8h]

  if ( a2 )
  {
    v4 = (XCLIPOBJ *)a4;
    v58 = (LONG *)((char *)a1 + 8);
    v5 = (LONG *)((char *)a1 + 8);
    v6 = a3;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v19 = *(_DWORD *)a1;
      v20 = *((_DWORD *)a1 + 1);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v49 = v19;
      XCLIPOBJ::vFindScan(v4, &si128, v19);
      v21 = *((_QWORD *)v6 + 10) + v19 * *((_DWORD *)v6 + 22);
      v56 = v21;
      while ( v20 )
      {
        v53 = --v20;
        if ( v19 >= si128.top && v19 < si128.bottom )
        {
          v22 = (struct _XRUNLEN *)a2;
          if ( v5 != a2 )
          {
            do
            {
              v23 = *v5;
              v24 = *v5 + v5[1];
              v51 = v24;
              v25 = *v5 & 0x1F;
              v26 = (int *)(v21 + 4 * ((__int64)*v5 >> 5));
              if ( *v5 < 0 || v23 >= *((_DWORD *)v6 + 14) )
              {
                v28 = 0;
                v27 = 0;
              }
              else
              {
                v27 = *v26;
                v28 = 1;
              }
              if ( v23 < v24 )
              {
                v29 = v25;
                v30 = v5 + 2;
                v55 = v25;
                v57 = v5 + 2;
                do
                {
                  if ( v23 >= si128.right || v23 < si128.left )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v23, -1073741824);
                    v29 = v55;
                    v24 = v51;
                    v30 = v57;
                  }
                  if ( v23 >= si128.left && v23 < si128.right )
                  {
                    if ( *v30 )
                      v27 |= dword_1C02E8920[v29];
                    else
                      v27 &= ~dword_1C02E8920[v29];
                  }
                  ++v29;
                  ++v30;
                  ++v25;
                  v55 = v29;
                  ++v23;
                  v57 = v30;
                  if ( (v25 & 0x20) != 0 )
                  {
                    if ( v28 )
                      *v26 = v27;
                    v29 = 0LL;
                    ++v26;
                    v25 = 0;
                    v55 = 0LL;
                    if ( v23 >= 0 && v23 < *((_DWORD *)v6 + 14) )
                    {
                      v27 = *v26;
                      v28 = 1;
                    }
                    else
                    {
                      v28 = 0;
                      v27 = 0;
                    }
                  }
                }
                while ( v23 < v24 );
                v21 = v56;
                v22 = (struct _XRUNLEN *)a2;
              }
              if ( v28 )
                *v26 = v27;
              v5 += v5[1] + 2;
            }
            while ( v5 != (LONG *)v22 );
            v19 = v49;
            v4 = (XCLIPOBJ *)a4;
            v20 = v53;
          }
          v5 = v58;
        }
        ++v19;
        v21 += *((int *)v6 + 22);
        v49 = v19;
        v56 = v21;
        if ( v19 >= si128.bottom || v19 < si128.top )
        {
          XCLIPOBJ::vFindScan(v4, &si128, v19);
          v21 = v56;
        }
      }
    }
    else
    {
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v8; v5 != a2; v5 += v5[1] + 2 )
      {
        v9 = *v5;
        v10 = *v5 + v5[1];
        v11 = *v5 & 0x1F;
        v12 = (int *)(v8 + 4 * ((__int64)*v5 >> 5));
        v13 = *v12;
        v14 = v12;
        if ( *v5 < v10 && (unsigned __int64)v12 < *((_QWORD *)v6 + 9) + (unsigned __int64)*((unsigned int *)v6 + 16) )
        {
          v15 = v11;
          v16 = v5 + 2;
          do
          {
            if ( *v16++ )
              v13 |= dword_1C02E8920[v15];
            else
              v13 &= ~dword_1C02E8920[v15];
            LOBYTE(v11) = v11 + 1;
            ++v15;
            if ( ++v9 >= v10 )
              break;
            if ( (v11 & 0x20) != 0 )
            {
              *v14 = v13;
              LOBYTE(v11) = 0;
              ++v14;
              v15 = 0LL;
              v13 = *v14;
            }
          }
          while ( (unsigned __int64)v14 < *((_QWORD *)v6 + 9) + (unsigned __int64)*((unsigned int *)v6 + 16) );
          v8 = i;
        }
        *v14 = v13;
        v18 = *((_DWORD *)a1 + 1);
        if ( v18 > 1 )
        {
          v31 = *v5 >> 5;
          v32 = *v5 & 0x1F;
          v33 = (*v5 + v5[1]) >> 5;
          v34 = (*v5 + v5[1]) & 0x1F;
          v50 = v33;
          if ( v31 == v33 )
          {
            v35 = dword_1C02ED310[v32] & ~dword_1C02ED310[v34];
            v36 = 1;
            do
            {
              v37 = v35 & *v12;
              ++v36;
              v12 = (int *)((char *)v12 + *((int *)v6 + 22));
              *v12 = *v12 & ~v35 | v37;
            }
            while ( v36 < *((_DWORD *)a1 + 1) );
          }
          else
          {
            if ( v32 )
            {
              v38 = 1;
              v39 = ~dword_1C02ED310[v32];
              v40 = *v12 & dword_1C02ED310[v32];
              do
              {
                ++v38;
                v12 = (int *)((char *)v12 + *((int *)v6 + 22));
                *v12 = v40 | v39 & *v12;
              }
              while ( v38 < *((_DWORD *)a1 + 1) );
              ++v31;
            }
            if ( v31 != v33 )
            {
              v41 = 1;
              v42 = (char *)(v8 + 4LL * v31);
              if ( *((int *)a1 + 1) > 1 )
              {
                v43 = 4 * (v33 - v31);
                do
                {
                  v44 = &v42[*((int *)a3 + 22)];
                  memmove(v44, v42, v43);
                  ++v41;
                  v42 = v44;
                }
                while ( v41 < *((_DWORD *)a1 + 1) );
                v33 = v50;
              }
              v6 = a3;
            }
            v8 = i;
            if ( v34 )
            {
              v45 = 1;
              v46 = (int *)(i + 4LL * v33);
              v47 = dword_1C02ED310[v34];
              for ( j = *v46 & ~v47; v45 < *((_DWORD *)a1 + 1); *v46 = j | v47 & *v46 )
              {
                ++v45;
                v46 = (int *)((char *)v46 + *((int *)v6 + 22));
              }
            }
          }
        }
      }
    }
  }
}
