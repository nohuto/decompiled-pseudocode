/*
 * XREFs of ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x1401D7D50
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  unsigned int v1; // r10d
  struct BLTINFO *v2; // r11
  int v3; // r14d
  __int16 *v4; // r9
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  __int64 i; // rcx
  __int16 v9; // ax
  int v10; // r15d
  unsigned int v11; // r12d
  int v12; // r13d
  unsigned int v13; // ebx
  char v14; // si
  int v15; // r10d
  __int64 v16; // rdx
  _DWORD *v17; // r9
  int v18; // ecx
  _BYTE *v19; // r8
  __int64 v20; // rax
  BOOL v21; // ecx
  unsigned __int8 v22; // dl
  int v23; // r10d
  int v24; // r9d
  _BYTE *v25; // r8
  unsigned int v26; // r9d
  _WORD *v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // rbx
  _WORD *v30; // rcx
  unsigned __int8 ii; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r12
  _BYTE *v35; // r14
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rdx
  __int64 v38; // r12
  _BYTE *v39; // rdx
  unsigned int v40; // ecx
  int v41; // r9d
  _BYTE *v42; // r8
  _WORD *v43; // rdx
  int v44; // eax
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // r13
  unsigned __int8 v48; // r10
  _WORD *k; // rcx
  __int64 v50; // r15
  unsigned __int8 v51; // r10
  _WORD *j; // rcx
  unsigned __int64 v53; // rax
  unsigned __int8 v54; // r9
  _WORD *n; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // r13
  unsigned __int8 v59; // r10
  _WORD *m; // rcx
  unsigned __int64 v61; // rax
  int v62; // [rsp+0h] [rbp-48h]
  char v63; // [rsp+4h] [rbp-44h]
  unsigned int v64; // [rsp+8h] [rbp-40h]
  int v65; // [rsp+Ch] [rbp-3Ch]
  _DWORD v66[3]; // [rsp+10h] [rbp-38h]
  unsigned int v67; // [rsp+1Ch] [rbp-2Ch]
  int v68; // [rsp+20h] [rbp-28h]
  __int64 v69; // [rsp+28h] [rbp-20h]
  __int64 v70; // [rsp+38h] [rbp-10h]
  char v72; // [rsp+98h] [rbp+50h]
  int v73; // [rsp+A0h] [rbp+58h]
  __int16 v74; // [rsp+A8h] [rbp+60h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 14);
  v68 = 1;
  v65 = v3 + v1;
  v4 = *(__int16 **)(*(_QWORD *)a1 + 16LL);
  v5 = *((_DWORD *)v4 + 1) << 16;
  v6 = *(_DWORD *)v4 << 16;
  v7 = v6 | *(_DWORD *)v4;
  v67 = v5 | *((_DWORD *)v4 + 1);
  v66[0] = v7;
  v66[1] = v5 | HIWORD(v7);
  v66[2] = v6 | HIWORD(v67);
  for ( i = 0LL; i < 2; ++i )
  {
    v9 = *v4;
    v4 += 2;
    *(&v74 + i) = v9;
  }
  v10 = *((_DWORD *)v2 + 11);
  v11 = *((_DWORD *)v2 + 12) & 7;
  v12 = *((_DWORD *)v2 + 10);
  v64 = v11;
  v13 = v3 & 7;
  v73 = v10;
  v62 = v12;
  v14 = (*((_BYTE *)v2 + 48) & 7) - v13 + 8;
  if ( v11 >= v13 )
    v14 = (*((_BYTE *)v2 + 48) & 7) - v13;
  v63 = 8 - v14;
  if ( v65 >> 3 == v3 >> 3 )
  {
    v22 = 0;
    v72 = 0;
    v21 = (int)(v1 + v11) > 8;
  }
  else
  {
    v15 = *((_DWORD *)v2 + 8);
    v72 = 1;
    LODWORD(v16) = (v65 >> 3) - ((v3 + 7) >> 3);
    v17 = (_DWORD *)(*((_QWORD *)v2 + 2) + (int)(2 * ((v3 + 7) & 0xFFFFFFF8)));
    v18 = v10 - 16 * v16;
    v19 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(*((_DWORD *)v2 + 12) + (-v13 & 7)) >> 3));
    LODWORD(v20) = v12 - v16;
    if ( v15 )
    {
      v16 = (int)v16;
      v20 = (int)v20;
      v70 = (int)v16;
      v69 = (int)v20;
      v33 = v18;
      if ( v14 )
      {
        v34 = (int)v20;
        do
        {
          v35 = &v19[v16];
          --v15;
          v36 = *v19 << v14;
          if ( v19 != &v19[v16] )
          {
            do
            {
              v37 = v36 | ((unsigned __int64)(unsigned __int8)*++v19 >> v63);
              *v17 = v66[v37 >> 6];
              v17[1] = v66[(v37 >> 4) & 3];
              v17[2] = v66[(v37 >> 2) & 3];
              v17[3] = v66[v37 & 3];
              v17 += 4;
              v36 = *v19 << v14;
            }
            while ( v19 != v35 );
            v34 = v69;
            v16 = v70;
          }
          v17 = (_DWORD *)((char *)v17 + v18);
          v19 += v34;
        }
        while ( v15 );
        v2 = a1;
      }
      else
      {
        v38 = (int)v16;
        do
        {
          --v15;
          v39 = &v19[v38];
          if ( v19 != &v19[v38] )
          {
            do
            {
              v40 = (unsigned __int8)*v19++;
              *v17 = v66[(unsigned __int64)v40 >> 6];
              v17[1] = v66[(v40 >> 4) & 3];
              v17[2] = v66[(v40 >> 2) & 3];
              v17[3] = v66[v40 & 3];
              v17 += 4;
            }
            while ( v19 != v39 );
            v20 = v69;
          }
          v17 = (_DWORD *)((char *)v17 + v33);
          v19 += v20;
        }
        while ( v15 );
      }
      v11 = v64;
    }
    v21 = v68;
    v22 = 1;
    v1 = 8 - v13;
  }
  if ( v13 | v22 ^ 1 )
  {
    v41 = *((_DWORD *)v2 + 8);
    v42 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v43 = (_WORD *)(*((_QWORD *)v2 + 2) + 2 * *((_DWORD *)v2 + 14));
    if ( v41 )
    {
      v44 = 2 * v1;
      if ( v11 <= v13 )
      {
        v50 = v44;
        do
        {
          --v41;
          v51 = *v42 << v11;
          for ( j = v43; j != (_WORD *)((char *)v43 + v50); ++j )
          {
            v53 = v51;
            v51 *= 2;
            *j = *(&v74 + (v53 >> 7));
          }
          v43 = (_WORD *)((char *)v43 + v73);
          v42 += v12;
        }
        while ( v41 );
      }
      else
      {
        v45 = v10;
        if ( v21 )
        {
          v46 = v12;
          v47 = v44;
          do
          {
            --v41;
            v48 = ((unsigned __int8)(*v42 << v14) | (unsigned __int8)(v42[1] >> v63)) << v13;
            for ( k = v43; k != (_WORD *)((char *)v43 + v47); ++k )
            {
              v57 = v48;
              v48 *= 2;
              *k = *(&v74 + (v57 >> 7));
            }
            v43 = (_WORD *)((char *)v43 + v45);
            v42 += v46;
          }
          while ( v41 );
          v2 = a1;
        }
        else
        {
          v58 = v44;
          do
          {
            --v41;
            v59 = *v42 << v14 << v13;
            for ( m = v43; m != (_WORD *)((char *)v43 + v58); ++m )
            {
              v61 = v59;
              v59 *= 2;
              *m = *(&v74 + (v61 >> 7));
            }
            v43 = (_WORD *)((char *)v43 + v10);
            v42 += v62;
          }
          while ( v41 );
        }
        v12 = v62;
      }
      v10 = v73;
    }
    v22 = v72;
  }
  if ( (v65 & 7) != 0 )
  {
    if ( v22 )
    {
      v23 = *((_DWORD *)v2 + 8);
      v24 = *((_DWORD *)v2 + 13) - 1;
      v25 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v24 >> 3));
      v26 = v24 & 7;
      v27 = (_WORD *)(*((_QWORD *)v2 + 2) + (int)(2 * (v65 & 0xFFFFFFF8)));
      v28 = ((_BYTE)v65 - 1) & 7;
      if ( v23 )
      {
        v29 = 2 * v28 + 2;
        if ( v26 >= v28 )
        {
          do
          {
            --v23;
            v54 = *v25 << v14;
            for ( n = v27; n != (_WORD *)((char *)v27 + v29); ++n )
            {
              v56 = v54;
              v54 *= 2;
              *n = *(&v74 + (v56 >> 7));
            }
            v27 = (_WORD *)((char *)v27 + v10);
            v25 += v12;
          }
          while ( v23 );
        }
        else
        {
          do
          {
            --v23;
            v30 = v27;
            for ( ii = (*v25 >> v63) | (*(v25 - 1) << v14); v30 != (_WORD *)((char *)v27 + v29); ++v30 )
            {
              v32 = ii;
              ii *= 2;
              *v30 = *(&v74 + (v32 >> 7));
            }
            v27 = (_WORD *)((char *)v27 + v10);
            v25 += v12;
          }
          while ( v23 );
        }
      }
    }
  }
}
