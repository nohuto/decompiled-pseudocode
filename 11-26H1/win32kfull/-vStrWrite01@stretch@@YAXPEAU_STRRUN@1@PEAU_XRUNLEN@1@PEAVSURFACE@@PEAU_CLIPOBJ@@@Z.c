/*
 * XREFs of ?vStrWrite01@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400E3100
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400E3898 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall stretch::vStrWrite01(
        stretch *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  struct SURFACE *v4; // r12
  struct stretch::_XRUNLEN *v5; // rsi
  struct stretch::_STRRUN *v6; // r13
  struct stretch::_STRRUN *v7; // rdi
  __int64 v9; // r12
  __int64 v10; // r11
  int v11; // edi
  int *v12; // r14
  int *v13; // rcx
  char v14; // r8
  int v15; // r9d
  int *v16; // rbp
  __int64 v17; // r10
  int *v18; // rbx
  int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // ebp
  __int128 v23; // xmm0
  int v24; // eax
  struct SCAN *pScan; // rax
  struct SCAN *v26; // rdx
  int v27; // r9d
  struct SCAN *i; // r8
  LONG v29; // r8d
  LONG right; // r11d
  int v31; // r14d
  LONG top; // r10d
  LONG left; // ebx
  LONG bottom; // r9d
  LONG v35; // ecx
  __int64 v36; // r9
  int v37; // eax
  int v38; // r13d
  unsigned int v39; // r10d
  _DWORD *v40; // r14
  int v41; // edi
  char v42; // cl
  _DWORD *v43; // r9
  __int64 v44; // r8
  int v45; // ecx
  int *v46; // rsi
  int v47; // r12d
  __int64 v48; // r15
  __int64 v49; // r14
  LONG v50; // edx
  LONG v51; // esi
  int v53; // ecx
  int v54; // ebp
  int v55; // r8d
  __int64 v56; // rcx
  int v57; // esi
  __int64 v58; // rbp
  struct stretch::_XRUNLEN *v59; // r11
  int v60; // edi
  char *v61; // rcx
  int v62; // eax
  size_t v63; // r14
  char *v64; // rbx
  int v65; // edx
  int v66; // r9d
  int v67; // r8d
  int v68; // edx
  int v69; // r9d
  int v70; // r10d
  int v71; // ecx
  int v72; // r10d
  int v73; // r8d
  int v74; // r10d
  int v75; // r8d
  __int64 v76; // rax
  int *v77; // rcx
  int v78; // r9d
  LONG v79; // eax
  LONG v80; // eax
  char v81; // [rsp+20h] [rbp-88h]
  LONG v82; // [rsp+24h] [rbp-84h]
  LONG v83; // [rsp+28h] [rbp-80h]
  struct _RECTL v84; // [rsp+30h] [rbp-78h] BYREF
  char *v85; // [rsp+40h] [rbp-68h]
  LONG v86; // [rsp+48h] [rbp-60h]
  int v87; // [rsp+4Ch] [rbp-5Ch]
  _DWORD *v88; // [rsp+50h] [rbp-58h]
  __int64 v89; // [rsp+58h] [rbp-50h]
  struct stretch::_STRRUN *v90; // [rsp+60h] [rbp-48h]

  if ( !a2 )
    return;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v90 = (stretch *)((char *)this + 8);
  v7 = (stretch *)((char *)this + 8);
  v85 = (char *)this + 8;
  if ( !a4 )
  {
    v9 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * *(_DWORD *)this;
    if ( v7 == a2 )
      return;
    while ( 1 )
    {
      v10 = *(int *)v7;
      v11 = v10 + *((_DWORD *)v7 + 1);
      v12 = (int *)(v9 + 4 * (v10 >> 5));
      v13 = v12;
      if ( (int)v10 >= v11 )
        goto LABEL_14;
      v14 = v10 & 0x1F;
      v15 = *v12;
      v16 = (int *)v85;
      if ( (unsigned __int64)v12 < *((_QWORD *)v5 + 9) + (unsigned __int64)*((unsigned int *)v5 + 16) )
      {
        v17 = v10 & 0x1F;
        v18 = (int *)(v85 + 8);
        do
        {
          v19 = *v18++;
          v20 = dword_140361820[v17];
          if ( v19 )
            v15 |= v20;
          else
            v15 &= ~v20;
          ++v14;
          ++v17;
          LODWORD(v10) = v10 + 1;
          if ( (int)v10 >= v11 )
            break;
          if ( (v14 & 0x20) != 0 )
          {
            *v13 = v15;
            v14 = 0;
            v15 = v13[1];
            ++v13;
            v17 = 0LL;
          }
        }
        while ( (unsigned __int64)v13 < *((_QWORD *)v5 + 9) + (unsigned __int64)*((unsigned int *)v5 + 16) );
      }
      *v13 = v15;
      if ( *((int *)this + 1) <= 1 )
        goto LABEL_14;
      v53 = *v16;
      v54 = *v16 + v16[1];
      v55 = v53 >> 5;
      v56 = v53 & 0x1F;
      v57 = v54 >> 5;
      v58 = v54 & 0x1F;
      if ( v55 != v57 )
        break;
      v66 = 1;
      v67 = *v12;
      v68 = *((_DWORD *)&aulMsk + v56) & ~*((_DWORD *)&aulMsk + v58);
      v5 = a3;
      do
      {
        ++v66;
        v12 = (int *)((char *)v12 + *((int *)a3 + 22));
        v67 = v68 & v67 | ~v68 & *v12;
        *v12 = v67;
      }
      while ( v66 < *((_DWORD *)this + 1) );
LABEL_14:
      v7 = (struct stretch::_STRRUN *)&v85[4 * *((int *)v85 + 1) + 8];
      v85 = (char *)v7;
      if ( v7 == a2 )
        return;
    }
    v59 = a3;
    if ( (_DWORD)v56 )
    {
      v69 = 1;
      v70 = *((_DWORD *)&aulMsk + v56);
      v71 = *v12 & v70;
      v72 = ~v70;
      do
      {
        ++v69;
        v12 = (int *)((char *)v12 + *((int *)a3 + 22));
        *v12 = v71 | v72 & *v12;
        v65 = *((_DWORD *)this + 1);
      }
      while ( v69 < v65 );
      v73 = v55 + 1;
      if ( v73 == v57 || (v60 = 1, v61 = (char *)(v9 + 4LL * v73), v62 = 4 * (v57 - v73), v65 <= 1) )
      {
LABEL_96:
        if ( (_DWORD)v58 )
        {
          v74 = *((_DWORD *)&aulMsk + v58);
          v75 = 1;
          v76 = v57;
          v5 = a3;
          v77 = (int *)(v9 + 4 * v76);
          v78 = *v77 & ~v74;
          if ( v65 > 1 )
          {
            do
            {
              ++v75;
              v77 = (int *)((char *)v77 + *((int *)a3 + 22));
              *v77 = v78 | v74 & *v77;
            }
            while ( v75 < *((_DWORD *)this + 1) );
          }
        }
        else
        {
          v5 = a3;
        }
        goto LABEL_14;
      }
    }
    else
    {
      v60 = 1;
      v61 = (char *)(v9 + 4LL * v55);
      v62 = 4 * (v57 - v55);
    }
    v63 = v62;
    do
    {
      v64 = &v61[*((int *)v59 + 22)];
      memmove(v64, v61, v63);
      v65 = *((_DWORD *)this + 1);
      ++v60;
      v59 = a3;
      v61 = v64;
    }
    while ( v60 < v65 );
    goto LABEL_96;
  }
  v21 = *((_QWORD *)a4 + 7);
  v22 = 0;
  v23 = *(_OWORD *)((char *)a4 + 4);
  *(_QWORD *)((char *)a4 + 108) = 0LL;
  *((_DWORD *)a4 + 32) = 0;
  *((_OWORD *)a4 + 4) = v23;
  v24 = *(_DWORD *)(v21 + 48);
  *((_DWORD *)a4 + 29) = 0;
  *((_DWORD *)a4 + 22) = v24 - 1;
  *((_DWORD *)a4 + 31) = 0;
  pScan = REGION_CORE::get_pScan((REGION_CORE *)(v21 + 24));
  v26 = pScan;
  *((_QWORD *)v4 + 10) = pScan;
  *((_DWORD *)v4 + 30) = 1;
  if ( !*((_DWORD *)v4 + 32) )
  {
    v27 = *((_DWORD *)v4 + 17);
    for ( i = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
          *((_DWORD *)i + 2) <= v27;
          i = (struct SCAN *)((char *)i + (unsigned int)(4 * *(_DWORD *)i + 16)) )
    {
      if ( (*((_DWORD *)v4 + 22))-- == 1 )
        goto LABEL_21;
      *((_QWORD *)v4 + 10) = i;
      v26 = i;
    }
  }
  *((_DWORD *)v4 + 24) = 0;
  *(_QWORD *)((char *)v4 + 100) = 2LL;
LABEL_21:
  v29 = *(_DWORD *)this;
  right = 0x80000000;
  v31 = *((_DWORD *)this + 1);
  top = 0x7FFFFFFF;
  v83 = 0x7FFFFFFF;
  left = 0x80000000;
  v84.left = 0x80000000;
  bottom = 0x80000000;
  v84.top = 0x7FFFFFFF;
  v84.right = 0x80000000;
  v84.bottom = 0x80000000;
  v86 = v29;
  if ( v29 == 0x7FFFFFFF )
  {
    bottom = 0x7FFFFFFF;
    v82 = 0x7FFFFFFF;
    v84.bottom = 0x7FFFFFFF;
    goto LABEL_32;
  }
  if ( v29 >= *((_DWORD *)v26 + 1) )
  {
    if ( v29 >= *((_DWORD *)v26 + 2) )
    {
      do
      {
        v26 = (struct SCAN *)((char *)v26 + (unsigned int)(4 * *(_DWORD *)v26 + 16));
        *((_QWORD *)v4 + 10) = v26;
        v35 = *((_DWORD *)v26 + 2);
      }
      while ( v29 >= v35 );
      top = *((_DWORD *)v4 + 2);
      bottom = *((_DWORD *)v4 + 4);
      if ( *((_DWORD *)v26 + 1) > top )
        top = *((_DWORD *)v26 + 1);
      v84.top = top;
      if ( v35 < bottom )
        bottom = v35;
      v84.bottom = bottom;
      if ( top >= bottom )
      {
        bottom = 0x7FFFFFFF;
        v84.bottom = 0x7FFFFFFF;
      }
      else if ( bottom != 0x7FFFFFFF )
      {
        goto LABEL_31;
      }
      top = 0x7FFFFFFF;
      v84.top = 0x7FFFFFFF;
    }
LABEL_31:
    v83 = top;
    v82 = bottom;
    goto LABEL_32;
  }
  do
  {
    v26 = (struct SCAN *)((char *)v26 - (unsigned int)(4 * *((_DWORD *)v26 - 1) + 16));
    *((_QWORD *)v4 + 10) = v26;
    v79 = *((_DWORD *)v26 + 1);
  }
  while ( v29 < v79 );
  top = *((_DWORD *)v4 + 2);
  bottom = *((_DWORD *)v4 + 4);
  if ( v79 > top )
    top = *((_DWORD *)v26 + 1);
  v80 = *((_DWORD *)v26 + 2);
  v83 = top;
  v84.top = top;
  if ( v80 < bottom )
    bottom = v80;
  v82 = bottom;
  v84.bottom = bottom;
  if ( top < bottom )
  {
    if ( top != 0x80000000 )
      goto LABEL_32;
  }
  else
  {
    top = 0x80000000;
    v83 = 0x80000000;
    v84.top = 0x80000000;
  }
  bottom = 0x80000000;
  v82 = 0x80000000;
  v84.bottom = 0x80000000;
LABEL_32:
  if ( !v31 )
    return;
  do
  {
    v87 = --v31;
    if ( v29 < top || v29 >= bottom )
      goto LABEL_55;
    v36 = *((_QWORD *)v5 + 10) + *((_DWORD *)v5 + 22) * v29;
    v89 = v36;
    if ( v7 == v6 )
      goto LABEL_54;
    do
    {
      v37 = *(_DWORD *)v7;
      v38 = *(_DWORD *)v7 + *((_DWORD *)v7 + 1);
      v39 = *(_DWORD *)v7 & 0x1F;
      v40 = (_DWORD *)(v36 + 4 * ((__int64)*(int *)v7 >> 5));
      v88 = v40;
      if ( v37 < 0 || v37 >= *((_DWORD *)v5 + 14) )
      {
        v42 = 0;
        v41 = 0;
      }
      else
      {
        v41 = *v40;
        v42 = 1;
      }
      v81 = v42;
      if ( v37 < v38 )
      {
        v43 = v85 + 8;
        v44 = v39;
        while ( 1 )
        {
          if ( v37 >= left && v37 < right )
            goto LABEL_43;
          v46 = (int *)*((_QWORD *)v4 + 10);
          v47 = *v46;
          while ( 1 )
          {
            if ( v22 == v47 )
            {
              v40 = v88;
              v22 = 0;
              v4 = a4;
              goto LABEL_75;
            }
            v48 = 4LL * v22 + 12;
            if ( v37 >= *(int *)((char *)v46 + v48) )
              break;
LABEL_113:
            v22 += 2;
          }
          v49 = 4LL * (v22 + 1) + 12;
          if ( v37 >= *(int *)((char *)v46 + v49) )
            break;
          v50 = *(int *)((char *)v46 + v48);
          v51 = *(int *)((char *)v46 + v49);
          v4 = a4;
          v40 = v88;
          if ( v50 <= *((_DWORD *)a4 + 1) )
            v50 = *((_DWORD *)a4 + 1);
          if ( v51 >= *((_DWORD *)a4 + 3) )
            v51 = *((_DWORD *)a4 + 3);
          v22 = 0;
          if ( v50 < v51 )
          {
            left = v50;
            right = v51;
          }
LABEL_75:
          v5 = a3;
LABEL_43:
          if ( v37 >= left && v37 < right )
          {
            v45 = dword_140361820[v44];
            if ( *v43 )
              v41 |= v45;
            else
              v41 &= ~v45;
          }
          ++v39;
          ++v44;
          ++v37;
          ++v43;
          if ( (v39 & 0x20) != 0 )
          {
            if ( v81 )
              *v40 = v41;
            ++v40;
            v39 = 0;
            v88 = v40;
            v44 = 0LL;
            if ( v37 < 0 || v37 >= *((_DWORD *)v5 + 14) )
            {
              v81 = 0;
              v41 = 0;
            }
            else
            {
              v41 = *v40;
              v81 = 1;
            }
          }
          if ( v37 >= v38 )
          {
            v42 = v81;
            v36 = v89;
            v84.right = right;
            v84.left = left;
            goto LABEL_50;
          }
        }
        v46 = (int *)*((_QWORD *)a4 + 10);
        goto LABEL_113;
      }
LABEL_50:
      if ( v42 )
        *v40 = v41;
      v6 = a2;
      v7 = (struct stretch::_STRRUN *)&v85[4 * *((int *)v85 + 1) + 8];
      v85 = (char *)v7;
    }
    while ( v7 != a2 );
    v29 = v86;
    v31 = v87;
    top = v83;
LABEL_54:
    v7 = v90;
    bottom = v82;
    v85 = (char *)v90;
LABEL_55:
    v86 = ++v29;
    if ( v29 < top || v29 >= bottom )
    {
      XCLIPOBJ::vFindScan(v4, &v84, v29);
      bottom = v84.bottom;
      top = v84.top;
      right = v84.right;
      left = v84.left;
      v82 = v84.bottom;
      v83 = v84.top;
    }
  }
  while ( v31 );
}
