/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C0098254
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0091AE0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     _InternalGetIconInfo @ 0x1C0095874 (_InternalGetIconInfo.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C0097D00 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C0097F20 (NtGdiCreateDIBSection.c)
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     RecolorDeskPattern @ 0x1C01011B0 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0104838 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C01492A0 (NtGdiCreateSessionMappedDIBSection.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B0640 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreCreateDIBBrush @ 0x1C02B1998 (GreCreateDIBBrush.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0013C98 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C0106148 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0263DC0 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B5658 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B56EC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
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
  __int64 v15; // r8
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // r11d
  unsigned int v20; // ebx
  unsigned int v21; // esi
  unsigned int v22; // r15d
  void *v23; // rsi
  void *v24; // r15
  _QWORD *v25; // r13
  size_t v26; // rdx
  ULONG v27; // ecx
  unsigned int v28; // edx
  int v29; // ecx
  unsigned int v30; // edx
  unsigned __int64 v31; // rsi
  void *v32; // rax
  void *v33; // r15
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  DYNAMICMODECHANGESHARELOCK *v38; // rcx
  __int64 v39; // rcx
  unsigned int *v40; // rax
  unsigned int *v41; // rsi
  unsigned int v42; // r8d
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // esi
  __int64 v47; // rbx
  DYNAMICMODECHANGESHARELOCK *v48; // rcx
  __int64 v49; // rbx
  __int64 v51; // [rsp+68h] [rbp-170h] BYREF
  char v52; // [rsp+70h] [rbp-168h]
  int v53; // [rsp+74h] [rbp-164h]
  __int64 v54; // [rsp+78h] [rbp-160h] BYREF
  int v55; // [rsp+80h] [rbp-158h]
  unsigned int v56; // [rsp+88h] [rbp-150h]
  char v57[4]; // [rsp+8Ch] [rbp-14Ch] BYREF
  int v58; // [rsp+90h] [rbp-148h] BYREF
  __int64 v59; // [rsp+94h] [rbp-144h]
  __int128 v60; // [rsp+9Ch] [rbp-13Ch]
  int v61; // [rsp+ACh] [rbp-12Ch]
  unsigned int v62; // [rsp+B0h] [rbp-128h]
  unsigned int v63; // [rsp+B4h] [rbp-124h]
  int v64; // [rsp+B8h] [rbp-120h]
  void *v65; // [rsp+C0h] [rbp-118h]
  unsigned int v66; // [rsp+C8h] [rbp-110h]
  unsigned int v67; // [rsp+CCh] [rbp-10Ch]
  void *v68; // [rsp+D0h] [rbp-108h]
  int v69; // [rsp+D8h] [rbp-100h]
  _QWORD v70[6]; // [rsp+E0h] [rbp-F8h] BYREF
  DC *v71[6]; // [rsp+110h] [rbp-C8h] BYREF
  _QWORD v72[6]; // [rsp+140h] [rbp-98h] BYREF
  _QWORD v73[13]; // [rsp+170h] [rbp-68h] BYREF
  unsigned int v75; // [rsp+1E8h] [rbp+10h] BYREF
  void *Src; // [rsp+1F0h] [rbp+18h]

  Src = a3;
  v75 = a2;
  v58 = 0;
  v59 = 0LL;
  v60 = 0uLL;
  v61 = 0;
  v14 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 || a5 == 2 || a5 == 3 && (a11 & 1) == 0 )
    goto LABEL_111;
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_111;
  if ( !a4 )
    goto LABEL_111;
  if ( a6 < 0x28 )
    goto LABEL_111;
  v15 = *a4;
  v64 = v15;
  v69 = v15;
  if ( a6 < (unsigned int)v15 )
    goto LABEL_111;
  if ( (unsigned int)v15 < 0x28 )
    goto LABEL_111;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_111;
  v16 = a4[1];
  if ( v16 <= 0 )
    goto LABEL_111;
  v17 = a4[2];
  if ( !v17 )
    goto LABEL_111;
  HIDWORD(v60) = 0x4000000;
  LODWORD(v59) = v16;
  if ( v17 < 0 )
  {
    v17 = -v17;
    HIDWORD(v60) = 67108865;
  }
  HIDWORD(v59) = v17;
  v18 = *((unsigned __int16 *)a4 + 7);
  v58 = v18;
  v19 = a4[4];
  v63 = v19;
  v66 = v19;
  v62 = a4[8];
  v67 = v62;
  v65 = (char *)a4 + v15;
  v75 = 0;
  if ( v19 )
  {
    if ( v19 == 3 )
    {
      if ( a6 < 0x34 || a5 )
        goto LABEL_111;
      v65 = a4 + 10;
      v75 = a4[10];
      v56 = a4[11];
      LODWORD(v68) = a4[12];
      v20 = 0;
      v22 = 2;
      v21 = 512;
      if ( v18 == 16 )
      {
        v58 = 4;
      }
      else
      {
        if ( v18 != 32 )
          goto LABEL_111;
        v58 = 6;
      }
      goto LABEL_54;
    }
    if ( v19 != 10 )
      goto LABEL_111;
    DCOBJ::DCOBJ((DCOBJ *)v71, a1);
    if ( !v71[0] || !(unsigned int)DC::bIsCMYKColor(v71[0]) )
    {
LABEL_47:
      EngSetLastError(0x57u);
      DCOBJ::~DCOBJ((DCOBJ *)v71);
      return 0LL;
    }
    switch ( v58 )
    {
      case 1:
        v58 = 1;
        v20 = 2;
        break;
      case 4:
        v58 = 2;
        v20 = 16;
        break;
      case 8:
        v58 = 3;
        v20 = 256;
        break;
      case 32:
        v58 = 6;
        v20 = 0;
        v21 = 512;
        v22 = 16;
LABEL_53:
        DCOBJ::~DCOBJ((DCOBJ *)v71);
        goto LABEL_54;
      default:
        goto LABEL_47;
    }
    v22 = 1;
    v21 = 1024;
    goto LABEL_53;
  }
  switch ( v18 )
  {
    case 1:
      v58 = 1;
      v20 = 2;
      goto LABEL_32;
    case 4:
      v58 = 2;
      v20 = 16;
      goto LABEL_32;
    case 8:
      v58 = 3;
      v20 = 256;
LABEL_32:
      v22 = 1;
      v21 = 1024;
      goto LABEL_54;
  }
  if ( a5 == 1 )
    v14 = 0;
  a5 = v14;
  v20 = 0;
  v21 = 512;
  if ( v18 != 16 )
  {
    if ( v18 == 24 )
    {
      v58 = 5;
      goto LABEL_27;
    }
    if ( v18 == 32 )
    {
      v58 = 6;
LABEL_27:
      v22 = 8;
      goto LABEL_54;
    }
LABEL_111:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v58 = 4;
  v75 = 31744;
  v56 = 992;
  LODWORD(v68) = 31;
  v22 = 2;
LABEL_54:
  v55 = 0;
  v54 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v54, v22, v20, 0LL, v75, v56, (unsigned int)v68, v21, 1) )
  {
LABEL_55:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v54);
    return 0LL;
  }
  *(_QWORD *)((char *)&v60 + 4) = *(_QWORD *)v54;
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v54 + 24) |= 0x8000u;
    v23 = Src;
    v24 = a8;
    if ( !Src )
    {
LABEL_58:
      SURFMEM::~SURFMEM((SURFMEM *)&v51);
      goto LABEL_55;
    }
    Src = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v73, a1);
    if ( v73[0] && (*(_DWORD *)(*(_QWORD *)(v73[0] + 48LL) + 56LL) & 0x8000) != 0 )
      HIDWORD(v60) |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v73);
  }
  v25 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v51,
          (struct _DEVBITMAPINFO *)&v58,
          v23,
          v24,
          a9,
          a10,
          a12,
          0,
          1,
          (a11 >> 3) & 1,
          a13 != 0LL)
    || !*(_WORD *)(v51 + 100) && *(_QWORD *)(v51 + 184) && *(_DWORD *)(v51 + 64) != a7 )
  {
    goto LABEL_58;
  }
  if ( Src )
  {
    v26 = *(unsigned int *)(v51 + 64);
    if ( (unsigned int)v26 > a7 )
    {
LABEL_71:
      v27 = 87;
LABEL_72:
      EngSetLastError(v27);
      goto LABEL_58;
    }
    v56 = *(_DWORD *)(v51 + 64);
    v68 = *(void **)(v51 + 72);
    memmove(v68, Src, v26);
    v28 = a6;
    v29 = v64;
  }
  else
  {
    v28 = a6;
    v29 = v64;
  }
  if ( v62 && v62 < v20 )
    v20 = v62;
  if ( v20 )
  {
    v30 = v28 - v29;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        v31 = 2LL * v20;
        if ( v31 > 0xFFFFFFFF || v30 < v31 )
          goto LABEL_71;
        DCOBJ::DCOBJ((DCOBJ *)v70, a1);
        if ( !v70[0] )
        {
LABEL_84:
          DCOBJ::~DCOBJ((DCOBJ *)v70);
          goto LABEL_58;
        }
        v32 = (void *)AllocFreeTmpBuffer(2 * v20);
        v33 = v32;
        if ( !v32 )
        {
          EngSetLastError(0xEu);
          goto LABEL_84;
        }
        memmove(v32, v65, 2LL * v20);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v75);
        v34 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v70) + 15);
        if ( !v34 )
          v34 = *(_QWORD *)(*(_QWORD *)(v70[0] + 48LL) + 1832LL);
        XEPALOBJ::vGetEntriesFrom(&v54, *(_QWORD *)(v70[0] + 96LL), v34, v33, v20);
        FreeTmpBuffer(v33, v35, v36, v37);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v38);
        DCOBJ::~DCOBJ((DCOBJ *)v70);
      }
    }
    else
    {
      if ( 4 * (unsigned __int64)v20 > 0xFFFFFFFF )
        goto LABEL_71;
      v39 = 4 * v20;
      if ( v30 < (unsigned int)v39 )
        goto LABEL_71;
      v40 = (unsigned int *)AllocFreeTmpBuffer(v39);
      v41 = v40;
      if ( !v40 )
      {
        v27 = 14;
        goto LABEL_72;
      }
      memmove(v40, v65, 4LL * v20);
      if ( v63 - 10 <= 2 )
        XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v54, v41, v42, v20);
      else
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v54, (struct tagRGBQUAD *)v41, 0, v20);
      FreeTmpBuffer(v41, v43, v44, v45);
      if ( (a11 & 4) != 0 && v58 == 3 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v72, a1);
        v46 = 0;
        if ( v72[0] )
        {
          v47 = *(_QWORD *)(v72[0] + 48LL);
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v57);
          if ( *(_DWORD *)(v47 + 2132) == 3
            && (*(_DWORD *)(v47 + 2196) & 0x100) != 0
            && (*(_DWORD *)(v47 + 56) & 1) != 0 )
          {
            v46 = 1;
            XEPALOBJ::apalColorSet((XEPALOBJ *)&v54, *(struct PALETTE **)(v47 + 1832));
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v48);
        }
        DCOBJ::~DCOBJ((DCOBJ *)v72);
        if ( !v46 )
          goto LABEL_58;
      }
    }
  }
  if ( v25 )
  {
    if ( (a11 & 8) != 0 )
      *v25 = 0LL;
    else
      *v25 = *(_QWORD *)(v51 + 72);
  }
  v52 |= 1u;
  v55 = 1;
  v49 = *(_QWORD *)(v51 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v51);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v54);
  return v49;
}
