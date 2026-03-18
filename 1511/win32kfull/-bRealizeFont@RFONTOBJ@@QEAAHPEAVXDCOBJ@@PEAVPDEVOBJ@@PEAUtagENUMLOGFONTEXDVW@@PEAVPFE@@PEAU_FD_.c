/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0025C48
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0002CBC (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029AF88 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C001C51C (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C001C55C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C001C59C (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C001D09C (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C001E568 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C001E62C (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C001E914 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C00246E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0024BEC (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0024E7C (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C0025100 (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0025284 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0027294 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0027520 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C010B01C (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C0116174 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029B5F4 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C02D64C4 (UmfdQueryFontCapsEx.c)
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
        FLOATL a10,
        int a11,
        unsigned int a12)
{
  struct RFONT *v15; // r14
  unsigned int v16; // esi
  struct _FD_XFORM *v17; // rax
  struct _FD_XFORM *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  struct _FD_XFORM *v22; // rax
  struct _FD_XFORM *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r11
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r11
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r11
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r11
  char v35; // r15
  int v36; // r8d
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64, __int64 **); // rax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // r14d
  __int64 v42; // rbx
  bool v43; // zf
  struct _FD_XFORM *v44; // rcx
  int v45; // ecx
  unsigned int v46; // ecx
  __int64 v47; // r11
  struct _FD_XFORM *v48; // rax
  int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // eax
  struct _FD_XFORM *v53; // rdx
  int v54; // eax
  struct _FD_XFORM *v55; // rdx
  unsigned int v56; // ecx
  struct _FD_XFORM *v57; // rdx
  unsigned __int16 v58[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v59; // [rsp+38h] [rbp-C8h] BYREF
  struct RFONT *v60; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+48h] [rbp-B8h]
  unsigned int v62[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct tagFLOATOBJ_XFORM v63; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h]
  _FD_DEVICEMETRICS v65; // [rsp+80h] [rbp-80h] BYREF

  v59 = (__int64 *)a5;
  v60 = a2;
  v15 = a2;
  v16 = 0;
  *(_QWORD *)v62 = PFEOBJ::pfdg(&v59);
  if ( !*(_QWORD *)v62 )
    goto LABEL_87;
  v17 = (struct _FD_XFORM *)PALLOCMEM2(0x390uLL, 1953392199LL, 1);
  *this = v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg(&v59);
LABEL_87:
    *this = 0LL;
    return v16;
  }
  v61 = *(_QWORD *)a5;
  LODWORD(v17[2].eXX) = PDEVOBJ::ulLogPixelsX(a3);
  v18 = *this;
  LODWORD(v18[2].eXY) = PDEVOBJ::ulLogPixelsY(a3);
  LODWORD((*this)[2].eYX) = a9;
  LODWORD((*this)->eYY) = a8 | PFEOBJ::flFontType((PFEOBJ *)&v59);
  *(_QWORD *)&(*this)[3].eXX = 0LL;
  *(_QWORD *)&(*this)[3].eYX = 0LL;
  (*this)->eXY = *((FLOATL *)a5 + 2);
  *(_QWORD *)&(*this)[1].eYX = *(_QWORD *)(v61 + 80);
  if ( (LODWORD((*this)->eYY) & 4) != 0 )
    v19 = *((unsigned int *)a5 + 22);
  else
    v19 = 0LL;
  *(_QWORD *)&(*this)[1].eXX = v19;
  (*this)[8] = *a6;
  (*this)[9] = *a6;
  *(struct _FD_XFORM *)((char *)*this + 356) = *a6;
  *(struct _POINTL *)&(*this)[42].eXX = *a7;
  *(_QWORD *)&(*this)[13].eYX = (char *)*this + 232;
  RFONTOBJ::vSetNotionalToDevice((RFONTOBJ *)this, (struct EXFORMOBJ *)&(*this)[13].eYX);
  v20 = *((_QWORD *)a5 + 4);
  if ( (LODWORD((*this)->eYY) & 0x10000000) != 0 && (*(_DWORD *)(v61 + 52) & 0x100) != 0 )
  {
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&(*this)[13].eYX, &v63);
    if ( v63.eM22 > (float)(15.0 / (float)*(__int16 *)(v20 + 56)) )
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
  *(_QWORD *)&(*this)[29].eYX = *(_QWORD *)v62;
  v58[0] = *(_WORD *)(v20 + 116);
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)this, v58, 1, v62, 2u, 0);
  LODWORD((*this)[28].eYX) = v62[0];
  LODWORD((*this)[45].eXX) &= ~0x40u;
  memset(&v65, 0, sizeof(v65));
  *(_QWORD *)&(*this)[5].eXX = *(_QWORD *)(v61 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS((POINTL **)this, &v65) )
    goto LABEL_67;
  if ( !v15 )
    goto LABEL_15;
  *(POINTE *)&(*this)[24].eYX = v65.pteBase;
  *(POINTE *)&(*this)[25].eYY = v65.pteSide;
  v22 = *(struct _FD_XFORM **)v15;
  v23 = *this;
  *(struct _FD_XFORM *)((char *)v23 + 164) = *(struct _FD_XFORM *)(*(_QWORD *)v15 + 336LL);
  *(struct _FD_XFORM *)((char *)v23 + 180) = v22[22];
  v23[12].eXY = v22[23].eXX;
  if ( !(unsigned int)RFONTOBJ::bCalcLayoutUnits((RFONTOBJ *)this, v15)
    || !bGetNtoWScales(
          (struct EPOINTFL *)&(*this)[12].eYY,
          v15,
          (struct _FD_XFORM *)((char *)*this + 356),
          (struct PFEOBJ *)&v59,
          (int *)&(*this)[13].eXY) )
  {
LABEL_67:
    v53 = *this;
    v64 = 0LL;
    memset(&v63, 0, sizeof(v63));
    PushThreadGuardedObject(&v63, v53, Win32FreePool);
LABEL_86:
    RFONTOBJ::vDestroyFont((RFONTOBJ *)this, 1);
    PopThreadGuardedObject(&v63);
    Win32FreePool(*this);
    goto LABEL_87;
  }
  *(_DWORD *)v58 = 0;
  bFToL(v24, v58, 0LL);
  *(_DWORD *)(v25 + 320) = *(_DWORD *)v58;
  *(_DWORD *)v58 = 0;
  bFToL(v26, v58, v27);
  *(_DWORD *)(v28 + 324) = *(_DWORD *)v58;
  *(_DWORD *)v58 = 0;
  bFToL(v29, v58, v30);
  *(_DWORD *)(v31 + 328) = *(_DWORD *)v58;
  *(_DWORD *)v58 = 0;
  bFToL(v32, v58, v33);
  *(_DWORD *)(v34 + 332) = *(_DWORD *)v58;
  (*this)[26].eYY = NAN;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 80LL) + 68LL) == 1 )
  {
    v50 = *(_DWORD *)(v20 + 48);
    if ( (v50 & 4) == 0 )
    {
      if ( (v50 & 0x10) == 0 )
      {
        v52 = ulSimpleDeviceOrientation((struct RFONTOBJ *)this);
        goto LABEL_54;
      }
      v51 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_53:
      v52 = lNormAngle(v51);
LABEL_54:
      LODWORD((*this)[24].eXY) = v52;
      goto LABEL_15;
    }
LABEL_63:
    v51 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_53;
  }
  LODWORD((*this)[24].eXY) = RFONTOBJ::ulSimpleOrientation((RFONTOBJ *)this, v15);
  if ( LODWORD((*this)[24].eXY) >= 0xE10 && (LODWORD((*this)[30].eYX) & 0x10) != 0 )
    goto LABEL_63;
LABEL_15:
  v35 = 0;
  v36 = LODWORD(a10);
  (*this)[42].eYX = a10;
  v37 = *(_QWORD *)&(*this)[5].eXX;
  if ( v37 == qword_1C032F218 )
  {
    v54 = UmfdQueryFontCapsEx(*(_QWORD *)&(*this)[1].eYX, v21, &v59);
    v36 = LODWORD(a10);
    if ( v54 != -1 )
      v35 = BYTE4(v59);
  }
  else
  {
    v38 = *(__int64 (__fastcall **)(__int64, __int64 **))(v37 + 3072);
    if ( v38 )
    {
      v39 = v38(2LL, &v59);
      v36 = LODWORD(a10);
      if ( v39 != -1 )
        v35 = BYTE4(v59);
    }
  }
  if ( (*(_DWORD *)(v37 + 56) & 0x2000) != 0 )
  {
    v40 = LODWORD((*this)->eYY) & 0x10010000;
    (*this)[5].eYX = 0.0;
    v41 = v40 != 0 ? 400 : 800;
    LODWORD((*this)[4].eYX) = 1;
    if ( v36 )
    {
      LODWORD((*this)[4].eYX) = 2;
    }
    else
    {
      v42 = *(_QWORD *)&(*this)[6].eXX;
      if ( v42 )
      {
        v43 = (*(_DWORD *)(v42 + 56) & 0x8000) == 0;
        v59 = *(__int64 **)&(*this)[6].eXX;
        if ( (v43 || !KeAreApcsDisabled()) && *(_QWORD *)(v42 + 3016) )
        {
          v55 = *this;
          memset(&v63, 0, sizeof(v63));
          v64 = 0LL;
          PushThreadGuardedObject(&v63, v55, vRestartbRealizeFont);
          LODWORD((*this)[4].eYX) = (*(__int64 (__fastcall **)(_QWORD, struct _FD_XFORM *))(v42 + 3016))(
                                      *(_QWORD *)&(*this)[6].eYX,
                                      *this);
          PopThreadGuardedObject(&v63);
        }
        if ( (*(_DWORD *)(v42 + 1848) & 0x40000000) != 0 )
        {
          v56 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v59);
          if ( v56 > 0x320 )
            v41 = v56;
          if ( v41 > 0x960 )
            v41 = 2400;
        }
        v36 = LODWORD(a10);
      }
    }
    v44 = *this;
    if ( LODWORD((*this)[4].eYX) == 1 )
    {
      if ( (v35 & 2) == 0
        || (LODWORD(v44[30].eYX) & 0x8000) != 0 && (LODWORD(v44[21].eXX) > 2 * v41 || LODWORD(v44[21].eYY) > v41) )
      {
        LODWORD(v44[4].eYX) = 2;
      }
      goto LABEL_32;
    }
    if ( LODWORD((*this)[4].eYX) != 2 )
    {
LABEL_32:
      v15 = v60;
      goto LABEL_33;
    }
    v15 = v60;
    if ( (v35 & 1) == 0 )
      LODWORD(v44[4].eYX) = 1;
  }
  else
  {
    LODWORD((*this)[5].eYX) = 1;
    (*this)[4].eYX = 0.0;
    (*this)[40].eYX = 0.0;
  }
LABEL_33:
  if ( LODWORD((*this)[4].eYX) == 2 )
    LODWORD((*this)->eYY) &= 0x8FFEFFFF;
  if ( v36 )
  {
    v57 = *this;
    if ( LODWORD((*this)[4].eYX) != 2 )
      goto LABEL_85;
  }
  if ( !a11 || (v45 = 1, LODWORD((*this)[24].eXY)) )
    v45 = 0;
  LODWORD((*this)[40].eYY) = v45;
  if ( !(unsigned int)RFONTOBJ::bInitCache((RFONTOBJ *)this, a12) )
  {
    v57 = *this;
LABEL_85:
    memset(&v63, 0, sizeof(v63));
    v64 = 0LL;
    PushThreadGuardedObject(&v63, v57, Win32FreePool);
    goto LABEL_86;
  }
  *(_QWORD *)&(*this)[43].eYX = 0LL;
  v59 = (__int64 *)ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v43 = iUniqueStamp == -1;
  v46 = ++iUniqueStamp;
  if ( v43 )
  {
    v46 = 1;
    iUniqueStamp = 1;
  }
  LODWORD((*this)->eXX) = v46;
  if ( a3 )
  {
    LODWORD((*this)[30].eYY) = 1;
    v60 = PDEVOBJ::prfntActive(a3);
    RFONTOBJ::vInsert(this, &v60, 1LL);
    PDEVOBJ::prfntActive(a3, v60);
  }
  v60 = *(struct RFONT **)(v61 + 72);
  RFONTOBJ::vInsert(this, &v60, 0LL);
  *(_QWORD *)(v47 + 72) = v60;
  SEMOBJ::vUnlock((SEMOBJ *)&v59);
  v48 = *this;
  if ( LODWORD((*this)[4].eYX) == 1 )
    LODWORD(v48->eYY) |= 1u;
  else
    LODWORD(v48->eYY) &= ~1u;
  if ( v15 )
    (*this)[12].eYX = *(FLOATL *)(*(_QWORD *)(*(_QWORD *)v15 + 80LL) + 68LL);
  else
    (*this)[12].eYX = 0.0;
  if ( gbSystemDBCSFontEnabled && (*((_DWORD *)a5 + 3) & 0x10) != 0 )
    v16 = 1;
  LODWORD((*this)[44].eYY) = v16;
  return 1;
}
