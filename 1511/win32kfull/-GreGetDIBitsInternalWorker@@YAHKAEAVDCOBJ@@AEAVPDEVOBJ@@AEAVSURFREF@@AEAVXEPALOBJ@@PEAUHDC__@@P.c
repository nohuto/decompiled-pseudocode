/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0042BD0
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C0042840 (GreGetDIBitsInternal.c)
 * Callees:
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0041694 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1C00E7C48 (-bIdenticalFormat@@YAHVXEPALOBJ@@H@Z.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C012D044 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C012D0A0 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C01306A0 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C02B4630 (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B468C (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     EncodeRLE8 @ 0x1C02C504C (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02C6BAC (EncodeRLE4.c)
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
  __int64 v14; // rdi
  unsigned int v15; // ebx
  struct tagBITMAPINFO *v16; // r12
  unsigned int v17; // r15d
  struct PDEVOBJ *v18; // rsi
  __int64 result; // rax
  unsigned int biHeight_high; // r9d
  DWORD biCompression; // r13d
  LONG biWidth; // r10d
  LONG biWidth_high; // edx
  unsigned int v24; // r8d
  unsigned int v25; // edi
  bool v26; // zf
  unsigned int v27; // ecx
  unsigned int v28; // r11d
  unsigned int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // rax
  int v32; // edx
  struct PDEVOBJ *v33; // rbx
  unsigned int v34; // eax
  unsigned __int8 *v35; // r8
  struct tagBITMAPINFO *v36; // rdi
  __int64 v37; // r8
  __int64 v38; // r8
  SURFOBJ *v39; // rdx
  SURFOBJ *v40; // rcx
  unsigned int v41; // edi
  int v42; // eax
  unsigned int v43; // edx
  unsigned int biWidth_low; // r10d
  int IsCMYKColor; // eax
  DWORD v46; // r11d
  XLATEOBJ *v47; // r10
  XLATEOBJ *v48; // rdi
  __int64 i; // rcx
  unsigned int v50; // edx
  struct XEPALOBJ *v51; // r12
  unsigned __int16 v52; // di
  int v53; // r8d
  unsigned int v54; // eax
  XLATEOBJ *v55; // r9
  XLATEOBJ *v56; // rcx
  struct PDEVOBJ *v57; // r8
  unsigned int v58; // eax
  XLATEOBJ *v59; // r9
  XLATEOBJ *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r12
  DWORD v63; // eax
  unsigned int v64; // [rsp+60h] [rbp-158h]
  LONG v65; // [rsp+6Ch] [rbp-14Ch]
  XLATEOBJ *pxlo; // [rsp+70h] [rbp-148h] BYREF
  struct PDEVOBJ *v67; // [rsp+78h] [rbp-140h] BYREF
  unsigned int v68; // [rsp+80h] [rbp-138h]
  BOOL v69; // [rsp+84h] [rbp-134h]
  unsigned int v70; // [rsp+88h] [rbp-130h]
  LONG v71; // [rsp+8Ch] [rbp-12Ch]
  unsigned int v72; // [rsp+90h] [rbp-128h]
  struct PDEVOBJ *v73; // [rsp+98h] [rbp-120h] BYREF
  int v74; // [rsp+A0h] [rbp-118h]
  unsigned int v75; // [rsp+A8h] [rbp-110h]
  __int64 v76; // [rsp+B0h] [rbp-108h] BYREF
  unsigned int v77; // [rsp+B8h] [rbp-100h]
  struct SURFREF *v78; // [rsp+C0h] [rbp-F8h]
  struct XEPALOBJ *v79; // [rsp+C8h] [rbp-F0h] BYREF
  int v80; // [rsp+D0h] [rbp-E8h]
  int v81; // [rsp+D4h] [rbp-E4h]
  __int64 v82; // [rsp+D8h] [rbp-E0h] BYREF
  char v83; // [rsp+E0h] [rbp-D8h]
  int v84; // [rsp+E4h] [rbp-D4h]
  unsigned int v85; // [rsp+E8h] [rbp-D0h] BYREF
  unsigned __int64 v86; // [rsp+ECh] [rbp-CCh]
  _BYTE v87[12]; // [rsp+F4h] [rbp-C4h] BYREF
  __int64 v88; // [rsp+100h] [rbp-B8h]
  struct tagBITMAPINFO *v89; // [rsp+108h] [rbp-B0h]
  unsigned __int8 *v90; // [rsp+110h] [rbp-A8h]
  DC **v91; // [rsp+118h] [rbp-A0h]
  BOOL v92; // [rsp+120h] [rbp-98h]
  struct PDEVOBJ *v93; // [rsp+128h] [rbp-90h]
  POINTL pptlSrc; // [rsp+130h] [rbp-88h] BYREF
  struct SURFREF *v95; // [rsp+138h] [rbp-80h]
  struct tagBITMAPINFO *v96; // [rsp+140h] [rbp-78h]
  struct PDEVOBJ *v97; // [rsp+148h] [rbp-70h] BYREF
  __int64 v98; // [rsp+150h] [rbp-68h]
  struct PDEVOBJ *v99; // [rsp+158h] [rbp-60h]
  RECTL prclDest; // [rsp+160h] [rbp-58h] BYREF

  v78 = a4;
  v93 = a3;
  v91 = a2;
  v14 = a1;
  v75 = a1;
  v95 = a4;
  v79 = a5;
  v68 = a8;
  v15 = a9;
  v90 = a10;
  v16 = a11;
  v89 = a11;
  v96 = a11;
  v17 = 1;
  if ( !(unsigned int)bIsCompatible(&v97, *(_QWORD *)(*(_QWORD *)a4 + 120LL), *(_QWORD *)a4, *((_QWORD *)*a2 + 6), 1) )
    return 0LL;
  v18 = v97;
  v99 = v97;
  v85 = 0;
  result = 0LL;
  v86 = 0LL;
  memset(v87, 0, sizeof(v87));
  v88 = 0LL;
  if ( (_DWORD)v14 == 12 )
  {
    LODWORD(v76) = 1;
    pxlo = (XLATEOBJ *)&a11->bmiHeader.biPlanes;
    biWidth_low = LOWORD(a11->bmiHeader.biWidth);
    v70 = biWidth_low;
    biWidth_high = HIWORD(a11->bmiHeader.biWidth);
    v65 = biWidth_high;
    v71 = biWidth_high;
    LOWORD(a11->bmiHeader.biHeight) = 1;
    biHeight_high = HIWORD(a11->bmiHeader.biHeight);
    v72 = biHeight_high;
    v27 = ((biWidth_low * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
    biCompression = 0;
    if ( biWidth_low && biWidth_high )
    {
      v25 = 2;
      v24 = 3;
      goto LABEL_16;
    }
    goto LABEL_158;
  }
  if ( a14 < 0x28 )
    return result;
  if ( (unsigned int)v14 > 0x28 )
    memset(a11->bmiColors, 0, v14 - 40);
  LODWORD(v76) = 0;
  pxlo = (XLATEOBJ *)a11->bmiColors;
  a11->bmiHeader.biSize = 40;
  a11->bmiHeader.biPlanes = 1;
  biHeight_high = a11->bmiHeader.biBitCount;
  v72 = biHeight_high;
  biCompression = a11->bmiHeader.biCompression;
  biWidth = a11->bmiHeader.biWidth;
  v70 = biWidth;
  if ( biWidth <= 0 )
    goto LABEL_158;
  biWidth_high = a11->bmiHeader.biHeight;
  if ( !biWidth_high )
    goto LABEL_158;
  v24 = 3;
  if ( biWidth_high >= 0 )
    goto LABEL_9;
  LODWORD(v88) = 1;
  if ( biCompression )
  {
    if ( biCompression != 3 )
    {
LABEL_158:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  biWidth_high = -biWidth_high;
LABEL_9:
  v71 = biWidth_high;
  v65 = biWidth_high;
  v25 = 2;
  if ( biCompression == 3 )
  {
    v26 = ((biHeight_high - 16) & 0xFFFFFFEF) == 0;
    goto LABEL_11;
  }
  if ( biCompression == 1 )
  {
    v26 = biHeight_high == 8;
LABEL_11:
    if ( v26 )
      goto LABEL_12;
    goto LABEL_65;
  }
  if ( biCompression != 2 )
  {
    if ( biCompression == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*v91);
      biWidth_high = v65;
      v24 = 3;
      if ( IsCMYKColor )
      {
        a11->bmiHeader.biCompression = v46;
        biCompression = v46;
      }
      goto LABEL_12;
    }
    goto LABEL_65;
  }
  if ( biHeight_high != 4 )
  {
LABEL_65:
    biCompression = 0;
    a11->bmiHeader.biCompression = 0;
  }
LABEL_12:
  v27 = ((biWidth * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
  if ( !biCompression || biCompression == 3 )
    a11->bmiHeader.biSizeImage = biWidth_high * v27;
  *(_QWORD *)&a11->bmiHeader.biClrUsed = 0LL;
LABEL_16:
  v69 = biCompression - 1 <= 1;
  v92 = v69;
  v28 = v68;
  if ( biWidth_high < v68 )
    v28 = biWidth_high;
  v68 = v28;
  v77 = v28;
  if ( biWidth_high - v28 < a9 )
    v15 = biWidth_high - v28;
  v64 = v15;
  if ( biCompression - 1 > 1 && a13 < v27 * v15 )
    return 0LL;
  *(_QWORD *)&v87[4] = 0LL;
  if ( a14 < 0x34 && biCompression == 3 )
    return 0LL;
  if ( biHeight_high == 1 )
  {
    v30 = 1;
LABEL_80:
    v29 = a12;
    goto LABEL_32;
  }
  if ( biHeight_high == 4 )
  {
    v30 = 2;
    v25 = 16;
    goto LABEL_80;
  }
  v29 = a12;
  if ( biHeight_high == 8 )
  {
    v30 = 3;
    v25 = 256;
  }
  else
  {
    if ( a12 == 1 )
      v29 = 0;
    v25 = 0;
    switch ( biHeight_high )
    {
      case 0x18u:
        v30 = 5;
        break;
      case 0x10u:
        v30 = 4;
        break;
      case 0x20u:
        v30 = 6;
        break;
      default:
        return 0LL;
    }
  }
LABEL_32:
  v85 = v30;
  v74 = 0;
  v73 = 0LL;
  if ( v29 == 1 )
  {
    if ( a14 >= v75 + 2 * (unsigned __int64)v25 )
    {
      v76 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( !v18 && v85 == 3 && *(_QWORD *)(*(_QWORD *)v79 + 72LL) )
      {
        v33 = 0LL;
        v67 = 0LL;
        v47 = pxlo;
        v48 = pxlo;
        for ( i = 256LL; i; --i )
        {
          LOWORD(v48->iUniq) = 0;
          v48 = (XLATEOBJ *)((char *)v48 + 2);
        }
        v50 = 0;
        v51 = v79;
        do
        {
          v52 = 0;
          v53 = *(_DWORD *)(*(_QWORD *)v51 + 28LL);
          if ( (_WORD)v53 )
          {
            while ( *(unsigned __int8 *)(v52 + *(_QWORD *)(*(_QWORD *)v51 + 72LL) + 4LL) != v50 )
            {
              if ( ++v52 >= (unsigned __int16)v53 )
                goto LABEL_120;
            }
            *((_WORD *)&v47->iUniq + v50) = v52;
          }
LABEL_120:
          ++v50;
        }
        while ( v50 < 0x100 );
        v16 = v89;
      }
      else
      {
        if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v73, 1u, v25, 0LL, 0, 0, 0, 0x200u) )
        {
          SEMOBJ::vUnlock((SEMOBJ *)&v76);
          goto LABEL_107;
        }
        v33 = v73;
        v67 = v73;
        v54 = 0;
        v55 = pxlo;
        if ( v25 )
        {
          v56 = pxlo;
          do
          {
            LOWORD(v56->iUniq) = v54++;
            v56 = (XLATEOBJ *)((char *)v56 + 2);
          }
          while ( v54 < v25 );
        }
        v57 = *(struct PDEVOBJ **)(*(_QWORD *)v93 + 1832LL);
        v93 = v57;
        if ( v18 )
          v57 = v18;
        XEPALOBJ::vGetEntriesFrom(&v67, *(_QWORD *)v79, v57, v55, v25);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v76);
      goto LABEL_47;
    }
    EngSetLastError(0x57u);
LABEL_107:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v73);
    return 0LL;
  }
  v26 = v29 == 0;
  v31 = *(_QWORD *)v78;
  if ( !v26 )
  {
    if ( v30 == *(_DWORD *)(v31 + 96) )
    {
      v33 = v18;
      v67 = v18;
      goto LABEL_47;
    }
    goto LABEL_107;
  }
  v32 = 0;
  if ( *(_DWORD *)(v31 + 96) == v30 && v18 )
  {
    v32 = 1;
    if ( biCompression == 3 || ((v30 - 4) & 0xFFFFFFFD) != 0 )
    {
      if ( v30 == 5 && (*((_BYTE *)v18 + 24) & 4) != 0 )
        v32 = 0;
    }
    else
    {
      v32 = bIdenticalFormat(v18, v30, 3LL);
    }
  }
  if ( v32 )
  {
    v33 = v18;
    v67 = v18;
  }
  else
  {
    if ( v25 )
    {
      v43 = 1;
    }
    else
    {
      v43 = 8;
      if ( v30 == 4 )
        v43 = 2;
    }
    if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v73, v43, v25, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u) )
      goto LABEL_107;
    v33 = v73;
    v67 = v73;
    if ( *(_DWORD *)(*(_QWORD *)v78 + 96LL) == v85 && v85 == 3 )
    {
      v58 = 0;
      v59 = pxlo;
      if ( v25 )
      {
        v60 = pxlo;
        do
        {
          LOWORD(v60->iUniq) = v58++;
          v60 = (XLATEOBJ *)((char *)v60 + 2);
        }
        while ( v58 < v25 );
      }
      v98 = *(_QWORD *)(*(_QWORD *)v93 + 1832LL);
      XEPALOBJ::vGetEntriesFrom(&v67, *(_QWORD *)v79, v98, v59, v25);
      XEPALOBJ::vInit256Default((XEPALOBJ *)&v67);
    }
    else
    {
      switch ( v85 )
      {
        case 1u:
          **((_DWORD **)v73 + 16) = 0;
          *(_DWORD *)(*((_QWORD *)v33 + 16) + 4LL) = 0xFFFFFF;
          break;
        case 2u:
          v61 = 0LL;
          v62 = 16LL;
          do
          {
            *(_DWORD *)(v61 + *((_QWORD *)v33 + 16)) = *(_DWORD *)((char *)&aPalVGA + v61);
            v61 += 4LL;
            --v62;
          }
          while ( v62 );
          v16 = v89;
          break;
        case 3u:
          XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v67);
          break;
      }
    }
  }
  if ( !(_DWORD)v76 )
  {
    if ( biCompression == 3 )
      v25 = 3;
    if ( a14 >= (unsigned __int64)(4 * v25) + 40 )
    {
      if ( (*((_DWORD *)v33 + 6) & 0x4000) != 0 )
      {
        memmove(pxlo, *((const void **)v33 + 16), 2LL * v25);
      }
      else if ( biCompression == 3 || v72 <= 8 && (v42 = 274, _bittest(&v42, v72)) )
      {
        XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v67, (struct tagRGBQUAD *)pxlo, 0, v25);
      }
      goto LABEL_47;
    }
    goto LABEL_107;
  }
  if ( a14 < (unsigned __int64)(3 * v25) + 12 )
    goto LABEL_107;
  if ( ((v72 - 16) & 0xFFFFFFE7) != 0 || v72 == 40 )
    XEPALOBJ::vFill_triples((XEPALOBJ *)&v67, (struct tagRGBTRIPLE *)pxlo, v24, v25);
LABEL_47:
  pxlo = 0LL;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       &pxlo,
                       *(_QWORD *)(*((_QWORD *)*v91 + 10) + 112LL),
                       *((unsigned int *)*v91 + 28),
                       v18,
                       v33,
                       *(_QWORD *)v79,
                       *(_QWORD *)v79,
                       0,
                       0xFFFFFF,
                       0,
                       0) )
  {
    if ( !v90 && !v69 )
      goto LABEL_50;
    v34 = v64;
    if ( v69 )
    {
      if ( !v64 )
      {
        v68 = 0;
        v77 = 0;
        v64 = v65;
        v34 = v65;
      }
      v35 = 0LL;
    }
    else
    {
      v35 = v90;
    }
    v86 = __PAIR64__(v34, v70);
    v82 = 0LL;
    v83 = 0;
    v84 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v82, (struct _DEVBITMAPINFO *)&v85, v35, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v82 )
      goto LABEL_149;
    v36 = *(struct tagBITMAPINFO **)(v82 + 72);
    v89 = v36;
    *(_QWORD *)(v82 + 48) = *((_QWORD *)*v91 + 6);
    v75 = *(_DWORD *)(v82 + 64);
    v91 = *(DC ***)(v82 + 72);
    memset(v91, 0, v75);
    *(_QWORD *)&prclDest.left = 0LL;
    *(_QWORD *)&prclDest.right = v86;
    pptlSrc.x = 0;
    pptlSrc.y = v65 - v64 - v68;
    LODWORD(v79) = 0;
    HIDWORD(v79) = v68 - (v65 - v64);
    v37 = *(_QWORD *)v78;
    v80 = *(_DWORD *)(*(_QWORD *)v78 + 56LL);
    v81 = HIDWORD(v79) + *(_DWORD *)(v37 + 60);
    ERECTL::operator*=(&prclDest, &v79);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&prclDest) )
    {
LABEL_149:
      SURFMEM::~SURFMEM((SURFMEM *)&v82);
      goto LABEL_157;
    }
    v39 = 0LL;
    if ( v38 )
      v39 = (SURFOBJ *)(v38 + 24);
    v40 = 0LL;
    if ( v82 )
      v40 = (SURFOBJ *)(v82 + 24);
    EngCopyBits(v40, v39, 0LL, pxlo, &prclDest, &pptlSrc);
    if ( !v69 )
      goto LABEL_61;
    if ( biCompression == 2 )
    {
      v63 = EncodeRLE4(v36, v90, v70, v64, v16->bmiHeader.biSizeImage);
    }
    else
    {
      if ( biCompression != 1 )
        goto LABEL_155;
      v63 = EncodeRLE8(v36, v90, v70, v64, v16->bmiHeader.biSizeImage);
    }
    v16->bmiHeader.biSizeImage = v63;
LABEL_155:
    if ( v16->bmiHeader.biSizeImage )
    {
LABEL_61:
      v41 = prclDest.bottom - prclDest.top;
      SURFMEM::~SURFMEM((SURFMEM *)&v82);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v73);
      return v41;
    }
    goto LABEL_149;
  }
LABEL_157:
  v17 = 0;
LABEL_50:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v73);
  return v17;
}
