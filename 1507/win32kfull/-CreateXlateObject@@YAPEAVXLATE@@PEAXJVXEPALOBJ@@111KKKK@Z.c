/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0025BE0
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0013F94 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02693E4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C0013B04 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C025AC30 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02B7D38 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02D197C (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

__int64 CreateXlateObject(void *a1, int a2, __int64 a3, ...)
{
  unsigned int v5; // r13d
  __int64 v6; // r15
  unsigned int v7; // r12d
  __int64 v8; // r14
  int v9; // eax
  __int16 v10; // cx
  struct PALETTE *v11; // rdi
  __int64 v12; // rbx
  struct _TRANSLATE *v13; // rsi
  struct _TRANSLATE *v14; // r10
  int v15; // r9d
  __int64 v16; // rsi
  __int16 v17; // r9
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _TRANSLATE *v22; // r8
  unsigned int v23; // eax
  _DWORD *v24; // rcx
  unsigned int v25; // eax
  _DWORD *v26; // rcx
  unsigned int m; // edx
  __int64 v28; // rax
  int v29; // ecx
  bool v30; // zf
  int v31; // ebx
  unsigned int v32; // edi
  int NearestIndexFromColorref; // eax
  int v34; // edi
  size_t v35; // r8
  __int64 v36; // rdx
  struct _TRANSLATE *v37; // rdx
  unsigned int v38; // eax
  _DWORD *v39; // rcx
  _DWORD *v40; // rbx
  struct PALETTE *v41; // rdi
  int v42; // eax
  unsigned int v43; // edx
  struct _TRANSLATE *v44; // r14
  __int64 v45; // rax
  int v46; // eax
  int v47; // ebx
  __int64 v48; // r13
  __int64 v49; // rdi
  __int64 v50; // r14
  __int64 v51; // rax
  unsigned int i; // edi
  struct PALETTE *v53; // rax
  unsigned int j; // edi
  int v55; // eax
  __int64 v56; // rcx
  int v57; // r9d
  unsigned int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // edx
  int v64; // ebx
  int v65; // r8d
  int *v66; // rdx
  int v67; // r11d
  int v68; // edi
  int v69; // r10d
  int v70; // ecx
  int *v71; // rcx
  int v72; // eax
  int v74; // [rsp+20h] [rbp-69h]
  int v75; // [rsp+20h] [rbp-69h]
  int v76; // [rsp+24h] [rbp-65h]
  __int16 v77; // [rsp+28h] [rbp-61h]
  int v78; // [rsp+2Ch] [rbp-5Dh]
  int v79; // [rsp+2Ch] [rbp-5Dh]
  struct PALETTE *k; // [rsp+30h] [rbp-59h] BYREF
  struct _TRANSLATE *v81; // [rsp+38h] [rbp-51h]
  struct _TRANSLATE *v82; // [rsp+40h] [rbp-49h]
  __int64 v83; // [rsp+48h] [rbp-41h]
  __int64 v84; // [rsp+50h] [rbp-39h]
  _BYTE v85[32]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v86; // [rsp+78h] [rbp-11h]
  __int64 v88; // [rsp+D8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+D8h] [rbp+4Fh]
  __int64 v90; // [rsp+E0h] [rbp+57h]
  struct PALETTE *v91; // [rsp+E8h] [rbp+5Fh]
  __int64 v92; // [rsp+F0h] [rbp+67h]
  __int64 v93; // [rsp+F8h] [rbp+6Fh]
  __int64 v94; // [rsp+100h] [rbp+77h]
  __int64 v95; // [rsp+108h] [rbp+7Fh]
  va_list va1; // [rsp+110h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v88 = va_arg(va1, _QWORD);
  v90 = va_arg(va1, _QWORD);
  v91 = va_arg(va1, struct PALETTE *);
  v92 = va_arg(va1, _QWORD);
  v93 = va_arg(va1, _QWORD);
  v94 = va_arg(va1, _QWORD);
  v95 = va_arg(va1, _QWORD);
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
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v85, a1);
        if ( v86 )
          *(_DWORD *)(v6 + 4) |= 0x10u;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v85);
      }
      else if ( (a2 & 1) != 0 )
      {
        v9 = *(_DWORD *)(v6 + 4) | 0x20;
        *(_DWORD *)(v6 + 4) = v9;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            *(_DWORD *)(v6 + 4) = v9 | 8;
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
  v10 = v95;
  v74 = (*(unsigned __int8 *)(v6 + 4) >> 3) & 1;
  if ( !v88 || (*(_DWORD *)(v88 + 24) & 0x800) != 0 )
  {
    v76 = 1;
    if ( !*((_QWORD *)v91 + 9) )
      v91 = ppalDefault;
    if ( (v95 & 0x2000) == 0 )
    {
      *(_DWORD *)(v6 + 76) |= 0x800u;
      if ( v88 )
        *(_DWORD *)(v6 + 76) |= 0x1000u;
    }
  }
  else
  {
    v76 = 0;
  }
  *(_QWORD *)(v6 + 40) = a3;
  *(_QWORD *)(v6 + 48) = v88;
  *(_QWORD *)(v6 + 56) = v91;
  v11 = v91;
  v12 = a3;
  v13 = (struct _TRANSLATE *)*((_QWORD *)v91 + 9);
  v14 = (struct _TRANSLATE *)*((_QWORD *)v91 + 10);
  v81 = v13;
  v82 = v14;
  if ( !a3
    || (v15 = *(_DWORD *)(a3 + 24), v77 = v15, LODWORD(k) = v15 & 0x800, (v15 & 0x800) != 0)
    && (v13 == v14 || (v10 & 0x4000) != 0) )
  {
    if ( !v13 )
    {
      v13 = (struct _TRANSLATE *)&defaultTranslate;
      v91 = ppalDefault;
      *(_QWORD *)(v6 + 56) = ppalDefault;
      v82 = (struct _TRANSLATE *)&defaultTranslate;
    }
    v38 = 0;
    v39 = (_DWORD *)(v6 + 80);
    do
      *v39++ = v38++;
    while ( v38 < 0x100 );
    v40 = (_DWORD *)v88;
    if ( !v88 )
    {
      *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_137;
    }
    v41 = v91;
    v79 = *(_DWORD *)(v88 + 24);
    v42 = v79 & 0x8000;
    LODWORD(k) = v42;
    if ( (v79 & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v88, v91) )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        goto LABEL_137;
      }
      v42 = (int)k;
    }
    if ( v42 && a3 && (unsigned int)bEqualRGB_In_Palette(v40, a3) )
    {
      *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_137;
    }
    if ( (v79 & 0x800) != 0 )
    {
      if ( v82 == v13 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        goto LABEL_137;
      }
      v43 = 0;
      if ( *((_DWORD *)v41 + 7) )
      {
        v44 = v82;
        do
        {
          v45 = v43++;
          *(_DWORD *)(v6 + 4LL * *((unsigned __int8 *)v13 + v45 + 4) + 80) = *((unsigned __int8 *)v44 + v45 + 4);
        }
        while ( v43 < *((_DWORD *)v91 + 7) );
        v40 = (_DWORD *)v88;
        v8 = v83;
      }
      v46 = v40[6];
      if ( (v46 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 80) = 0;
        *(_DWORD *)(v6 + 1100) = 255;
        goto LABEL_137;
      }
      v30 = (v46 & 0x10000) == 0;
LABEL_120:
      if ( v30 )
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
      if ( v40[7] != 256 )
      {
        memset((void *)(v6 + 80), 0, 0x400uLL);
        v40 = (_DWORD *)v88;
      }
      v48 = 40LL;
      v49 = 0LL;
      v50 = 10LL;
      while ( 1 )
      {
        *(_DWORD *)(v6 + v49 + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                       (__int64 *)va,
                                       (unsigned int)v40[24],
                                       *(unsigned int *)(v49 + logDefaultPal + 4));
        *(_DWORD *)(v6 + v48 + 1024) = XEPALOBJ::ulDispatchGFPEFunction(
                                         (__int64 *)va,
                                         *(unsigned int *)(v88 + 96),
                                         *(unsigned int *)(v48 + logDefaultPal + 4));
        v48 += 4LL;
        v49 += 4LL;
        if ( !--v50 )
          break;
        v40 = (_DWORD *)v88;
      }
      v8 = v83;
      if ( (v95 & 0x2000) != 0 )
      {
        v51 = a3;
        for ( i = 0; i < *(_DWORD *)(a3 + 28); v51 = a3 )
        {
          *(_DWORD *)(v6 + 4LL * i + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                             (__int64 *)va,
                                             *(unsigned int *)(v88 + 96),
                                             *(unsigned int *)(*(_QWORD *)(v51 + 128) + 4LL * i));
          ++i;
        }
        *(_DWORD *)(v6 + 76) |= 0x2000u;
      }
      else if ( v13 )
      {
        v53 = v91;
        for ( j = 0; j < *((_DWORD *)v91 + 7); v53 = v91 )
        {
          v55 = XEPALOBJ::ulDispatchGFPEFunction(
                  (__int64 *)va,
                  *(unsigned int *)(v88 + 96),
                  *(unsigned int *)(*((_QWORD *)v53 + 16) + 4LL * j));
          v56 = *((unsigned __int8 *)v13 + j++ + 4);
          *(_DWORD *)(v6 + 4 * v56 + 80) = v55;
        }
      }
      goto LABEL_137;
    }
    v35 = 1024LL;
LABEL_124:
    memset((void *)(v6 + 80), 0, v35);
    v47 = v94;
    *(_DWORD *)(v6 + 4LL * (unsigned int)ulGetNearestIndexFromColorref(a3, v90, (unsigned int)v94, 1LL) + 80) = 1;
    *(_DWORD *)(v6 + 4) |= 4u;
    *(_DWORD *)(v6 + 24) = v47;
    goto LABEL_137;
  }
  v16 = v88;
  if ( (v15 & 0x8000) != 0 )
  {
    if ( !v88 )
      goto LABEL_168;
    v78 = *(_DWORD *)(v88 + 24);
    v17 = v78;
    if ( (v78 & 0x8000) != 0 )
    {
      v18 = *(_DWORD *)(v88 + 28);
      if ( *(_DWORD *)(a3 + 28) == v18 && v18 == 256 )
      {
        if ( (*(_DWORD *)(v88 + 24) & 0x100) != 0 )
        {
          v19 = *(_QWORD *)(v88 + 72);
          if ( v19 )
          {
            LODWORD(v20) = 256;
            while ( 1 )
            {
              v20 = (unsigned int)(v20 - 1);
              if ( *(unsigned __int8 *)(v20 + v19 + 4) != (_DWORD)v20 )
                break;
              if ( !(_DWORD)v20 )
                goto LABEL_43;
            }
          }
        }
        else
        {
LABEL_43:
          LODWORD(v21) = 256;
          while ( 1 )
          {
            v21 = (unsigned int)(v21 - 1);
            if ( ((*(_DWORD *)(*(_QWORD *)(a3 + 128) + 4 * v21) ^ *(_DWORD *)(*(_QWORD *)(v88 + 128) + 4 * v21)) & 0xFFFFFF) != 0 )
              break;
            if ( !(_DWORD)v21 )
              goto LABEL_51;
          }
          v17 = v78;
        }
      }
    }
    v22 = v81;
    if ( (v17 & 0x800) != 0 && v81 == v14 )
    {
LABEL_168:
      if ( (unsigned int)bEqualRGB_In_Palette(a3, v91) )
      {
LABEL_51:
        v23 = 0;
        v24 = (_DWORD *)(v6 + 80);
        do
          *v24++ = v23++;
        while ( v23 < 0x100 );
        *(_DWORD *)(v6 + 4) |= 1u;
        goto LABEL_137;
      }
      v22 = v81;
      v14 = v82;
    }
    LOWORD(v15) = v77;
  }
  else
  {
    v22 = v81;
  }
  if ( !(_DWORD)k || v16 )
  {
    if ( (v15 & 0x2000) != 0 )
    {
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
      {
        *(_DWORD *)(v6 + 80) = 0;
        *(_DWORD *)(v6 + 84) = 1;
      }
      else
      {
        v31 = v92;
        if ( v74 )
        {
          v32 = v93;
          *(_DWORD *)(v6 + 84) = v93;
          *(_DWORD *)(v6 + 80) = v31;
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(v16, v11, (unsigned int)v92, 1LL);
          v32 = v93;
          *(_DWORD *)(v6 + 80) = NearestIndexFromColorref;
          *(_DWORD *)(v6 + 84) = ulGetNearestIndexFromColorref(v88, v91, v32, 1LL);
        }
        *(_DWORD *)(v6 + 76) |= 0x100u;
        *(_DWORD *)(v6 + 28) = v31;
        *(_DWORD *)(v6 + 32) = v32;
      }
      goto LABEL_137;
    }
    if ( !v5 )
    {
      if ( v16 && (*(_DWORD *)(v16 + 24) & 0x2000) != 0 )
      {
        v34 = v94;
        *(_DWORD *)(v6 + 80) = ulGetNearestIndexFromColorref(a3, v90, (unsigned int)v94, 1LL);
        *(_DWORD *)(v6 + 4) |= 4u;
        *(_DWORD *)(v6 + 24) = v34;
        *(_QWORD *)(v6 + 16) = v6 + 80;
      }
      goto LABEL_137;
    }
    if ( !v16 || !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
    {
      if ( v74 )
      {
        v36 = 4LL * v5;
        while ( 1 )
        {
          v36 -= 4LL;
          *(_DWORD *)(v6 + v36 + 80) = *(_DWORD *)(v36 + *(_QWORD *)(v12 + 128));
          if ( !--v5 )
            break;
          v12 = a3;
        }
      }
      else
      {
        if ( !v76 || (v75 = v95 & 0x2000, (v95 & 0x2000) != 0) )
        {
          v11 = (struct PALETTE *)v16;
          v75 = v95 & 0x2000;
          if ( (v95 & 0x2000) != 0 )
          {
            *(_DWORD *)(v6 + 76) |= 0x2000u;
            v12 = a3;
          }
        }
        for ( k = v11; ; v11 = k )
        {
          --v5;
          *(_DWORD *)(v6 + 4LL * v5 + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                              &k,
                                              *((unsigned int *)v11 + 24),
                                              *(unsigned int *)(*(_QWORD *)(v12 + 128) + 4LL * v5));
          if ( !v5 )
            break;
          v12 = a3;
        }
        if ( v76 && !v75 )
        {
          v37 = v81;
          if ( v88 )
            v37 = v82;
          XLATE::vMapNewXlate((XLATE *)v6, v37);
        }
      }
      goto LABEL_137;
    }
    v35 = 4 * v84;
    goto LABEL_124;
  }
  v25 = 0;
  v26 = (_DWORD *)(v6 + 80);
  do
    *v26++ = v25++;
  while ( v25 < 0x100 );
  for ( m = 0;
        m < *((_DWORD *)v91 + 7);
        *(_DWORD *)(v6 + 4LL * *((unsigned __int8 *)v14 + v28 + 4) + 80) = *((unsigned __int8 *)v22 + v28 + 4) )
  {
    v28 = m++;
  }
  v29 = *(_DWORD *)(a3 + 24);
  if ( (v29 & 0x1000) == 0 )
  {
    v30 = (v29 & 0x10000) == 0;
    goto LABEL_120;
  }
  *(_DWORD *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 1100) = 255;
LABEL_137:
  v57 = *(_DWORD *)(v6 + 4);
  if ( (v57 & 9) == 0 )
  {
    v58 = *(_DWORD *)(v6 + 12);
    if ( v58 )
    {
      v59 = *(_QWORD *)(v6 + 40);
      if ( !v59 || (v60 = *(_QWORD *)(v6 + 48)) == 0 || *(_DWORD *)(v59 + 28) == *(_DWORD *)(v60 + 28) )
      {
        while ( *(_DWORD *)(*(_QWORD *)(v6 + 16) + 4LL * v7) == v7 )
        {
          if ( ++v7 >= v58 )
            goto LABEL_161;
        }
      }
    }
    else
    {
      v61 = *(_QWORD *)(v6 + 40);
      v62 = *(_QWORD *)(v6 + 48);
      if ( v61 && v62 && !*(_DWORD *)(v62 + 28) )
      {
        v63 = *(_DWORD *)(v61 + 24);
        v64 = 65280;
        v65 = 16711680;
        if ( (v63 & 2) != 0 )
        {
          v66 = *(int **)(v61 + 128);
          v67 = *v66;
          v68 = v66[1];
          v69 = v66[2];
        }
        else
        {
          v68 = 65280;
          if ( (v63 & 4) != 0 )
          {
            v67 = 255;
            v69 = 16711680;
          }
          else
          {
            v67 = 16711680;
            v69 = 255;
          }
        }
        v70 = *(_DWORD *)(v62 + 24);
        if ( (v70 & 2) != 0 )
        {
          v71 = *(int **)(v62 + 128);
          v72 = *v71;
          v64 = v71[1];
          v65 = v71[2];
        }
        else if ( (v70 & 4) != 0 )
        {
          v72 = 255;
        }
        else
        {
          v72 = 16711680;
          v65 = 255;
        }
        if ( v67 == v72 && v68 == v64 && v69 == v65 )
LABEL_161:
          *(_DWORD *)(v6 + 4) = v57 | 1;
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
