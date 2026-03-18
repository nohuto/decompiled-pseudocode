/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00449C0
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0036410 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0266338 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C003A79C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C0257CB0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02BA380 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02D5D0C (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

__int64 CreateXlateObject(void *a1, int a2, __int64 a3, ...)
{
  unsigned int v5; // r13d
  __int64 v6; // r15
  unsigned int v7; // r12d
  __int64 v8; // rbx
  struct PALETTE *v9; // r8
  BOOL v10; // edx
  __int64 v11; // r9
  struct PALETTE *v12; // r14
  __int64 v13; // rsi
  struct _TRANSLATE *v14; // r10
  struct _TRANSLATE *v15; // r11
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rdi
  int v19; // r8d
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edx
  int v24; // r10d
  int v25; // r9d
  int v26; // esi
  int v27; // edi
  int v28; // r11d
  int v29; // ecx
  int v30; // eax
  int *v32; // rdx
  int *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  void *v36; // rcx
  size_t v37; // r8
  int v38; // edi
  int v39; // edx
  int v40; // esi
  int NearestIndexFromColorref; // eax
  unsigned int v42; // edi
  int v43; // edi
  __int64 v44; // r9
  unsigned int v45; // eax
  _DWORD *v46; // rcx
  int v47; // eax
  unsigned int *v48; // r14
  unsigned int v49; // eax
  _DWORD *v50; // rcx
  _DWORD *v51; // rdi
  __int64 v52; // r10
  __int64 v53; // r9
  unsigned int *v54; // rdx
  unsigned int v55; // eax
  _DWORD *v56; // rcx
  unsigned int i; // r8d
  __int64 v58; // rax
  int v59; // ecx
  unsigned int v60; // ecx
  unsigned int *v61; // r8
  unsigned int v62; // eax
  __int64 v63; // rdx
  struct _TRANSLATE *v64; // rdx
  int v65; // eax
  struct PALETTE *v66; // rsi
  int v67; // r13d
  unsigned int v68; // edx
  __int64 v69; // rax
  int v70; // eax
  unsigned int v71; // ecx
  unsigned int *v72; // rdx
  unsigned int v73; // eax
  __int64 v74; // rbx
  __int64 v75; // rsi
  __int64 v76; // r13
  __int64 v77; // rax
  unsigned int k; // esi
  struct PALETTE *v79; // rax
  unsigned int m; // esi
  int v81; // eax
  __int64 v82; // rcx
  unsigned int v83; // [rsp+20h] [rbp-69h]
  BOOL v84; // [rsp+24h] [rbp-65h]
  int v85; // [rsp+24h] [rbp-65h]
  __int16 v86; // [rsp+24h] [rbp-65h]
  struct _TRANSLATE *v87; // [rsp+28h] [rbp-61h]
  __int16 v88; // [rsp+30h] [rbp-59h]
  struct PALETTE *j; // [rsp+38h] [rbp-51h] BYREF
  struct _TRANSLATE *v90; // [rsp+40h] [rbp-49h]
  __int64 v91; // [rsp+48h] [rbp-41h]
  __int64 v92; // [rsp+50h] [rbp-39h]
  _BYTE v93[32]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v94; // [rsp+78h] [rbp-11h]
  __int64 v96; // [rsp+D8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+D8h] [rbp+4Fh]
  __int64 v98; // [rsp+E0h] [rbp+57h]
  struct PALETTE *v99; // [rsp+E8h] [rbp+5Fh]
  __int64 v100; // [rsp+F0h] [rbp+67h]
  __int64 v101; // [rsp+F8h] [rbp+6Fh]
  __int64 v102; // [rsp+100h] [rbp+77h]
  __int64 v103; // [rsp+108h] [rbp+7Fh]
  va_list va1; // [rsp+110h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v96 = va_arg(va1, _QWORD);
  v98 = va_arg(va1, _QWORD);
  v99 = va_arg(va1, struct PALETTE *);
  v100 = va_arg(va1, _QWORD);
  v101 = va_arg(va1, _QWORD);
  v102 = va_arg(va1, _QWORD);
  v103 = va_arg(va1, _QWORD);
  if ( a3 )
    v5 = *(_DWORD *)(a3 + 28);
  else
    v5 = 256;
  v91 = v5;
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
  v92 = ghsemPalette;
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
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v93, a1);
        if ( v94 )
          *(_DWORD *)(v6 + 4) |= 0x10u;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v93);
      }
      else if ( (a2 & 1) != 0 )
      {
        v47 = *(_DWORD *)(v6 + 4) | 0x20;
        *(_DWORD *)(v6 + 4) = v47;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            *(_DWORD *)(v6 + 4) = v47 | 8;
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
  v9 = ppalDefault;
  v10 = (*(_DWORD *)(v6 + 4) & 8) != 0;
  v84 = v10;
  if ( !v96 || (*(_DWORD *)(v96 + 24) & 0x800) != 0 )
  {
    v11 = 1LL;
    v83 = 1;
    if ( !*((_QWORD *)v99 + 9) )
      v99 = ppalDefault;
    if ( (v103 & 0x2000) == 0 )
    {
      *(_DWORD *)(v6 + 76) |= 0x800u;
      if ( v96 )
        *(_DWORD *)(v6 + 76) |= 0x1000u;
    }
  }
  else
  {
    v11 = 0LL;
    v83 = 0;
  }
  *(_QWORD *)(v6 + 40) = a3;
  *(_QWORD *)(v6 + 48) = v96;
  *(_QWORD *)(v6 + 56) = v99;
  v12 = v99;
  v13 = a3;
  v14 = (struct _TRANSLATE *)*((_QWORD *)v99 + 9);
  v15 = (struct _TRANSLATE *)*((_QWORD *)v99 + 10);
  v87 = v14;
  v90 = v15;
  if ( a3 )
  {
    v16 = *(_DWORD *)(a3 + 24);
    v17 = v16 & 0x800;
    v88 = v16;
    LODWORD(j) = v17;
    if ( (v16 & 0x800) == 0 || v14 != v15 && (v103 & 0x4000) == 0 )
    {
      v18 = v96;
      if ( (v16 & 0x8000) == 0 )
        goto LABEL_17;
      if ( !v96 )
      {
LABEL_111:
        if ( (unsigned int)bEqualRGB_In_Palette(a3, v99, v9, v11) )
        {
LABEL_74:
          v45 = 0;
          v46 = (_DWORD *)(v6 + 80);
          do
            *v46++ = v45++;
          while ( v45 < 0x100 );
          *(_DWORD *)(v6 + 4) |= 1u;
          goto LABEL_23;
        }
        LOWORD(v16) = v88;
        v17 = (int)j;
        v10 = v84;
        LODWORD(v11) = v83;
        v14 = v87;
        v15 = v90;
        goto LABEL_17;
      }
      v9 = (struct PALETTE *)*(unsigned int *)(v96 + 24);
      if ( ((unsigned __int16)v9 & 0x8000) == 0 )
      {
LABEL_16:
        if ( ((unsigned __int16)v9 & 0x800) != 0 && v14 == v15 )
          goto LABEL_111;
LABEL_17:
        if ( v17 && !v18 )
        {
          v54 = (unsigned int *)(v6 + 80);
          v55 = 0;
          v56 = (_DWORD *)(v6 + 80);
          do
            *v56++ = v55++;
          while ( v55 < 0x100 );
          for ( i = 0;
                i < *((_DWORD *)v99 + 7);
                *(_DWORD *)(v6 + 4LL * *((unsigned __int8 *)v15 + v58 + 4) + 80) = *((unsigned __int8 *)v14 + v58 + 4) )
          {
            v58 = i++;
          }
          v59 = *(_DWORD *)(a3 + 24);
          if ( (v59 & 0x1000) != 0 )
          {
            *v54 = 0;
            *(_DWORD *)(v6 + 1100) = 255;
          }
          else if ( (v59 & 0x10000) == 0 )
          {
            v60 = 0;
            v61 = (unsigned int *)(v6 + 1064);
            do
            {
              *v54 = v60;
              v62 = v60 + 246;
              ++v60;
              *v61++ = v62;
              ++v54;
            }
            while ( v60 < 0xA );
          }
          goto LABEL_23;
        }
        if ( (v16 & 0x2000) != 0 )
        {
          if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
          {
            *(_DWORD *)(v6 + 80) = 0;
            *(_DWORD *)(v6 + 84) = 1;
          }
          else
          {
            v40 = v100;
            if ( v39 )
            {
              v42 = v101;
              *(_DWORD *)(v6 + 84) = v101;
              *(_DWORD *)(v6 + 80) = v40;
            }
            else
            {
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v18, v12, (unsigned int)v100, 1LL);
              v42 = v101;
              *(_DWORD *)(v6 + 80) = NearestIndexFromColorref;
              *(_DWORD *)(v6 + 84) = ulGetNearestIndexFromColorref(v96, v99, v42, 1LL);
            }
            *(_DWORD *)(v6 + 76) |= 0x100u;
            *(_DWORD *)(v6 + 28) = v40;
            *(_DWORD *)(v6 + 32) = v42;
          }
          goto LABEL_23;
        }
        if ( !v5 )
        {
          if ( v18 && (*(_DWORD *)(v18 + 24) & 0x2000) != 0 )
          {
            v43 = v102;
            *(_DWORD *)(v6 + 80) = ulGetNearestIndexFromColorref(a3, v98, (unsigned int)v102, 1LL);
            *(_DWORD *)(v6 + 4) |= 4u;
            *(_DWORD *)(v6 + 24) = v43;
            *(_QWORD *)(v6 + 16) = v6 + 80;
          }
          goto LABEL_23;
        }
        if ( !v18 || !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
        {
          if ( v10 )
          {
            v63 = 4LL * v5;
            while ( 1 )
            {
              v63 -= 4LL;
              *(_DWORD *)(v63 + v6 + 80) = *(_DWORD *)(v63 + *(_QWORD *)(v13 + 120));
              if ( !--v5 )
                break;
              v13 = a3;
            }
          }
          else
          {
            if ( !(_DWORD)v11 || (v85 = v103 & 0x2000, (v103 & 0x2000) != 0) )
            {
              v12 = (struct PALETTE *)v18;
              v85 = v103 & 0x2000;
              if ( (v103 & 0x2000) != 0 )
              {
                *(_DWORD *)(v6 + 76) |= 0x2000u;
                v13 = a3;
              }
            }
            for ( j = v12; ; v12 = j )
            {
              --v5;
              *(_DWORD *)(v6 + 4LL * v5 + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                                  &j,
                                                  *((unsigned int *)v12 + 24),
                                                  *(unsigned int *)(*(_QWORD *)(v13 + 120) + 4LL * v5));
              if ( !v5 )
                break;
              v13 = a3;
            }
            if ( v83 && !v85 )
            {
              v64 = v87;
              if ( v96 )
                v64 = v90;
              XLATE::vMapNewXlate((XLATE *)v6, v64);
            }
          }
          goto LABEL_23;
        }
        v36 = (void *)(v6 + 80);
        v37 = 4 * v91;
        goto LABEL_64;
      }
      if ( *(_DWORD *)(v96 + 28) != 256 || *(_DWORD *)(a3 + 28) != 256 )
      {
LABEL_42:
        v11 = v83;
        goto LABEL_16;
      }
      if ( ((unsigned __int16)v9 & 0x100) != 0 )
      {
        v52 = *(_QWORD *)(v96 + 72);
        if ( !v52 )
        {
LABEL_109:
          v14 = v87;
          goto LABEL_42;
        }
        LODWORD(v53) = 256;
        while ( 1 )
        {
          v53 = (unsigned int)(v53 - 1);
          if ( *(unsigned __int8 *)(v53 + v52 + 4) != (_DWORD)v53 )
            break;
          if ( !(_DWORD)v53 )
            goto LABEL_71;
        }
      }
      else
      {
LABEL_71:
        LODWORD(v44) = 256;
        while ( 1 )
        {
          v44 = (unsigned int)(v44 - 1);
          if ( ((*(_DWORD *)(*(_QWORD *)(a3 + 120) + 4 * v44) ^ *(_DWORD *)(*(_QWORD *)(v96 + 120) + 4 * v44)) & 0xFFFFFF) != 0 )
            break;
          if ( !(_DWORD)v44 )
            goto LABEL_74;
        }
        v15 = v90;
      }
      v17 = (int)j;
      goto LABEL_109;
    }
  }
  if ( !v14 )
  {
    v14 = (struct _TRANSLATE *)&defaultTranslate;
    v99 = ppalDefault;
    v15 = (struct _TRANSLATE *)&defaultTranslate;
    *(_QWORD *)(v6 + 56) = ppalDefault;
    v87 = (struct _TRANSLATE *)&defaultTranslate;
    v90 = (struct _TRANSLATE *)&defaultTranslate;
  }
  v48 = (unsigned int *)(v6 + 80);
  v49 = 0;
  v50 = (_DWORD *)(v6 + 80);
  do
    *v50++ = v49++;
  while ( v49 < 0x100 );
  v51 = (_DWORD *)v96;
  if ( !v96 )
  {
    *(_DWORD *)(v6 + 4) |= 1u;
    goto LABEL_23;
  }
  v65 = *(_DWORD *)(v96 + 24);
  v66 = v99;
  v86 = v65;
  v67 = v65 & 0x8000;
  if ( (v65 & 0x8000) != 0 )
  {
    if ( (unsigned int)bEqualRGB_In_Palette(v96, v99, ppalDefault, v11) )
    {
      *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_23;
    }
    LOWORD(v65) = v86;
    v14 = v87;
    v15 = v90;
  }
  if ( v67 && a3 )
  {
    if ( (unsigned int)bEqualRGB_In_Palette(v51, a3, v9, v11) )
    {
      *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_23;
    }
    LOWORD(v65) = v86;
    v14 = v87;
    v15 = v90;
  }
  if ( (v65 & 0x800) != 0 )
  {
    if ( v15 == v14 )
    {
      *(_DWORD *)(v6 + 4) |= 1u;
    }
    else
    {
      v68 = 0;
      if ( *((_DWORD *)v66 + 7) )
      {
        do
        {
          v69 = v68++;
          *(_DWORD *)(v6 + 4LL * *((unsigned __int8 *)v14 + v69 + 4) + 80) = *((unsigned __int8 *)v15 + v69 + 4);
        }
        while ( v68 < *((_DWORD *)v99 + 7) );
        v51 = (_DWORD *)v96;
      }
      v70 = v51[6];
      if ( (v70 & 0x1000) != 0 )
      {
        *v48 = 0;
        *(_DWORD *)(v6 + 1100) = 255;
      }
      else if ( (v70 & 0x10000) == 0 )
      {
        v71 = 0;
        v72 = (unsigned int *)(v6 + 1064);
        do
        {
          *v48 = v71;
          v73 = v71 + 246;
          ++v71;
          *v72++ = v73;
          ++v48;
        }
        while ( v71 < 0xA );
      }
    }
    goto LABEL_23;
  }
  if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
  {
    if ( v51[7] != 256 )
    {
      memset((void *)(v6 + 80), 0, 0x400uLL);
      v51 = (_DWORD *)v96;
    }
    v74 = 10LL;
    v75 = 0LL;
    v76 = 40LL;
    while ( 1 )
    {
      v48[v75] = XEPALOBJ::ulDispatchGFPEFunction(
                   (__int64 *)va,
                   (unsigned int)v51[24],
                   *(unsigned int *)(v75 * 4 + logDefaultPal + 4));
      *(_DWORD *)(v6 + v76 + 1024) = XEPALOBJ::ulDispatchGFPEFunction(
                                       (__int64 *)va,
                                       *(unsigned int *)(v96 + 96),
                                       *(unsigned int *)(logDefaultPal + v76 + 4));
      v76 += 4LL;
      ++v75;
      if ( !--v74 )
        break;
      v51 = (_DWORD *)v96;
    }
    v8 = v92;
    if ( (v103 & 0x2000) != 0 )
    {
      v77 = a3;
      for ( k = 0; k < *(_DWORD *)(a3 + 28); v77 = a3 )
      {
        *(_DWORD *)(v6 + 4LL * k + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                           (__int64 *)va,
                                           *(unsigned int *)(v96 + 96),
                                           *(unsigned int *)(*(_QWORD *)(v77 + 120) + 4LL * k));
        ++k;
      }
      *(_DWORD *)(v6 + 76) |= 0x2000u;
    }
    else if ( v87 )
    {
      v79 = v99;
      for ( m = 0; m < *((_DWORD *)v99 + 7); v79 = v99 )
      {
        v81 = XEPALOBJ::ulDispatchGFPEFunction(
                (__int64 *)va,
                *(unsigned int *)(v96 + 96),
                *(unsigned int *)(*((_QWORD *)v79 + 15) + 4LL * m));
        v82 = *((unsigned __int8 *)v87 + m++ + 4);
        *(_DWORD *)(v6 + 4 * v82 + 80) = v81;
      }
    }
    goto LABEL_23;
  }
  v37 = 1024LL;
  v36 = (void *)(v6 + 80);
LABEL_64:
  memset(v36, 0, v37);
  v38 = v102;
  *(_DWORD *)(v6 + 4LL * (unsigned int)ulGetNearestIndexFromColorref(a3, v98, (unsigned int)v102, 1LL) + 80) = 1;
  *(_DWORD *)(v6 + 4) |= 4u;
  *(_DWORD *)(v6 + 24) = v38;
LABEL_23:
  v19 = *(_DWORD *)(v6 + 4);
  if ( (v19 & 9) == 0 )
  {
    v20 = *(_DWORD *)(v6 + 12);
    if ( v20 )
    {
      v34 = *(_QWORD *)(v6 + 40);
      if ( !v34 || (v35 = *(_QWORD *)(v6 + 48)) == 0 || *(_DWORD *)(v34 + 28) == *(_DWORD *)(v35 + 28) )
      {
        while ( *(_DWORD *)(*(_QWORD *)(v6 + 16) + 4LL * v7) == v7 )
        {
          if ( ++v7 >= v20 )
            goto LABEL_37;
        }
      }
    }
    else
    {
      v21 = *(_QWORD *)(v6 + 40);
      v22 = *(_QWORD *)(v6 + 48);
      if ( v21 && v22 && !*(_DWORD *)(v22 + 28) )
      {
        v23 = *(_DWORD *)(v21 + 24);
        v24 = 65280;
        v25 = 16711680;
        if ( (v23 & 2) != 0 )
        {
          v32 = *(int **)(v21 + 120);
          v27 = *v32;
          v26 = v32[1];
          v28 = v32[2];
        }
        else
        {
          v26 = 65280;
          if ( (v23 & 4) != 0 )
          {
            v27 = 255;
            v28 = 16711680;
          }
          else
          {
            v27 = 16711680;
            v28 = 255;
          }
        }
        v29 = *(_DWORD *)(v22 + 24);
        if ( (v29 & 2) != 0 )
        {
          v33 = *(int **)(v22 + 120);
          v30 = *v33;
          v24 = v33[1];
          v25 = v33[2];
        }
        else if ( (v29 & 4) != 0 )
        {
          v30 = 255;
        }
        else
        {
          v30 = 16711680;
          v25 = 255;
        }
        if ( v27 == v30 && v26 == v24 && v28 == v25 )
LABEL_37:
          *(_DWORD *)(v6 + 4) = v19 | 1;
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
