/*
 * XREFs of BuildShrinkAAInfo @ 0x140147E20
 * Callers:
 *     <none>
 * Callees:
 *     BuildRepData @ 0x140148F68 (BuildRepData.c)
 */

_DWORD *__fastcall BuildShrinkAAInfo(
        __int64 a1,
        __int16 a2,
        int *a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int *a9,
        unsigned int a10)
{
  int v10; // eax
  int v11; // r12d
  int v13; // esi
  int v14; // ebp
  int v15; // r13d
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // r11
  unsigned __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // r9d
  unsigned int v32; // r14d
  unsigned int v33; // r15d
  unsigned int v34; // eax
  unsigned int v35; // ecx
  char *v36; // rax
  _DWORD *v37; // rbx
  int *v38; // rdi
  _DWORD *v39; // r8
  int *v40; // rdx
  int v41; // eax
  int v42; // r15d
  int v43; // ecx
  _WORD *v44; // r8
  __int16 v45; // r15
  int v46; // eax
  int v47; // edx
  int v48; // r10d
  int v49; // r14d
  int i; // edi
  __int64 v51; // r9
  int v52; // edx
  __int16 v53; // di
  int v54; // eax
  __int16 v55; // r15
  __int64 v56; // rcx
  int v57; // r10d
  int v58; // r10d
  int v59; // ecx
  _WORD *v60; // r8
  __int16 v62; // cx
  __int16 v63; // r15
  __int64 v64; // rdx
  __int16 v65; // cx
  __int16 v66; // ax
  __int16 v67; // ax
  _WORD *v68; // rdx
  int v69; // r9d
  _OWORD *v70; // r15
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  unsigned __int64 v77; // rcx
  unsigned int v78; // eax
  int v79; // [rsp+20h] [rbp-A8h]
  unsigned int v80; // [rsp+24h] [rbp-A4h]
  int v81; // [rsp+24h] [rbp-A4h]
  int v82; // [rsp+28h] [rbp-A0h]
  int v83; // [rsp+2Ch] [rbp-9Ch]
  unsigned int v84; // [rsp+30h] [rbp-98h]
  int v85; // [rsp+30h] [rbp-98h]
  unsigned int v86; // [rsp+34h] [rbp-94h]
  int v87; // [rsp+34h] [rbp-94h]
  int v88; // [rsp+38h] [rbp-90h]
  int v89; // [rsp+3Ch] [rbp-8Ch]
  int v90; // [rsp+40h] [rbp-88h]
  int v91; // [rsp+44h] [rbp-84h]
  __int64 v92; // [rsp+48h] [rbp-80h]
  __int64 v93; // [rsp+50h] [rbp-78h]
  __int64 v94; // [rsp+60h] [rbp-68h]
  __int64 v95; // [rsp+68h] [rbp-60h]
  unsigned __int64 v96; // [rsp+70h] [rbp-58h]
  _WORD *v97; // [rsp+78h] [rbp-50h]
  _WORD *v98; // [rsp+80h] [rbp-48h]
  int v101; // [rsp+F8h] [rbp+30h]
  int v102; // [rsp+100h] [rbp+38h]

  v10 = *a4;
  v11 = *a3;
  v90 = 0;
  v13 = 0;
  v14 = 0;
  if ( *a4 < *a3 )
    return 0LL;
  v15 = a6;
  if ( a7 <= a6 )
    return 0LL;
  v82 = -1;
  v16 = v10 - v11;
  v101 = 0;
  v17 = a7 - v15;
  v88 = v10 - v11;
  v102 = a7 - v15;
  v18 = 0;
  if ( v11 >= 0 )
    v18 = v11;
  v91 = v18;
  if ( v10 > a5 )
    v10 = a5;
  v89 = v10;
  v83 = *a8;
  v19 = *a8 - 1;
  v20 = *a9;
  v79 = *a9;
  if ( v19 >= *a9 )
    return 0LL;
  if ( v16 <= v17 )
    return 0LL;
  v21 = v20 - v19;
  v22 = v20 - v19 + 1;
  v86 = v22;
  if ( v22 < v21 )
    return 0LL;
  v23 = v16;
  v24 = v16 * (unsigned __int64)v22;
  v93 = v16;
  if ( v24 > 0xFFFFFFFF )
    return 0LL;
  v25 = v24 + v17 - 1;
  if ( v25 < (unsigned int)v24 )
    return 0LL;
  v26 = v25 / v17;
  v27 = v26 + 4;
  if ( v26 + 4 < v26 )
    return 0LL;
  v28 = v16;
  if ( v27 <= v16 )
    v28 = v27;
  v84 = v28;
  if ( v28 + 1 < v28 )
    return 0LL;
  v29 = 2LL * (v28 + 1);
  if ( v29 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)v29 + 8 < (unsigned int)v29 )
    return 0LL;
  v30 = (v29 + 8) & 0xFFFFFFF8;
  v31 = v30 + 2056;
  v80 = v30 + 2056;
  if ( v30 + 2056 < v30 )
    return 0LL;
  v95 = (__int64)((unsigned __int64)v17 << 13) / v23;
  if ( (a2 & 0x4A80) != 0 )
  {
    if ( v21 + 4 < v21 )
      return 0LL;
    v77 = 2LL * (v21 + 4);
    if ( v77 > 0xFFFFFFFF || (int)v77 + 8 < (unsigned int)v77 )
      return 0LL;
    v32 = (v77 + 8) & 0xFFFFFFF8;
    v78 = 0;
    if ( (a2 & 0x200) == 0 )
      v78 = v30 + 2056;
    v31 = v78;
    v80 = v78;
  }
  else
  {
    v32 = 0;
  }
  if ( a10 + 8 < a10 )
    return 0LL;
  v33 = (a10 + 8) & 0xFFFFFFF8;
  v34 = v31 + v32;
  if ( v31 + v32 < v32 )
    return 0LL;
  v35 = v34 + v33;
  if ( v34 + v33 < v34 || v35 + 240 < v35 )
    return 0LL;
  v36 = (char *)EngAllocMem(1u, v35 + 240, 0x35355448u);
  v37 = v36;
  if ( !v36 )
    return v37;
  v38 = (int *)(v36 + 240);
  if ( v33 )
  {
    *((_QWORD *)v36 + 4) = v38;
    v38 = (int *)((char *)v38 + v33);
  }
  if ( v32 )
  {
    v70 = v36 + 48;
    *((_DWORD *)v36 + 12) = v88;
    *((_DWORD *)v36 + 13) = v102;
    *((_DWORD *)v36 + 16) = v91;
    *((_DWORD *)v36 + 17) = v89;
    *((_DWORD *)v36 + 18) = v83;
    *((_DWORD *)v36 + 19) = v79;
    *((_QWORD *)v36 + 11) = v38;
    *((_QWORD *)v36 + 12) = (char *)v38 + 2 * (int)v86;
    v38 = (int *)((char *)v38 + (int)v32);
    if ( !(unsigned int)BuildRepData(v36 + 48, (unsigned int)v11, (unsigned int)v15) )
    {
LABEL_55:
      EngFreeMem(v37);
      return 0LL;
    }
    v71 = *((_OWORD *)v37 + 4);
    *((_OWORD *)v37 + 7) = *v70;
    v72 = *((_OWORD *)v37 + 5);
    *((_OWORD *)v37 + 8) = v71;
    v73 = *((_OWORD *)v37 + 6);
    *((_OWORD *)v37 + 9) = v72;
    *((_OWORD *)v37 + 10) = v73;
    v74 = *((_OWORD *)v37 + 8);
    *((_OWORD *)v37 + 11) = *((_OWORD *)v37 + 7);
    v75 = *((_OWORD *)v37 + 9);
    *((_OWORD *)v37 + 12) = v74;
    v76 = *((_OWORD *)v37 + 10);
    *((_OWORD *)v37 + 13) = v75;
    *((_OWORD *)v37 + 14) = v76;
  }
  if ( !v80 )
  {
    v13 = v37[17] - 1;
    v59 = v37[16];
    v14 = v37[19] - 1;
    v69 = v37[18];
    goto LABEL_78;
  }
  v39 = v38 + 512;
  v40 = v38 + 256;
  *((_WORD *)v37 + 6) = 1;
  *((_QWORD *)v37 + 3) = v38;
  *((_QWORD *)v37 + 5) = v38 + 512;
  v96 = (unsigned __int64)v38 + 2 * v84 + 2048;
  v41 = -(int)v95;
  v42 = -(v95 + 1);
  do
  {
    v41 += v95;
    v42 += v95 + 1;
    *v38 = v41;
    v38[256] = v42;
    ++v38;
  }
  while ( v38 < v40 );
  v43 = v88;
  v44 = (_WORD *)v39 - 1;
  v85 = v42;
  v45 = 0;
  LOWORD(v92) = 0;
  v46 = v88;
  v94 = 0LL;
  v47 = v88;
  if ( !v88 )
  {
    v58 = 0;
    goto LABEL_54;
  }
  v48 = -1;
  v49 = -v88;
  for ( i = -v88; ; i = -v88 )
  {
    v97 = v44;
    v81 = v46 - 1;
    LODWORD(v51) = v47;
    v52 = v47 - v102;
    v49 += v102;
    v98 = v44;
    v87 = v52;
    if ( v52 <= 0 )
    {
      v85 = v49;
      v49 += i;
      v87 = v43 + v52;
      ++v15;
      v53 = 0x4000;
    }
    else
    {
      LODWORD(v51) = v102;
      v53 = 0;
    }
    v54 = v79;
    if ( v15 >= v83 - 2 && v15 <= v79 )
    {
      v55 = v53 | 0x8000;
      v56 = ((__int64)(int)v51 << 13) + v94;
      v51 = v56 / v93;
      if ( (int)(v56 / v93) <= (int)v95 )
        v55 = v53;
      LOWORD(v92) = v51 + v92;
      v53 = v55;
      v94 = v56 % v93;
      if ( (v55 & 0x4000) != 0 )
      {
        v92 = ((__int64)v85 << 13) / v93;
        v62 = v55;
        v63 = v55 | 0x8000;
        v64 = ((__int64)v85 << 13) % v93;
        v85 = 0;
        v65 = v62 & 0x7FFF;
        v94 = v64;
        if ( (int)v92 + (int)v51 <= (int)v95 )
          v63 = v65;
        v53 = v63;
      }
      v54 = v79;
      v45 = v92;
    }
    v43 = v88;
    if ( v15 < v83 - 1 || v15 > v54 )
      break;
    if ( v11 >= v91 && v11 < v89 )
    {
      v14 = v15;
      ++v44;
      v57 = ((v53 & 0x4000) != 0) + v101;
      v101 = v57;
      if ( (unsigned __int64)v44 >= v96 )
        v44 = v98;
      *v44 = v53 | v51;
      if ( v82 != -1 )
      {
LABEL_49:
        v48 = v82;
        v13 = v11;
LABEL_50:
        v46 = v81;
        goto LABEL_51;
      }
      v82 = v11;
      v90 = v15;
      if ( (v53 & 0x4000) == 0 )
      {
        v66 = v45;
        goto LABEL_67;
      }
      if ( v15 == v83 - 1 )
      {
        *((_WORD *)v37 + 5) = 1;
        v67 = v45;
        v101 = v57 - 1;
        --v44;
      }
      else
      {
        v14 = v15 - 1;
        v66 = 0x2000;
        v90 = v15 - 1;
LABEL_67:
        v67 = v66 - v51;
      }
      *((_WORD *)v37 + 7) = v67;
      goto LABEL_49;
    }
    if ( v48 == -1 )
      goto LABEL_50;
    if ( (unsigned __int64)++v44 >= v96 )
      v44 = v97;
    if ( (v53 & 0x4000) == 0 )
      LOWORD(v51) = 0x2000 - v45 + v51;
    v46 = 0;
    *v44 = v53 | v51 | 0x4000;
    ++v101;
LABEL_51:
    ++v11;
    if ( !v46 )
    {
      v58 = v101;
      goto LABEL_54;
    }
    v47 = v87;
  }
  if ( v48 == -1 )
    goto LABEL_50;
  ++v44;
  v13 = v11;
  if ( (unsigned __int64)v44 >= v96 )
    v44 = v97;
  v58 = v101 + 1;
  *v44 = (0x2000 - v45) | 0x4000;
LABEL_54:
  v59 = v82;
  v60 = v44 + 1;
  if ( v82 == -1 )
    goto LABEL_55;
  v68 = (_WORD *)*((_QWORD *)v37 + 5);
  if ( v60 == v68 )
    goto LABEL_55;
  if ( v13 >= v89 )
    v13 = v89 - 1;
  v69 = v90;
  if ( v90 < v83 )
  {
    ++*((_WORD *)v37 + 6);
    v69 = v83;
  }
  if ( v14 >= v79 )
    v14 = v79 - 1;
  if ( *((_WORD *)v37 + 5) )
  {
    if ( !*((_WORD *)v37 + 7) )
    {
      *((_WORD *)v37 + 5) = 0;
      v59 = v82 + 1;
    }
  }
  v37[5] = v58;
  v37[4] = v60 - v68;
  *v60 = 0;
LABEL_78:
  *a3 = v59;
  *a4 = v13;
  *a8 = v69;
  *a9 = v14;
  *v37 = v13 - v59 + 1;
  v37[1] = v14 - v69 + 1;
  return v37;
}
