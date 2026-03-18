/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0036410
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C0049A50 (GreGetDIBitsInternal.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1C0037110 (-bIdenticalFormat@@YAHVXEPALOBJ@@H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C003A654 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00449C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C0136770 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C01367C8 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C013A064 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C014BBB4 (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C02B7778 (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B77D0 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     EncodeRLE8 @ 0x1C02C8730 (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02CA2AC (EncodeRLE4.c)
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
  unsigned int v15; // r12d
  __int64 v16; // r14
  __int64 result; // rax
  _DWORD *p_biPlanes; // rsi
  int biHeight_high; // r10d
  DWORD biCompression; // r9d
  LONG biWidth; // r11d
  LONG biWidth_high; // edx
  unsigned int v23; // r8d
  bool v24; // zf
  unsigned int v25; // ecx
  unsigned int v26; // r11d
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // edi
  unsigned int v31; // ebx
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rbx
  int v35; // eax
  DC **v36; // r13
  DC *v37; // rax
  unsigned int v38; // r8d
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rax
  int v44; // ecx
  XLATEOBJ *v45; // rdi
  __int64 cEntries; // rax
  unsigned __int8 *v47; // r8
  LONG v48; // r14d
  unsigned int v49; // eax
  __int64 v50; // rbx
  struct tagBITMAPINFO *v51; // rsi
  __int64 v52; // r8
  __int64 v53; // r8
  SURFOBJ *v54; // rdx
  SURFOBJ *v55; // rcx
  unsigned int v56; // edi
  int v57; // edx
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rdi
  int v61; // eax
  int v62; // r13d
  __int64 XlateObject; // rax
  unsigned int v64; // edx
  unsigned int biWidth_low; // r11d
  int IsCMYKColor; // eax
  _QWORD *v67; // r13
  _WORD *v68; // rdi
  __int64 i; // rcx
  unsigned int j; // edx
  unsigned __int16 v71; // di
  int v72; // r8d
  unsigned int v73; // eax
  _WORD *v74; // rcx
  struct PDEVOBJ *v75; // r8
  unsigned int v76; // eax
  _WORD *v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // r14
  __int64 v80; // rcx
  __int64 v81; // rcx
  DWORD v82; // eax
  unsigned int v83; // [rsp+60h] [rbp-158h]
  int v84; // [rsp+64h] [rbp-154h]
  LONG v85; // [rsp+68h] [rbp-150h]
  XLATEOBJ *v86; // [rsp+70h] [rbp-148h] BYREF
  __int64 v87; // [rsp+78h] [rbp-140h] BYREF
  unsigned int v88; // [rsp+80h] [rbp-138h]
  BOOL v89; // [rsp+84h] [rbp-134h]
  unsigned int v90; // [rsp+88h] [rbp-130h]
  unsigned int v91; // [rsp+8Ch] [rbp-12Ch]
  __int64 v92; // [rsp+90h] [rbp-128h] BYREF
  DC **v93; // [rsp+98h] [rbp-120h]
  LONG v94; // [rsp+A0h] [rbp-118h]
  _QWORD *v95; // [rsp+A8h] [rbp-110h]
  __int64 v96; // [rsp+B0h] [rbp-108h] BYREF
  int v97; // [rsp+B8h] [rbp-100h]
  unsigned int v98; // [rsp+C0h] [rbp-F8h]
  unsigned int v99; // [rsp+C8h] [rbp-F0h]
  struct SURFREF *v100; // [rsp+D0h] [rbp-E8h]
  __int64 v101; // [rsp+D8h] [rbp-E0h] BYREF
  char v102; // [rsp+E0h] [rbp-D8h]
  int v103; // [rsp+E4h] [rbp-D4h]
  unsigned int v104; // [rsp+E8h] [rbp-D0h] BYREF
  unsigned __int64 v105; // [rsp+ECh] [rbp-CCh]
  _BYTE v106[12]; // [rsp+F4h] [rbp-C4h] BYREF
  __int64 v107; // [rsp+100h] [rbp-B8h]
  unsigned __int8 *v108; // [rsp+108h] [rbp-B0h]
  __int64 v109; // [rsp+110h] [rbp-A8h]
  BOOL v110; // [rsp+118h] [rbp-A0h]
  struct PDEVOBJ *v111; // [rsp+120h] [rbp-98h]
  struct tagBITMAPINFO *v112; // [rsp+128h] [rbp-90h] BYREF
  int v113; // [rsp+130h] [rbp-88h]
  int v114; // [rsp+134h] [rbp-84h]
  POINTL pptlSrc; // [rsp+138h] [rbp-80h] BYREF
  _QWORD v116[4]; // [rsp+140h] [rbp-78h] BYREF
  __int64 v117; // [rsp+160h] [rbp-58h]
  RECTL prclDest; // [rsp+168h] [rbp-50h] BYREF

  v100 = a4;
  v111 = a3;
  v93 = a2;
  v14 = a1;
  v91 = a1;
  v116[1] = a4;
  v95 = a5;
  v88 = a8;
  v108 = a10;
  v112 = a11;
  v116[2] = a11;
  v15 = 1;
  if ( !(unsigned int)bIsCompatible(
                        v116,
                        *(_QWORD *)(*((_QWORD *)a4 + 4) + 120LL),
                        *((_QWORD *)a4 + 4),
                        *((_QWORD *)*a2 + 6),
                        1) )
    return 0LL;
  v16 = v116[0];
  v109 = v116[0];
  v116[3] = v116[0];
  v104 = 0;
  result = 0LL;
  v105 = 0LL;
  memset(v106, 0, sizeof(v106));
  v107 = 0LL;
  if ( (_DWORD)v14 == 12 )
  {
    LODWORD(v86) = 1;
    p_biPlanes = &a11->bmiHeader.biPlanes;
    biWidth_low = LOWORD(a11->bmiHeader.biWidth);
    v90 = biWidth_low;
    biWidth_high = HIWORD(a11->bmiHeader.biWidth);
    v85 = biWidth_high;
    v94 = biWidth_high;
    LOWORD(a11->bmiHeader.biHeight) = 1;
    biHeight_high = HIWORD(a11->bmiHeader.biHeight);
    LODWORD(v87) = biHeight_high;
    v25 = ((biWidth_low * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
    biCompression = 0;
    v84 = 0;
    if ( biWidth_low && biWidth_high )
    {
      v23 = 2;
      goto LABEL_16;
    }
    goto LABEL_210;
  }
  if ( a14 < 0x28 )
    return result;
  if ( (unsigned int)v14 > 0x28 )
    memset(a11->bmiColors, 0, v14 - 40);
  LODWORD(v86) = 0;
  p_biPlanes = &a11->bmiColors[0].rgbBlue;
  a11->bmiHeader.biSize = 40;
  a11->bmiHeader.biPlanes = 1;
  biHeight_high = a11->bmiHeader.biBitCount;
  LODWORD(v87) = biHeight_high;
  biCompression = a11->bmiHeader.biCompression;
  v84 = biCompression;
  biWidth = a11->bmiHeader.biWidth;
  v90 = biWidth;
  if ( biWidth <= 0 )
    goto LABEL_210;
  biWidth_high = a11->bmiHeader.biHeight;
  if ( !biWidth_high )
    goto LABEL_210;
  if ( biWidth_high >= 0 )
    goto LABEL_9;
  LODWORD(v107) = 1;
  if ( biCompression )
  {
    if ( biCompression != 3 )
    {
LABEL_210:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  biWidth_high = -biWidth_high;
LABEL_9:
  v94 = biWidth_high;
  v85 = biWidth_high;
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
    goto LABEL_80;
  }
  if ( biCompression != 2 )
  {
    if ( biCompression == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*v93);
      biWidth_high = v85;
      v23 = 2;
      if ( IsCMYKColor )
      {
        a11->bmiHeader.biCompression = 10;
        biCompression = 10;
        v84 = 10;
      }
      goto LABEL_12;
    }
    goto LABEL_80;
  }
  if ( biHeight_high != 4 )
  {
LABEL_80:
    v84 = 0;
    biCompression = 0;
    a11->bmiHeader.biCompression = 0;
  }
LABEL_12:
  v25 = ((unsigned int)(biWidth * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
  if ( !biCompression || biCompression == 3 )
    a11->bmiHeader.biSizeImage = biWidth_high * v25;
  *(_QWORD *)&a11->bmiHeader.biClrUsed = 0LL;
LABEL_16:
  v89 = biCompression - 1 <= 1;
  v110 = v89;
  v26 = v88;
  if ( biWidth_high < v88 )
    v26 = biWidth_high;
  v88 = v26;
  v98 = v26;
  v27 = biWidth_high - v26;
  v28 = a9;
  if ( v27 < a9 )
    v28 = v27;
  v83 = v28;
  v99 = v28;
  if ( biCompression - 1 > 1 && a13 < v25 * v28 )
    return 0LL;
  *(_QWORD *)&v106[4] = 0LL;
  if ( a14 < 0x34 && biCompression == 3 )
    return 0LL;
  if ( biHeight_high == 1 )
  {
    v31 = 1;
    v30 = 2;
LABEL_103:
    v29 = a12;
    goto LABEL_32;
  }
  if ( biHeight_high == 4 )
  {
    v31 = 2;
    v30 = 16;
    goto LABEL_103;
  }
  v29 = a12;
  if ( biHeight_high == 8 )
  {
    v31 = 3;
    v30 = 256;
  }
  else
  {
    if ( a12 == 1 )
      v29 = 0;
    v30 = 0;
    switch ( biHeight_high )
    {
      case 24:
        v31 = 5;
        break;
      case 16:
        v31 = 4;
        break;
      case 32:
        v31 = 6;
        break;
      default:
        return 0LL;
    }
  }
LABEL_32:
  v104 = v31;
  v97 = 0;
  v96 = 0LL;
  if ( v29 == 1 )
  {
    if ( a14 < v91 + 2 * (unsigned __int64)v30 )
    {
      EngSetLastError(0x57u);
      goto LABEL_141;
    }
    v87 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v16 )
    {
      v67 = v95;
    }
    else
    {
      v67 = v95;
      if ( v104 == 3 && *(_QWORD *)(*v95 + 72LL) )
      {
        v34 = 0LL;
        v92 = 0LL;
        v68 = p_biPlanes;
        for ( i = 256LL; i; --i )
          *v68++ = 0;
        for ( j = 0; j < 0x100; ++j )
        {
          v71 = 0;
          v72 = *(_DWORD *)(*v67 + 28LL);
          if ( (_WORD)v72 )
          {
            while ( *(unsigned __int8 *)(v71 + *(_QWORD *)(*v67 + 72LL) + 4LL) != j )
            {
              if ( ++v71 >= (unsigned __int16)v72 )
                goto LABEL_154;
            }
            *((_WORD *)p_biPlanes + j) = v71;
          }
LABEL_154:
          ;
        }
        v16 = v109;
        goto LABEL_164;
      }
    }
    if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v96, 1u, v30, 0LL, 0, 0, 0, 0x200u, 1) )
    {
      SEMOBJ::vUnlock((SEMOBJ *)&v87);
      goto LABEL_141;
    }
    v34 = v96;
    v92 = v96;
    v73 = 0;
    if ( v30 )
    {
      v74 = p_biPlanes;
      do
        *v74++ = v73++;
      while ( v73 < v30 );
    }
    v75 = *(struct PDEVOBJ **)(*(_QWORD *)v111 + 1832LL);
    v111 = v75;
    if ( v16 )
      v75 = (struct PDEVOBJ *)v16;
    XEPALOBJ::vGetEntriesFrom(&v92, *v67, v75, p_biPlanes, v30);
LABEL_164:
    SEMOBJ::vUnlock((SEMOBJ *)&v87);
    goto LABEL_48;
  }
  v24 = v29 == 0;
  v32 = *((_QWORD *)v100 + 4);
  if ( !v24 )
  {
    if ( v31 == *(_DWORD *)(v32 + 96) )
    {
      v34 = v16;
      v92 = v16;
      goto LABEL_48;
    }
    goto LABEL_141;
  }
  v33 = 0;
  if ( *(_DWORD *)(v32 + 96) == v31 && v16 )
  {
    v33 = 1;
    if ( biCompression == 3 || ((v31 - 4) & 0xFFFFFFFD) != 0 )
    {
      if ( v31 == 5 && (*(_BYTE *)(v16 + 24) & 4) != 0 )
        v33 = 0;
    }
    else
    {
      v33 = bIdenticalFormat(v16, v31, 2LL);
    }
  }
  if ( v33 )
  {
    v34 = v16;
    v92 = v16;
  }
  else
  {
    if ( v30 )
    {
      v64 = 1;
    }
    else
    {
      v64 = 8;
      if ( v31 == 4 )
        v64 = 2;
    }
    if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v96, v64, v30, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
      goto LABEL_141;
    v34 = v96;
    v92 = v96;
    if ( *(_DWORD *)(*((_QWORD *)v100 + 4) + 96LL) == v104 && v104 == 3 )
    {
      v76 = 0;
      if ( v30 )
      {
        v77 = p_biPlanes;
        do
          *v77++ = v76++;
        while ( v76 < v30 );
      }
      v117 = *(_QWORD *)(*(_QWORD *)v111 + 1832LL);
      XEPALOBJ::vGetEntriesFrom(&v92, *v95, v117, p_biPlanes, v30);
      XEPALOBJ::vInit256Default((XEPALOBJ *)&v92);
    }
    else
    {
      switch ( v104 )
      {
        case 1u:
          **(_DWORD **)(v96 + 120) = 0;
          *(_DWORD *)(*(_QWORD *)(v34 + 120) + 4LL) = 0xFFFFFF;
          break;
        case 2u:
          v78 = 0LL;
          v79 = 16LL;
          do
          {
            *(_DWORD *)(v78 + *(_QWORD *)(v34 + 120)) = *(_DWORD *)((char *)&aPalVGA + v78);
            v78 += 4LL;
            --v79;
          }
          while ( v79 );
          v16 = v109;
          break;
        case 3u:
          XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v92);
          break;
      }
    }
  }
  if ( !(_DWORD)v86 )
  {
    if ( v84 == 3 )
      v30 = 3;
    if ( a14 >= (unsigned __int64)(4 * v30) + 40 )
    {
      v35 = *(_DWORD *)(v34 + 24);
      if ( (v35 & 0x4000) != 0 )
      {
        memmove(p_biPlanes, *(const void **)(v34 + 120), 2LL * v30);
      }
      else if ( v84 == 3 || (unsigned int)v87 <= 8 && (v57 = 274, _bittest(&v57, v87)) )
      {
        if ( (v35 & 8) != 0 )
        {
          *p_biPlanes = 16711680;
          p_biPlanes[1] = 65280;
          p_biPlanes[2] = 255;
        }
        else if ( (v35 & 2) != 0 && v30 == 3 )
        {
          *p_biPlanes = **(_DWORD **)(v34 + 120);
          p_biPlanes[1] = *(_DWORD *)(*(_QWORD *)(v34 + 120) + 4LL);
          p_biPlanes[2] = *(_DWORD *)(*(_QWORD *)(v34 + 120) + 8LL);
        }
        else if ( (v35 & 4) != 0 )
        {
          *p_biPlanes = 255;
          p_biPlanes[1] = 65280;
          p_biPlanes[2] = 16711680;
        }
        else
        {
          v58 = *(_DWORD *)(v34 + 28);
          if ( v30 < v58 )
            v58 = v30;
          if ( v58 )
          {
            BYTE3(v87) = 0;
            v59 = 0LL;
            v60 = v58;
            do
            {
              v61 = *(_DWORD *)(v59 + *(_QWORD *)(v34 + 120));
              BYTE2(v87) = v61;
              LOBYTE(v87) = BYTE2(v61);
              BYTE1(v87) = BYTE1(v61);
              *p_biPlanes++ = v87;
              v59 += 4LL;
              --v60;
            }
            while ( v60 );
          }
        }
      }
      goto LABEL_48;
    }
    goto LABEL_141;
  }
  if ( a14 < (unsigned __int64)(3 * v30) + 12 )
  {
LABEL_141:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v96);
    return 0LL;
  }
  if ( (((_DWORD)v87 - 16) & 0xFFFFFFE7) != 0 || (_DWORD)v87 == 40 )
    XEPALOBJ::vFill_triples((XEPALOBJ *)&v92, (struct tagRGBTRIPLE *)p_biPlanes, v23, v30);
LABEL_48:
  v86 = 0LL;
  v36 = v93;
  v37 = *v93;
  v38 = *((_DWORD *)*v93 + 28);
  v91 = v38;
  v39 = *(_QWORD *)(*((_QWORD *)v37 + 10) + 112LL);
  v40 = *v95;
  if ( !v16
    && (!v34
     || (*(_DWORD *)(v34 + 24) & 0x800) != 0 && ((v80 = *(_QWORD *)(v40 + 80)) == 0 || v80 == *(_QWORD *)(v40 + 72)))
    || !v34
    && (*(_DWORD *)(v16 + 24) & 0x800) != 0
    && ((v81 = *(_QWORD *)(v40 + 80)) == 0 || v81 == *(_QWORD *)(v40 + 72))
    || v16
    && v34
    && ((v41 = *(_QWORD *)(v16 + 128), v41 != v16) ? (v42 = *(_DWORD *)(v41 + 32)) : (v42 = *(_DWORD *)(v16 + 32)),
        (v43 = *(_QWORD *)(v34 + 128), v43 != v34) ? (v44 = *(_DWORD *)(v43 + 32)) : (v44 = *(_DWORD *)(v34 + 32)),
        v42 == v44) )
  {
    v45 = xloIdent;
    v86 = xloIdent;
    goto LABEL_58;
  }
  v62 = 1;
  if ( (v38 & 7) != 0 && v39 )
  {
    v62 = 0;
  }
  else if ( v16 && v34 && (unsigned int)EXLATEOBJ::bSearchCache(&v86, v16, v34, v40, v40, 0, 0xFFFFFF, 0, 0) )
  {
    v45 = v86;
LABEL_114:
    v36 = v93;
LABEL_58:
    if ( v108 )
    {
      if ( !v89 )
      {
        v47 = v108;
        v48 = v85;
        v49 = v83;
        goto LABEL_68;
      }
    }
    else if ( !v89 )
    {
      if ( v45 )
      {
        cEntries = (int)v45[1].cEntries;
        if ( (int)cEntries >= 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
        }
        else if ( (_DWORD)cEntries == -1 )
        {
          FreeThreadBufferWithTag(v45);
        }
      }
      goto LABEL_64;
    }
    v49 = v83;
    v48 = v85;
    if ( !v83 )
    {
      v88 = 0;
      v98 = 0;
      v49 = v85;
      v83 = v85;
      v99 = v85;
    }
    v47 = 0LL;
LABEL_68:
    v105 = __PAIR64__(v49, v90);
    v101 = 0LL;
    v102 = 0;
    v103 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v101, (struct _DEVBITMAPINFO *)&v104, v47, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v101 )
      goto LABEL_208;
    v50 = *(_QWORD *)(v101 + 72);
    v109 = v50;
    *(_QWORD *)(v101 + 48) = *((_QWORD *)*v36 + 6);
    v91 = *(_DWORD *)(v101 + 64);
    v95 = *(_QWORD **)(v101 + 72);
    memset(v95, 0, v91);
    v51 = v112;
    *(_QWORD *)&prclDest.left = 0LL;
    *(_QWORD *)&prclDest.right = v105;
    pptlSrc.x = 0;
    pptlSrc.y = v48 - v83 - v88;
    LODWORD(v112) = 0;
    HIDWORD(v112) = v88 - (v48 - v83);
    v52 = *((_QWORD *)v100 + 4);
    v113 = *(_DWORD *)(v52 + 56);
    v114 = HIDWORD(v112) + *(_DWORD *)(v52 + 60);
    ERECTL::operator*=(&prclDest, &v112);
    if ( prclDest.left == prclDest.right || prclDest.top == prclDest.bottom )
    {
LABEL_208:
      SURFMEM::~SURFMEM((SURFMEM *)&v101);
      goto LABEL_209;
    }
    v54 = 0LL;
    if ( v53 )
      v54 = (SURFOBJ *)(v53 + 24);
    v55 = 0LL;
    if ( v101 )
      v55 = (SURFOBJ *)(v101 + 24);
    EngCopyBits(v55, v54, 0LL, v45, &prclDest, &pptlSrc);
    if ( !v89 )
      goto LABEL_76;
    if ( v84 == 2 )
    {
      v82 = EncodeRLE4(v50, v108, v90, v83, v51->bmiHeader.biSizeImage);
    }
    else
    {
      if ( v84 != 1 )
        goto LABEL_207;
      v82 = EncodeRLE8(v50, v108, v90, v83, v51->bmiHeader.biSizeImage);
    }
    v51->bmiHeader.biSizeImage = v82;
LABEL_207:
    if ( v51->bmiHeader.biSizeImage )
    {
LABEL_76:
      v56 = prclDest.bottom - prclDest.top;
      SURFMEM::~SURFMEM((SURFMEM *)&v101);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v86);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v96);
      return v56;
    }
    goto LABEL_208;
  }
  XlateObject = CreateXlateObject(v39, v91, v16, v34, v40, v40, 0, 0xFFFFFF, 0, 0);
  v45 = (XLATEOBJ *)XlateObject;
  v86 = (XLATEOBJ *)XlateObject;
  if ( XlateObject )
  {
    if ( v62 && v16 && v34 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
      EXLATEOBJ::vAddToCache(&v86, v16, v34, v40, v40);
    goto LABEL_114;
  }
LABEL_209:
  v15 = 0;
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v86);
LABEL_64:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v96);
  return v15;
}
