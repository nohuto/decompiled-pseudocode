/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0046230
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0268040 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C004151C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02B7148 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02D2AF8 (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

__int64 CreateXlateObject(__int64 a1, int a2, __int64 a3, ...)
{
  unsigned int v5; // r13d
  __int64 v6; // r15
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // cx
  struct PALETTE *v12; // rdi
  __int64 v13; // rbx
  struct _TRANSLATE *v14; // rsi
  struct _TRANSLATE *v15; // r10
  int v16; // r9d
  __int64 v17; // rsi
  __int16 v18; // r9
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _TRANSLATE *v23; // r8
  unsigned int v24; // eax
  _DWORD *v25; // rcx
  unsigned int v26; // eax
  _DWORD *v27; // rcx
  unsigned int m; // edx
  __int64 v29; // rax
  int v30; // ecx
  bool v31; // zf
  int v32; // ebx
  unsigned int v33; // edi
  int NearestIndexFromColorref; // eax
  int v35; // edi
  size_t v36; // r8
  __int64 v37; // rdx
  struct _TRANSLATE *v38; // rdx
  unsigned int v39; // eax
  _DWORD *v40; // rcx
  _DWORD *v41; // rbx
  struct PALETTE *v42; // rdi
  int v43; // eax
  unsigned int v44; // edx
  struct _TRANSLATE *v45; // r14
  __int64 v46; // rax
  int v47; // eax
  int v48; // ebx
  __int64 v49; // r13
  __int64 v50; // rdi
  __int64 v51; // r14
  __int64 v52; // rax
  unsigned int i; // edi
  struct PALETTE *v54; // rax
  unsigned int j; // edi
  int v56; // eax
  __int64 v57; // rcx
  int v58; // r9d
  unsigned int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // edx
  int v65; // ebx
  int v66; // r8d
  int *v67; // rdx
  int v68; // r11d
  int v69; // edi
  int v70; // r10d
  int v71; // ecx
  int *v72; // rcx
  int v73; // eax
  int v75; // [rsp+20h] [rbp-58h]
  int v76; // [rsp+20h] [rbp-58h]
  struct _TRANSLATE *v77; // [rsp+28h] [rbp-50h] BYREF
  int v78; // [rsp+30h] [rbp-48h]
  int v79; // [rsp+34h] [rbp-44h]
  int v80; // [rsp+38h] [rbp-40h]
  struct PALETTE *k; // [rsp+40h] [rbp-38h] BYREF
  struct _TRANSLATE *v82; // [rsp+48h] [rbp-30h]
  __int64 v83; // [rsp+50h] [rbp-28h]
  __int64 v84; // [rsp+58h] [rbp-20h]
  __int64 v86; // [rsp+B8h] [rbp+40h] BYREF
  va_list va; // [rsp+B8h] [rbp+40h]
  __int64 v88; // [rsp+C0h] [rbp+48h]
  struct PALETTE *v89; // [rsp+C8h] [rbp+50h]
  __int64 v90; // [rsp+D0h] [rbp+58h]
  __int64 v91; // [rsp+D8h] [rbp+60h]
  __int64 v92; // [rsp+E0h] [rbp+68h]
  __int64 v93; // [rsp+E8h] [rbp+70h]
  va_list va1; // [rsp+F0h] [rbp+78h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v86 = va_arg(va1, _QWORD);
  v88 = va_arg(va1, _QWORD);
  v89 = va_arg(va1, struct PALETTE *);
  v90 = va_arg(va1, _QWORD);
  v91 = va_arg(va1, _QWORD);
  v92 = va_arg(va1, _QWORD);
  v93 = va_arg(va1, _QWORD);
  if ( a3 )
    v5 = *(_DWORD *)(a3 + 28);
  else
    v5 = 256;
  v84 = v5;
  if ( 4LL * v5 == -88 )
    return 0LL;
  v6 = AllocThreadBufferWithTag(4 * v5 + 88, 1953265735LL, 0LL);
  if ( !v6 )
    return 0LL;
  v7 = 0;
  *(_DWORD *)v6 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  if ( v5 )
  {
    *(_DWORD *)(v6 + 4) = 2;
    *(_QWORD *)(v6 + 16) = v6 + 80;
    *(_DWORD *)(v6 + 76) = 0;
  }
  else
  {
    *(_DWORD *)(v6 + 4) = 0;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_DWORD *)(v6 + 76) = 512;
  }
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = v5;
  *(_DWORD *)(v6 + 36) = -1;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  v8 = ghsemPalette;
  v83 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  *(_DWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 64) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      *(_DWORD *)(v6 + 72) = a2;
      *(_QWORD *)(v6 + 64) = a1;
      if ( (a2 & 2) != 0 )
      {
        LOBYTE(v9) = 14;
        v77 = (struct _TRANSLATE *)HmgShareLockCheck(a1, v9);
        if ( v77 )
          *(_DWORD *)(v6 + 4) |= 0x10u;
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v77);
      }
      else if ( (a2 & 1) != 0 )
      {
        v10 = *(_DWORD *)(v6 + 4) | 0x20;
        *(_DWORD *)(v6 + 4) = v10;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            *(_DWORD *)(v6 + 4) = v10 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)(v6 + 4) |= 0x20u;
      *(_DWORD *)(v6 + 72) = a2;
      *(_QWORD *)(v6 + 64) = 0LL;
    }
  }
  v11 = v93;
  v75 = (*(unsigned __int8 *)(v6 + 4) >> 3) & 1;
  if ( !v86 || (*(_DWORD *)(v86 + 24) & 0x800) != 0 )
  {
    v79 = 1;
    if ( !*((_QWORD *)v89 + 9) )
      v89 = ppalDefault;
    if ( (v93 & 0x2000) == 0 )
    {
      *(_DWORD *)(v6 + 76) |= 0x800u;
      if ( v86 )
        *(_DWORD *)(v6 + 76) |= 0x1000u;
    }
  }
  else
  {
    v79 = 0;
  }
  *(_QWORD *)(v6 + 40) = a3;
  *(_QWORD *)(v6 + 48) = v86;
  *(_QWORD *)(v6 + 56) = v89;
  v12 = v89;
  v13 = a3;
  v14 = (struct _TRANSLATE *)*((_QWORD *)v89 + 9);
  v15 = (struct _TRANSLATE *)*((_QWORD *)v89 + 10);
  v82 = v14;
  v77 = v15;
  if ( !a3
    || (v16 = *(_DWORD *)(a3 + 24), v80 = v16, LODWORD(k) = v16 & 0x800, (v16 & 0x800) != 0)
    && (v14 == v15 || (v11 & 0x4000) != 0) )
  {
    if ( !v14 )
    {
      v14 = (struct _TRANSLATE *)&defaultTranslate;
      v89 = ppalDefault;
      *(_QWORD *)(v6 + 56) = ppalDefault;
      v77 = (struct _TRANSLATE *)&defaultTranslate;
    }
    v39 = 0;
    v40 = (_DWORD *)(v6 + 80);
    do
      *v40++ = v39++;
    while ( v39 < 0x100 );
    v41 = (_DWORD *)v86;
    if ( !v86 )
    {
      *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_137;
    }
    v42 = v89;
    v78 = *(_DWORD *)(v86 + 24);
    v43 = v78 & 0x8000;
    LODWORD(k) = v43;
    if ( (v78 & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v86, v89) )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        goto LABEL_137;
      }
      v43 = (int)k;
    }
    if ( v43 && a3 && (unsigned int)bEqualRGB_In_Palette(v41, a3) )
    {
      *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_137;
    }
    if ( (v78 & 0x800) != 0 )
    {
      if ( v77 == v14 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        goto LABEL_137;
      }
      v44 = 0;
      if ( *((_DWORD *)v42 + 7) )
      {
        v45 = v77;
        do
        {
          v46 = v44++;
          *(_DWORD *)(v6 + 4LL * *((unsigned __int8 *)v14 + v46 + 4) + 80) = *((unsigned __int8 *)v45 + v46 + 4);
        }
        while ( v44 < *((_DWORD *)v89 + 7) );
        v41 = (_DWORD *)v86;
        v8 = v83;
      }
      v47 = v41[6];
      if ( (v47 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 80) = 0;
        *(_DWORD *)(v6 + 1100) = 255;
        goto LABEL_137;
      }
      v31 = (v47 & 0x10000) == 0;
LABEL_120:
      if ( v31 )
      {
        *(_DWORD *)(v6 + 80) = 0;
        *(_DWORD *)(v6 + 1064) = 246;
        *(_DWORD *)(v6 + 84) = 1;
        *(_DWORD *)(v6 + 1068) = 247;
        *(_DWORD *)(v6 + 88) = 2;
        *(_DWORD *)(v6 + 1072) = 248;
        *(_DWORD *)(v6 + 92) = 3;
        *(_DWORD *)(v6 + 1076) = 249;
        *(_DWORD *)(v6 + 96) = 4;
        *(_DWORD *)(v6 + 1080) = 250;
        *(_DWORD *)(v6 + 100) = 5;
        *(_DWORD *)(v6 + 1084) = 251;
        *(_DWORD *)(v6 + 104) = 6;
        *(_DWORD *)(v6 + 1088) = 252;
        *(_DWORD *)(v6 + 108) = 7;
        *(_DWORD *)(v6 + 1092) = 253;
        *(_DWORD *)(v6 + 112) = 8;
        *(_DWORD *)(v6 + 1096) = 254;
        *(_DWORD *)(v6 + 116) = 9;
        *(_DWORD *)(v6 + 1100) = 255;
      }
      goto LABEL_137;
    }
    if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
    {
      if ( v41[7] != 256 )
      {
        memset((void *)(v6 + 80), 0, 0x400uLL);
        v41 = (_DWORD *)v86;
      }
      v49 = 40LL;
      v50 = 0LL;
      v51 = 10LL;
      while ( 1 )
      {
        *(_DWORD *)(v6 + v50 + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                       (__int64 *)va,
                                       (unsigned int)v41[24],
                                       *(unsigned int *)(v50 + logDefaultPal + 4));
        *(_DWORD *)(v6 + v49 + 1024) = XEPALOBJ::ulDispatchGFPEFunction(
                                         (__int64 *)va,
                                         *(unsigned int *)(v86 + 96),
                                         *(unsigned int *)(v49 + logDefaultPal + 4));
        v49 += 4LL;
        v50 += 4LL;
        if ( !--v51 )
          break;
        v41 = (_DWORD *)v86;
      }
      v8 = v83;
      if ( (v93 & 0x2000) != 0 )
      {
        v52 = a3;
        for ( i = 0; i < *(_DWORD *)(a3 + 28); v52 = a3 )
        {
          *(_DWORD *)(v6 + 4LL * i + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                             (__int64 *)va,
                                             *(unsigned int *)(v86 + 96),
                                             *(unsigned int *)(*(_QWORD *)(v52 + 128) + 4LL * i));
          ++i;
        }
        *(_DWORD *)(v6 + 76) |= 0x2000u;
      }
      else if ( v14 )
      {
        v54 = v89;
        for ( j = 0; j < *((_DWORD *)v89 + 7); v54 = v89 )
        {
          v56 = XEPALOBJ::ulDispatchGFPEFunction(
                  (__int64 *)va,
                  *(unsigned int *)(v86 + 96),
                  *(unsigned int *)(*((_QWORD *)v54 + 16) + 4LL * j));
          v57 = *((unsigned __int8 *)v14 + j++ + 4);
          *(_DWORD *)(v6 + 4 * v57 + 80) = v56;
        }
      }
      goto LABEL_137;
    }
    v36 = 1024LL;
LABEL_124:
    memset((void *)(v6 + 80), 0, v36);
    v48 = v92;
    *(_DWORD *)(v6 + 4LL * (unsigned int)ulGetNearestIndexFromColorref(a3, v88, (unsigned int)v92, 1LL) + 80) = 1;
    *(_DWORD *)(v6 + 4) |= 4u;
    *(_DWORD *)(v6 + 24) = v48;
    goto LABEL_137;
  }
  v17 = v86;
  if ( (v16 & 0x8000) != 0 )
  {
    if ( !v86 )
      goto LABEL_168;
    v78 = *(_DWORD *)(v86 + 24);
    v18 = v78;
    if ( (v78 & 0x8000) != 0 )
    {
      v19 = *(_DWORD *)(v86 + 28);
      if ( *(_DWORD *)(a3 + 28) == v19 && v19 == 256 )
      {
        if ( (v78 & 0x100) != 0 )
        {
          v20 = *(_QWORD *)(v86 + 72);
          if ( v20 )
          {
            LODWORD(v21) = 256;
            while ( 1 )
            {
              v21 = (unsigned int)(v21 - 1);
              if ( *(unsigned __int8 *)(v21 + v20 + 4) != (_DWORD)v21 )
                break;
              if ( !(_DWORD)v21 )
                goto LABEL_43;
            }
          }
        }
        else
        {
LABEL_43:
          LODWORD(v22) = 256;
          while ( 1 )
          {
            v22 = (unsigned int)(v22 - 1);
            if ( ((*(_DWORD *)(*(_QWORD *)(a3 + 128) + 4 * v22) ^ *(_DWORD *)(*(_QWORD *)(v86 + 128) + 4 * v22)) & 0xFFFFFF) != 0 )
              break;
            if ( !(_DWORD)v22 )
              goto LABEL_51;
          }
          v18 = v78;
        }
      }
    }
    v23 = v82;
    if ( (v18 & 0x800) != 0 && v82 == v15 )
    {
LABEL_168:
      if ( (unsigned int)bEqualRGB_In_Palette(a3, v89) )
      {
LABEL_51:
        v24 = 0;
        v25 = (_DWORD *)(v6 + 80);
        do
          *v25++ = v24++;
        while ( v24 < 0x100 );
        *(_DWORD *)(v6 + 4) |= 1u;
        goto LABEL_137;
      }
      v23 = v82;
      v15 = v77;
    }
    LOWORD(v16) = v80;
  }
  else
  {
    v23 = v82;
  }
  if ( !(_DWORD)k || v17 )
  {
    if ( (v16 & 0x2000) != 0 )
    {
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
      {
        *(_DWORD *)(v6 + 80) = 0;
        *(_DWORD *)(v6 + 84) = 1;
      }
      else
      {
        v32 = v90;
        if ( v75 )
        {
          v33 = v91;
          *(_DWORD *)(v6 + 84) = v91;
          *(_DWORD *)(v6 + 80) = v32;
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(v17, v12, (unsigned int)v90, 1LL);
          v33 = v91;
          *(_DWORD *)(v6 + 80) = NearestIndexFromColorref;
          *(_DWORD *)(v6 + 84) = ulGetNearestIndexFromColorref(v86, v89, v33, 1LL);
        }
        *(_DWORD *)(v6 + 76) |= 0x100u;
        *(_DWORD *)(v6 + 28) = v32;
        *(_DWORD *)(v6 + 32) = v33;
      }
      goto LABEL_137;
    }
    if ( !v5 )
    {
      if ( v17 && (*(_DWORD *)(v17 + 24) & 0x2000) != 0 )
      {
        v35 = v92;
        *(_DWORD *)(v6 + 80) = ulGetNearestIndexFromColorref(a3, v88, (unsigned int)v92, 1LL);
        *(_DWORD *)(v6 + 4) |= 4u;
        *(_DWORD *)(v6 + 24) = v35;
        *(_QWORD *)(v6 + 16) = v6 + 80;
      }
      goto LABEL_137;
    }
    if ( !v17 || !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
    {
      if ( v75 )
      {
        v37 = 4LL * v5;
        while ( 1 )
        {
          v37 -= 4LL;
          *(_DWORD *)(v6 + v37 + 80) = *(_DWORD *)(v37 + *(_QWORD *)(v13 + 128));
          if ( !--v5 )
            break;
          v13 = a3;
        }
      }
      else
      {
        if ( !v79 || (v76 = v93 & 0x2000, (v93 & 0x2000) != 0) )
        {
          v12 = (struct PALETTE *)v17;
          v76 = v93 & 0x2000;
          if ( (v93 & 0x2000) != 0 )
          {
            *(_DWORD *)(v6 + 76) |= 0x2000u;
            v13 = a3;
          }
        }
        for ( k = v12; ; v12 = k )
        {
          --v5;
          *(_DWORD *)(v6 + 4LL * v5 + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                              &k,
                                              *((unsigned int *)v12 + 24),
                                              *(unsigned int *)(*(_QWORD *)(v13 + 128) + 4LL * v5));
          if ( !v5 )
            break;
          v13 = a3;
        }
        if ( v79 && !v76 )
        {
          v38 = v82;
          if ( v86 )
            v38 = v77;
          XLATE::vMapNewXlate((XLATE *)v6, v38);
        }
      }
      goto LABEL_137;
    }
    v36 = 4 * v84;
    goto LABEL_124;
  }
  v26 = 0;
  v27 = (_DWORD *)(v6 + 80);
  do
    *v27++ = v26++;
  while ( v26 < 0x100 );
  for ( m = 0;
        m < *((_DWORD *)v89 + 7);
        *(_DWORD *)(v6 + 4LL * *((unsigned __int8 *)v15 + v29 + 4) + 80) = *((unsigned __int8 *)v23 + v29 + 4) )
  {
    v29 = m++;
  }
  v30 = *(_DWORD *)(a3 + 24);
  if ( (v30 & 0x1000) == 0 )
  {
    v31 = (v30 & 0x10000) == 0;
    goto LABEL_120;
  }
  *(_DWORD *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 1100) = 255;
LABEL_137:
  v58 = *(_DWORD *)(v6 + 4);
  if ( (v58 & 9) == 0 )
  {
    v59 = *(_DWORD *)(v6 + 12);
    if ( v59 )
    {
      v60 = *(_QWORD *)(v6 + 40);
      if ( !v60 || (v61 = *(_QWORD *)(v6 + 48)) == 0 || *(_DWORD *)(v60 + 28) == *(_DWORD *)(v61 + 28) )
      {
        while ( *(_DWORD *)(*(_QWORD *)(v6 + 16) + 4LL * v7) == v7 )
        {
          if ( ++v7 >= v59 )
            goto LABEL_161;
        }
      }
    }
    else
    {
      v62 = *(_QWORD *)(v6 + 40);
      v63 = *(_QWORD *)(v6 + 48);
      if ( v62 && v63 && !*(_DWORD *)(v63 + 28) )
      {
        v64 = *(_DWORD *)(v62 + 24);
        v65 = 65280;
        v66 = 16711680;
        if ( (v64 & 2) != 0 )
        {
          v67 = *(int **)(v62 + 128);
          v68 = *v67;
          v69 = v67[1];
          v70 = v67[2];
        }
        else
        {
          v69 = 65280;
          if ( (v64 & 4) != 0 )
          {
            v68 = 255;
            v70 = 16711680;
          }
          else
          {
            v68 = 16711680;
            v70 = 255;
          }
        }
        v71 = *(_DWORD *)(v63 + 24);
        if ( (v71 & 2) != 0 )
        {
          v72 = *(int **)(v63 + 128);
          v73 = *v72;
          v65 = v72[1];
          v66 = v72[2];
        }
        else if ( (v71 & 4) != 0 )
        {
          v73 = 255;
        }
        else
        {
          v73 = 16711680;
          v66 = 255;
        }
        if ( v68 == v73 && v69 == v65 && v70 == v66 )
LABEL_161:
          *(_DWORD *)(v6 + 4) = v58 | 1;
      }
    }
  }
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v8);
    GreReleaseSemaphoreInternal(v8);
  }
  return v6;
}
