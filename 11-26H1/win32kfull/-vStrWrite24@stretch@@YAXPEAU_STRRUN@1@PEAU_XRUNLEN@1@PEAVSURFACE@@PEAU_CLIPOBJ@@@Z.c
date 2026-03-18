/*
 * XREFs of ?vStrWrite24@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1401C2C60
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14017E700 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall stretch::vStrWrite24(
        LONG *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  LONG *v4; // rdi
  struct stretch::_STRRUN *v7; // r12
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
  int v22; // r9d
  char *v23; // r10
  char *v24; // r11
  __int64 v25; // rdx
  __int64 v26; // r8
  int *v27; // rdx
  __int16 v28; // ax
  char v29; // cl
  __int64 v30; // r14
  __int16 v31; // ax
  char v32; // cl
  int *v33; // r8
  char *v34; // r9
  __int64 v35; // r11
  int i; // r15d
  char *v37; // rbx
  char *v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // r10d
  size_t v41; // r15
  __int64 v42; // rsi
  char *v43; // rbx
  LONG v44; // ebx
  LONG v45; // esi
  __int64 v46; // rcx
  struct stretch::_STRRUN *v47; // rsi
  __int64 v48; // r10
  int v49; // edx
  __int64 v50; // r15
  int *v51; // r12
  int v52; // [rsp+30h] [rbp-30h]
  __int64 v53; // [rsp+38h] [rbp-28h]
  LONG v54; // [rsp+38h] [rbp-28h]
  __int64 v55; // [rsp+40h] [rbp-20h]
  struct _RECTL si128; // [rsp+48h] [rbp-18h] BYREF
  int v58; // [rsp+98h] [rbp+38h]

  if ( a2 )
  {
    v4 = this + 2;
    v7 = a2;
    if ( a4 )
    {
      v9 = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( v9 )
      {
        v10 = *(_QWORD *)((char *)a4 + 12);
        v11 = *this;
        v12 = HIDWORD(v10);
        v58 = v10;
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
            v53 = v16;
            while ( v4 != (LONG *)v7 )
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
                v23 = (char *)(v16 + 2LL * left + left);
                v24 = v23;
                if ( left < v21 )
                {
                  v25 = left - v17;
                  v26 = v22;
                  v27 = &v4[v25 + 2];
                  do
                  {
                    v28 = *(_WORD *)v27;
                    v29 = *((_BYTE *)v27++ + 2);
                    *(_WORD *)v24 = v28;
                    v24[2] = v29;
                    v24 += 3;
                    --v26;
                  }
                  while ( v26 );
                }
                if ( v15 > 1 )
                {
                  v41 = 3 * v22;
                  v42 = (unsigned int)(v15 - 1);
                  do
                  {
                    v43 = &v23[*((int *)a3 + 22)];
                    memmove(v43, v23, v41);
                    v23 = v43;
                    --v42;
                  }
                  while ( v42 );
                }
                LODWORD(v10) = v58;
                v16 = v53;
                v4 += v4[1] + 2;
              }
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        v44 = *this;
        v45 = this[1];
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_55:
        XCLIPOBJ::vFindScan(a4, &si128, v44);
        while ( v45 )
        {
          v54 = --v45;
          if ( v44 >= si128.top && v44 < si128.bottom )
          {
            v46 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v44;
            v55 = v46;
            if ( v4 != (LONG *)v7 )
            {
              v47 = (struct stretch::_STRRUN *)v4;
              do
              {
                v48 = *(int *)v47;
                v49 = v48 + *((_DWORD *)v47 + 1);
                v52 = v49;
                v50 = v48 + v46 + 2 * v48;
                if ( (int)v48 < v49 )
                {
                  v51 = (int *)((char *)v47 + 8);
                  do
                  {
                    if ( (int)v48 < si128.left || (int)v48 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment(a4, &si128, v48);
                      v49 = v52;
                    }
                    if ( (int)v48 >= si128.left && (int)v48 < si128.right )
                    {
                      *(_WORD *)v50 = *(_WORD *)v51;
                      *(_BYTE *)(v50 + 2) = *((_BYTE *)v51 + 2);
                    }
                    v50 += 3LL;
                    ++v51;
                    LODWORD(v48) = v48 + 1;
                  }
                  while ( (int)v48 < v49 );
                  v7 = a2;
                  v46 = v55;
                }
                v47 = (struct stretch::_STRRUN *)((char *)v47 + 4 * *((int *)v47 + 1) + 8);
              }
              while ( v47 != v7 );
              v45 = v54;
            }
          }
          if ( ++v44 < si128.top || v44 >= si128.bottom )
            goto LABEL_55;
        }
      }
    }
    else
    {
      v30 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * *this;
      while ( v4 != (LONG *)v7 )
      {
        v39 = *v4;
        v40 = v4[1];
        v38 = (char *)(v39 + v30 + 2 * v39);
        v34 = v38;
        if ( (int)v39 < (int)(v40 + v39) )
        {
          v33 = v4 + 2;
          v35 = v40;
          do
          {
            v31 = *(_WORD *)v33;
            v32 = *((_BYTE *)v33++ + 2);
            *(_WORD *)v34 = v31;
            v34[2] = v32;
            v34 += 3;
            --v35;
          }
          while ( v35 );
        }
        for ( i = 1; i < this[1]; v38 = v37 )
        {
          v37 = &v38[*((int *)a3 + 22)];
          memmove(v37, v38, 3 * v4[1]);
          ++i;
        }
        v4 += v4[1] + 2;
      }
    }
  }
}
