/*
 * XREFs of ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BEEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C00417DC (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0041848 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

void __fastcall vStrWrite24(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v5; // rdi
  __int64 i; // r14
  __int64 v10; // r8
  _WORD *v11; // rdx
  _WORD *v12; // r10
  _WORD *v13; // r9
  __int64 v14; // r8
  __int16 v15; // ax
  int j; // r12d
  char *v17; // rbx
  LONG top; // ecx
  int v19; // esi
  LONG v20; // esi
  unsigned __int64 v21; // xmm0_8
  LONG v22; // r10d
  LONG left; // r14d
  int v24; // esi
  __int64 v25; // rbx
  LONG v26; // edx
  __int64 v27; // rax
  LONG v28; // r9d
  LONG v29; // ecx
  LONG v30; // r8d
  int v31; // r10d
  _WORD *v32; // r11
  _WORD *v33; // r9
  int v34; // r8d
  __int64 v35; // rdx
  int *v36; // rcx
  __int16 v37; // ax
  size_t v38; // r14
  __int64 v39; // r12
  char *v40; // rbx
  LONG v41; // ebx
  int v42; // r12d
  __int64 v43; // rcx
  __int64 v44; // r10
  int v45; // edx
  __int64 v46; // r11
  int *v47; // rsi
  __int64 v48; // [rsp+30h] [rbp-20h]
  struct _XRUNLEN *v49; // [rsp+38h] [rbp-18h]
  struct _RECTL rclBounds; // [rsp+40h] [rbp-10h] BYREF
  __int64 v51; // [rsp+88h] [rbp+38h]
  int v52; // [rsp+88h] [rbp+38h]

  if ( a2 )
  {
    v49 = (struct _STRRUN *)((char *)a1 + 8);
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
            v51 = v25;
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
                v32 = (_WORD *)(v25 + 2LL * v30 + v30);
                v33 = v32;
                if ( v30 < v29 )
                {
                  v34 = v30 - v26;
                  v35 = v31;
                  v36 = (int *)((char *)v5 + 4 * v34 + 8);
                  do
                  {
                    v37 = *(_WORD *)v36++;
                    *v33 = v37;
                    v33 = (_WORD *)((char *)v33 + 3);
                    *((_BYTE *)v33 - 1) = *((_BYTE *)v36 - 2);
                    --v35;
                  }
                  while ( v35 );
                }
                if ( v24 > 1 )
                {
                  v38 = 3 * v31;
                  v39 = (unsigned int)(v24 - 1);
                  do
                  {
                    v40 = (char *)v32 + *((int *)a3 + 22);
                    memmove(v40, v32, v38);
                    v32 = v40;
                    --v39;
                  }
                  while ( v39 );
                  left = rclBounds.left;
                  v25 = v51;
                }
                v27 = *((int *)v5 + 1);
                v22 = v21;
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
LABEL_55:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
        while ( v42 )
        {
          --v42;
          if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
          {
            v43 = *((_QWORD *)a3 + 10) + v41 * *((_DWORD *)a3 + 22);
            v48 = v43;
            while ( v5 != a2 )
            {
              v44 = *(int *)v5;
              v45 = v44 + *((_DWORD *)v5 + 1);
              v52 = v45;
              v46 = v44 + v43 + 2 * v44;
              if ( (int)v44 < v45 )
              {
                v47 = (int *)((char *)v5 + 8);
                do
                {
                  if ( (int)v44 < rclBounds.left || (int)v44 >= rclBounds.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v44);
                    v45 = v52;
                  }
                  if ( (int)v44 >= rclBounds.left && (int)v44 < rclBounds.right )
                  {
                    *(_WORD *)v46 = *(_WORD *)v47;
                    *(_BYTE *)(v46 + 2) = *((_BYTE *)v47 + 2);
                  }
                  v46 += 3LL;
                  ++v47;
                  LODWORD(v44) = v44 + 1;
                }
                while ( (int)v44 < v45 );
                v43 = v48;
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8);
            }
            v5 = v49;
          }
          if ( ++v41 < rclBounds.top || v41 >= rclBounds.bottom )
            goto LABEL_55;
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
        v11 = (_WORD *)(v10 + i + 2 * v10);
        v12 = v11;
        if ( (int)v10 < (int)v10 + *((_DWORD *)v5 + 1) )
        {
          v13 = (_WORD *)((char *)v5 + 8);
          v14 = *((unsigned int *)v5 + 1);
          do
          {
            v15 = *v13;
            v13 += 2;
            *v12 = v15;
            v12 = (_WORD *)((char *)v12 + 3);
            *((_BYTE *)v12 - 1) = *((_BYTE *)v13 - 2);
            --v14;
          }
          while ( v14 );
        }
        for ( j = 1; j < *((_DWORD *)a1 + 1); v11 = v17 )
        {
          v17 = (char *)v11 + *((int *)a3 + 22);
          memmove(v17, v11, 3 * *((_DWORD *)v5 + 1));
          ++j;
        }
      }
    }
  }
}
