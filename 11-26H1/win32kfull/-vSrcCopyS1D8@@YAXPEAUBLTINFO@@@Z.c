/*
 * XREFs of ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x1401BDD50
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  BOOL v2; // r12d
  __int64 v3; // rdx
  char *v4; // rcx
  int v5; // r8d
  int v6; // r9d
  char v7; // al
  int v8; // r14d
  int v9; // r15d
  int v10; // eax
  unsigned int v11; // r11d
  unsigned __int8 v12; // al
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // edi
  char v16; // si
  signed int v17; // ecx
  int v18; // edx
  unsigned __int8 v19; // r13
  _BYTE *v20; // rdx
  int v21; // r9d
  _BYTE *v22; // r8
  __int64 v23; // rax
  _BYTE *v24; // rbx
  unsigned __int8 v25; // r11
  _BYTE *v26; // rcx
  unsigned __int64 v27; // rax
  int v28; // r11d
  __int64 v29; // rdx
  _DWORD *v30; // r9
  int v31; // ecx
  _BYTE *v32; // r8
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // r12
  _BYTE *v36; // rdx
  unsigned int v37; // ecx
  int v38; // r11d
  int v39; // ecx
  _BYTE *v40; // r8
  unsigned int v41; // eax
  unsigned __int64 v42; // rdx
  unsigned int v43; // ecx
  __int64 v44; // rbx
  _BYTE *v45; // rcx
  unsigned __int8 v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // r10
  unsigned __int8 v49; // r11
  _BYTE *i; // rcx
  unsigned __int8 v51; // r9
  _BYTE *v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // r15
  _BYTE *v55; // r13
  unsigned __int8 v56; // al
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r13
  unsigned __int8 v61; // r11
  _BYTE *v62; // rcx
  unsigned __int64 v63; // rax
  char v64; // [rsp+0h] [rbp-69h]
  unsigned int v65; // [rsp+Ch] [rbp-5Dh]
  int v66; // [rsp+10h] [rbp-59h]
  __int64 v67; // [rsp+10h] [rbp-59h]
  int v68; // [rsp+18h] [rbp-51h]
  int v69; // [rsp+1Ch] [rbp-4Dh]
  __int64 v70; // [rsp+20h] [rbp-49h]
  _DWORD v71[2]; // [rsp+30h] [rbp-39h]
  int v72; // [rsp+38h] [rbp-31h]
  int v73; // [rsp+3Ch] [rbp-2Dh]
  int v74; // [rsp+40h] [rbp-29h]
  int v75; // [rsp+44h] [rbp-25h]
  int v76; // [rsp+48h] [rbp-21h]
  int v77; // [rsp+4Ch] [rbp-1Dh]
  int v78; // [rsp+50h] [rbp-19h]
  int v79; // [rsp+54h] [rbp-15h]
  int v80; // [rsp+58h] [rbp-11h]
  int v81; // [rsp+5Ch] [rbp-Dh]
  int v82; // [rsp+60h] [rbp-9h]
  int v83; // [rsp+64h] [rbp-5h]
  int v84; // [rsp+68h] [rbp-1h]
  int v85; // [rsp+6Ch] [rbp+3h]
  __int64 v87; // [rsp+D0h] [rbp+67h]
  char v88; // [rsp+D8h] [rbp+6Fh]
  _BYTE v89[8]; // [rsp+E0h] [rbp+77h]
  int v90; // [rsp+E8h] [rbp+7Fh]

  v1 = a1;
  v2 = 1;
  v3 = 0LL;
  v4 = *(char **)(*(_QWORD *)a1 + 16LL);
  v5 = *(_DWORD *)v4;
  v6 = *((_DWORD *)v4 + 1);
  do
  {
    v7 = *v4;
    v4 += 4;
    v89[v3++] = v7;
  }
  while ( v3 < 2 );
  v8 = *((_DWORD *)v1 + 11);
  v9 = *((_DWORD *)v1 + 10);
  v90 = v8;
  v68 = v9;
  v10 = *((_DWORD *)v1 + 12);
  v71[0] = v5 | (v5 << 8) | ((v5 | (v5 << 8)) << 16);
  v66 = v10;
  v78 = v6 | (v71[0] << 8);
  v12 = v10 & 7;
  v11 = v12;
  v65 = v12;
  v74 = v5 | (v78 << 8);
  v80 = v6 | (v74 << 8);
  v75 = v5 | (v80 << 8);
  v72 = v5 | (v75 << 8);
  v79 = v6 | (v72 << 8);
  v82 = v6 | (v79 << 8);
  v84 = v6 | (v82 << 8);
  v85 = v6 | (v84 << 8);
  v77 = v5 | (v85 << 8);
  v81 = v6 | (v77 << 8);
  v83 = v6 | (v81 << 8);
  v76 = v5 | (v83 << 8);
  v73 = v5 | (v76 << 8);
  v13 = v5 | (v73 << 8);
  v14 = *((_DWORD *)v1 + 14);
  v71[1] = v13;
  v15 = v14 & 7;
  v16 = v12 - v15 + 8;
  if ( v12 >= v15 )
    v16 = v12 - v15;
  v17 = *((_DWORD *)v1 + 7);
  v64 = 8 - v16;
  v69 = v17 + v14;
  v18 = (v17 + v14) >> 3;
  if ( v18 == v14 >> 3 )
  {
    v19 = 0;
    v88 = 0;
    v2 = v17 + v12 > 8;
  }
  else
  {
    v28 = *((_DWORD *)v1 + 8);
    LODWORD(v29) = v18 - ((v14 + 7) >> 3);
    v88 = 1;
    v30 = (_DWORD *)(*((_QWORD *)v1 + 2) + ((v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    v19 = 1;
    v31 = v8 - 8 * v29;
    v32 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(int)(v66 + (-v15 & 7)) >> 3));
    LODWORD(v33) = v9 - v29;
    if ( v28 )
    {
      v29 = (int)v29;
      v33 = (int)v33;
      v70 = (int)v29;
      v67 = (int)v33;
      v34 = v31;
      if ( v16 )
      {
        v54 = (int)v33;
        do
        {
          v55 = &v32[v29];
          --v28;
          v56 = *v32 << v16;
          if ( v32 != &v32[v29] )
          {
            do
            {
              v57 = v56 | ((unsigned __int64)(unsigned __int8)*++v32 >> v64);
              *v30 = v71[v57 >> 4];
              v30[1] = v71[v57 & 0xF];
              v30 += 2;
              v56 = *v32 << v16;
            }
            while ( v32 != v55 );
            v29 = v70;
          }
          v30 = (_DWORD *)((char *)v30 + v31);
          v32 += v54;
        }
        while ( v28 );
        v1 = a1;
        v8 = v90;
        v9 = v68;
      }
      else
      {
        v35 = (int)v29;
        do
        {
          --v28;
          v36 = &v32[v35];
          if ( v32 != &v32[v35] )
          {
            do
            {
              v37 = (unsigned __int8)*v32++;
              *v30 = v71[(unsigned __int64)v37 >> 4];
              v30[1] = v71[v37 & 0xF];
              v30 += 2;
            }
            while ( v32 != v36 );
            v33 = v67;
          }
          v30 = (_DWORD *)((char *)v30 + v34);
          v32 += v33;
        }
        while ( v28 );
      }
      v19 = 1;
      v2 = 1;
    }
    v11 = v65;
    v17 = 8 - v15;
  }
  if ( v15 | v19 ^ 1 )
  {
    v20 = (_BYTE *)(*((_QWORD *)v1 + 2) + *((int *)v1 + 14));
    v21 = *((_DWORD *)v1 + 8);
    v22 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    if ( v21 )
    {
      if ( v11 > v15 )
      {
        if ( v2 )
        {
          v48 = v17;
          do
          {
            --v21;
            v49 = ((unsigned __int8)(*v22 << v16) | (unsigned __int8)(v22[1] >> v64)) << v15;
            for ( i = v20; i != &v20[v48]; ++i )
            {
              v58 = v49;
              v49 *= 2;
              *i = v89[v58 >> 7];
            }
            v20 += v8;
            v22 += v9;
          }
          while ( v21 );
          v1 = a1;
        }
        else
        {
          v59 = v9;
          v60 = v17;
          do
          {
            --v21;
            v61 = *v22 << v16 << v15;
            v62 = v20;
            if ( v20 != &v20[v60] )
            {
              do
              {
                v63 = v61;
                v61 *= 2;
                *v62++ = v89[v63 >> 7];
              }
              while ( v62 != &v20[v60] );
              v59 = v9;
            }
            v20 += v8;
            v22 += v59;
          }
          while ( v21 );
        }
        v19 = v88;
      }
      else
      {
        v23 = v17;
        v87 = v17;
        do
        {
          v24 = &v20[v23];
          --v21;
          v25 = *v22 << v65;
          v26 = v20;
          if ( v20 != &v20[v23] )
          {
            do
            {
              v27 = v25;
              v25 *= 2;
              *v26++ = v89[v27 >> 7];
            }
            while ( v26 != v24 );
            v23 = v87;
          }
          v20 += v8;
          v22 += v9;
        }
        while ( v21 );
      }
      v8 = v90;
    }
  }
  if ( (v69 & 7) != 0 )
  {
    if ( v19 )
    {
      v38 = *((_DWORD *)v1 + 8);
      v39 = *((_DWORD *)v1 + 13) - 1;
      v40 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)v39 >> 3));
      v41 = ((_BYTE)v69 - 1) & 7;
      v42 = *((_QWORD *)v1 + 2) + (v69 & 0xFFFFFFFFFFFFFFF8uLL);
      v43 = v39 & 7;
      if ( v38 )
      {
        v44 = v41 + 1;
        if ( v43 >= v41 )
        {
          do
          {
            --v38;
            v51 = *v40 << v16;
            v52 = (_BYTE *)v42;
            if ( v42 != v44 + v42 )
            {
              do
              {
                v53 = v51;
                v51 *= 2;
                *v52++ = v89[v53 >> 7];
              }
              while ( v52 != (_BYTE *)(v44 + v42) );
            }
            v42 += v8;
            v40 += v9;
          }
          while ( v38 );
        }
        else
        {
          do
          {
            --v38;
            v45 = (_BYTE *)v42;
            v46 = (*v40 >> v64) | (*(v40 - 1) << v16);
            if ( v42 != v44 + v42 )
            {
              do
              {
                v47 = v46;
                v46 *= 2;
                *v45++ = v89[v47 >> 7];
              }
              while ( v45 != (_BYTE *)(v44 + v42) );
            }
            v42 += v8;
            v40 += v9;
          }
          while ( v38 );
        }
      }
    }
  }
}
