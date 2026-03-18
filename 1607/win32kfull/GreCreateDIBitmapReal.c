/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C003B1A0
 * Callers:
 *     NtGdiCreateDIBitmapInternal @ 0x1C003AB20 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C003AD80 (NtGdiCreateDIBSection.c)
 *     _InternalGetIconInfo @ 0x1C003C054 (_InternalGetIconInfo.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A04F0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C0110CE0 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C01355A0 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0139170 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B222C (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreCreateDIBBrush @ 0x1C02B3ABC (GreCreateDIBBrush.c)
 * Callees:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C003A8AC (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C013A064 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C025FF10 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B7744 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B77D0 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
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
  DYNAMICMODECHANGESHARELOCK *v35; // rcx
  __int64 v36; // rcx
  unsigned int *v37; // rax
  unsigned int *v38; // rsi
  unsigned int v39; // r8d
  int v40; // esi
  __int64 v41; // rbx
  DYNAMICMODECHANGESHARELOCK *v42; // rcx
  __int64 v43; // rbx
  __int64 v45; // [rsp+68h] [rbp-170h] BYREF
  char v46; // [rsp+70h] [rbp-168h]
  int v47; // [rsp+74h] [rbp-164h]
  __int64 v48; // [rsp+78h] [rbp-160h] BYREF
  int v49; // [rsp+80h] [rbp-158h]
  char v50[4]; // [rsp+88h] [rbp-150h] BYREF
  unsigned int v51; // [rsp+8Ch] [rbp-14Ch]
  int v52; // [rsp+90h] [rbp-148h] BYREF
  __int64 v53; // [rsp+94h] [rbp-144h]
  __int128 v54; // [rsp+9Ch] [rbp-13Ch]
  int v55; // [rsp+ACh] [rbp-12Ch]
  int v56; // [rsp+B0h] [rbp-128h]
  unsigned int v57; // [rsp+B4h] [rbp-124h]
  unsigned int v58; // [rsp+B8h] [rbp-120h]
  void *v59; // [rsp+C0h] [rbp-118h]
  void *v60; // [rsp+C8h] [rbp-110h]
  int v61; // [rsp+D0h] [rbp-108h]
  unsigned int v62; // [rsp+D4h] [rbp-104h]
  unsigned int v63; // [rsp+D8h] [rbp-100h]
  _QWORD v64[6]; // [rsp+E0h] [rbp-F8h] BYREF
  DC *v65[6]; // [rsp+110h] [rbp-C8h] BYREF
  _QWORD v66[6]; // [rsp+140h] [rbp-98h] BYREF
  _QWORD v67[13]; // [rsp+170h] [rbp-68h] BYREF
  unsigned int v69; // [rsp+1E8h] [rbp+10h] BYREF
  void *Src; // [rsp+1F0h] [rbp+18h]

  Src = a3;
  v69 = a2;
  v52 = 0;
  v53 = 0LL;
  v54 = 0uLL;
  v55 = 0;
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
  v56 = v15;
  v61 = v15;
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
  HIDWORD(v54) = 0x4000000;
  LODWORD(v53) = v16;
  if ( v17 < 0 )
  {
    v17 = -v17;
    HIDWORD(v54) = 67108865;
  }
  HIDWORD(v53) = v17;
  v18 = *((unsigned __int16 *)a4 + 7);
  v52 = v18;
  v19 = a4[4];
  v58 = v19;
  v62 = v19;
  v57 = a4[8];
  v63 = v57;
  v59 = (char *)a4 + v15;
  v69 = 0;
  if ( v19 )
  {
    if ( v19 == 3 )
    {
      if ( a6 < 0x34 || a5 )
        goto LABEL_111;
      v59 = a4 + 10;
      v69 = a4[10];
      v51 = a4[11];
      LODWORD(v60) = a4[12];
      v20 = 0;
      v22 = 2;
      v21 = 512;
      if ( v18 == 16 )
      {
        v52 = 4;
      }
      else
      {
        if ( v18 != 32 )
          goto LABEL_111;
        v52 = 6;
      }
      goto LABEL_54;
    }
    if ( v19 != 10 )
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
        v20 = 2;
        break;
      case 4:
        v52 = 2;
        v20 = 16;
        break;
      case 8:
        v52 = 3;
        v20 = 256;
        break;
      case 32:
        v52 = 6;
        v20 = 0;
        v21 = 512;
        v22 = 16;
LABEL_53:
        DCOBJ::~DCOBJ((DCOBJ *)v65);
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
      v52 = 1;
      v20 = 2;
      goto LABEL_32;
    case 4:
      v52 = 2;
      v20 = 16;
      goto LABEL_32;
    case 8:
      v52 = 3;
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
      v52 = 5;
      goto LABEL_27;
    }
    if ( v18 == 32 )
    {
      v52 = 6;
LABEL_27:
      v22 = 8;
      goto LABEL_54;
    }
LABEL_111:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v52 = 4;
  v69 = 31744;
  v51 = 992;
  LODWORD(v60) = 31;
  v22 = 2;
LABEL_54:
  v49 = 0;
  v48 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v48, v22, v20, 0LL, v69, v51, (unsigned int)v60, v21, 1) )
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
  v25 = a13;
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
    || !*(_WORD *)(v45 + 100) && *(_QWORD *)(v45 + 192) && *(_DWORD *)(v45 + 64) != a7 )
  {
    goto LABEL_58;
  }
  if ( Src )
  {
    v26 = *(unsigned int *)(v45 + 64);
    if ( (unsigned int)v26 > a7 )
    {
LABEL_71:
      v27 = 87;
LABEL_72:
      EngSetLastError(v27);
      goto LABEL_58;
    }
    v51 = *(_DWORD *)(v45 + 64);
    v60 = *(void **)(v45 + 72);
    memmove(v60, Src, v26);
    v28 = a6;
    v29 = v56;
  }
  else
  {
    v28 = a6;
    v29 = v56;
  }
  if ( v57 && v57 < v20 )
    v20 = v57;
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
        DCOBJ::DCOBJ((DCOBJ *)v64, a1);
        if ( !v64[0] )
        {
LABEL_84:
          DCOBJ::~DCOBJ((DCOBJ *)v64);
          goto LABEL_58;
        }
        v32 = (void *)AllocFreeTmpBuffer(2 * v20);
        v33 = v32;
        if ( !v32 )
        {
          EngSetLastError(0xEu);
          goto LABEL_84;
        }
        memmove(v32, v59, 2LL * v20);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v69);
        v34 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v64) + 15);
        if ( !v34 )
          v34 = *(_QWORD *)(*(_QWORD *)(v64[0] + 48LL) + 1832LL);
        XEPALOBJ::vGetEntriesFrom(&v48, *(_QWORD *)(v64[0] + 96LL), v34, v33, v20);
        FreeTmpBuffer(v33);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v35);
        DCOBJ::~DCOBJ((DCOBJ *)v64);
      }
    }
    else
    {
      if ( 4 * (unsigned __int64)v20 > 0xFFFFFFFF )
        goto LABEL_71;
      v36 = 4 * v20;
      if ( v30 < (unsigned int)v36 )
        goto LABEL_71;
      v37 = (unsigned int *)AllocFreeTmpBuffer(v36);
      v38 = v37;
      if ( !v37 )
      {
        v27 = 14;
        goto LABEL_72;
      }
      memmove(v37, v59, 4LL * v20);
      if ( v58 - 10 <= 2 )
        XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v48, v38, v39, v20);
      else
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v48, (struct tagRGBQUAD *)v38, 0, v20);
      FreeTmpBuffer(v38);
      if ( (a11 & 4) != 0 && v52 == 3 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v66, a1);
        v40 = 0;
        if ( v66[0] )
        {
          v41 = *(_QWORD *)(v66[0] + 48LL);
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v50);
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
  if ( v25 )
  {
    if ( (a11 & 8) != 0 )
      *v25 = 0LL;
    else
      *v25 = *(_QWORD *)(v45 + 72);
  }
  v46 |= 1u;
  v49 = 1;
  v43 = *(_QWORD *)(v45 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v45);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v48);
  return v43;
}
