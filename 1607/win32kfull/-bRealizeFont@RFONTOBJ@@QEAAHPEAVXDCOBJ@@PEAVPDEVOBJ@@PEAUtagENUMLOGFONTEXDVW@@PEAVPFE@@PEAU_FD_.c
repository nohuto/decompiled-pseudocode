/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002BA28
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00091E4 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029AB08 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C000E630 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C001697C (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0027ADC (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0027D7C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0027E40 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00293B4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0029AD0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0029B10 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0029B44 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C002A4C8 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C002A758 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C002A9DC (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C002AB54 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C002D608 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002D7D8 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GetFontIntensityCorrection @ 0x1C0130330 (GetFontIntensityCorrection.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029B174 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C02D9574 (UmfdQueryFontCapsEx.c)
 */

__int64 __fastcall RFONTOBJ::bRealizeFont(
        struct _FD_XFORM **this,
        struct XDCOBJ *a2,
        struct PDEVOBJ *a3,
        struct tagENUMLOGFONTEXDVW *a4,
        struct PFE *a5,
        struct _FD_XFORM *a6,
        struct _POINTL *const a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        unsigned int a12)
{
  struct RFONT *v15; // r14
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _FD_XFORM *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct _FD_XFORM *v27; // rax
  struct _FD_XFORM *v28; // rcx
  struct _FD_XFORM *v29; // r11
  __int64 v30; // r11
  struct _FD_XFORM *v31; // r11
  char v32; // r8
  __int64 v33; // r11
  struct _FD_XFORM *v34; // r11
  char v35; // r8
  __int64 v36; // r11
  struct _FD_XFORM *v37; // r11
  char v38; // r8
  __int64 v39; // r11
  int v40; // eax
  __int64 v41; // rcx
  FLOATL v42; // eax
  char v43; // r15
  __int64 v44; // r8
  __int64 v45; // rbx
  int v46; // eax
  struct _FD_XFORM *v47; // rdx
  __int64 (__fastcall *v48)(__int64, __int64 **); // rax
  int v49; // eax
  int v50; // eax
  unsigned int v51; // r14d
  __int64 v52; // rbx
  bool v53; // zf
  struct _FD_XFORM *v54; // rdx
  unsigned int v55; // ecx
  struct _FD_XFORM *v56; // rcx
  struct _FD_XFORM *v57; // rdx
  int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // r8
  unsigned int v61; // ecx
  __int64 v62; // r11
  struct _FD_XFORM *v63; // rax
  unsigned __int16 v65[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct RFONT *v66; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v67; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+48h] [rbp-B8h]
  unsigned int v69[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct tagFLOATOBJ_XFORM v70; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+70h] [rbp-90h]
  _FD_DEVICEMETRICS v72; // [rsp+80h] [rbp-80h] BYREF

  v67 = (__int64 *)a5;
  v66 = a2;
  v15 = a2;
  v16 = 0;
  *(_QWORD *)v69 = PFEOBJ::pfdg(&v67);
  if ( !*(_QWORD *)v69 )
    goto LABEL_70;
  v17 = PALLOCMEM2(0x3A0uLL);
  *this = (struct _FD_XFORM *)v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg(&v67);
LABEL_70:
    *this = 0LL;
    return v16;
  }
  v68 = *(_QWORD *)a5;
  *(_DWORD *)(v17 + 32) = PDEVOBJ::ulLogPixelsX(a3, v18, v19);
  v20 = *this;
  LODWORD(v20[2].eXY) = PDEVOBJ::ulLogPixelsY(a3, v21, v22);
  LODWORD((*this)[2].eYX) = a9;
  LODWORD((*this)->eYY) = a8 | PFEOBJ::flFontType((PFEOBJ *)&v67);
  *(_QWORD *)&(*this)[3].eXX = 0LL;
  *(_QWORD *)&(*this)[3].eYX = 0LL;
  (*this)->eXY = *((FLOATL *)a5 + 2);
  *(_QWORD *)&(*this)[1].eYX = *(_QWORD *)(v68 + 80);
  if ( (LODWORD((*this)->eYY) & 4) != 0 )
    v23 = *((unsigned int *)a5 + 22);
  else
    v23 = 0LL;
  *(_QWORD *)&(*this)[1].eXX = v23;
  (*this)[8] = *a6;
  (*this)[9] = *a6;
  *(struct _FD_XFORM *)((char *)*this + 356) = *a6;
  *(struct _POINTL *)&(*this)[42].eXX = *a7;
  *(_QWORD *)&(*this)[13].eYX = (char *)*this + 232;
  RFONTOBJ::vSetNotionalToDevice((RFONTOBJ *)this, (struct EXFORMOBJ *)&(*this)[13].eYX);
  v24 = *((_QWORD *)a5 + 4);
  if ( (LODWORD((*this)->eYY) & 0x10000000) != 0 && (*(_DWORD *)(v68 + 52) & 0x100) != 0 )
  {
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&(*this)[13].eYX, &v70);
    v25 = *(_QWORD *)(v68 + 208);
    v70.eM22 = v70.eM22 * (float)*(__int16 *)(v24 + 56);
    *(_QWORD *)&(*this)[57].eYX = GetFontIntensityCorrection(v25, (unsigned int)(int)v70.eM22);
    LODWORD((*this)->eYY) |= 0x20000000u;
  }
  *(_QWORD *)&(*this)[7].eXX = a5;
  *(_QWORD *)&(*this)[7].eYX = *(_QWORD *)a5;
  *(_QWORD *)&(*this)[45].eYX = 0LL;
  *(_QWORD *)&(*this)[46].eXX = 0LL;
  *(_QWORD *)&(*this)[46].eYX = 0LL;
  *(_QWORD *)&(*this)[47].eXX = 0LL;
  (*this)[52].eYX = 0.0;
  (*this)[45].eXX = 0.0;
  (*this)[53].eXX = 0.0;
  (*this)[52].eYY = 0.0;
  LODWORD((*this)[53].eXY) = *((_DWORD *)a5 + 3) & 0x100;
  if ( a3 )
  {
    *(_QWORD *)&(*this)[6].eXX = *(_QWORD *)a3;
    *(_QWORD *)&(*this)[6].eYX = *(_QWORD *)(*(_QWORD *)a3 + 1824LL);
  }
  else
  {
    *(_QWORD *)&(*this)[6].eXX = 0LL;
    *(_QWORD *)&(*this)[6].eYX = 0LL;
  }
  LODWORD((*this)[10].eXX) = 1;
  (*this)[30].eYX = *(FLOATL *)(*((_QWORD *)a5 + 4) + 48LL);
  *(_QWORD *)&(*this)[29].eYX = *(_QWORD *)v69;
  v65[0] = *(_WORD *)(v24 + 116);
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)this, v65, 1u, v69, 2u, 0);
  LODWORD((*this)[28].eYX) = v69[0];
  LODWORD((*this)[45].eXX) &= ~0x40u;
  memset(&v72, 0, sizeof(v72));
  *(_QWORD *)&(*this)[5].eXX = *(_QWORD *)(v68 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS((POINTL **)this, &v72) )
    goto LABEL_30;
  if ( !v15 )
    goto LABEL_23;
  *(POINTE *)&(*this)[24].eYX = v72.pteBase;
  *(POINTE *)&(*this)[25].eYY = v72.pteSide;
  v27 = *(struct _FD_XFORM **)v15;
  v28 = *this;
  *(struct _FD_XFORM *)((char *)v28 + 164) = *(struct _FD_XFORM *)(*(_QWORD *)v15 + 336LL);
  *(struct _FD_XFORM *)((char *)v28 + 180) = v27[22];
  v28[12].eXY = v27[23].eXX;
  if ( !(unsigned int)RFONTOBJ::bCalcLayoutUnits((RFONTOBJ *)this, v15)
    || !(unsigned int)bGetNtoWScales(
                        (struct EPOINTFL *)&(*this)[12].eYY,
                        v15,
                        (__m128 *)&(*this)[22].eXY,
                        (struct PFEOBJ *)&v67,
                        (int *)&(*this)[13].eXY) )
  {
LABEL_30:
    v47 = *this;
    v71 = 0LL;
    memset(&v70, 0, sizeof(v70));
    PushThreadGuardedObject(&v70, v47, Win32FreePool);
LABEL_69:
    RFONTOBJ::vDestroyFont((RFONTOBJ *)this, 1);
    PopThreadGuardedObject(&v70);
    Win32FreePool(*this, v59, v60);
    goto LABEL_70;
  }
  v29 = *this;
  *(_DWORD *)v65 = 0;
  bFToL((float)SLODWORD(v29[19].eXY) * v29[25].eYY, v65, 0);
  *(_DWORD *)(v30 + 320) = *(_DWORD *)v65;
  v31 = *this;
  *(_DWORD *)v65 = 0;
  bFToL((float)SLODWORD(v31[19].eXY) * v31[26].eXX, v65, v32);
  *(_DWORD *)(v33 + 324) = *(_DWORD *)v65;
  v34 = *this;
  *(_DWORD *)v65 = 0;
  bFToL((float)SLODWORD(v34[19].eYX) * v34[25].eYY, v65, v35);
  *(_DWORD *)(v36 + 328) = *(_DWORD *)v65;
  v37 = *this;
  *(_DWORD *)v65 = 0;
  bFToL((float)SLODWORD(v37[19].eYX) * v37[26].eXX, v65, v38);
  *(_DWORD *)(v39 + 332) = *(_DWORD *)v65;
  (*this)[26].eYY = NAN;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 80LL) + 68LL) == 1 )
  {
    v40 = *(_DWORD *)(v24 + 48);
    if ( (v40 & 4) == 0 )
    {
      if ( (v40 & 0x10) == 0 )
      {
        LODWORD(v42) = ulSimpleDeviceOrientation((struct RFONTOBJ *)this);
LABEL_22:
        (*this)[24].eXY = v42;
        goto LABEL_23;
      }
      v41 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_29:
      LODWORD(v42) = lNormAngle(v41);
      goto LABEL_22;
    }
LABEL_28:
    v41 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_29;
  }
  LODWORD((*this)[24].eXY) = RFONTOBJ::ulSimpleOrientation((RFONTOBJ *)this, v15);
  if ( LODWORD((*this)[24].eXY) >= 0xE10 && (LODWORD((*this)[30].eYX) & 0x10) != 0 )
    goto LABEL_28;
LABEL_23:
  v43 = 0;
  v44 = a10;
  LODWORD((*this)[42].eYX) = a10;
  v45 = *(_QWORD *)&(*this)[5].eXX;
  if ( v45 == qword_1C0334780 )
  {
    v46 = UmfdQueryFontCapsEx(*(_QWORD *)&(*this)[1].eYX, v26, &v67);
    v44 = a10;
    if ( v46 != -1 )
      v43 = BYTE4(v67);
  }
  else
  {
    v48 = *(__int64 (__fastcall **)(__int64, __int64 **))(v45 + 3064);
    if ( v48 )
    {
      v49 = v48(2LL, &v67);
      v44 = a10;
      if ( v49 != -1 )
        v43 = BYTE4(v67);
    }
  }
  if ( (*(_DWORD *)(v45 + 56) & 0x2000) == 0 )
  {
    LODWORD((*this)[5].eYX) = 1;
    (*this)[4].eYX = 0.0;
    (*this)[40].eYX = 0.0;
    goto LABEL_59;
  }
  v50 = LODWORD((*this)->eYY) & 0x10010000;
  (*this)[5].eYX = 0.0;
  v51 = v50 != 0 ? 400 : 800;
  LODWORD((*this)[4].eYX) = 1;
  if ( (_DWORD)v44 )
  {
    LODWORD((*this)[4].eYX) = 2;
  }
  else
  {
    v52 = *(_QWORD *)&(*this)[6].eXX;
    if ( v52 )
    {
      v53 = (*(_DWORD *)(v52 + 56) & 0x8000) == 0;
      v67 = *(__int64 **)&(*this)[6].eXX;
      if ( (v53 || !KeAreApcsDisabled()) && *(_QWORD *)(v52 + 3008) )
      {
        v54 = *this;
        memset(&v70, 0, sizeof(v70));
        v71 = 0LL;
        PushThreadGuardedObject(&v70, v54, vRestartbRealizeFont);
        LODWORD((*this)[4].eYX) = (*(__int64 (__fastcall **)(_QWORD, struct _FD_XFORM *))(v52 + 3008))(
                                    *(_QWORD *)&(*this)[6].eYX,
                                    *this);
        PopThreadGuardedObject(&v70);
      }
      if ( (*(_DWORD *)(v52 + 1848) & 0x40000000) != 0 )
      {
        v55 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v67, v26, v44);
        if ( v55 > 0x320 )
          v51 = v55;
        if ( v51 > 0x960 )
          v51 = 2400;
      }
      LODWORD(v44) = a10;
    }
  }
  v56 = *this;
  if ( LODWORD((*this)[4].eYX) == 1 )
  {
    if ( (v43 & 2) == 0
      || (LODWORD(v56[30].eYX) & 0x8000) != 0 && (LODWORD(v56[21].eXX) > 2 * v51 || LODWORD(v56[21].eYY) > v51) )
    {
      LODWORD(v56[4].eYX) = 2;
    }
    goto LABEL_58;
  }
  if ( LODWORD((*this)[4].eYX) != 2 )
  {
LABEL_58:
    v15 = v66;
    goto LABEL_59;
  }
  v15 = v66;
  if ( (v43 & 1) == 0 )
    LODWORD(v56[4].eYX) = 1;
LABEL_59:
  if ( LODWORD((*this)[4].eYX) == 2 )
    LODWORD((*this)->eYY) &= 0x8FFEFFFF;
  if ( (_DWORD)v44 )
  {
    v57 = *this;
    if ( LODWORD((*this)[4].eYX) != 2 )
      goto LABEL_68;
  }
  if ( !a11 || (v58 = 1, LODWORD((*this)[24].eXY)) )
    v58 = 0;
  LODWORD((*this)[40].eYY) = v58;
  if ( !(unsigned int)RFONTOBJ::bInitCache((RFONTOBJ *)this, a12) )
  {
    v57 = *this;
LABEL_68:
    memset(&v70, 0, sizeof(v70));
    v71 = 0LL;
    PushThreadGuardedObject(&v70, v57, Win32FreePool);
    goto LABEL_69;
  }
  *(_QWORD *)&(*this)[43].eYX = 0LL;
  v67 = (__int64 *)ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v53 = iUniqueStamp == -1;
  v61 = ++iUniqueStamp;
  if ( v53 )
  {
    v61 = 1;
    iUniqueStamp = 1;
  }
  LODWORD((*this)->eXX) = v61;
  if ( a3 )
  {
    LODWORD((*this)[30].eYY) = 1;
    v66 = PDEVOBJ::prfntActive(a3);
    RFONTOBJ::vInsert(this, &v66, 1LL);
    PDEVOBJ::prfntActive(a3, v66);
  }
  v66 = *(struct RFONT **)(v68 + 72);
  RFONTOBJ::vInsert(this, &v66, 0LL);
  *(_QWORD *)(v62 + 72) = v66;
  SEMOBJ::vUnlock((SEMOBJ *)&v67);
  v63 = *this;
  if ( LODWORD((*this)[4].eYX) == 1 )
    LODWORD(v63->eYY) |= 1u;
  else
    LODWORD(v63->eYY) &= ~1u;
  if ( v15 )
    (*this)[12].eYX = *(FLOATL *)(*(_QWORD *)(*(_QWORD *)v15 + 80LL) + 68LL);
  else
    (*this)[12].eYX = 0.0;
  if ( gbSystemDBCSFontEnabled && (*((_DWORD *)a5 + 3) & 0x10) != 0 )
    v16 = 1;
  LODWORD((*this)[44].eYY) = v16;
  return 1;
}
