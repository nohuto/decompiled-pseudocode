/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0013F94
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C0016330 (GreGetDIBitsInternal.c)
 * Callees:
 *     ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1C0013134 (-bIdenticalFormat@@YAHVXEPALOBJ@@H@Z.c)
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0013C0C (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0025BE0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0026984 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C0101FB4 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C0102010 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C0106148 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C011CAA0 (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C02B5690 (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B56EC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     EncodeRLE8 @ 0x1C02C61E0 (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02C7D5C (EncodeRLE4.c)
 */

__int64 __fastcall GreGetDIBitsInternalWorker(
        unsigned int a1,
        DC **a2,
        struct PDEVOBJ *a3,
        struct SURFREF *a4,
        struct XEPALOBJ *a5,
        HDC a6,
        HBITMAP a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int8 *a10,
        struct tagBITMAPINFO *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14)
{
  __int64 v14; // rbx
  unsigned int v15; // r15d
  unsigned int v16; // r12d
  __int64 v17; // rsi
  __int64 result; // rax
  int biHeight_high; // r9d
  DWORD biCompression; // r13d
  LONG biWidth; // r10d
  LONG biWidth_high; // edx
  unsigned int v23; // r8d
  bool v24; // zf
  unsigned int v25; // ecx
  unsigned int v26; // r10d
  unsigned int v27; // eax
  unsigned int v28; // r15d
  int v29; // edi
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rbx
  DC **v33; // r15
  DC *v34; // rax
  unsigned int v35; // r8d
  void *v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  int v41; // ecx
  unsigned int v42; // eax
  LONG v43; // esi
  unsigned __int8 *v44; // r8
  __int64 v45; // rdi
  struct tagBITMAPINFO *v46; // rbx
  __int64 v47; // r8
  __int64 v48; // r8
  SURFOBJ *v49; // rdx
  SURFOBJ *v50; // rcx
  unsigned int v51; // edi
  int v52; // eax
  int v53; // r15d
  XLATEOBJ *XlateObject; // rax
  unsigned int v55; // edx
  unsigned int biWidth_low; // r10d
  int IsCMYKColor; // eax
  DWORD v58; // r11d
  struct XEPALOBJ *v59; // rdi
  XLATEOBJ *v60; // r10
  XLATEOBJ *v61; // rdi
  __int64 i; // rcx
  unsigned int v63; // edx
  struct XEPALOBJ *v64; // r11
  unsigned __int16 v65; // di
  int v66; // r8d
  unsigned int v67; // eax
  XLATEOBJ *v68; // r9
  XLATEOBJ *v69; // rcx
  __int64 v70; // r8
  unsigned int v71; // eax
  XLATEOBJ *v72; // r9
  XLATEOBJ *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // rcx
  DWORD v78; // eax
  XLATEOBJ *pxlo; // [rsp+60h] [rbp-158h] BYREF
  unsigned int v80; // [rsp+68h] [rbp-150h]
  DWORD v81; // [rsp+70h] [rbp-148h]
  LONG v82; // [rsp+74h] [rbp-144h]
  __int64 v83; // [rsp+78h] [rbp-140h] BYREF
  unsigned int v84; // [rsp+80h] [rbp-138h]
  BOOL v85; // [rsp+84h] [rbp-134h]
  unsigned int v86; // [rsp+88h] [rbp-130h]
  unsigned int v87; // [rsp+8Ch] [rbp-12Ch]
  DC **v88; // [rsp+90h] [rbp-128h]
  LONG v89; // [rsp+98h] [rbp-120h]
  struct XEPALOBJ *v90; // [rsp+A0h] [rbp-118h]
  void *v91; // [rsp+A8h] [rbp-110h]
  __int64 v92; // [rsp+B0h] [rbp-108h] BYREF
  int v93; // [rsp+B8h] [rbp-100h]
  struct SURFREF *v94; // [rsp+C0h] [rbp-F8h]
  unsigned int v95; // [rsp+C8h] [rbp-F0h]
  __int64 v96; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v97; // [rsp+D8h] [rbp-E0h] BYREF
  char v98; // [rsp+E0h] [rbp-D8h]
  int v99; // [rsp+E4h] [rbp-D4h]
  int v100; // [rsp+E8h] [rbp-D0h] BYREF
  unsigned __int64 v101; // [rsp+ECh] [rbp-CCh]
  _BYTE v102[12]; // [rsp+F4h] [rbp-C4h] BYREF
  __int64 v103; // [rsp+100h] [rbp-B8h]
  unsigned __int8 *v104; // [rsp+108h] [rbp-B0h]
  __int64 v105; // [rsp+110h] [rbp-A8h]
  __int64 v106; // [rsp+118h] [rbp-A0h]
  BOOL v107; // [rsp+120h] [rbp-98h]
  struct tagBITMAPINFO *v108; // [rsp+128h] [rbp-90h]
  int v109; // [rsp+130h] [rbp-88h]
  int v110; // [rsp+134h] [rbp-84h]
  POINTL pptlSrc; // [rsp+138h] [rbp-80h] BYREF
  struct tagBITMAPINFO *v112; // [rsp+140h] [rbp-78h]
  struct SURFREF *v113; // [rsp+148h] [rbp-70h]
  __int64 v114; // [rsp+150h] [rbp-68h] BYREF
  __int64 v115; // [rsp+158h] [rbp-60h]
  __int64 v116; // [rsp+160h] [rbp-58h]
  RECTL prclDest; // [rsp+168h] [rbp-50h] BYREF

  v94 = a4;
  v91 = a3;
  v88 = a2;
  v14 = a1;
  v86 = a1;
  v113 = a4;
  v90 = a5;
  v87 = a8;
  v15 = a9;
  v104 = a10;
  v108 = a11;
  v112 = a11;
  v16 = 1;
  if ( !(unsigned int)bIsCompatible(
                        &v114,
                        *(_QWORD *)(*((_QWORD *)a4 + 4) + 120LL),
                        *((_QWORD *)a4 + 4),
                        *((_QWORD *)*a2 + 6),
                        1) )
    return 0LL;
  v17 = v114;
  v106 = v114;
  v116 = v114;
  v100 = 0;
  result = 0LL;
  v101 = 0LL;
  memset(v102, 0, sizeof(v102));
  v103 = 0LL;
  if ( (_DWORD)v14 == 12 )
  {
    LODWORD(v96) = 1;
    pxlo = (XLATEOBJ *)&a11->bmiHeader.biPlanes;
    biWidth_low = LOWORD(a11->bmiHeader.biWidth);
    v84 = biWidth_low;
    biWidth_high = HIWORD(a11->bmiHeader.biWidth);
    v82 = biWidth_high;
    v89 = biWidth_high;
    LOWORD(a11->bmiHeader.biHeight) = 1;
    biHeight_high = HIWORD(a11->bmiHeader.biHeight);
    LODWORD(v105) = biHeight_high;
    v25 = ((biWidth_low * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
    biCompression = 0;
    v81 = 0;
    if ( biWidth_low && biWidth_high )
    {
      v23 = 2;
      goto LABEL_16;
    }
    goto LABEL_193;
  }
  if ( a14 < 0x28 )
    return result;
  if ( (unsigned int)v14 > 0x28 )
    memset(a11->bmiColors, 0, v14 - 40);
  LODWORD(v96) = 0;
  pxlo = (XLATEOBJ *)a11->bmiColors;
  a11->bmiHeader.biSize = 40;
  a11->bmiHeader.biPlanes = 1;
  biHeight_high = a11->bmiHeader.biBitCount;
  LODWORD(v105) = biHeight_high;
  biCompression = a11->bmiHeader.biCompression;
  v81 = biCompression;
  biWidth = a11->bmiHeader.biWidth;
  v84 = biWidth;
  if ( biWidth <= 0 )
    goto LABEL_193;
  biWidth_high = a11->bmiHeader.biHeight;
  if ( !biWidth_high )
    goto LABEL_193;
  if ( biWidth_high >= 0 )
    goto LABEL_9;
  LODWORD(v103) = 1;
  if ( biCompression )
  {
    if ( biCompression != 3 )
    {
LABEL_193:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  biWidth_high = -biWidth_high;
LABEL_9:
  v89 = biWidth_high;
  v82 = biWidth_high;
  v23 = 2;
  if ( biCompression == 3 )
  {
    v24 = ((biHeight_high - 16) & 0xFFFFFFEF) == 0;
    goto LABEL_11;
  }
  if ( biCompression == 1 )
  {
    v24 = biHeight_high == 8;
LABEL_11:
    if ( v24 )
      goto LABEL_12;
    goto LABEL_75;
  }
  if ( biCompression != 2 )
  {
    if ( biCompression == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*v88);
      biWidth_high = v82;
      v23 = 2;
      if ( IsCMYKColor )
      {
        a11->bmiHeader.biCompression = v58;
        biCompression = v58;
        v81 = v58;
      }
      goto LABEL_12;
    }
    goto LABEL_75;
  }
  if ( biHeight_high != 4 )
  {
LABEL_75:
    v81 = 0;
    biCompression = 0;
    a11->bmiHeader.biCompression = 0;
  }
LABEL_12:
  v25 = ((unsigned int)(biWidth * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
  if ( !biCompression || biCompression == 3 )
    a11->bmiHeader.biSizeImage = biWidth_high * v25;
  *(_QWORD *)&a11->bmiHeader.biClrUsed = 0LL;
LABEL_16:
  v85 = biCompression - 1 <= 1;
  v107 = v85;
  v26 = v87;
  if ( biWidth_high < v87 )
    v26 = biWidth_high;
  v87 = v26;
  v95 = v26;
  if ( biWidth_high - v26 < a9 )
    v15 = biWidth_high - v26;
  v80 = v15;
  if ( biCompression - 1 > 1 && a13 < v25 * v15 )
    return 0LL;
  *(_QWORD *)&v102[4] = 0LL;
  if ( a14 < 0x34 && biCompression == 3 )
    return 0LL;
  if ( biHeight_high == 1 )
  {
    v29 = 1;
    v100 = 1;
    v28 = 2;
LABEL_90:
    v27 = a12;
    goto LABEL_33;
  }
  if ( biHeight_high == 4 )
  {
    v29 = 2;
    v100 = 2;
    v28 = 16;
    goto LABEL_90;
  }
  v27 = a12;
  if ( biHeight_high == 8 )
  {
    v29 = 3;
    v100 = 3;
    v28 = 256;
  }
  else
  {
    if ( a12 == 1 )
      v27 = 0;
    v28 = 0;
    switch ( biHeight_high )
    {
      case 24:
        v29 = 5;
        break;
      case 16:
        v29 = 4;
        break;
      case 32:
        v29 = 6;
        break;
      default:
        return 0LL;
    }
    v100 = v29;
  }
LABEL_33:
  v93 = 0;
  v92 = 0LL;
  if ( v27 == 1 )
  {
    if ( a14 >= v86 + 2 * (unsigned __int64)v28 )
    {
      v96 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      v59 = v90;
      if ( !v17 && v100 == 3 && *(_QWORD *)(*(_QWORD *)v90 + 72LL) )
      {
        v32 = 0LL;
        v83 = 0LL;
        v60 = pxlo;
        v61 = pxlo;
        for ( i = 256LL; i; --i )
        {
          LOWORD(v61->iUniq) = 0;
          v61 = (XLATEOBJ *)((char *)v61 + 2);
        }
        v63 = 0;
        v64 = v90;
        do
        {
          v65 = 0;
          v66 = *(_DWORD *)(*(_QWORD *)v64 + 28LL);
          if ( (_WORD)v66 )
          {
            while ( *(unsigned __int8 *)(v65 + *(_QWORD *)(*(_QWORD *)v64 + 72LL) + 4LL) != v63 )
            {
              if ( ++v65 >= (unsigned __int16)v66 )
                goto LABEL_142;
            }
            *((_WORD *)&v60->iUniq + v63) = v65;
          }
LABEL_142:
          ++v63;
        }
        while ( v63 < 0x100 );
      }
      else
      {
        if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v92, 1u, v28, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          SEMOBJ::vUnlock((SEMOBJ *)&v96);
          goto LABEL_129;
        }
        v32 = v92;
        v83 = v92;
        v67 = 0;
        v68 = pxlo;
        if ( v28 )
        {
          v69 = pxlo;
          do
          {
            LOWORD(v69->iUniq) = v67++;
            v69 = (XLATEOBJ *)((char *)v69 + 2);
          }
          while ( v67 < v28 );
        }
        v70 = *(_QWORD *)(*(_QWORD *)v91 + 1832LL);
        v105 = v70;
        if ( v17 )
          v70 = v17;
        XEPALOBJ::vGetEntriesFrom(&v83, *(_QWORD *)v59, v70, v68, v28);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v96);
      goto LABEL_48;
    }
    EngSetLastError(0x57u);
LABEL_129:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v92);
    return 0LL;
  }
  v24 = v27 == 0;
  v30 = *((_QWORD *)v94 + 4);
  if ( !v24 )
  {
    if ( v29 == *(_DWORD *)(v30 + 96) )
    {
      v32 = v17;
      v83 = v17;
      goto LABEL_48;
    }
    goto LABEL_129;
  }
  v31 = 0;
  if ( *(_DWORD *)(v30 + 96) == v29 && v17 )
  {
    v31 = 1;
    if ( biCompression == 3 || ((v29 - 4) & 0xFFFFFFFD) != 0 )
    {
      if ( v29 == 5 && (*(_BYTE *)(v17 + 24) & 4) != 0 )
        v31 = 0;
    }
    else
    {
      v31 = bIdenticalFormat(v17, v29);
    }
  }
  if ( v31 )
  {
    v32 = v17;
    v83 = v17;
  }
  else
  {
    if ( v28 )
    {
      v55 = 1;
    }
    else
    {
      v55 = 8;
      if ( v29 == 4 )
        v55 = 2;
    }
    if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v92, v55, v28, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
      goto LABEL_129;
    v32 = v92;
    v83 = v92;
    if ( *(_DWORD *)(*((_QWORD *)v94 + 4) + 96LL) == v100 && v100 == 3 )
    {
      v71 = 0;
      v72 = pxlo;
      if ( v28 )
      {
        v73 = pxlo;
        do
        {
          LOWORD(v73->iUniq) = v71++;
          v73 = (XLATEOBJ *)((char *)v73 + 2);
        }
        while ( v71 < v28 );
      }
      v115 = *(_QWORD *)(*(_QWORD *)v91 + 1832LL);
      XEPALOBJ::vGetEntriesFrom(&v83, *(_QWORD *)v90, v115, v72, v28);
      XEPALOBJ::vInit256Default((XEPALOBJ *)&v83);
    }
    else
    {
      switch ( v100 )
      {
        case 1:
          **(_DWORD **)(v92 + 128) = 0;
          *(_DWORD *)(*(_QWORD *)(v32 + 128) + 4LL) = 0xFFFFFF;
          break;
        case 2:
          v74 = 0LL;
          v75 = 16LL;
          do
          {
            *(_DWORD *)(v74 + *(_QWORD *)(v32 + 128)) = *(_DWORD *)((char *)&aPalVGA + v74);
            v74 += 4LL;
            --v75;
          }
          while ( v75 );
          v17 = v106;
          break;
        case 3:
          XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v83);
          break;
      }
    }
  }
  if ( !(_DWORD)v96 )
  {
    if ( biCompression == 3 )
      v28 = 3;
    if ( a14 >= (unsigned __int64)(4 * v28) + 40 )
    {
      if ( (*(_DWORD *)(v32 + 24) & 0x4000) != 0 )
      {
        memmove(pxlo, *(const void **)(v32 + 128), 2LL * v28);
      }
      else if ( biCompression == 3 || (unsigned int)v105 <= 8 && (v52 = 274, _bittest(&v52, v105)) )
      {
        XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v83, (struct tagRGBQUAD *)pxlo, 0, v28);
      }
      goto LABEL_48;
    }
    goto LABEL_129;
  }
  if ( a14 < (unsigned __int64)(3 * v28) + 12 )
    goto LABEL_129;
  if ( (((_DWORD)v105 - 16) & 0xFFFFFFE7) != 0 || (_DWORD)v105 == 40 )
    XEPALOBJ::vFill_triples((XEPALOBJ *)&v83, (struct tagRGBTRIPLE *)pxlo, v23, v28);
LABEL_48:
  pxlo = 0LL;
  v33 = v88;
  v34 = *v88;
  v35 = *((_DWORD *)*v88 + 28);
  v86 = v35;
  v36 = *(void **)(*((_QWORD *)v34 + 10) + 112LL);
  v91 = v36;
  v37 = *(_QWORD *)v90;
  if ( !v17 )
  {
    if ( !v32 )
      goto LABEL_57;
    if ( (*(_DWORD *)(v32 + 24) & 0x800) != 0 )
    {
      v76 = *(_QWORD *)(v37 + 80);
      if ( !v76 || v76 == *(_QWORD *)(v37 + 72) )
        goto LABEL_57;
    }
  }
  if ( !v32 && (*(_DWORD *)(v17 + 24) & 0x800) != 0 )
  {
    v77 = *(_QWORD *)(v37 + 80);
    if ( !v77 || v77 == *(_QWORD *)(v37 + 72) )
      goto LABEL_57;
  }
  if ( v17 && v32 )
  {
    v38 = *(_QWORD *)(v17 + 136);
    if ( v38 == v17 )
      v39 = *(_DWORD *)(v17 + 32);
    else
      v39 = *(_DWORD *)(v38 + 32);
    v40 = *(_QWORD *)(v32 + 136);
    if ( v40 == v32 )
      v41 = *(_DWORD *)(v32 + 32);
    else
      v41 = *(_DWORD *)(v40 + 32);
    if ( v39 == v41 )
    {
LABEL_57:
      pxlo = xloIdent;
LABEL_58:
      if ( !v104 && !v85 )
        goto LABEL_60;
      v42 = v80;
      v43 = v82;
      if ( v85 )
      {
        if ( !v80 )
        {
          v87 = 0;
          v95 = 0;
          v80 = v82;
          v42 = v82;
        }
        v44 = 0LL;
      }
      else
      {
        v44 = v104;
      }
      v101 = __PAIR64__(v42, v84);
      v97 = 0LL;
      v98 = 0;
      v99 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v97, (struct _DEVBITMAPINFO *)&v100, v44, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v97 )
        goto LABEL_184;
      v45 = *(_QWORD *)(v97 + 72);
      v106 = v45;
      *(_QWORD *)(v97 + 48) = *((_QWORD *)*v33 + 6);
      v86 = *(_DWORD *)(v97 + 64);
      v91 = *(void **)(v97 + 72);
      memset(v91, 0, v86);
      v46 = v108;
      *(_QWORD *)&prclDest.left = 0LL;
      *(_QWORD *)&prclDest.right = v101;
      pptlSrc.x = 0;
      pptlSrc.y = v43 - v80 - v87;
      LODWORD(v108) = 0;
      HIDWORD(v108) = v87 - (v43 - v80);
      v47 = *((_QWORD *)v94 + 4);
      v109 = *(_DWORD *)(v47 + 56);
      v110 = HIDWORD(v108) + *(_DWORD *)(v47 + 60);
      ERECTL::operator*=(&prclDest);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&prclDest) )
      {
LABEL_184:
        SURFMEM::~SURFMEM((SURFMEM *)&v97);
        goto LABEL_192;
      }
      v49 = 0LL;
      if ( v48 )
        v49 = (SURFOBJ *)(v48 + 24);
      v50 = 0LL;
      if ( v97 )
        v50 = (SURFOBJ *)(v97 + 24);
      EngCopyBits(v50, v49, 0LL, pxlo, &prclDest, &pptlSrc);
      if ( !v85 )
        goto LABEL_71;
      if ( biCompression == 2 )
      {
        v78 = EncodeRLE4(v45, v104, v84, v80, v46->bmiHeader.biSizeImage);
      }
      else
      {
        if ( biCompression != 1 )
          goto LABEL_190;
        v78 = EncodeRLE8(v45, v104, v84, v80, v46->bmiHeader.biSizeImage);
      }
      v46->bmiHeader.biSizeImage = v78;
LABEL_190:
      if ( v46->bmiHeader.biSizeImage )
      {
LABEL_71:
        v51 = prclDest.bottom - prclDest.top;
        SURFMEM::~SURFMEM((SURFMEM *)&v97);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v92);
        return v51;
      }
      goto LABEL_184;
    }
    v36 = v91;
  }
  v53 = 1;
  if ( (v35 & 7) != 0 && v36 )
  {
    v53 = 0;
  }
  else if ( v17 && v32 && (unsigned int)EXLATEOBJ::bSearchCache(&pxlo, v17, v32, v37, v37, 0, 0xFFFFFF, 0, 0) )
  {
LABEL_102:
    v33 = v88;
    goto LABEL_58;
  }
  XlateObject = (XLATEOBJ *)CreateXlateObject(v91, v86, v17, v32, v37, v37, 0, 0xFFFFFF, 0, 0);
  pxlo = XlateObject;
  if ( XlateObject )
  {
    if ( v53 && v17 && v32 && (XlateObject[3].flXlate & 0x200) == 0 )
      EXLATEOBJ::vAddToCache(&pxlo, v17, v32, v37, v37);
    goto LABEL_102;
  }
LABEL_192:
  v16 = 0;
LABEL_60:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v92);
  return v16;
}
