/*
 * XREFs of ?vStrWrite08@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140221D60
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14017E700 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall stretch::vStrWrite08(
        LONG *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  struct stretch::_STRRUN *v4; // rbx
  bool v9; // zf
  __int64 v10; // r10
  LONG top; // ecx
  LONG v12; // r14d
  int v13; // r14d
  __int64 v14; // r11
  LONG v15; // r8d
  __int64 v16; // rax
  LONG v17; // r9d
  LONG left; // edx
  LONG v19; // ecx
  _BYTE *v20; // rdi
  _BYTE *v21; // r9
  int v22; // eax
  size_t v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  int *v26; // rcx
  char v27; // al
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r8
  char *v31; // rdi
  _BYTE *v32; // rdx
  char *v33; // rcx
  char v34; // al
  int v35; // r14d
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r12
  LONG v39; // edi
  LONG v40; // esi
  __int64 v41; // rcx
  struct stretch::_STRRUN *v42; // rsi
  __int64 v43; // r10
  int v44; // edx
  _BYTE *v45; // r12
  int *v46; // rcx
  LONG v47; // [rsp+30h] [rbp-30h]
  __int64 v48; // [rsp+38h] [rbp-28h]
  int *v49; // [rsp+38h] [rbp-28h]
  __int64 v50; // [rsp+40h] [rbp-20h]
  struct _RECTL si128; // [rsp+48h] [rbp-18h] BYREF
  int v52; // [rsp+98h] [rbp+38h]
  int v53; // [rsp+98h] [rbp+38h]

  if ( a2 )
  {
    v4 = (struct stretch::_STRRUN *)(this + 2);
    if ( a4 )
    {
      v9 = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( v9 )
      {
        v10 = *(_QWORD *)((char *)a4 + 12);
        top = *this;
        v52 = v10;
        si128 = *(struct _RECTL *)((char *)a4 + 4);
        if ( top < SHIDWORD(v10) )
        {
          v12 = top + this[1];
          if ( v12 > si128.top )
          {
            if ( top < si128.top )
              top = si128.top;
            if ( v12 >= SHIDWORD(v10) )
              v12 = HIDWORD(v10);
            v13 = v12 - top;
            v14 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * top;
            v48 = v14;
            while ( v4 != a2 )
            {
              v15 = *(_DWORD *)v4;
              v16 = *((int *)v4 + 1);
              v17 = v16 + *(_DWORD *)v4;
              if ( v17 >= si128.left )
              {
                if ( v15 >= (int)v10 )
                  return;
                left = si128.left;
                v19 = v10;
                if ( v15 >= si128.left )
                  left = *(_DWORD *)v4;
                if ( v17 < (int)v10 )
                  v19 = v16 + *(_DWORD *)v4;
                v20 = (_BYTE *)(v14 + left);
                v21 = v20;
                v22 = v19 - left;
                v23 = v19 - left;
                if ( left < v19 )
                {
                  v24 = left - v15;
                  v25 = v22;
                  v26 = (int *)((char *)v4 + 4 * v24 + 8);
                  do
                  {
                    v27 = *(_BYTE *)v26++;
                    *v21++ = v27;
                    --v25;
                  }
                  while ( v25 );
                }
                if ( v13 > 1 )
                {
                  v37 = *((int *)a3 + 22);
                  v38 = (unsigned int)(v13 - 1);
                  do
                  {
                    memmove(&v20[v37], v20, v23);
                    v37 = *((int *)a3 + 22);
                    v20 += v37;
                    --v38;
                  }
                  while ( v38 );
                  LODWORD(v10) = v52;
                  v14 = v48;
                }
                v16 = *((int *)v4 + 1);
              }
              v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * v16 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        v39 = *this;
        v40 = this[1];
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_57:
        XCLIPOBJ::vFindScan(a4, &si128, v39);
        while ( v40 )
        {
          v47 = --v40;
          if ( v39 >= si128.top && v39 < si128.bottom )
          {
            v41 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v39;
            v50 = v41;
            if ( v4 != a2 )
            {
              v42 = v4;
              do
              {
                v43 = *(int *)v42;
                v44 = v43 + *((_DWORD *)v42 + 1);
                v53 = v44;
                v45 = (_BYTE *)(v41 + v43);
                if ( (int)v43 < v44 )
                {
                  v46 = (int *)((char *)v42 + 8);
                  v49 = (int *)((char *)v42 + 8);
                  do
                  {
                    if ( (int)v43 < si128.left || (int)v43 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment(a4, &si128, v43);
                      v46 = v49;
                      v44 = v53;
                    }
                    if ( (int)v43 >= si128.left && (int)v43 < si128.right )
                      *v45 = *(_BYTE *)v46;
                    ++v46;
                    ++v45;
                    LODWORD(v43) = v43 + 1;
                    v49 = v46;
                  }
                  while ( (int)v43 < v44 );
                  v41 = v50;
                }
                v42 = (struct stretch::_STRRUN *)((char *)v42 + 4 * *((int *)v42 + 1) + 8);
              }
              while ( v42 != a2 );
              v40 = v47;
            }
          }
          if ( ++v39 < si128.top || v39 >= si128.bottom )
            goto LABEL_57;
        }
      }
    }
    else
    {
      v28 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * *this;
      while ( v4 != a2 )
      {
        v29 = *(int *)v4;
        v30 = *((unsigned int *)v4 + 1);
        v31 = (char *)(v28 + v29);
        v32 = (_BYTE *)(v28 + v29);
        if ( (int)v29 < (int)v30 + (int)v29 )
        {
          v33 = (char *)v4 + 8;
          do
          {
            v34 = *v33;
            v33 += 4;
            *v32++ = v34;
            --v30;
          }
          while ( v30 );
        }
        v35 = 1;
        if ( this[1] > 1 )
        {
          v36 = *((int *)a3 + 22);
          do
          {
            memmove(&v31[v36], v31, *((int *)v4 + 1));
            v36 = *((int *)a3 + 22);
            ++v35;
            v31 += v36;
          }
          while ( v35 < this[1] );
        }
        v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
