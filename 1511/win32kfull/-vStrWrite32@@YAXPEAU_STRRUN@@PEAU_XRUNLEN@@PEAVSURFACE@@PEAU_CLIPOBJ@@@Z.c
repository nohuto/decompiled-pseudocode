/*
 * XREFs of ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00F3220
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002DCE8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002DD54 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

void __fastcall vStrWrite32(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v5; // rdi
  LONG top; // ecx
  int v10; // esi
  LONG v11; // esi
  unsigned __int64 v12; // xmm0_8
  LONG v13; // r10d
  LONG left; // r14d
  int v15; // esi
  __int64 v16; // r11
  LONG v17; // edx
  __int64 v18; // rax
  LONG v19; // r9d
  LONG v20; // ecx
  LONG v21; // r8d
  int v22; // r10d
  _DWORD *v23; // r11
  _DWORD *v24; // r9
  int v25; // r8d
  __int64 v26; // rdx
  int *v27; // rcx
  int v28; // eax
  __int64 i; // r14
  __int64 v30; // rcx
  _DWORD *v31; // r10
  _DWORD *v32; // r9
  int *v33; // r8
  __int64 v34; // rcx
  int v35; // eax
  int j; // r15d
  char *v37; // rbx
  __int64 v38; // r15
  size_t v39; // r14
  char *v40; // rbx
  LONG v41; // ebx
  int v42; // r15d
  int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // r10
  int v46; // edx
  _DWORD *v47; // rsi
  _DWORD *v48; // r11
  __int64 v49; // [rsp+30h] [rbp-20h]
  __int64 v50; // [rsp+30h] [rbp-20h]
  struct _XRUNLEN *v51; // [rsp+38h] [rbp-18h]
  struct _RECTL rclBounds; // [rsp+40h] [rbp-10h] BYREF
  int v53; // [rsp+88h] [rbp+38h]

  if ( a2 )
  {
    v51 = (struct _STRRUN *)((char *)a1 + 8);
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        top = *(_DWORD *)a1;
        v10 = *((_DWORD *)a1 + 1);
        rclBounds = a4->rclBounds;
        v11 = top + v10;
        v12 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v13 = v12;
        if ( top < SHIDWORD(v12) )
        {
          left = rclBounds.left;
          if ( v11 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v11 >= SHIDWORD(v12) )
              v11 = HIDWORD(v12);
            v15 = v11 - top;
            v16 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            v49 = v16;
            while ( v5 != a2 )
            {
              v17 = *(_DWORD *)v5;
              v18 = *((int *)v5 + 1);
              v19 = v18 + *(_DWORD *)v5;
              if ( v19 >= left )
              {
                if ( v17 >= v13 )
                  return;
                v20 = v13;
                v21 = left;
                if ( v17 >= left )
                  v21 = *(_DWORD *)v5;
                if ( v19 < v13 )
                  v20 = v18 + *(_DWORD *)v5;
                v22 = v20 - v21;
                v23 = (_DWORD *)(v16 + 4LL * v21);
                v24 = v23;
                if ( v21 < v20 )
                {
                  v25 = v21 - v17;
                  v26 = v22;
                  v27 = (int *)((char *)v5 + 4 * v25 + 8);
                  do
                  {
                    v28 = *v27++;
                    *v24++ = v28;
                    --v26;
                  }
                  while ( v26 );
                }
                if ( v15 > 1 )
                {
                  v38 = (unsigned int)(v15 - 1);
                  v39 = 4 * v22;
                  do
                  {
                    v40 = (char *)v23 + *((int *)a3 + 22);
                    memmove(v40, v23, v39);
                    v23 = v40;
                    --v38;
                  }
                  while ( v38 );
                  left = rclBounds.left;
                }
                v18 = *((int *)v5 + 1);
                v13 = v12;
                v16 = v49;
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v18 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v41 = *(_DWORD *)a1;
        v42 = *((_DWORD *)a1 + 1);
        v43 = *(_DWORD *)a1;
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v43);
        v44 = *((_QWORD *)a3 + 10) + v41 * *((_DWORD *)a3 + 22);
        v50 = v44;
        while ( v42 )
        {
          --v42;
          if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
          {
            while ( v5 != a2 )
            {
              v45 = *(int *)v5;
              v46 = v45 + *((_DWORD *)v5 + 1);
              v53 = v46;
              v47 = (_DWORD *)(v44 + 4 * v45);
              if ( (int)v45 < v46 )
              {
                v48 = (_DWORD *)((char *)v5 + 8);
                do
                {
                  if ( (int)v45 < rclBounds.left || (int)v45 >= rclBounds.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v45);
                    v46 = v53;
                  }
                  if ( (int)v45 >= rclBounds.left && (int)v45 < rclBounds.right )
                    *v47 = *v48;
                  ++v47;
                  ++v48;
                  LODWORD(v45) = v45 + 1;
                }
                while ( (int)v45 < v46 );
                v44 = v50;
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8);
            }
            v5 = v51;
          }
          ++v41;
          v44 += *((int *)a3 + 22);
          v50 = v44;
          if ( v41 < rclBounds.top || v41 >= rclBounds.bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
            v44 = v50;
          }
        }
      }
    }
    else
    {
      for ( i = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
            v5 != a2;
            v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8) )
      {
        v30 = *(int *)v5;
        v31 = (_DWORD *)(i + 4 * v30);
        v32 = v31;
        if ( (int)v30 < (int)v30 + *((_DWORD *)v5 + 1) )
        {
          v33 = (int *)((char *)v5 + 8);
          v34 = *((unsigned int *)v5 + 1);
          do
          {
            v35 = *v33++;
            *v32++ = v35;
            --v34;
          }
          while ( v34 );
        }
        for ( j = 1; j < *((_DWORD *)a1 + 1); v31 = v37 )
        {
          v37 = (char *)v31 + *((int *)a3 + 22);
          memmove(v37, v31, 4 * *((_DWORD *)v5 + 1));
          ++j;
        }
      }
    }
  }
}
