/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C0144E70
 * Callers:
 *     EngStrokePath @ 0x1C000F530 (EngStrokePath.c)
 *     EngLineTo @ 0x1C00100C0 (EngLineTo.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C014517C (-bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRI.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C02B7908 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02B7C3C (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 */

__int64 __fastcall bStrokeCosmetic(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *this,
        struct _BRUSHOBJ *a4,
        struct _LINEATTRS *a5,
        char a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  FLONG fl; // eax
  unsigned int v13; // esi
  unsigned int v14; // r8d
  ULONG iSolidColor; // ecx
  struct _BMINFO *v16; // rdi
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  __int64 v21; // rax
  void (* near **v22)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // r12
  struct _PATHOBJ v23; // rcx
  int v24; // eax
  ULONG count; // r8d
  int v26; // r13d
  ULONG v27; // ecx
  char flags; // r9
  POINTFIX *pptfx; // rdx
  POINTFIX *v30; // r11
  POINTFIX *v31; // r10
  int v32; // eax
  __int64 v34; // rcx
  ULONG cstyle; // edi
  PFLOAT_LONG pstyle; // r9
  bool v37; // zf
  int v38; // r8d
  int *v39; // rdx
  int *v40; // rcx
  LONG l; // eax
  int v42; // eax
  int v43; // r8d
  int e_low; // ecx
  unsigned int v45; // eax
  int v46; // eax
  unsigned int v47; // esi
  int v48; // ebx
  struct _RECTL *v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+60h] [rbp-A0h]
  unsigned int *v51; // [rsp+68h] [rbp-98h]
  struct _POINTFIX v52; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v53[14]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-10h]
  struct _POINTFIX v55; // [rsp+F8h] [rbp-8h] BYREF
  struct _CLIPLINE v56[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _PATHDATA v57; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v58[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v59[64]; // [rsp+210h] [rbp+110h] BYREF

  memset(v53, 0, sizeof(v53));
  fl = a5->fl;
  v54 = 0LL;
  v13 = 0;
  if ( (fl & 2) != 0 )
  {
    HIDWORD(v53[11]) = 0;
    v53[9] = &gaspAlternateStyle;
    v13 = 1024;
    v53[10] = &gaspAlternateStyle;
    HIDWORD(v53[7]) = HIWORD(a5->elStyleState.l) & 1;
    v53[12] = 0x100000001LL;
    HIDWORD(v53[6]) = 1;
    LODWORD(v53[7]) = 2;
    v53[13] = 0x100000001LL;
  }
  else if ( a5->pstyle )
  {
    v34 = *((_QWORD *)a1 + 6);
    if ( v34 )
    {
      v53[12] = *(_QWORD *)(v34 + 2236);
      LODWORD(v53[13]) = *(_DWORD *)(v34 + 2244);
    }
    else
    {
      v53[12] = 0x100000001LL;
      LODWORD(v53[13]) = 3;
    }
    v13 = 1024;
    if ( bUMPDSecurityGateEx(v34, 1LL, v10, v11) && (cstyle = 16, a5->cstyle > 0x10) )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:bStrokeCosmetic:bStorkeCosmetic's style index (pla->cstyle"
          ") is greater than STYLE_MAX_COUNT.\n",
          289);
    }
    else
    {
      cstyle = a5->cstyle;
    }
    pstyle = a5->pstyle;
    HIDWORD(v53[13]) = cstyle;
    v37 = (a5->fl & 4) == 0;
    v38 = 0;
    HIDWORD(v53[6]) = 0;
    HIDWORD(v53[11]) = !v37;
    v53[9] = v58;
    v53[10] = v59;
    if ( cstyle )
    {
      v39 = &v58[cstyle - 1];
      v40 = (int *)v59;
      if ( v39 >= v58 )
      {
        do
        {
          l = pstyle->l;
          ++pstyle;
          v42 = LODWORD(v53[13]) * l;
          *v39 = v42;
          *v40++ = v42;
          v38 = *v39-- + HIDWORD(v53[6]);
          HIDWORD(v53[6]) = v38;
        }
        while ( (unsigned __int64)v39 >= v53[9] );
      }
    }
    v43 = 2 * v38;
    e_low = LOWORD(a5->elStyleState.e);
    v45 = LODWORD(v53[13]) * HIWORD(a5->elStyleState.l);
    LODWORD(v53[7]) = v43;
    v46 = e_low + v45;
    if ( v46 < 0 )
      v46 = 0;
    HIDWORD(v53[7]) = v46;
    if ( v46 >= v43 )
      HIDWORD(v53[7]) = v46 % v43;
  }
  v14 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v50 = *((_DWORD *)a1 + 22) / 4;
  v51 = (unsigned int *)*((_QWORD *)a1 + 10);
  v16 = (struct _BMINFO *)((char *)&gabminfo + 32 * v14);
  if ( v14 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_46;
  }
  if ( *((_DWORD *)a1 + 24) == 2 )
  {
LABEL_46:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_47;
  }
  if ( *((_DWORD *)a1 + 24) != 3 )
  {
    if ( *((_DWORD *)a1 + 24) != 4 )
      goto LABEL_7;
    goto LABEL_48;
  }
LABEL_47:
  iSolidColor |= iSolidColor << 8;
LABEL_48:
  iSolidColor |= iSolidColor << 16;
LABEL_7:
  HIDWORD(v57.pptfx) = -1;
  v57.count = iSolidColor;
  v57.flags = 0;
  LODWORD(v57.pptfx) = ~iSolidColor;
  v17 = *((int *)&aiLineMix + (a6 & 0xF));
  v18 = *(&v57.flags + (unsigned __int8)v17);
  v19 = *(&v57.flags + (v17 >> 8));
  v20 = 0;
  HIDWORD(v53[0]) = v19;
  if ( v14 == 5 )
    v20 = 8;
  LODWORD(v53[0]) = v18;
  v21 = ((v13 & 0x400) != 0 ? 4 : 0) | v20;
  v22 = &(&gapfnStrip)[v21];
  if ( *((_QWORD *)a1 + 72) )
    v22 = &(&gapfnStripCddCallback)[v21];
  if ( this && this->iDComplexity )
  {
    v47 = v13 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v48 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[10], a2, 0xB8u, v56, 1);
      if ( v56[0].c )
      {
        if ( (v47 & 0x400) != 0 )
          LODWORD(v53[8]) = LOWORD(v56[0].lStyleState) + LODWORD(v53[13]) * HIWORD(v56[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v16,
                              &v56[0].ptfxA,
                              &v56[0].ptfxB,
                              v56[0].arun,
                              v56[0].c,
                              (struct _LINESTATE *)v53,
                              v49,
                              (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))v22,
                              v47,
                              v51,
                              v50,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 72)) )
          break;
      }
      if ( !v48 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    v23 = a2[1];
    a2->fl &= ~8u;
    v57.flags = 0;
    *(_QWORD *)(*(_QWORD *)&v23 + 80LL) = *(_QWORD *)(*(_QWORD *)&v23 + 32LL);
    do
    {
      v24 = EPATHOBJ::bEnum((EPATHOBJ *)a2, &v57);
      count = v57.count;
      v26 = v24;
      v27 = v57.count;
      if ( !v57.count )
        break;
      flags = v57.flags;
      pptfx = v57.pptfx;
      if ( (v57.flags & 1) != 0 )
      {
        v30 = v57.pptfx + 1;
        v55 = *v57.pptfx;
        v31 = v57.pptfx;
        v27 = v57.count - 1;
      }
      else
      {
        v31 = &v52;
        v30 = v57.pptfx;
      }
      v32 = HIDWORD(v53[7]);
      if ( (v57.flags & 4) != 0 )
        v32 = v54;
      HIDWORD(v53[7]) = v32;
      if ( v27 )
      {
        if ( !(unsigned int)bLines(
                              v16,
                              v31,
                              v30,
                              0LL,
                              v27,
                              (struct _LINESTATE *)v53,
                              v49,
                              (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))v22,
                              v13,
                              v51,
                              v50,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 72)) )
          return 0LL;
        pptfx = v57.pptfx;
        count = v57.count;
        flags = v57.flags;
      }
      v52 = pptfx[count - 1];
      if ( (flags & 8) != 0
        && !(unsigned int)bLines(
                            v16,
                            &v52,
                            &v55,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v53,
                            v49,
                            (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))v22,
                            v13,
                            v51,
                            v50,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 72)) )
      {
        return 0LL;
      }
    }
    while ( v26 );
    if ( (v13 & 0x400) != 0 )
      a5->elStyleState.l = (unsigned __int16)(HIDWORD(v53[7]) % LODWORD(v53[13])) | ((unsigned __int16)(HIDWORD(v53[7]) / LODWORD(v53[13])) << 16);
    return 1LL;
  }
}
