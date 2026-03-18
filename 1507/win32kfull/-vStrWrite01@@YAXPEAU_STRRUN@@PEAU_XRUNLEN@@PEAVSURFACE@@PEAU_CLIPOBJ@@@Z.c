/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00D34F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0021670 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00216DC (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v6; // rbp
  int *v7; // r14
  __int64 i; // r12
  int v10; // r11d
  int v11; // edi
  int *v12; // r8
  int *v13; // r9
  char v14; // r10
  int v15; // ecx
  __int64 v16; // rdx
  _DWORD *v17; // rbx
  int v19; // r15d
  int v20; // ecx
  int v21; // edx
  int v22; // r14d
  int v23; // r15d
  int v24; // r9d
  int v25; // r11d
  int v26; // ecx
  __int64 v27; // rax
  int v28; // edx
  int v29; // r10d
  int v30; // r9d
  int v31; // edi
  char *v32; // rdx
  size_t v33; // rbp
  char *v34; // rbx
  int v35; // edx
  int *v36; // rcx
  int v37; // r9d
  int j; // r8d
  LONG v39; // ebx
  int v40; // edi
  LONG right; // ecx
  LONG left; // edx
  __int64 v43; // r9
  int v44; // r10d
  int v45; // r15d
  int v46; // ebp
  int *v47; // rdi
  int v48; // r11d
  int v49; // esi
  __int64 v50; // rbx
  _DWORD *v51; // r14
  LONG v52; // [rsp+30h] [rbp-58h]
  int v53; // [rsp+34h] [rbp-54h]
  char *v54; // [rsp+38h] [rbp-50h]
  __int64 v55; // [rsp+40h] [rbp-48h]
  char *v56; // [rsp+48h] [rbp-40h]
  struct _RECTL si128; // [rsp+50h] [rbp-38h] BYREF

  if ( a2 )
  {
    v6 = a2;
    v56 = (char *)a1 + 8;
    v7 = (int *)((char *)a1 + 8);
    v54 = (char *)a1 + 8;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v39 = *(_DWORD *)a1;
      v40 = *((_DWORD *)a1 + 1);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v52 = v39;
      XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v39);
      if ( v40 )
      {
        right = si128.right;
        left = si128.left;
        do
        {
          v53 = --v40;
          if ( v39 >= si128.top && v39 < si128.bottom )
          {
            v43 = *((_QWORD *)a3 + 10) + v39 * *((_DWORD *)a3 + 22);
            v55 = v43;
            if ( v7 != (int *)v6 )
            {
              do
              {
                v44 = *v7;
                v45 = *v7 + v7[1];
                v46 = *v7 & 0x1F;
                v47 = (int *)(v43 + 4 * ((__int64)*v7 >> 5));
                if ( *v7 < 0 || v44 >= *((_DWORD *)a3 + 14) )
                {
                  v49 = 0;
                  v48 = 0;
                }
                else
                {
                  v48 = *v47;
                  v49 = 1;
                }
                if ( v44 < v45 )
                {
                  v50 = v46;
                  v51 = v7 + 2;
                  do
                  {
                    if ( v44 < left || v44 >= right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v44);
                      right = si128.right;
                      left = si128.left;
                    }
                    if ( v44 >= left && v44 < right )
                    {
                      if ( *v51 )
                        v48 |= dword_1C02E8060[v50];
                      else
                        v48 &= ~dword_1C02E8060[v50];
                    }
                    ++v46;
                    ++v50;
                    ++v44;
                    ++v51;
                    if ( (v46 & 0x20) != 0 )
                    {
                      if ( v49 )
                        *v47 = v48;
                      ++v47;
                      v46 = 0;
                      v50 = 0LL;
                      if ( v44 < 0 || v44 >= *((_DWORD *)a3 + 14) )
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
                  while ( v44 < v45 );
                  v7 = (int *)v54;
                  v43 = v55;
                }
                if ( v49 )
                  *v47 = v48;
                v6 = a2;
                v7 += v7[1] + 2;
                v54 = (char *)v7;
              }
              while ( v7 != (int *)a2 );
              v39 = v52;
              v40 = v53;
            }
            v7 = (int *)v56;
            v54 = v56;
          }
          v52 = ++v39;
          if ( v39 < si128.top || v39 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v39);
            right = si128.right;
            left = si128.left;
          }
        }
        while ( v40 );
      }
    }
    else
    {
      for ( i = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22); v7 != (int *)a2; v54 = (char *)v7 )
      {
        v10 = *v7;
        v11 = *v7 + v7[1];
        v12 = (int *)(i + 4 * ((__int64)*v7 >> 5));
        v13 = v12;
        if ( *v7 < v11 )
        {
          v14 = v10 & 0x1F;
          v15 = *v12;
          if ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
          {
            v16 = v10 & 0x1F;
            v17 = v7 + 2;
            do
            {
              if ( *v17++ )
                v15 |= dword_1C02E8060[v16];
              else
                v15 &= ~dword_1C02E8060[v16];
              ++v14;
              ++v16;
              if ( ++v10 >= v11 )
                break;
              if ( (v14 & 0x20) != 0 )
              {
                *v13 = v15;
                v14 = 0;
                v15 = v13[1];
                ++v13;
                v16 = 0LL;
              }
            }
            while ( (unsigned __int64)v13 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
          }
          *v13 = v15;
          if ( *((int *)a1 + 1) > 1 )
          {
            v19 = *v7 + v7[1];
            v20 = *v7 >> 5;
            v21 = *v7 & 0x1F;
            v22 = v19 >> 5;
            v23 = v19 & 0x1F;
            if ( v20 == v22 )
            {
              v24 = 1;
              v25 = *((_DWORD *)&aulMsk + v21) & ~*((_DWORD *)&aulMsk + v23);
              do
              {
                v26 = v25 & *v12;
                ++v24;
                v12 = (int *)((char *)v12 + *((int *)a3 + 22));
                *v12 = *v12 & ~v25 | v26;
              }
              while ( v24 < *((_DWORD *)a1 + 1) );
            }
            else
            {
              if ( v21 )
              {
                v27 = v21;
                v28 = 1;
                v29 = ~*((_DWORD *)&aulMsk + v27);
                v30 = *v12 & *((_DWORD *)&aulMsk + v27);
                do
                {
                  ++v28;
                  v12 = (int *)((char *)v12 + *((int *)a3 + 22));
                  *v12 = v30 | v29 & *v12;
                }
                while ( v28 < *((_DWORD *)a1 + 1) );
                ++v20;
              }
              if ( v20 != v22 )
              {
                v31 = 1;
                v32 = (char *)(i + 4LL * v20);
                if ( *((int *)a1 + 1) > 1 )
                {
                  v33 = 4 * (v22 - v20);
                  do
                  {
                    v34 = &v32[*((int *)a3 + 22)];
                    memmove(v34, v32, v33);
                    ++v31;
                    v32 = v34;
                  }
                  while ( v31 < *((_DWORD *)a1 + 1) );
                }
              }
              if ( v23 )
              {
                v35 = 1;
                v36 = (int *)(i + 4LL * v22);
                v37 = *((_DWORD *)&aulMsk + v23);
                for ( j = *v36 & ~v37; v35 < *((_DWORD *)a1 + 1); *v36 = j | v37 & *v36 )
                {
                  ++v35;
                  v36 = (int *)((char *)v36 + *((int *)a3 + 22));
                }
              }
            }
            v7 = (int *)v54;
          }
        }
        v7 += v7[1] + 2;
      }
    }
  }
}
