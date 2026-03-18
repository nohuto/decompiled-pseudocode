/*
 * XREFs of ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x140157F70
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vSrcCopyS1D1LtoR(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r13
  int v2; // r10d
  _BYTE *v3; // r14
  _QWORD *v4; // r12
  int v5; // esi
  _QWORD *v6; // rbp
  int v7; // r15d
  int v8; // r8d
  int v9; // edx
  unsigned int v10; // r9d
  char v11; // cl
  char v12; // al
  int v13; // r11d
  _BYTE *v14; // rbx
  _BYTE *v15; // rdi
  int v16; // eax
  int v17; // esi
  int v18; // ecx
  int v19; // eax
  _DWORD *v20; // r15
  _QWORD *v21; // rdx
  _QWORD *v22; // r10
  _DWORD *v23; // r11
  unsigned __int8 v24; // di
  int v25; // esi
  unsigned int v26; // ecx
  char v27; // bl
  int v28; // eax
  int v29; // edi
  int v30; // r15d
  int v31; // r8d
  int v32; // ecx
  __int64 v33; // r9
  unsigned int v34; // ecx
  unsigned __int8 *v35; // r9
  int v36; // r10d
  unsigned int v37; // edx
  char v38; // dl
  unsigned __int8 v39; // al
  unsigned __int8 v40; // dl
  char v41; // al
  _BYTE *v42; // rdx
  unsigned __int8 *v43; // r12
  int v44; // ebp
  _BYTE *v45; // r9
  unsigned __int8 v46; // dl
  int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rdx
  _BYTE *v50; // r10
  char v51; // r8
  unsigned __int8 v52; // dl
  char v53; // al
  char v54; // al
  char v55; // r15
  _BYTE *v56; // r9
  unsigned __int8 v57; // dl
  unsigned __int8 v58; // al
  __int64 v59; // rax
  __int64 v60; // rdx
  _BYTE *v61; // r10
  char v62; // r8
  unsigned __int8 v63; // dl
  int v64; // edi
  char v65; // r8
  __int64 v66; // rax
  unsigned __int8 v67; // r12
  char v68; // r15
  _BYTE *v69; // r9
  unsigned __int8 v70; // dl
  unsigned __int8 v71; // al
  unsigned __int8 v72; // dl
  _BYTE *v73; // r9
  unsigned __int8 v74; // dl
  unsigned __int8 v75; // cl
  char v76; // si
  unsigned __int8 v77; // dl
  unsigned __int8 v78; // dl
  char v79; // dl
  unsigned __int8 v80; // al
  char v81; // cl
  char v82; // [rsp+20h] [rbp-88h]
  int v83; // [rsp+24h] [rbp-84h]
  unsigned int v84; // [rsp+28h] [rbp-80h]
  char v85; // [rsp+2Ch] [rbp-7Ch]
  int v86; // [rsp+38h] [rbp-70h]
  unsigned int v87; // [rsp+40h] [rbp-68h]
  int v88; // [rsp+48h] [rbp-60h]
  unsigned int Size; // [rsp+50h] [rbp-58h]
  int v90; // [rsp+58h] [rbp-50h]
  char v91; // [rsp+5Ch] [rbp-4Ch]
  int v93; // [rsp+B8h] [rbp+10h]
  char v94; // [rsp+B8h] [rbp+10h]
  int v95; // [rsp+C0h] [rbp+18h]
  int v96; // [rsp+C8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 12);
  v3 = 0LL;
  v4 = (_QWORD *)((char *)a1 + 16);
  v5 = *((_DWORD *)a1 + 11);
  v6 = (_QWORD *)((char *)a1 + 8);
  v7 = *((_DWORD *)a1 + 10);
  v84 = v2 & 7;
  v88 = 1;
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 4LL) | (2 * **(_DWORD **)(*(_QWORD *)a1 + 16LL));
  v9 = *((_DWORD *)a1 + 14);
  v10 = v9 & 7;
  v83 = v8;
  v87 = v10;
  v11 = (v2 & 7) - (*((_BYTE *)a1 + 56) & 7);
  v95 = v5;
  v96 = v7;
  v12 = v11 + 8;
  if ( v84 >= v10 )
    v12 = v11;
  v82 = v12;
  v90 = *((_DWORD *)v1 + 7);
  v85 = 8 - v12;
  v13 = v90 + v9;
  v91 = v90 + v9;
  if ( ((v9 ^ (v90 + v9)) & 0xFFFFFFF8) != 0 )
  {
    v3 = (_BYTE *)(*v4 + ((__int64)v13 >> 3));
    v14 = (_BYTE *)(*v4 + ((__int64)(v9 + 7) >> 3));
    v15 = (_BYTE *)(*v6 + ((__int64)(int)(v2 + (-v10 & 7)) >> 3));
    v16 = v5;
    v17 = *((_DWORD *)v1 + 8);
    v18 = *(_DWORD *)v4 + (v13 >> 3) - (_DWORD)v14;
    Size = v18;
    v86 = v16 - v18;
    v19 = v7 - v18;
    v20 = (_DWORD *)((char *)v1 + 32);
    v93 = v19;
    if ( v82 && v8 && v8 != 3 )
    {
      v21 = (_QWORD *)((char *)v1 + 16);
      v22 = (_QWORD *)((char *)v1 + 8);
      v23 = (_DWORD *)((char *)v1 + 32);
      v47 = v8 - 1;
      if ( !v47 )
      {
        if ( !v17 )
          goto LABEL_47;
        v59 = v86;
        v60 = v18;
        do
        {
          v61 = &v15[v60];
          --v17;
          v62 = *v15 << v82;
          if ( v15 != &v15[v60] )
          {
            do
            {
              v63 = *++v15;
              *v14++ = v62 | (v63 >> v85);
              v62 = v63 << v82;
            }
            while ( v15 != v61 );
            v59 = v86;
            v60 = v18;
          }
          v14 += v59;
          v15 += v93;
        }
        while ( v17 );
        v4 = (_QWORD *)((char *)v1 + 16);
        goto LABEL_46;
      }
      if ( v47 == 1 )
      {
        if ( !v17 )
        {
LABEL_47:
          v27 = 1;
          v25 = 255 >> v10;
          v24 = 1;
          v26 = v84;
          v23 = v20;
          v22 = v6;
          goto LABEL_10;
        }
        v48 = v86;
        v49 = v18;
        do
        {
          v50 = &v15[v49];
          --v17;
          v51 = *v15 << v82;
          if ( v15 != &v15[v49] )
          {
            do
            {
              v52 = *++v15;
              v53 = v51 | (v52 >> v85);
              v51 = v52 << v82;
              *v14++ = ~v53;
            }
            while ( v15 != v50 );
            v48 = v86;
            v49 = v18;
          }
          v14 += v48;
          v15 += v93;
        }
        while ( v17 );
        goto LABEL_45;
      }
    }
    else
    {
      v21 = (_QWORD *)((char *)v1 + 16);
      v22 = (_QWORD *)((char *)v1 + 8);
      v23 = (_DWORD *)((char *)v1 + 32);
      switch ( v8 )
      {
        case 0:
          goto LABEL_81;
        case 1:
          if ( v17 )
          {
            do
            {
              memmove(v14, v15, (int)Size);
              v14 += v95;
              v15 += v96;
              --v17;
            }
            while ( v17 );
            v10 = v87;
            v20 = (_DWORD *)((char *)v1 + 32);
            v6 = (_QWORD *)((char *)v1 + 8);
            v4 = (_QWORD *)((char *)v1 + 16);
          }
          goto LABEL_47;
        case 2:
          for ( ; v17; v15 += v19 )
          {
            --v17;
            v14 += v86;
          }
          v27 = 1;
          v25 = 255 >> v10;
          v24 = 1;
          v26 = v84;
          v22 = (_QWORD *)((char *)v1 + 8);
          goto LABEL_10;
        case 3:
LABEL_81:
          if ( v17 )
          {
            v66 = v86;
            v67 = -(v8 != 0);
            do
            {
              --v17;
              if ( Size )
              {
                memset_0(v14, v67, Size);
                v66 = v86;
                v14 += Size;
              }
              v14 += v66;
            }
            while ( v17 );
            v4 = (_QWORD *)((char *)v1 + 16);
LABEL_45:
            v10 = v87;
LABEL_46:
            v1 = a1;
            goto LABEL_47;
          }
          break;
      }
    }
    v24 = 1;
    v25 = 255 >> v10;
    v20 = v23;
    v26 = v84;
    v6 = v22;
    v4 = v21;
    v27 = 1;
LABEL_10:
    v94 = v27;
    goto LABEL_11;
  }
  v20 = (_DWORD *)((char *)v1 + 32);
  v27 = 0;
  v94 = 0;
  v24 = 0;
  v26 = v2 & 7;
  LOBYTE(v25) = (255 >> v10) & (-1 << (8 - (v13 & 7)));
  if ( (int)(v84 + v90) <= 8 )
  {
    v88 = 0;
    v23 = (_DWORD *)((char *)v1 + 32);
    v22 = (_QWORD *)((char *)v1 + 8);
    goto LABEL_10;
  }
  v88 = 1;
  v23 = (_DWORD *)((char *)v1 + 32);
  v22 = (_QWORD *)((char *)v1 + 8);
LABEL_11:
  v28 = v24;
  v29 = v83;
  if ( !(v10 | v28 ^ 1) )
  {
LABEL_12:
    v30 = v95;
    goto LABEL_13;
  }
  v42 = (_BYTE *)(*v4 + ((__int64)*((int *)v1 + 14) >> 3));
  v43 = (unsigned __int8 *)(*v6 + ((__int64)*((int *)v1 + 12) >> 3));
  v44 = *v20;
  if ( v83 == 1 )
  {
    if ( !v44 )
      goto LABEL_12;
    if ( v26 <= v10 )
    {
      if ( v26 < v10 )
      {
        v45 = v42;
        do
        {
          v46 = *v43;
          v43 += v96;
          *v45 = ~(_BYTE)v25 & *v45 | v25 & (v46 >> v85);
          v45 += v95;
          --v44;
        }
        while ( v44 );
        v1 = a1;
        v29 = v83;
        goto LABEL_12;
      }
      do
      {
        v54 = *v43 & v25;
        v43 += v96;
        *v42 = v54 | ~(_BYTE)v25 & *v42;
        v42 += v95;
        --v44;
      }
      while ( v44 );
      goto LABEL_49;
    }
    v55 = ~(_BYTE)v25;
    v56 = v42;
    if ( v88 )
    {
      do
      {
        v57 = v43[1];
        v58 = *v43;
        v43 += v96;
        *v56 = v55 & *v56 | v25 & ((v58 << v82) | (v57 >> v85));
        v56 += v95;
        --v44;
      }
      while ( v44 );
LABEL_52:
      v1 = a1;
      v27 = v94;
      v29 = v83;
      goto LABEL_12;
    }
    do
    {
      v77 = *v43;
      v43 += v96;
      *v56 = v55 & *v56 | v25 & (v77 << v82);
      v56 += v95;
      --v44;
    }
    while ( v44 );
    v1 = a1;
    goto LABEL_49;
  }
  if ( v83 )
  {
    if ( v83 == 2 )
    {
      if ( !v44 )
        goto LABEL_12;
      if ( v84 <= v10 )
      {
        if ( v84 >= v10 )
        {
          do
          {
            v75 = *v43;
            v43 += v96;
            *v42 = ~(_BYTE)v25 & *v42 | v25 & ~v75;
            v42 += v95;
            --v44;
          }
          while ( v44 );
          v1 = a1;
          goto LABEL_12;
        }
        v73 = v42;
        do
        {
          v74 = *v43;
          v43 += v96;
          *v73 = ~(_BYTE)v25 & *v73 | v25 & ~(v74 >> v85);
          v73 += v95;
          --v44;
        }
        while ( v44 );
        v1 = a1;
        v27 = v94;
      }
      else
      {
        v68 = ~(_BYTE)v25;
        v69 = v42;
        if ( v88 )
        {
          do
          {
            v70 = v43[1];
            v71 = *v43;
            v43 += v96;
            *v69 = v68 & *v69 | v25 & ~((v71 << v82) | (v70 >> v85));
            v69 += v95;
            --v44;
          }
          while ( v44 );
          goto LABEL_52;
        }
        do
        {
          v72 = *v43;
          v43 += v96;
          *v69 = v68 & *v69 | v25 & ~(v72 << v82);
          v69 += v95;
          --v44;
        }
        while ( v44 );
        v1 = a1;
      }
LABEL_49:
      v29 = v83;
      goto LABEL_12;
    }
    if ( v83 != 3 || !v44 )
      goto LABEL_12;
    v30 = v95;
    do
    {
      *v42 |= v25;
      v42 += v95;
      --v44;
    }
    while ( v44 );
  }
  else
  {
    if ( !v44 )
      goto LABEL_12;
    v30 = v95;
    v76 = ~(_BYTE)v25;
    do
    {
      *v42 &= v76;
      v42 += v95;
      --v44;
    }
    while ( v44 );
  }
LABEL_13:
  v31 = 255 >> ((*((_BYTE *)v1 + 56) + v90) & 7);
  if ( (v91 & 7) != 0 && v27 )
  {
    v32 = *((_DWORD *)v1 + 13) - 1;
    v33 = v32;
    v34 = v32 & 7;
    v35 = (unsigned __int8 *)(*v22 + (v33 >> 3));
    v36 = *v23;
    v37 = (v91 - 1) & 7;
    if ( v29 == 1 )
    {
      if ( v36 )
      {
        if ( v34 > v37 )
        {
          do
          {
            v40 = *v35;
            v35 += v96;
            *v3 = v31 & *v3 | ~(_BYTE)v31 & (v40 << v82);
            v3 += v30;
            --v36;
          }
          while ( v36 );
        }
        else if ( v34 >= v37 )
        {
          do
          {
            v41 = *v35 & ~(_BYTE)v31;
            v35 += v96;
            *v3 = v41 | v31 & *v3;
            v3 += v30;
            --v36;
          }
          while ( v36 );
        }
        else
        {
          do
          {
            v38 = *(v35 - 1);
            v39 = *v35;
            v35 += v96;
            *v3 = v31 & *v3 | ~(_BYTE)v31 & ((v39 >> v85) | (v38 << v82));
            v3 += v30;
            --v36;
          }
          while ( v36 );
        }
      }
    }
    else if ( v29 )
    {
      v64 = v29 - 2;
      if ( v64 )
      {
        if ( v64 == 1 && v36 )
        {
          v65 = ~(_BYTE)v31;
          do
          {
            *v3 |= v65;
            v3 += v30;
            --v36;
          }
          while ( v36 );
        }
      }
      else if ( v36 )
      {
        if ( v34 <= v37 )
        {
          if ( v34 >= v37 )
          {
            do
            {
              v81 = ~(*v35 | v31);
              v35 += v96;
              *v3 = v31 & *v3 | v81;
              v3 += v30;
              --v36;
            }
            while ( v36 );
          }
          else
          {
            do
            {
              v79 = *(v35 - 1);
              v80 = *v35;
              v35 += v96;
              *v3 = v31 & *v3 | ~(v31 | (v80 >> v85) | (v79 << v82));
              v3 += v30;
              --v36;
            }
            while ( v36 );
          }
        }
        else
        {
          do
          {
            v78 = *v35;
            v35 += v96;
            *v3 = v31 & *v3 | ~(v31 | (v78 << v82));
            v3 += v30;
            --v36;
          }
          while ( v36 );
        }
      }
    }
    else
    {
      for ( ; v36; --v36 )
      {
        *v3 &= v31;
        v3 += v30;
      }
    }
  }
}
