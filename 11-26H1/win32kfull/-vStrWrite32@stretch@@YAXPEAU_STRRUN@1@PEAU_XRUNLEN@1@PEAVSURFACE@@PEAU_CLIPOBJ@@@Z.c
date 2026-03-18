/*
 * XREFs of ?vStrWrite32@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14018A230
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14017E700 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall stretch::vStrWrite32(
        LONG *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  LONG *v4; // rdi
  bool v9; // zf
  unsigned __int64 v10; // r10
  LONG v11; // ecx
  unsigned __int64 v12; // r14
  LONG v13; // edx
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // r11
  LONG v17; // edx
  __int64 v18; // rax
  LONG v19; // r9d
  LONG left; // r8d
  LONG v21; // ecx
  int v22; // r10d
  _DWORD *v23; // r11
  _DWORD *v24; // r9
  int v25; // r8d
  __int64 v26; // rdx
  int *v27; // rcx
  int v28; // eax
  __int64 v29; // r14
  size_t v30; // r15
  __int64 v31; // rsi
  char *v32; // rbx
  LONG v33; // ebx
  LONG v34; // r15d
  __int64 v35; // rcx
  __int64 v36; // r8
  _DWORD *v37; // r9
  _DWORD *v38; // rdx
  int *v39; // rcx
  int v40; // eax
  int i; // r15d
  char *v42; // rbx
  __int64 v43; // rcx
  struct stretch::_STRRUN *v44; // rsi
  __int64 v45; // r10
  int v46; // r8d
  int *v47; // rdx
  int *v48; // rcx
  int *v49; // [rsp+30h] [rbp-30h]
  __int64 v50; // [rsp+38h] [rbp-28h]
  int *v51; // [rsp+38h] [rbp-28h]
  __int64 v52; // [rsp+40h] [rbp-20h]
  struct _RECTL si128; // [rsp+48h] [rbp-18h] BYREF
  int v54; // [rsp+98h] [rbp+38h]
  int v55; // [rsp+98h] [rbp+38h]

  if ( a2 )
  {
    v4 = this + 2;
    if ( a4 )
    {
      v9 = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( v9 )
      {
        v10 = *(_QWORD *)((char *)a4 + 12);
        v11 = *this;
        v12 = HIDWORD(v10);
        v54 = v10;
        si128 = *(struct _RECTL *)((char *)a4 + 4);
        if ( v11 < SHIDWORD(v10) )
        {
          v13 = v11 + this[1];
          v14 = HIDWORD(*(_QWORD *)&si128.left);
          if ( v13 > si128.top )
          {
            if ( v11 >= si128.top )
              LODWORD(v14) = v11;
            if ( v13 < SHIDWORD(v10) )
              LODWORD(v12) = v11 + this[1];
            v15 = v12 - v14;
            v16 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * (int)v14;
            v50 = v16;
            while ( v4 != (LONG *)a2 )
            {
              v17 = *v4;
              v18 = v4[1];
              v19 = v18 + *v4;
              if ( v19 < si128.left )
              {
                v4 += v18 + 2;
              }
              else
              {
                if ( v17 >= (int)v10 )
                  return;
                left = si128.left;
                v21 = v10;
                if ( v17 >= si128.left )
                  left = *v4;
                if ( v19 < (int)v10 )
                  v21 = v18 + *v4;
                v22 = v21 - left;
                v23 = (_DWORD *)(v16 + 4LL * left);
                v24 = v23;
                if ( left < v21 )
                {
                  v25 = left - v17;
                  v26 = v22;
                  v27 = &v4[v25 + 2];
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
                  v30 = 4 * v22;
                  v31 = (unsigned int)(v15 - 1);
                  do
                  {
                    v32 = (char *)v23 + *((int *)a3 + 22);
                    memmove(v32, v23, v30);
                    v23 = v32;
                    --v31;
                  }
                  while ( v31 );
                }
                LODWORD(v10) = v54;
                v16 = v50;
                v4 += v4[1] + 2;
              }
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        v33 = *this;
        v34 = this[1];
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_30:
        XCLIPOBJ::vFindScan(a4, &si128, v33);
        while ( v34 )
        {
          --v34;
          if ( v33 >= si128.top && v33 < si128.bottom )
          {
            v43 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v33;
            v52 = v43;
            if ( v4 != (LONG *)a2 )
            {
              v44 = (struct stretch::_STRRUN *)v4;
              do
              {
                v45 = *(int *)v44;
                v46 = v45 + *((_DWORD *)v44 + 1);
                v55 = v46;
                v47 = (int *)(v43 + 4 * v45);
                v49 = v47;
                if ( (int)v45 < v46 )
                {
                  v48 = (int *)((char *)v44 + 8);
                  v51 = (int *)((char *)v44 + 8);
                  do
                  {
                    if ( (int)v45 < si128.left || (int)v45 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment(a4, &si128, v45);
                      v48 = v51;
                      v46 = v55;
                      v47 = v49;
                    }
                    if ( (int)v45 >= si128.left && (int)v45 < si128.right )
                      *v47 = *v48;
                    ++v47;
                    ++v48;
                    LODWORD(v45) = v45 + 1;
                    v49 = v47;
                    v51 = v48;
                  }
                  while ( (int)v45 < v46 );
                  v43 = v52;
                }
                v44 = (struct stretch::_STRRUN *)((char *)v44 + 4 * *((int *)v44 + 1) + 8);
              }
              while ( v44 != a2 );
            }
          }
          if ( ++v33 < si128.top || v33 >= si128.bottom )
            goto LABEL_30;
        }
      }
    }
    else
    {
      v29 = *((_QWORD *)a3 + 10) + *this * *((_DWORD *)a3 + 22);
      while ( v4 != (LONG *)a2 )
      {
        v35 = *v4;
        v36 = (unsigned int)v4[1];
        v37 = (_DWORD *)(v29 + 4 * v35);
        v38 = v37;
        if ( (int)v35 < (int)v36 + (int)v35 )
        {
          v39 = v4 + 2;
          do
          {
            v40 = *v39++;
            *v38++ = v40;
            --v36;
          }
          while ( v36 );
        }
        for ( i = 1; i < this[1]; v37 = v42 )
        {
          v42 = (char *)v37 + *((int *)a3 + 22);
          memmove(v42, v37, 4 * v4[1]);
          ++i;
        }
        v4 += v4[1] + 2;
      }
    }
  }
}
