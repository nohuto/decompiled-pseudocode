/*
 * XREFs of Duplicate802_11AttachAttributesCommon @ 0x1C0073FC0
 * Callers:
 *     Duplicate802_11AttachAttributes @ 0x1C0073FA4 (Duplicate802_11AttachAttributes.c)
 * Callees:
 *     NdisAllocateMemoryWithTag @ 0x1C001FAE0 (NdisAllocateMemoryWithTag.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     PrivateULongMult @ 0x1C0074A84 (PrivateULongMult.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributesCommon(
        unsigned __int16 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        size_t a6,
        int a7,
        size_t a8,
        _QWORD *a9)
{
  unsigned int v10; // r14d
  __int64 v11; // r13
  char v12; // al
  int v13; // r11d
  unsigned int v14; // r10d
  __int64 v15; // rcx
  UINT v16; // ebx
  unsigned int v17; // edi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // r11d
  __int64 v31; // rcx
  int v32; // r11d
  __int64 v33; // rcx
  unsigned int v34; // r11d
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // r11d
  int v38; // eax
  int v39; // eax
  __int64 v40; // r10
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // r15d
  __int64 v44; // rcx
  int v45; // eax
  _DWORD *v46; // r15
  _QWORD *v47; // rax
  __int128 v48; // xmm0
  unsigned int v49; // ecx
  __int64 v50; // rbx
  char *v51; // rcx
  _QWORD *v52; // r14
  unsigned int v53; // ecx
  char *v54; // rax
  __int64 v55; // rbx
  char *v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rbx
  char *v59; // rax
  unsigned int v60; // ecx
  __int64 v61; // rbx
  char *v62; // rax
  unsigned int v63; // ecx
  __int64 v64; // rbx
  char *v65; // rax
  unsigned int v66; // ecx
  __int64 v67; // rbx
  unsigned int v68; // ecx
  __int64 v69; // rbx
  __int64 v70; // r8
  int v71; // ecx
  unsigned int v72; // eax
  _BYTE *v73; // rsi
  _BYTE *v74; // rbx
  unsigned int v75; // r14d
  __int64 v76; // r15
  size_t v77; // r12
  _QWORD *v78; // rsi
  unsigned int v79; // ecx
  char *v80; // rax
  __int64 v81; // rbx
  char *v82; // rax
  unsigned int v83; // ecx
  __int64 v84; // rbx
  char *v85; // rax
  unsigned int v86; // ecx
  __int64 v87; // rbx
  __int64 v88; // rdx
  _QWORD *v89; // rsi
  unsigned int v90; // ecx
  char *v91; // rax
  __int64 v92; // rbx
  char *v93; // rax
  unsigned int v94; // ecx
  PVOID VirtualAddress; // [rsp+20h] [rbp-58h] BYREF
  NDIS_STATUS v97; // [rsp+28h] [rbp-50h] BYREF
  int v98; // [rsp+2Ch] [rbp-4Ch] BYREF
  unsigned int v99; // [rsp+30h] [rbp-48h]
  size_t v100; // [rsp+34h] [rbp-44h] BYREF
  size_t v101; // [rsp+3Ch] [rbp-3Ch] BYREF
  size_t v102; // [rsp+44h] [rbp-34h] BYREF
  _DWORD v103[3]; // [rsp+4Ch] [rbp-2Ch] BYREF
  __int64 v104; // [rsp+58h] [rbp-20h]
  __int64 v105; // [rsp+60h] [rbp-18h]
  _DWORD *v106; // [rsp+68h] [rbp-10h]
  size_t v108; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v109; // [rsp+D0h] [rbp+58h] BYREF
  int v110; // [rsp+D4h] [rbp+5Ch]
  size_t Size; // [rsp+D8h] [rbp+60h] BYREF

  v110 = HIDWORD(a3);
  LODWORD(Size) = 0;
  v10 = 0;
  v109 = 0;
  v11 = 0LL;
  LODWORD(v108) = 0;
  LODWORD(a6) = 0;
  v100 = 0LL;
  LODWORD(a8) = 0;
  v98 = 0;
  a5 = 0;
  v101 = 0LL;
  v102 = 0LL;
  v97 = 0;
  a7 = 0;
  memset(v103, 0, sizeof(v103));
  v105 = 0LL;
  v104 = 0LL;
  VirtualAddress = 0LL;
  if ( !a2 || !a9 || *(_BYTE *)a2 != 0xA1 )
    return (unsigned int)-1073741811;
  *a9 = 0LL;
  v12 = *((_BYTE *)a2 + 1);
  v13 = 40;
  if ( v12 == 1 && *((_WORD *)a2 + 1) >= 0x28u )
  {
    v14 = 1;
  }
  else if ( v12 == 2 && *((_WORD *)a2 + 1) >= 0x38u )
  {
    v14 = 2;
  }
  else
  {
    if ( v12 != 3 || *((_WORD *)a2 + 1) < 0x40u )
      return (unsigned int)-1073741811;
    v14 = 3;
  }
  v15 = *((unsigned int *)a2 + 5);
  v16 = 64;
  v99 = v14;
  if ( (_DWORD)v15 && *((_QWORD *)a2 + 3) )
  {
    v17 = PrivateULongMult(v15, 1092LL, &Size);
    if ( v17 )
      return v17;
    v16 = Size + 64;
    if ( (unsigned int)(Size + 64) < 0x40 )
      return (unsigned int)-1073676267;
  }
  v18 = *((_QWORD *)a2 + 4);
  if ( v18 )
  {
    v19 = *(unsigned int *)(v18 + 48);
    v10 = 160;
    if ( (_DWORD)v19 && *(_QWORD *)(v18 + 56) )
    {
      v17 = PrivateULongMult(v19, 3LL, &v109);
      if ( v17 )
        return v17;
      v10 = v109 + 160;
      if ( v109 >= 0xFFFFFF60 )
        return (unsigned int)-1073676267;
    }
    v20 = *(unsigned int *)(v18 + 64);
    if ( (_DWORD)v20 && *(_QWORD *)(v18 + 72) )
    {
      v17 = PrivateULongMult(v20, 8LL, &v108);
      if ( v17 )
        return v17;
      if ( v10 + (unsigned int)v108 < v10 )
        return (unsigned int)-1073676267;
      v10 += v108;
    }
    v21 = *(unsigned int *)(v18 + 80);
    if ( (_DWORD)v21 && *(_QWORD *)(v18 + 88) )
    {
      v17 = PrivateULongMult(v21, 8LL, &a6);
      if ( v17 )
        return v17;
      if ( v10 + (unsigned int)a6 < v10 )
        return (unsigned int)-1073676267;
      v10 += a6;
    }
    v22 = *(unsigned int *)(v18 + 96);
    if ( (_DWORD)v22 && *(_QWORD *)(v18 + 104) )
    {
      v17 = PrivateULongMult(v22, 8LL, &a8);
      if ( v17 )
        return v17;
      if ( v10 + (unsigned int)a8 < v10 )
        return (unsigned int)-1073676267;
      v10 += a8;
    }
    v23 = *(unsigned int *)(v18 + 112);
    if ( (_DWORD)v23 && *(_QWORD *)(v18 + 120) )
    {
      v17 = PrivateULongMult(v23, 8LL, &v98);
      if ( v17 )
        return v17;
      if ( v10 + v98 < v10 )
        return (unsigned int)-1073676267;
      v10 += v98;
    }
    if ( v14 >= 3 )
    {
      v24 = *(unsigned int *)(v18 + 140);
      if ( (_DWORD)v24 )
      {
        if ( *(_QWORD *)(v18 + 144) && *(_BYTE *)(v18 + 1) >= 3u )
        {
          v17 = PrivateULongMult(v24, 8LL, &v100);
          if ( v17 )
            return v17;
          if ( v10 + (unsigned int)v100 < v10 )
            return (unsigned int)-1073676267;
          v10 += v100;
        }
      }
    }
    if ( v10 + v16 < v16 )
      return (unsigned int)-1073676267;
    v16 += v10;
  }
  if ( v14 >= 2 )
  {
    v25 = *((_DWORD *)a2 + 1);
    v26 = *((_QWORD *)a2 + 5);
    v11 = *((_QWORD *)a2 + 6);
    *(_QWORD *)&v103[1] = v26;
    v105 = v11;
    v27 = v13 & v25;
    if ( v27 && !v11 || v11 && !v27 )
      return (unsigned int)-1073741811;
    if ( v26 )
    {
      v28 = *(unsigned int *)(v26 + 4);
      if ( (_DWORD)v28 )
      {
        v17 = PrivateULongMult(v28, 24LL, &v97);
        if ( v17 )
          return v17;
        v29 = v97;
      }
      else
      {
        v29 = 16;
      }
      v30 = v29 + 8;
      HIDWORD(v100) = v29 + 8;
      if ( v29 >= 0xFFFFFFF8 || v30 + v16 < v16 )
        return (unsigned int)-1073676267;
      v16 += v30;
    }
    if ( v11 )
    {
      v31 = *(unsigned int *)(v11 + 32);
      v32 = 80;
      a5 = 80;
      if ( (_DWORD)v31 && *(_QWORD *)(v11 + 40) )
      {
        v17 = PrivateULongMult(v31, 3LL, &v101);
        if ( v17 )
          return v17;
        v32 = v101 + 80;
        a5 = v101 + 80;
        if ( (unsigned int)v101 >= 0xFFFFFFB0 )
          return (unsigned int)-1073676267;
      }
      v33 = *(unsigned int *)(v11 + 48);
      if ( (_DWORD)v33 && *(_QWORD *)(v11 + 56) )
      {
        v17 = PrivateULongMult(v33, 8LL, (char *)&v101 + 4);
        if ( v17 )
          return v17;
        v35 = v34 + HIDWORD(v101);
        if ( v34 + HIDWORD(v101) < v34 )
          return (unsigned int)-1073676267;
        v32 = v34 + HIDWORD(v101);
        a5 = v35;
      }
      v36 = *(unsigned int *)(v11 + 64);
      if ( (_DWORD)v36 && *(_QWORD *)(v11 + 72) )
      {
        v17 = PrivateULongMult(v36, 8LL, &v102);
        if ( v17 )
          return v17;
        v38 = v37 + v102;
        if ( v37 + (unsigned int)v102 < v37 )
          return (unsigned int)-1073676267;
        v32 = v37 + v102;
        a5 = v38;
      }
      if ( v32 + v16 < v16 )
        return (unsigned int)-1073676267;
      v16 += v32;
    }
  }
  if ( v14 < 3 )
    goto LABEL_98;
  v39 = *((_DWORD *)a2 + 1);
  v40 = *((_QWORD *)a2 + 7);
  v104 = v40;
  v41 = v39 & 0x70;
  if ( v41 && !v40 )
    return (unsigned int)-1073741811;
  if ( !v40 )
    goto LABEL_98;
  if ( !v41 )
    return (unsigned int)-1073741811;
  v42 = *(unsigned int *)(v40 + 48);
  v43 = 72;
  a7 = 72;
  if ( (_DWORD)v42 && *(_QWORD *)(v40 + 56) )
  {
    v17 = PrivateULongMult(v42, 3LL, (char *)&v102 + 4);
    if ( v17 )
      return v17;
    v43 = HIDWORD(v102) + 72;
    a7 = HIDWORD(v102) + 72;
    if ( HIDWORD(v102) >= 0xFFFFFFB8 )
      return (unsigned int)-1073676267;
  }
  v44 = *(unsigned int *)(v40 + 32);
  if ( (_DWORD)v44 && *(_QWORD *)(v40 + 40) )
  {
    v17 = PrivateULongMult(v44, 6LL, v103);
    if ( v17 )
      return v17;
    v45 = v43 + v103[0];
    if ( v43 + v103[0] < v43 )
      return (unsigned int)-1073676267;
    v43 += v103[0];
    a7 = v45;
  }
  if ( v43 + v16 < v16 )
    return (unsigned int)-1073676267;
  v16 += v43;
LABEL_98:
  v97 = NdisAllocateMemoryWithTag(&VirtualAddress, v16, 0x6D61444Eu);
  v17 = v97;
  if ( v97 )
    return v17;
  memset(VirtualAddress, 0, v16);
  v46 = VirtualAddress;
  v47 = a9;
  v48 = *a2;
  v49 = Size;
  v106 = VirtualAddress;
  *(_OWORD *)VirtualAddress = v48;
  *v47 = v46;
  v46[4] = *((_DWORD *)a2 + 4);
  VirtualAddress = (char *)VirtualAddress + 64;
  *v46 = 4195233;
  if ( v49 && *((_DWORD *)a2 + 5) )
  {
    v50 = v49;
    *((_QWORD *)v46 + 3) = VirtualAddress;
    v46[5] = *((_DWORD *)a2 + 5);
    memmove(VirtualAddress, *((const void **)a2 + 3), v49);
    v51 = (char *)VirtualAddress + v50;
    VirtualAddress = (char *)VirtualAddress + v50;
  }
  else
  {
    *((_QWORD *)v46 + 3) = 0LL;
    v46[5] = 0;
    v51 = (char *)VirtualAddress;
  }
  if ( !v10 || !v18 )
    goto LABEL_135;
  *((_QWORD *)v46 + 4) = v51;
  v52 = VirtualAddress;
  *(_OWORD *)v51 = *(_OWORD *)v18;
  *((_OWORD *)v51 + 1) = *(_OWORD *)(v18 + 16);
  *((_OWORD *)v51 + 2) = *(_OWORD *)(v18 + 32);
  v53 = v109;
  v54 = (char *)VirtualAddress + 160;
  VirtualAddress = (char *)VirtualAddress + 160;
  if ( !v109 )
    goto LABEL_108;
  if ( *(_DWORD *)(v18 + 48) )
  {
    v52[7] = v54;
    v55 = v53;
    *((_DWORD *)v52 + 12) = *(_DWORD *)(v18 + 48);
    memmove(VirtualAddress, *(const void **)(v18 + 56), v53);
    v56 = (char *)VirtualAddress + v55;
    VirtualAddress = (char *)VirtualAddress + v55;
  }
  else
  {
LABEL_108:
    v52[7] = 0LL;
    *((_DWORD *)v52 + 12) = 0;
    v56 = (char *)VirtualAddress;
  }
  v57 = v108;
  if ( (_DWORD)v108 && *(_DWORD *)(v18 + 64) )
  {
    v52[9] = v56;
    v58 = v57;
    *((_DWORD *)v52 + 16) = *(_DWORD *)(v18 + 64);
    memmove(VirtualAddress, *(const void **)(v18 + 72), v57);
    v59 = (char *)VirtualAddress + v58;
    VirtualAddress = (char *)VirtualAddress + v58;
  }
  else
  {
    v52[9] = 0LL;
    *((_DWORD *)v52 + 16) = 0;
    v59 = (char *)VirtualAddress;
  }
  v60 = a6;
  if ( (_DWORD)a6 && *(_DWORD *)(v18 + 80) )
  {
    v52[11] = v59;
    v61 = v60;
    *((_DWORD *)v52 + 20) = *(_DWORD *)(v18 + 80);
    memmove(VirtualAddress, *(const void **)(v18 + 88), v60);
    v62 = (char *)VirtualAddress + v61;
    VirtualAddress = (char *)VirtualAddress + v61;
  }
  else
  {
    v52[11] = 0LL;
    *((_DWORD *)v52 + 20) = 0;
    v62 = (char *)VirtualAddress;
  }
  v63 = a8;
  if ( (_DWORD)a8 && *(_DWORD *)(v18 + 96) )
  {
    v52[13] = v62;
    v64 = v63;
    *((_DWORD *)v52 + 24) = *(_DWORD *)(v18 + 96);
    memmove(VirtualAddress, *(const void **)(v18 + 104), v63);
    v65 = (char *)VirtualAddress + v64;
    VirtualAddress = (char *)VirtualAddress + v64;
  }
  else
  {
    v52[13] = 0LL;
    *((_DWORD *)v52 + 24) = 0;
    v65 = (char *)VirtualAddress;
  }
  v66 = v98;
  if ( v98 && *(_DWORD *)(v18 + 112) )
  {
    v52[15] = v65;
    v67 = v66;
    *((_DWORD *)v52 + 28) = *(_DWORD *)(v18 + 112);
    memmove(VirtualAddress, *(const void **)(v18 + 120), v66);
    v51 = (char *)VirtualAddress + v67;
    VirtualAddress = (char *)VirtualAddress + v67;
  }
  else
  {
    v52[15] = 0LL;
    *((_DWORD *)v52 + 28) = 0;
    v51 = (char *)VirtualAddress;
  }
  if ( v99 < 3 )
    goto LABEL_135;
  *(_BYTE *)(*((_QWORD *)v46 + 4) + 128LL) = *(_BYTE *)(v18 + 128);
  *(_DWORD *)(*((_QWORD *)v46 + 4) + 132LL) = *(_DWORD *)(v18 + 132);
  *(_BYTE *)(*((_QWORD *)v46 + 4) + 136LL) = *(_BYTE *)(v18 + 136);
  if ( *(_DWORD *)(v18 + 140) && *(_QWORD *)(v18 + 144) && *(_BYTE *)(v18 + 1) >= 3u )
  {
    v68 = v100;
    if ( (_DWORD)v100 )
    {
      v69 = (unsigned int)v100;
      v52[18] = VirtualAddress;
      *((_DWORD *)v52 + 35) = *(_DWORD *)(v18 + 140);
      memmove(VirtualAddress, *(const void **)(v18 + 144), v68);
      v51 = (char *)VirtualAddress + v69;
      VirtualAddress = (char *)VirtualAddress + v69;
      goto LABEL_133;
    }
    v52[18] = 0LL;
    *((_DWORD *)v52 + 35) = 0;
  }
  v51 = (char *)VirtualAddress;
LABEL_133:
  if ( *(_BYTE *)(v18 + 1) >= 4u )
  {
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 152LL) = *(_BYTE *)(v18 + 152);
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 153LL) = *(_BYTE *)(v18 + 153);
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 154LL) = *(_BYTE *)(v18 + 154);
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 155LL) = *(_BYTE *)(v18 + 155);
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 156LL) = *(_BYTE *)(v18 + 156);
    v51 = (char *)VirtualAddress;
  }
LABEL_135:
  if ( HIDWORD(v100) )
  {
    v70 = *(_QWORD *)&v103[1];
    if ( *(_QWORD *)&v103[1] )
    {
      *((_QWORD *)v46 + 5) = v51;
      *(_QWORD *)v51 = *(_QWORD *)v70;
      if ( *(_DWORD *)(v70 + 4) )
      {
        v71 = *(unsigned __int8 *)(v70 + 9);
        if ( v71 == 3 )
        {
          v72 = 24;
        }
        else if ( v71 == 2 )
        {
          v72 = 20;
        }
        else
        {
          v72 = 0;
          if ( v71 == 1 )
            v72 = 16;
        }
        v73 = (_BYTE *)(v70 + 8);
        v74 = (_BYTE *)(*((_QWORD *)v46 + 5) + 8LL);
        v75 = 0;
        v76 = v70;
        v77 = v72;
        do
        {
          memmove(v74, v73, v77);
          if ( a1 >= 0x61Eu )
            *((_DWORD *)v74 + 4) = 0;
          ++v75;
          *v74 = *v73;
          v73 += v77;
          v74[1] = 3;
          *((_WORD *)v74 + 1) = 24;
          v74 += 24;
        }
        while ( v75 < *(_DWORD *)(v76 + 4) );
        v17 = v97;
        v46 = v106;
        v11 = v105;
      }
      v51 = (char *)VirtualAddress + HIDWORD(v100);
      VirtualAddress = v51;
    }
  }
  if ( a5 && v11 )
  {
    *((_QWORD *)v46 + 6) = v51;
    v78 = VirtualAddress;
    *(_OWORD *)v51 = *(_OWORD *)v11;
    *((_OWORD *)v51 + 1) = *(_OWORD *)(v11 + 16);
    v79 = v101;
    v80 = (char *)VirtualAddress + 80;
    VirtualAddress = (char *)VirtualAddress + 80;
    if ( (_DWORD)v101 && *(_DWORD *)(v11 + 32) )
    {
      v78[5] = v80;
      v81 = v79;
      *((_DWORD *)v78 + 8) = *(_DWORD *)(v11 + 32);
      memmove(VirtualAddress, *(const void **)(v11 + 40), v79);
      v82 = (char *)VirtualAddress + v81;
      VirtualAddress = (char *)VirtualAddress + v81;
    }
    else
    {
      v78[5] = 0LL;
      *((_DWORD *)v78 + 8) = 0;
      v82 = (char *)VirtualAddress;
    }
    v83 = HIDWORD(v101);
    if ( HIDWORD(v101) && *(_DWORD *)(v11 + 48) )
    {
      v78[7] = v82;
      v84 = v83;
      *((_DWORD *)v78 + 12) = *(_DWORD *)(v11 + 48);
      memmove(VirtualAddress, *(const void **)(v11 + 56), v83);
      v85 = (char *)VirtualAddress + v84;
      VirtualAddress = (char *)VirtualAddress + v84;
    }
    else
    {
      v78[7] = 0LL;
      *((_DWORD *)v78 + 12) = 0;
      v85 = (char *)VirtualAddress;
    }
    v86 = v102;
    if ( (_DWORD)v102 && *(_DWORD *)(v11 + 64) )
    {
      v78[9] = v85;
      v87 = v86;
      *((_DWORD *)v78 + 16) = *(_DWORD *)(v11 + 64);
      memmove(VirtualAddress, *(const void **)(v11 + 72), v86);
      v51 = (char *)VirtualAddress + v87;
      VirtualAddress = (char *)VirtualAddress + v87;
    }
    else
    {
      v78[9] = 0LL;
      *((_DWORD *)v78 + 16) = 0;
      v51 = (char *)VirtualAddress;
    }
  }
  if ( a7 )
  {
    v88 = v104;
    if ( v104 )
    {
      *((_QWORD *)v46 + 7) = v51;
      v89 = VirtualAddress;
      *(_OWORD *)v51 = *(_OWORD *)v88;
      *((_OWORD *)v51 + 1) = *(_OWORD *)(v88 + 16);
      *((_OWORD *)v51 + 2) = *(_OWORD *)(v88 + 32);
      *((_OWORD *)v51 + 3) = *(_OWORD *)(v88 + 48);
      *((_QWORD *)v51 + 8) = *(_QWORD *)(v88 + 64);
      v90 = HIDWORD(v102);
      v91 = (char *)VirtualAddress + 72;
      VirtualAddress = (char *)VirtualAddress + 72;
      if ( HIDWORD(v102) && *(_DWORD *)(v88 + 48) )
      {
        v89[7] = v91;
        v92 = v90;
        *((_DWORD *)v89 + 12) = *(_DWORD *)(v88 + 48);
        memmove(VirtualAddress, *(const void **)(v88 + 56), v90);
        v88 = v104;
        v93 = (char *)VirtualAddress + v92;
        VirtualAddress = (char *)VirtualAddress + v92;
      }
      else
      {
        v89[7] = 0LL;
        *((_DWORD *)v89 + 12) = 0;
        v93 = (char *)VirtualAddress;
      }
      v94 = v103[0];
      if ( v103[0] && *(_DWORD *)(v88 + 32) )
      {
        v89[5] = v93;
        *((_DWORD *)v89 + 8) = *(_DWORD *)(v88 + 32);
        memmove(VirtualAddress, *(const void **)(v88 + 40), v94);
      }
      else
      {
        v89[5] = 0LL;
        *((_DWORD *)v89 + 8) = 0;
      }
    }
  }
  return v17;
}
