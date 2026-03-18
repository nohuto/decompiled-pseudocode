/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C004B598
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     _InternalGetIconInfo @ 0x1C0049C9C (_InternalGetIconInfo.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C004AEE0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C004B100 (NtGdiCreateDIBSection.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00F2500 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C01141B0 (RecolorDeskPattern.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C011BF70 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012F830 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02AF850 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreCreateDIBBrush @ 0x1C02B0C10 (GreCreateDIBBrush.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0041624 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C01306A0 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0262540 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B45F8 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B468C (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 */

__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        unsigned int a2,
        void *a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        unsigned int a9,
        void *a10,
        unsigned __int8 a11,
        unsigned __int64 a12,
        _QWORD *a13)
{
  int v14; // r12d
  unsigned int v15; // r15d
  __int64 v16; // r8
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // r11d
  unsigned int v21; // ebx
  unsigned int v22; // esi
  void *v23; // rsi
  void *v24; // r15
  size_t v25; // rdx
  ULONG v26; // ecx
  unsigned int v27; // edx
  int v28; // ecx
  unsigned int v29; // edx
  unsigned __int64 v30; // rsi
  __int64 v31; // r13
  void *v32; // rax
  void *v33; // r15
  __int64 v34; // r8
  DYNAMICMODECHANGESHARELOCK *v35; // rcx
  __int64 v36; // rcx
  unsigned int *v37; // rax
  unsigned int *v38; // rsi
  unsigned int v39; // r8d
  int v40; // esi
  __int64 v41; // rbx
  DYNAMICMODECHANGESHARELOCK *v42; // rcx
  __int64 v43; // rbx
  __int64 v45; // [rsp+68h] [rbp-F0h] BYREF
  char v46; // [rsp+70h] [rbp-E8h]
  int v47; // [rsp+74h] [rbp-E4h]
  __int64 v48; // [rsp+78h] [rbp-E0h] BYREF
  int v49; // [rsp+80h] [rbp-D8h]
  unsigned int v50; // [rsp+88h] [rbp-D0h]
  char v51[4]; // [rsp+8Ch] [rbp-CCh] BYREF
  int v52; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+94h] [rbp-C4h]
  __int128 v54; // [rsp+9Ch] [rbp-BCh]
  int v55; // [rsp+ACh] [rbp-ACh]
  unsigned int v56; // [rsp+B0h] [rbp-A8h]
  unsigned int v57; // [rsp+B4h] [rbp-A4h]
  int v58; // [rsp+B8h] [rbp-A0h]
  void *v59; // [rsp+C0h] [rbp-98h]
  unsigned int v60; // [rsp+C8h] [rbp-90h]
  unsigned int v61; // [rsp+CCh] [rbp-8Ch]
  void *v62; // [rsp+D0h] [rbp-88h]
  int v63; // [rsp+D8h] [rbp-80h]
  _QWORD v64[2]; // [rsp+E0h] [rbp-78h] BYREF
  DC *v65[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v66[2]; // [rsp+100h] [rbp-58h] BYREF
  _QWORD v67[9]; // [rsp+110h] [rbp-48h] BYREF
  unsigned int v69; // [rsp+168h] [rbp+10h] BYREF
  void *Src; // [rsp+170h] [rbp+18h]

  Src = a3;
  v69 = a2;
  v52 = 0;
  v53 = 0LL;
  v54 = 0uLL;
  v55 = 0;
  v14 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_111;
  v15 = 2;
  if ( a5 == 2 || a5 == 3 && (a11 & 1) == 0 )
    goto LABEL_111;
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_111;
  if ( !a4 )
    goto LABEL_111;
  if ( a6 < 0x28 )
    goto LABEL_111;
  v16 = *a4;
  v58 = v16;
  v63 = v16;
  if ( a6 < (unsigned int)v16 )
    goto LABEL_111;
  if ( (unsigned int)v16 < 0x28 )
    goto LABEL_111;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_111;
  v17 = a4[1];
  if ( v17 <= 0 )
    goto LABEL_111;
  v18 = a4[2];
  if ( !v18 )
    goto LABEL_111;
  HIDWORD(v54) = 0;
  LODWORD(v53) = v17;
  if ( v18 < 0 )
  {
    v18 = -v18;
    HIDWORD(v54) = 1;
  }
  HIDWORD(v53) = v18;
  v19 = *((unsigned __int16 *)a4 + 7);
  v52 = v19;
  v20 = a4[4];
  v57 = v20;
  v60 = v20;
  v56 = a4[8];
  v61 = v56;
  v59 = (char *)a4 + v16;
  v69 = 0;
  if ( v20 )
  {
    if ( v20 == 3 )
    {
      if ( a6 < 0x34 || a5 )
        goto LABEL_111;
      v59 = a4 + 10;
      v69 = a4[10];
      v50 = a4[11];
      LODWORD(v62) = a4[12];
      v21 = 0;
      v22 = 512;
      if ( v19 == 16 )
      {
        v52 = 4;
      }
      else
      {
        if ( v19 != 32 )
          goto LABEL_111;
        v52 = 6;
      }
      goto LABEL_54;
    }
    if ( v20 != 10 )
      goto LABEL_111;
    DCOBJ::DCOBJ((DCOBJ *)v65, a1);
    if ( !v65[0] || !(unsigned int)DC::bIsCMYKColor(v65[0]) )
    {
LABEL_47:
      EngSetLastError(0x57u);
      DCOBJ::~DCOBJ((DCOBJ *)v65);
      return 0LL;
    }
    switch ( v52 )
    {
      case 1:
        v52 = 1;
        v21 = 2;
        break;
      case 4:
        v52 = 2;
        v21 = 16;
        break;
      case 8:
        v52 = 3;
        v21 = 256;
        break;
      case 32:
        v52 = 6;
        v21 = 0;
        v22 = 512;
        v15 = 16;
LABEL_53:
        DCOBJ::~DCOBJ((DCOBJ *)v65);
        goto LABEL_54;
      default:
        goto LABEL_47;
    }
    v15 = 1;
    v22 = 1024;
    goto LABEL_53;
  }
  switch ( v19 )
  {
    case 1:
      v52 = 1;
      v21 = 2;
      goto LABEL_32;
    case 4:
      v52 = 2;
      v21 = 16;
      goto LABEL_32;
    case 8:
      v52 = 3;
      v21 = 256;
LABEL_32:
      v15 = 1;
      v22 = 1024;
      goto LABEL_54;
  }
  if ( a5 == 1 )
    v14 = 0;
  a5 = v14;
  v21 = 0;
  v22 = 512;
  if ( v19 != 16 )
  {
    if ( v19 == 24 )
    {
      v52 = 5;
      goto LABEL_27;
    }
    if ( v19 == 32 )
    {
      v52 = 6;
LABEL_27:
      v15 = 8;
      goto LABEL_54;
    }
LABEL_111:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v52 = 4;
  v69 = 31744;
  v50 = 992;
  LODWORD(v62) = 31;
LABEL_54:
  v49 = 0;
  v48 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v48, v15, v21, 0LL, v69, v50, (unsigned int)v62, v22) )
  {
LABEL_55:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v48);
    return 0LL;
  }
  *(_QWORD *)((char *)&v54 + 4) = *(_QWORD *)v48;
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v48 + 24) |= 0x8000u;
    v23 = Src;
    v24 = a8;
    if ( !Src )
    {
LABEL_58:
      SURFMEM::~SURFMEM((SURFMEM *)&v45);
      goto LABEL_55;
    }
    Src = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v67, a1);
    if ( v67[0] && (*(_DWORD *)(*(_QWORD *)(v67[0] + 48LL) + 56LL) & 0x8000) != 0 )
      HIDWORD(v54) |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v67);
  }
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v45,
          (struct _DEVBITMAPINFO *)&v52,
          v23,
          v24,
          a9,
          a10,
          a12,
          0,
          1,
          (a11 >> 3) & 1,
          a13 != 0LL)
    || !*(_WORD *)(v45 + 100) && *(_QWORD *)(v45 + 184) && *(_DWORD *)(v45 + 64) != a7 )
  {
    goto LABEL_58;
  }
  if ( Src )
  {
    v25 = *(unsigned int *)(v45 + 64);
    if ( (unsigned int)v25 > a7 )
    {
LABEL_71:
      v26 = 87;
LABEL_72:
      EngSetLastError(v26);
      goto LABEL_58;
    }
    v50 = *(_DWORD *)(v45 + 64);
    v62 = *(void **)(v45 + 72);
    memmove(v62, Src, v25);
    v27 = a6;
    v28 = v58;
  }
  else
  {
    v27 = a6;
    v28 = v58;
  }
  if ( v56 && v56 < v21 )
    v21 = v56;
  if ( v21 )
  {
    v29 = v27 - v28;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        v30 = 2LL * v21;
        if ( v30 > 0xFFFFFFFF || v29 < v30 )
          goto LABEL_71;
        DCOBJ::DCOBJ((DCOBJ *)v64, a1);
        v31 = v64[0];
        if ( !v64[0] )
        {
LABEL_84:
          DCOBJ::~DCOBJ((DCOBJ *)v64);
          goto LABEL_58;
        }
        v32 = (void *)AllocFreeTmpBuffer(2 * v21);
        v33 = v32;
        if ( !v32 )
        {
          EngSetLastError(0xEu);
          goto LABEL_84;
        }
        memmove(v32, v59, 2LL * v21);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v69);
        v34 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v64) + 15);
        if ( !v34 )
          v34 = *(_QWORD *)(*(_QWORD *)(v31 + 48) + 1832LL);
        XEPALOBJ::vGetEntriesFrom(&v48, *(_QWORD *)(v31 + 96), v34, v33, v21);
        FreeTmpBuffer(v33);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v35);
        DCOBJ::~DCOBJ((DCOBJ *)v64);
      }
    }
    else
    {
      if ( 4 * (unsigned __int64)v21 > 0xFFFFFFFF )
        goto LABEL_71;
      v36 = 4 * v21;
      if ( v29 < (unsigned int)v36 )
        goto LABEL_71;
      v37 = (unsigned int *)AllocFreeTmpBuffer(v36);
      v38 = v37;
      if ( !v37 )
      {
        v26 = 14;
        goto LABEL_72;
      }
      memmove(v37, v59, 4LL * v21);
      if ( v57 - 10 <= 2 )
        XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v48, v38, v39, v21);
      else
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v48, (struct tagRGBQUAD *)v38, 0, v21);
      FreeTmpBuffer(v38);
      if ( (a11 & 4) != 0 && v52 == 3 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v66, a1);
        v40 = 0;
        if ( v66[0] )
        {
          v41 = *(_QWORD *)(v66[0] + 48LL);
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v51);
          if ( *(_DWORD *)(v41 + 2132) == 3
            && (*(_DWORD *)(v41 + 2196) & 0x100) != 0
            && (*(_DWORD *)(v41 + 56) & 1) != 0 )
          {
            v40 = 1;
            XEPALOBJ::apalColorSet((XEPALOBJ *)&v48, *(struct PALETTE **)(v41 + 1832));
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v42);
        }
        DCOBJ::~DCOBJ((DCOBJ *)v66);
        if ( !v40 )
          goto LABEL_58;
      }
    }
  }
  if ( a13 )
  {
    if ( (a11 & 8) != 0 )
      *a13 = 0LL;
    else
      *a13 = *(_QWORD *)(v45 + 72);
  }
  *(_DWORD *)(v45 + 112) |= 0x4000000u;
  v46 |= 1u;
  v49 = 1;
  v43 = *(_QWORD *)(v45 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v45);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v48);
  return v43;
}
