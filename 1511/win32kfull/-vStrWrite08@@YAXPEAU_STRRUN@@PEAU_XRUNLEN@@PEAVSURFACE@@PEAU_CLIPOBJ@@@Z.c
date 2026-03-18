/*
 * XREFs of ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BB8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002DCE8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002DD54 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

void __fastcall vStrWrite08(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v5; // rbx
  __int64 i; // r14
  __int64 v10; // rcx
  char *v11; // rsi
  _BYTE *v12; // r9
  char *v13; // r8
  __int64 v14; // rcx
  char v15; // al
  int v16; // r12d
  __int64 v17; // rax
  LONG top; // ecx
  int v19; // edi
  LONG v20; // edi
  unsigned __int64 v21; // xmm0_8
  LONG v22; // r9d
  LONG left; // r12d
  int v24; // edi
  __int64 v25; // r10
  LONG v26; // ecx
  __int64 v27; // rax
  LONG v28; // r8d
  LONG v29; // eax
  LONG v30; // edx
  _BYTE *v31; // rsi
  _BYTE *v32; // r8
  int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // rdx
  int *v36; // rcx
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // r14
  size_t v40; // r12
  LONG v41; // esi
  int v42; // r12d
  int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // r10
  int v46; // edx
  _BYTE *v47; // r11
  _BYTE *v48; // rdi
  __int64 v49; // [rsp+30h] [rbp-20h]
  struct _XRUNLEN *v50; // [rsp+38h] [rbp-18h]
  struct _RECTL rclBounds; // [rsp+40h] [rbp-10h] BYREF
  __int64 v52; // [rsp+88h] [rbp+38h]
  int v53; // [rsp+88h] [rbp+38h]

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
            v52 = v25;
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
                  v29 = v28;
                v31 = (_BYTE *)(v25 + v30);
                v32 = v31;
                v33 = v29 - v30;
                if ( v30 < v29 )
                {
                  v34 = v30 - v26;
                  v35 = v33;
                  v36 = (int *)((char *)v5 + 4 * v34 + 8);
                  do
                  {
                    v37 = *(_BYTE *)v36++;
                    *v32++ = v37;
                    --v35;
                  }
                  while ( v35 );
                }
                if ( v24 > 1 )
                {
                  v38 = *((int *)a3 + 22);
                  v39 = (unsigned int)(v24 - 1);
                  v40 = v33;
                  do
                  {
                    memmove(&v31[v38], v31, v40);
                    v38 = *((int *)a3 + 22);
                    v31 += v38;
                    --v39;
                  }
                  while ( v39 );
                  left = rclBounds.left;
                  v25 = v52;
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
        v43 = *(_DWORD *)a1;
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v43);
        v44 = *((_QWORD *)a3 + 10) + v41 * *((_DWORD *)a3 + 22);
        v49 = v44;
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
              v47 = (_BYTE *)(v44 + v45);
              if ( (int)v45 < v46 )
              {
                v48 = (char *)v5 + 8;
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
                  v48 += 4;
                  LODWORD(v45) = v45 + 1;
                }
                while ( (int)v45 < v46 );
                v44 = v49;
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8);
            }
            v5 = v50;
          }
          ++v41;
          v44 += *((int *)a3 + 22);
          v49 = v44;
          if ( v41 < rclBounds.top || v41 >= rclBounds.bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
            v44 = v49;
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
        v10 = *(int *)v5;
        v11 = (char *)(i + v10);
        v12 = (_BYTE *)(i + v10);
        if ( (int)v10 < (int)v10 + *((_DWORD *)v5 + 1) )
        {
          v13 = (char *)v5 + 8;
          v14 = *((unsigned int *)v5 + 1);
          do
          {
            v15 = *v13;
            v13 += 4;
            *v12++ = v15;
            --v14;
          }
          while ( v14 );
        }
        v16 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          v17 = *((int *)a3 + 22);
          do
          {
            memmove(&v11[v17], v11, *((int *)v5 + 1));
            v17 = *((int *)a3 + 22);
            ++v16;
            v11 += v17;
          }
          while ( v16 < *((_DWORD *)a1 + 1) );
        }
      }
    }
  }
}
