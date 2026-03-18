/*
 * XREFs of ?vStrWrite16@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140338310
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14017E700 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall stretch::vStrWrite16(
        LONG *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  struct stretch::_STRRUN *v4; // rdi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  _WORD *v12; // r9
  _WORD *v13; // rdx
  __int16 *v14; // rcx
  __int16 v15; // ax
  int i; // r15d
  char *v17; // rbx
  bool v18; // zf
  unsigned __int64 v19; // r10
  LONG v20; // ecx
  unsigned __int64 v21; // r14
  LONG v22; // edx
  __int64 v23; // rax
  int v24; // r14d
  __int64 v25; // r11
  LONG v26; // edx
  __int64 v27; // rax
  LONG v28; // r9d
  LONG left; // r8d
  LONG v30; // ecx
  int v31; // r10d
  _WORD *v32; // r11
  _WORD *v33; // r9
  int v34; // r8d
  __int64 v35; // rdx
  int *v36; // rcx
  __int16 v37; // ax
  size_t v38; // r15
  __int64 v39; // rsi
  char *v40; // rbx
  LONG v41; // ebx
  LONG v42; // r15d
  __int64 v43; // rcx
  struct stretch::_STRRUN *v44; // rsi
  __int64 v45; // r10
  int v46; // r8d
  _WORD *v47; // rdx
  int *v48; // rcx
  _WORD *v49; // [rsp+30h] [rbp-30h]
  __int64 v50; // [rsp+38h] [rbp-28h]
  int *v51; // [rsp+38h] [rbp-28h]
  __int64 v52; // [rsp+40h] [rbp-20h]
  struct _RECTL si128; // [rsp+48h] [rbp-18h] BYREF
  int v54; // [rsp+98h] [rbp+38h]
  int v55; // [rsp+98h] [rbp+38h]

  if ( a2 )
  {
    v4 = (struct stretch::_STRRUN *)(this + 2);
    if ( a4 )
    {
      v18 = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( v18 )
      {
        v19 = *(_QWORD *)((char *)a4 + 12);
        v20 = *this;
        v21 = HIDWORD(v19);
        v54 = v19;
        si128 = *(struct _RECTL *)((char *)a4 + 4);
        if ( v20 < SHIDWORD(v19) )
        {
          v22 = v20 + this[1];
          v23 = HIDWORD(*(_QWORD *)&si128.left);
          if ( v22 > si128.top )
          {
            if ( v20 >= si128.top )
              LODWORD(v23) = v20;
            if ( v22 < SHIDWORD(v19) )
              LODWORD(v21) = v20 + this[1];
            v24 = v21 - v23;
            v25 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * (int)v23;
            v50 = v25;
            while ( v4 != a2 )
            {
              v26 = *(_DWORD *)v4;
              v27 = *((int *)v4 + 1);
              v28 = v27 + *(_DWORD *)v4;
              if ( v28 >= si128.left )
              {
                if ( v26 >= (int)v19 )
                  return;
                left = si128.left;
                v30 = v19;
                if ( v26 >= si128.left )
                  left = *(_DWORD *)v4;
                if ( v28 < (int)v19 )
                  v30 = v27 + *(_DWORD *)v4;
                v31 = v30 - left;
                v32 = (_WORD *)(v25 + 2LL * left);
                v33 = v32;
                if ( left < v30 )
                {
                  v34 = left - v26;
                  v35 = v31;
                  v36 = (int *)((char *)v4 + 4 * v34 + 8);
                  do
                  {
                    v37 = *(_WORD *)v36++;
                    *v33++ = v37;
                    --v35;
                  }
                  while ( v35 );
                }
                if ( v24 > 1 )
                {
                  v38 = 2 * v31;
                  v39 = (unsigned int)(v24 - 1);
                  do
                  {
                    v40 = (char *)v32 + *((int *)a3 + 22);
                    memmove(v40, v32, v38);
                    v32 = v40;
                    --v39;
                  }
                  while ( v39 );
                }
                LODWORD(v19) = v54;
                v25 = v50;
                v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
              }
              else
              {
                v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * v27 + 8);
              }
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        v41 = *this;
        v42 = this[1];
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_53:
        XCLIPOBJ::vFindScan(a4, &si128, v41);
        while ( v42 )
        {
          --v42;
          if ( v41 >= si128.top && v41 < si128.bottom )
          {
            v43 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v41;
            v52 = v43;
            if ( v4 != a2 )
            {
              v44 = v4;
              do
              {
                v45 = *(int *)v44;
                v46 = v45 + *((_DWORD *)v44 + 1);
                v55 = v46;
                v47 = (_WORD *)(v43 + 2 * v45);
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
                      *v47 = *(_WORD *)v48;
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
          if ( ++v41 < si128.top || v41 >= si128.bottom )
            goto LABEL_53;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *this * *((_DWORD *)a3 + 22);
      while ( v4 != a2 )
      {
        v10 = *(int *)v4;
        v11 = *((unsigned int *)v4 + 1);
        v12 = (_WORD *)(v9 + 2 * v10);
        v13 = v12;
        if ( (int)v10 < (int)v11 + (int)v10 )
        {
          v14 = (__int16 *)((char *)v4 + 8);
          do
          {
            v15 = *v14;
            v14 += 2;
            *v13++ = v15;
            --v11;
          }
          while ( v11 );
        }
        for ( i = 1; i < this[1]; v12 = v17 )
        {
          v17 = (char *)v12 + *((int *)a3 + 22);
          memmove(v17, v12, 2 * *((_DWORD *)v4 + 1));
          ++i;
        }
        v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
