/*
 * XREFs of vSrcOpaqCopyS1D8 @ 0x1C0282EC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

char __fastcall vSrcOpaqCopyS1D8(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // r15d
  int v11; // r13d
  int v12; // r14d
  __int64 v13; // r12
  int v14; // edi
  unsigned int v15; // r10d
  _DWORD *v16; // r11
  int v17; // edx
  unsigned __int8 *v18; // rsi
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // r13
  _DWORD *v24; // r12
  _DWORD *v25; // r10
  unsigned __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  unsigned int v30; // r9d
  unsigned int v31; // edx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // r10d
  _DWORD *v37; // rcx
  unsigned __int8 *v38; // r9
  _DWORD *v39; // rsi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  int v42; // r8d
  int v43; // r10d
  int v44; // r11d
  int *v45; // r8
  int *v46; // r15
  unsigned __int8 *v47; // r9
  __int64 v48; // rdx
  int v49; // ecx
  __int64 v50; // r8
  char *v51; // r9
  __int64 v52; // r11
  int v53; // edx
  int v54; // edx
  int v55; // edx
  int v56; // edx
  int v57; // edx
  int v58; // edx
  char v59; // al
  char v60; // al
  char v61; // al
  int v62; // ecx
  char v63; // al
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  int v67; // ecx
  _BYTE *v68; // r8
  unsigned __int8 *v69; // r9
  _BYTE *v70; // r11
  unsigned int v71; // eax
  int v72; // edx
  unsigned __int64 v73; // rax
  int v74; // ecx
  __int64 v76; // [rsp+8h] [rbp-99h]
  __int64 v78; // [rsp+18h] [rbp-89h]
  __int64 v80; // [rsp+28h] [rbp-79h]
  unsigned int v81; // [rsp+30h] [rbp-71h]
  __int64 v82; // [rsp+38h] [rbp-69h]
  _DWORD *v84; // [rsp+48h] [rbp-59h]
  _DWORD v85[2]; // [rsp+58h] [rbp-49h]
  int v86; // [rsp+60h] [rbp-41h]
  int v87; // [rsp+64h] [rbp-3Dh]
  int v88; // [rsp+68h] [rbp-39h]
  int v89; // [rsp+6Ch] [rbp-35h]
  int v90; // [rsp+70h] [rbp-31h]
  int v91; // [rsp+74h] [rbp-2Dh]
  int v92; // [rsp+78h] [rbp-29h]
  int v93; // [rsp+7Ch] [rbp-25h]
  int v94; // [rsp+80h] [rbp-21h]
  int v95; // [rsp+84h] [rbp-1Dh]
  int v96; // [rsp+88h] [rbp-19h]
  int v97; // [rsp+8Ch] [rbp-15h]
  int v98; // [rsp+90h] [rbp-11h]
  int v99; // [rsp+94h] [rbp-Dh]

  v10 = a5;
  v11 = a2;
  v12 = a6;
  v13 = a1;
  v14 = a3;
  v15 = (a5 + 7) & 0xFFFFFFF8;
  v82 = a4;
  v81 = (a6 & 0xFFFFFFF8) - v15;
  v85[0] = ((a10 | (a10 << 8)) << 16) | a10 | (a10 << 8);
  v92 = a9 | (v85[0] << 8);
  v88 = a10 | (v92 << 8);
  v94 = a9 | (v88 << 8);
  v89 = a10 | (v94 << 8);
  v86 = a10 | (v89 << 8);
  v93 = a9 | (v86 << 8);
  v96 = a9 | (v93 << 8);
  v98 = a9 | (v96 << 8);
  v99 = a9 | (v98 << 8);
  v91 = a10 | (v99 << 8);
  v95 = a9 | (v91 << 8);
  v97 = a9 | (v95 << 8);
  v90 = a10 | (v97 << 8);
  v87 = a10 | (v90 << 8);
  v85[1] = a10 | (v87 << 8);
  v16 = (_DWORD *)(a4 + v15);
  v76 = a8 * a7;
  v84 = (_DWORD *)((char *)v16 + v76);
  v17 = a3 - (v81 >> 3);
  v18 = (unsigned __int8 *)(a1 + ((__int64)(v11 + 7) >> 3));
  v19 = a7 - v81;
  if ( (a6 & 0xFFFFFFF8) > v15 )
  {
    v20 = v81 & 0xFFFFFFE0;
    v21 = v19;
    v22 = v17;
    v80 = v19;
    v78 = v17;
    do
    {
      v23 = (_DWORD *)((char *)v16 + v20);
      v24 = (_DWORD *)((char *)v16 + v81);
      v25 = (_DWORD *)((char *)v16 + (v81 & 0xFFFFFFF0));
      if ( v16 != (_DWORD *)((char *)v16 + v20) )
      {
        do
        {
          v26 = *v18;
          v27 = v18[1];
          v28 = v18[2];
          v29 = *v18 & 0xF;
          v30 = v18[3];
          v18 += 4;
          *v16 = v85[v26 >> 4];
          v16[1] = v85[v29];
          v16[2] = v85[(unsigned __int64)v27 >> 4];
          v16[3] = v85[v27 & 0xF];
          v16[4] = v85[(unsigned __int64)v28 >> 4];
          v16[5] = v85[v28 & 0xF];
          v16[6] = v85[(unsigned __int64)v30 >> 4];
          v16[7] = v85[v30 & 0xF];
          v16 += 8;
        }
        while ( v16 != v23 );
        v21 = v80;
        v22 = v78;
      }
      while ( v16 != v25 )
      {
        v31 = v18[1];
        v32 = (unsigned __int64)*v18 >> 4;
        v33 = *v18 & 0xF;
        v18 += 2;
        *v16 = v85[v32];
        v16[1] = v85[v33];
        v16[2] = v85[(unsigned __int64)v31 >> 4];
        v16[3] = v85[v31 & 0xF];
        v16 += 4;
      }
      while ( v16 != v24 )
      {
        v34 = *v18++;
        *v16 = v85[v34 >> 4];
        v16[1] = v85[v34 & 0xF];
        v16 += 2;
      }
      v16 = (_DWORD *)((char *)v16 + v21);
      v18 += v22;
    }
    while ( v16 != v84 );
    v14 = a3;
    v12 = a6;
    v10 = a5;
    v11 = a2;
    v13 = a1;
    a4 = v82;
  }
  v35 = v10 & 7;
  if ( (v10 & 7) != 0 )
  {
    if ( ((v10 ^ (v12 - 1)) & 0xFFFFFFFC) == 0 )
    {
      v36 = gTextLeftMask[2 * (v10 & 3)] & gTextRightMask[2 * (v12 & 3)];
      v37 = (_DWORD *)(a4 + (v10 & 0xFFFFFFFFFFFFFFFCuLL));
      v38 = (unsigned __int8 *)(v13 + ((__int64)v11 >> 3));
      v39 = (_DWORD *)((char *)v37 + v76);
      do
      {
        v40 = *v38;
        if ( (unsigned int)v35 >= 4 )
          v41 = v40 & 0xF;
        else
          v41 = v40 >> 4;
        v42 = v85[v41];
        v38 += v14;
        LODWORD(v41) = ~v36 & *v37;
        *v37 = v41 | v36 & v42;
        v37 = (_DWORD *)((char *)v37 + a7);
      }
      while ( v37 != v39 );
      return v41;
    }
    if ( ((v10 ^ (v12 - 1)) & 0xFFFFFFF8) == 0 )
    {
      v43 = gTextRightMask[2 * (v12 & 7)] & gTextLeftMask[2 * v35];
      v44 = dword_1C02ED144[2 * (v12 & 7)] & dword_1C02ED184[2 * v35];
      v45 = (int *)(a4 + (v10 & 0xFFFFFFFFFFFFFFF8uLL));
      v46 = (int *)((char *)v45 + v76);
      v47 = (unsigned __int8 *)(v13 + ((__int64)v11 >> 3));
      do
      {
        v41 = *v47;
        v47 += v14;
        v48 = v41 & 0xF;
        v49 = ~v43 & *v45 | v43 & v85[v41 >> 4];
        LODWORD(v41) = v45[1] & ~v44;
        *v45 = v49;
        v45[1] = v41 | v44 & v85[v48];
        v45 = (int *)((char *)v45 + a7);
      }
      while ( v45 != v46 );
      return v41;
    }
    v41 = a8 * a7;
    v50 = a4 + (v10 & 0xFFFFFFFFFFFFFFF8uLL);
    v51 = (char *)(v13 + ((__int64)v11 >> 3));
    v52 = v76 + v50;
    v53 = v35 - 1;
    if ( v53 )
    {
      v54 = v53 - 1;
      if ( v54 )
      {
        v55 = v54 - 1;
        if ( v55 )
        {
          v56 = v55 - 1;
          if ( v56 )
          {
            v57 = v56 - 1;
            if ( v57 )
            {
              v58 = v57 - 1;
              if ( v58 )
              {
                if ( v58 != 1 )
                  goto LABEL_46;
                do
                {
                  v59 = *v51;
                  v51 += v14;
                  *(_BYTE *)(v50 + 7) = HIBYTE(v85[v59 & 0xF]);
                  v50 += a7;
                }
                while ( v50 != v52 );
              }
              else
              {
                do
                {
                  v60 = *v51;
                  v51 += v14;
                  *(_WORD *)(v50 + 6) = HIWORD(v85[v60 & 0xF]);
                  v50 += a7;
                }
                while ( v50 != v52 );
              }
            }
            else
            {
              do
              {
                v61 = *v51;
                v51 += v14;
                v62 = v85[v61 & 0xF];
                *(_BYTE *)(v50 + 5) = BYTE1(v62);
                *(_WORD *)(v50 + 6) = HIWORD(v62);
                v50 += a7;
              }
              while ( v50 != v52 );
            }
          }
          else
          {
            do
            {
              v63 = *v51;
              v51 += v14;
              *(_DWORD *)(v50 + 4) = v85[v63 & 0xF];
              v50 += a7;
            }
            while ( v50 != v52 );
          }
        }
        else
        {
          do
          {
            v64 = (unsigned __int8)*v51;
            v51 += v14;
            *(_BYTE *)(v50 + 3) = HIBYTE(v85[v64 >> 4]);
            *(_DWORD *)(v50 + 4) = v85[v64 & 0xF];
            v50 += a7;
          }
          while ( v50 != v52 );
        }
      }
      else
      {
        do
        {
          v65 = (unsigned __int8)*v51;
          v51 += v14;
          *(_WORD *)(v50 + 2) = HIWORD(v85[v65 >> 4]);
          *(_DWORD *)(v50 + 4) = v85[v65 & 0xF];
          v50 += a7;
        }
        while ( v50 != v52 );
      }
    }
    else
    {
      do
      {
        v66 = (unsigned __int8)*v51;
        v51 += v14;
        v67 = v85[v66 >> 4];
        *(_BYTE *)(v50 + 1) = BYTE1(v67);
        *(_DWORD *)(v50 + 4) = v85[v66 & 0xF];
        *(_WORD *)(v50 + 2) = HIWORD(v67);
        v50 += a7;
      }
      while ( v50 != v52 );
    }
  }
  v41 = a8 * a7;
LABEL_46:
  if ( (v12 & 7) != 0 )
  {
    v68 = (_BYTE *)(v82 + (v12 & 0xFFFFFFFFFFFFFFF8uLL));
    v69 = (unsigned __int8 *)(a1 + ((__int64)(v11 + v12 - v10) >> 3));
    v70 = &v68[v41];
    switch ( v12 & 7 )
    {
      case 1:
        do
        {
          v41 = *v69;
          v69 += v14;
          LOBYTE(v41) = v85[v41 >> 4];
          *v68 = v41;
          v68 += a7;
        }
        while ( v68 != v70 );
        break;
      case 2:
        do
        {
          v41 = *v69;
          v69 += v14;
          LOWORD(v41) = v85[v41 >> 4];
          *(_WORD *)v68 = v41;
          v68 += a7;
        }
        while ( v68 != v70 );
        break;
      case 3:
        do
        {
          v73 = *v69;
          v69 += v14;
          v41 = v73 >> 4;
          v74 = v85[v41];
          *(_WORD *)v68 = v74;
          v68[2] = BYTE2(v74);
          v68 += a7;
        }
        while ( v68 != v70 );
        break;
      case 4:
        do
        {
          v41 = *v69;
          v69 += v14;
          LODWORD(v41) = v85[v41 >> 4];
          *(_DWORD *)v68 = v41;
          v68 += a7;
        }
        while ( v68 != v70 );
        break;
      case 5:
        do
        {
          v41 = *v69;
          v69 += v14;
          *(_DWORD *)v68 = v85[v41 >> 4];
          LOBYTE(v41) = v85[v41 & 0xF];
          v68[4] = v41;
          v68 += a7;
        }
        while ( v68 != v70 );
        break;
      case 6:
        do
        {
          v41 = *v69;
          v69 += v14;
          *(_DWORD *)v68 = v85[v41 >> 4];
          LOWORD(v41) = v85[v41 & 0xF];
          *((_WORD *)v68 + 2) = v41;
          v68 += a7;
        }
        while ( v68 != v70 );
        break;
      case 7:
        do
        {
          v71 = *v69;
          v69 += v14;
          v72 = v85[v71 & 0xF];
          LODWORD(v41) = v85[(unsigned __int64)v71 >> 4];
          *((_WORD *)v68 + 2) = v72;
          v68[6] = BYTE2(v72);
          *(_DWORD *)v68 = v41;
          v68 += a7;
        }
        while ( v68 != v70 );
        break;
    }
  }
  return v41;
}
