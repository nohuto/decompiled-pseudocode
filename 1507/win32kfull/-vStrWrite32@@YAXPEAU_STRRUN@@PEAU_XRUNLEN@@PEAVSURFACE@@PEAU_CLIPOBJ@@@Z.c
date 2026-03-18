/*
 * XREFs of ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00EC600
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0021670 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00216DC (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void __fastcall vStrWrite32(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v5; // rdi
  __int64 i; // r14
  __int64 v10; // rcx
  _DWORD *v11; // r10
  _DWORD *v12; // r9
  int *v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  int j; // r15d
  char *v17; // rbx
  LONG top; // ecx
  int v19; // esi
  LONG v20; // esi
  unsigned __int64 v21; // xmm0_8
  LONG v22; // r10d
  LONG left; // r14d
  int v24; // esi
  __int64 v25; // r11
  LONG v26; // edx
  __int64 v27; // rax
  LONG v28; // r9d
  LONG v29; // ecx
  LONG v30; // r8d
  int v31; // r10d
  _DWORD *v32; // r11
  _DWORD *v33; // r9
  int v34; // r8d
  __int64 v35; // rdx
  int *v36; // rcx
  int v37; // eax
  __int64 v38; // r15
  size_t v39; // r14
  char *v40; // rbx
  LONG v41; // ebx
  int v42; // esi
  __int64 v43; // r15
  __int64 v44; // r10
  int v45; // edx
  _DWORD *v46; // rcx
  _DWORD *v47; // r11
  __int64 v48; // [rsp+30h] [rbp-20h]
  _DWORD *v49; // [rsp+30h] [rbp-20h]
  struct _XRUNLEN *v50; // [rsp+38h] [rbp-18h]
  struct _RECTL rclBounds; // [rsp+40h] [rbp-10h] BYREF
  int v52; // [rsp+88h] [rbp+38h]

  if ( a2 )
  {
    v50 = (struct _STRRUN *)((char *)a1 + 8);
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        top = *(_DWORD *)a1;
        v19 = *((_DWORD *)a1 + 1);
        rclBounds = a4->rclBounds;
        v20 = top + v19;
        v21 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v22 = v21;
        if ( top < SHIDWORD(v21) )
        {
          left = rclBounds.left;
          if ( v20 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v20 >= SHIDWORD(v21) )
              v20 = HIDWORD(v21);
            v24 = v20 - top;
            v25 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            v48 = v25;
            while ( v5 != a2 )
            {
              v26 = *(_DWORD *)v5;
              v27 = *((int *)v5 + 1);
              v28 = v27 + *(_DWORD *)v5;
              if ( v28 >= left )
              {
                if ( v26 >= v22 )
                  return;
                v29 = v22;
                v30 = left;
                if ( v26 >= left )
                  v30 = *(_DWORD *)v5;
                if ( v28 < v22 )
                  v29 = v27 + *(_DWORD *)v5;
                v31 = v29 - v30;
                v32 = (_DWORD *)(v25 + 4LL * v30);
                v33 = v32;
                if ( v30 < v29 )
                {
                  v34 = v30 - v26;
                  v35 = v31;
                  v36 = (int *)((char *)v5 + 4 * v34 + 8);
                  do
                  {
                    v37 = *v36++;
                    *v33++ = v37;
                    --v35;
                  }
                  while ( v35 );
                }
                if ( v24 > 1 )
                {
                  v38 = (unsigned int)(v24 - 1);
                  v39 = 4 * v31;
                  do
                  {
                    v40 = (char *)v32 + *((int *)a3 + 22);
                    memmove(v40, v32, v39);
                    v32 = v40;
                    --v38;
                  }
                  while ( v38 );
                  left = rclBounds.left;
                }
                v27 = *((int *)v5 + 1);
                v22 = v21;
                v25 = v48;
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v27 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v41 = *(_DWORD *)a1;
        v42 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_54:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
        while ( v42 )
        {
          --v42;
          if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
          {
            v43 = *((_QWORD *)a3 + 10) + v41 * *((_DWORD *)a3 + 22);
            while ( v5 != a2 )
            {
              v44 = *(int *)v5;
              v45 = v44 + *((_DWORD *)v5 + 1);
              v52 = v45;
              v46 = (_DWORD *)(v43 + 4 * v44);
              v49 = v46;
              if ( (int)v44 < v45 )
              {
                v47 = (_DWORD *)((char *)v5 + 8);
                do
                {
                  if ( (int)v44 < rclBounds.left || (int)v44 >= rclBounds.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v44);
                    v46 = v49;
                    v45 = v52;
                  }
                  if ( (int)v44 >= rclBounds.left && (int)v44 < rclBounds.right )
                    *v46 = *v47;
                  ++v46;
                  ++v47;
                  LODWORD(v44) = v44 + 1;
                  v49 = v46;
                }
                while ( (int)v44 < v45 );
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8);
            }
            v5 = v50;
          }
          if ( ++v41 < rclBounds.top || v41 >= rclBounds.bottom )
            goto LABEL_54;
        }
      }
    }
    else
    {
      for ( i = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
            v5 != a2;
            v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8) )
      {
        v10 = *(int *)v5;
        v11 = (_DWORD *)(i + 4 * v10);
        v12 = v11;
        if ( (int)v10 < (int)v10 + *((_DWORD *)v5 + 1) )
        {
          v13 = (int *)((char *)v5 + 8);
          v14 = *((unsigned int *)v5 + 1);
          do
          {
            v15 = *v13++;
            *v12++ = v15;
            --v14;
          }
          while ( v14 );
        }
        for ( j = 1; j < *((_DWORD *)a1 + 1); v11 = v17 )
        {
          v17 = (char *)v11 + *((int *)a3 + 22);
          memmove(v17, v11, 4 * *((_DWORD *)v5 + 1));
          ++j;
        }
      }
    }
  }
}
