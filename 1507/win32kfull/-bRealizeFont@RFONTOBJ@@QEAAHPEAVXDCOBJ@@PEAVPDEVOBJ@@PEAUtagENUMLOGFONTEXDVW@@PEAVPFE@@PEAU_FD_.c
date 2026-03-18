/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002D428
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C010FB9C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029B618 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002BF60 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C002C45C (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C002C64C (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C002C8A4 (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C002CA28 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C002F30C (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F4D4 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0030C94 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0030CB4 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0030CF4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0030FB4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0031A68 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0031B9C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00A8860 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C00FEF90 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C01261C0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029BC84 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C02D50E4 (UmfdQueryFontCapsEx.c)
 */

__int64 __fastcall RFONTOBJ::bRealizeFont(
        struct _FD_XFORM **this,
        struct _FD_XFORM **a2,
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
  unsigned int v16; // esi
  __int64 v17; // rax
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
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  char v38; // r15
  int v39; // r8d
  __int64 v40; // rbx
  int v41; // eax
  struct _FD_XFORM *v42; // rdx
  __int64 (__fastcall *v43)(__int64, struct PFE **); // rax
  int v44; // eax
  int v45; // eax
  unsigned int v46; // r14d
  __int64 v47; // rbx
  bool v48; // zf
  struct _FD_XFORM *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // ecx
  struct _FD_XFORM *v54; // rcx
  struct _FD_XFORM *v55; // rdx
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // ecx
  __int64 v61; // r11
  struct _FD_XFORM *v62; // rax
  int *v64; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v65[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct PFE *v66; // [rsp+38h] [rbp-C8h] BYREF
  struct RFONT *v67; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v69; // [rsp+50h] [rbp-B0h]
  __int64 v70; // [rsp+58h] [rbp-A8h]
  __int64 v71; // [rsp+60h] [rbp-A0h]
  __int64 v72; // [rsp+68h] [rbp-98h]
  _FD_DEVICEMETRICS v73; // [rsp+70h] [rbp-90h] BYREF

  v66 = a5;
  v16 = 0;
  v67 = (struct RFONT *)PFEOBJ::pfdg((PFEOBJ *)&v66);
  if ( !v67 )
    goto LABEL_66;
  v17 = PALLOCMEM2(0x390uLL);
  *this = (struct _FD_XFORM *)v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg((PFEOBJ *)&v66);
LABEL_66:
    *this = 0LL;
    return v16;
  }
  v72 = *(_QWORD *)a5;
  *(_DWORD *)(v17 + 32) = PDEVOBJ::ulLogPixelsX(a3);
  v18 = *this;
  LODWORD(v18[2].eXY) = PDEVOBJ::ulLogPixelsY(a3);
  LODWORD((*this)[2].eYX) = a9;
  LODWORD((*this)->eYY) = a8 | PFEOBJ::flFontType((PFEOBJ *)&v66);
  *(_QWORD *)&(*this)[3].eXX = 0LL;
  *(_QWORD *)&(*this)[3].eYX = 0LL;
  (*this)->eXY = *((FLOATL *)a5 + 2);
  *(_QWORD *)&(*this)[1].eYX = *(_QWORD *)(v72 + 80);
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
  v20 = *((_QWORD *)a5 + 4);
  (*this)[30].eYX = *(FLOATL *)(v20 + 48);
  *(_QWORD *)&(*this)[29].eYX = v67;
  v65[0] = *(_WORD *)(v20 + 116);
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)this, v65, 1, (unsigned int *)&v67, 2u, 0);
  LODWORD((*this)[28].eYX) = (_DWORD)v67;
  LODWORD((*this)[45].eXX) &= ~0x40u;
  memset(&v73, 0, sizeof(v73));
  *(_QWORD *)&(*this)[5].eXX = *(_QWORD *)(v72 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS((POINTL **)this, &v73) )
    goto LABEL_27;
  if ( !a2 )
    goto LABEL_20;
  *(POINTE *)&(*this)[24].eYX = v73.pteBase;
  *(POINTE *)&(*this)[25].eYY = v73.pteSide;
  v22 = *a2;
  v23 = *this;
  *(struct _FD_XFORM *)((char *)v23 + 164) = (*a2)[21];
  *(struct _FD_XFORM *)((char *)v23 + 180) = v22[22];
  v23[12].eXY = v22[23].eXX;
  if ( !(unsigned int)RFONTOBJ::bCalcLayoutUnits((RFONTOBJ *)this, (struct XDCOBJ *)a2)
    || !bGetNtoWScales(
          (struct EPOINTFL *)&(*this)[12].eYY,
          (struct XDCOBJ *)a2,
          (struct _FD_XFORM *)((char *)*this + 356),
          (struct PFEOBJ *)&v66,
          (int *)&(*this)[13].eXY) )
  {
LABEL_27:
    v42 = *this;
    v69 = 0LL;
    v70 = 0LL;
    v71 = 0LL;
    v68 = 0LL;
    PushThreadGuardedObject(&v68, v42, Win32FreePool);
LABEL_65:
    RFONTOBJ::vDestroyFont((RFONTOBJ *)this, 1);
    PopThreadGuardedObject(&v68, v57, v58, v59, v64);
    Win32FreePool(*this);
    goto LABEL_66;
  }
  *(_DWORD *)v65 = 0;
  bFToL(v24, v65, 0LL);
  *(_DWORD *)(v25 + 320) = *(_DWORD *)v65;
  *(_DWORD *)v65 = 0;
  bFToL(v26, v65, v27);
  *(_DWORD *)(v28 + 324) = *(_DWORD *)v65;
  *(_DWORD *)v65 = 0;
  bFToL(v29, v65, v30);
  *(_DWORD *)(v31 + 328) = *(_DWORD *)v65;
  *(_DWORD *)v65 = 0;
  bFToL(v32, v65, v33);
  *(_DWORD *)(v34 + 332) = *(_DWORD *)v65;
  (*this)[26].eYY = NAN;
  if ( *(_DWORD *)(*(_QWORD *)&(*a2)[5].eXX + 68LL) == 1 )
  {
    v35 = *(_DWORD *)(v20 + 48);
    if ( (v35 & 4) == 0 )
    {
      if ( (v35 & 0x10) == 0 )
      {
        v37 = ulSimpleDeviceOrientation((struct RFONTOBJ *)this);
LABEL_19:
        LODWORD((*this)[24].eXY) = v37;
        goto LABEL_20;
      }
      v36 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_26:
      v37 = lNormAngle(v36);
      goto LABEL_19;
    }
LABEL_25:
    v36 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_26;
  }
  LODWORD((*this)[24].eXY) = RFONTOBJ::ulSimpleOrientation((RFONTOBJ *)this, (struct XDCOBJ *)a2);
  if ( LODWORD((*this)[24].eXY) >= 0xE10 && (LODWORD((*this)[30].eYX) & 0x10) != 0 )
    goto LABEL_25;
LABEL_20:
  v38 = 0;
  v39 = LODWORD(a10);
  (*this)[42].eYX = a10;
  v40 = *(_QWORD *)&(*this)[5].eXX;
  if ( v40 == qword_1C032F1C8 )
  {
    v41 = UmfdQueryFontCapsEx(*(_QWORD *)&(*this)[1].eYX, v21, &v66);
    v39 = LODWORD(a10);
    if ( v41 != -1 )
      v38 = BYTE4(v66);
  }
  else
  {
    v43 = *(__int64 (__fastcall **)(__int64, struct PFE **))(v40 + 3072);
    if ( v43 )
    {
      v44 = v43(2LL, &v66);
      v39 = LODWORD(a10);
      if ( v44 != -1 )
        v38 = BYTE4(v66);
    }
  }
  if ( (*(_DWORD *)(v40 + 56) & 0x2000) != 0 )
  {
    v45 = LODWORD((*this)->eYY) & 0x10010000;
    (*this)[5].eYX = 0.0;
    v46 = v45 != 0 ? 400 : 800;
    LODWORD((*this)[4].eYX) = 1;
    if ( v39 )
    {
      LODWORD((*this)[4].eYX) = 2;
    }
    else
    {
      v47 = *(_QWORD *)&(*this)[6].eXX;
      if ( v47 )
      {
        v48 = (*(_DWORD *)(v47 + 56) & 0x8000) == 0;
        v66 = *(struct PFE **)&(*this)[6].eXX;
        if ( (v48 || !KeAreApcsDisabled()) && *(_QWORD *)(v47 + 3016) )
        {
          v49 = *this;
          v68 = 0LL;
          v69 = 0LL;
          v70 = 0LL;
          v71 = 0LL;
          PushThreadGuardedObject(&v68, v49, vRestartbRealizeFont);
          LODWORD((*this)[4].eYX) = (*(__int64 (__fastcall **)(_QWORD, struct _FD_XFORM *))(v47 + 3016))(
                                      *(_QWORD *)&(*this)[6].eYX,
                                      *this);
          PopThreadGuardedObject(&v68, v50, v51, v52, v64);
        }
        if ( (*(_DWORD *)(v47 + 1848) & 0x40000000) != 0 )
        {
          v53 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v66);
          if ( v53 > 0x320 )
            v46 = v53;
          if ( v46 > 0x960 )
            v46 = 2400;
        }
        v39 = LODWORD(a10);
      }
    }
    v54 = *this;
    if ( LODWORD((*this)[4].eYX) == 1 )
    {
      if ( (v38 & 2) == 0
        || (LODWORD(v54[30].eYX) & 0x8000) != 0 && (LODWORD(v54[21].eXX) > 2 * v46 || LODWORD(v54[21].eYY) > v46) )
      {
        LODWORD(v54[4].eYX) = 2;
      }
    }
    else if ( LODWORD((*this)[4].eYX) == 2 && (v38 & 1) == 0 )
    {
      LODWORD(v54[4].eYX) = 1;
    }
  }
  else
  {
    LODWORD((*this)[5].eYX) = 1;
    (*this)[4].eYX = 0.0;
    (*this)[40].eYX = 0.0;
  }
  if ( LODWORD((*this)[4].eYX) == 2 )
    LODWORD((*this)->eYY) &= 0x8FFEFFFF;
  if ( v39 )
  {
    v55 = *this;
    if ( LODWORD((*this)[4].eYX) != 2 )
      goto LABEL_64;
  }
  if ( !a11 || (v56 = 1, LODWORD((*this)[24].eXY)) )
    v56 = 0;
  LODWORD((*this)[40].eYY) = v56;
  if ( !(unsigned int)RFONTOBJ::bInitCache((RFONTOBJ *)this, a12) )
  {
    v55 = *this;
LABEL_64:
    v68 = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v71 = 0LL;
    PushThreadGuardedObject(&v68, v55, Win32FreePool);
    goto LABEL_65;
  }
  *(_QWORD *)&(*this)[43].eYX = 0LL;
  v66 = (struct PFE *)ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v48 = iUniqueStamp == -1;
  v60 = ++iUniqueStamp;
  if ( v48 )
  {
    v60 = 1;
    iUniqueStamp = 1;
  }
  LODWORD((*this)->eXX) = v60;
  if ( a3 )
  {
    LODWORD((*this)[30].eYY) = 1;
    v67 = PDEVOBJ::prfntActive(a3);
    RFONTOBJ::vInsert(this, &v67, 1LL);
    PDEVOBJ::prfntActive(a3, v67);
  }
  v67 = *(struct RFONT **)(v72 + 72);
  RFONTOBJ::vInsert(this, &v67, 0LL);
  *(_QWORD *)(v61 + 72) = v67;
  SEMOBJ::vUnlock((SEMOBJ *)&v66);
  v62 = *this;
  if ( LODWORD((*this)[4].eYX) == 1 )
    LODWORD(v62->eYY) |= 1u;
  else
    LODWORD(v62->eYY) &= ~1u;
  if ( a2 )
    (*this)[12].eYX = *(FLOATL *)(*(_QWORD *)&(*a2)[5].eXX + 68LL);
  else
    (*this)[12].eYX = 0.0;
  if ( gbSystemDBCSFontEnabled && (*((_DWORD *)a5 + 3) & 0x10) != 0 )
    v16 = 1;
  LODWORD((*this)[44].eYY) = v16;
  return 1;
}
