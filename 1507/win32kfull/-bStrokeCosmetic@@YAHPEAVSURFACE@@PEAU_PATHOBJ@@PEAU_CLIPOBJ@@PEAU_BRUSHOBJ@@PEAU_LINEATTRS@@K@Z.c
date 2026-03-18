/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C00D0EBC
 * Callers:
 *     EngStrokePath @ 0x1C00CE630 (EngStrokePath.c)
 *     EngLineTo @ 0x1C01166A0 (EngLineTo.c)
 * Callees:
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C0001C88 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C0001D50 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00D127C (-bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRI.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall bStrokeCosmetic(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *this,
        struct _BRUSHOBJ *a4,
        struct _LINEATTRS *a5,
        char a6)
{
  unsigned int v10; // esi
  unsigned int v11; // r8d
  ULONG iSolidColor; // ecx
  struct _BMINFO *v13; // rdi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  void (* near **v19)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // r13
  unsigned int v20; // esi
  BOOL v21; // ebx
  struct _PATHOBJ v23; // rcx
  int v24; // eax
  ULONG count; // r8d
  ULONG v26; // r10d
  char flags; // r9
  POINTFIX *pptfx; // rdx
  POINTFIX *v29; // r12
  POINTFIX *v30; // r11
  int v31; // ecx
  __int64 v32; // rcx
  ULONG cstyle; // edi
  PFLOAT_LONG pstyle; // r9
  bool v35; // zf
  int v36; // r8d
  int *v37; // rdx
  int *v38; // rcx
  LONG l; // eax
  int v40; // eax
  int v41; // r8d
  int e_low; // ecx
  unsigned int v43; // eax
  int v44; // eax
  struct _RECTL *v45; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+64h] [rbp-9Ch]
  unsigned int *v48; // [rsp+70h] [rbp-90h]
  _QWORD v49[14]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTFIX v50; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTFIX v51; // [rsp+F8h] [rbp-8h] BYREF
  struct _CLIPLINE v52[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _PATHDATA v53; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v54[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v55[64]; // [rsp+210h] [rbp+110h] BYREF

  memset(v49, 0, sizeof(v49));
  v10 = 0;
  if ( (a5->fl & 2) != 0 )
  {
    HIDWORD(v49[11]) = 0;
    v49[9] = &gaspAlternateStyle;
    v10 = 1024;
    v49[10] = &gaspAlternateStyle;
    HIDWORD(v49[7]) = HIWORD(a5->elStyleState.l) & 1;
    v49[12] = 0x100000001LL;
    HIDWORD(v49[6]) = 1;
    LODWORD(v49[7]) = 2;
    v49[13] = 0x100000001LL;
  }
  else if ( a5->pstyle )
  {
    v32 = *((_QWORD *)a1 + 6);
    if ( v32 )
    {
      v49[12] = *(_QWORD *)(v32 + 2236);
      LODWORD(v49[13]) = *(_DWORD *)(v32 + 2244);
    }
    else
    {
      v49[12] = 0x100000001LL;
      LODWORD(v49[13]) = 3;
    }
    v10 = 1024;
    if ( (unsigned int)bUMPDSecurityGateEx() && (cstyle = 16, a5->cstyle > 0x10) )
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
    HIDWORD(v49[13]) = cstyle;
    v35 = (a5->fl & 4) == 0;
    v36 = 0;
    HIDWORD(v49[6]) = 0;
    HIDWORD(v49[11]) = !v35;
    v49[9] = v54;
    v49[10] = v55;
    if ( cstyle )
    {
      v37 = &v54[cstyle - 1];
      v38 = (int *)v55;
      if ( v37 >= v54 )
      {
        do
        {
          l = pstyle->l;
          ++pstyle;
          v40 = LODWORD(v49[13]) * l;
          *v37 = v40;
          *v38++ = v40;
          v36 = *v37-- + HIDWORD(v49[6]);
          HIDWORD(v49[6]) = v36;
        }
        while ( (unsigned __int64)v37 >= v49[9] );
      }
    }
    v41 = 2 * v36;
    e_low = LOWORD(a5->elStyleState.e);
    v43 = LODWORD(v49[13]) * HIWORD(a5->elStyleState.l);
    LODWORD(v49[7]) = v41;
    v44 = e_low + v43;
    if ( v44 < 0 )
      v44 = 0;
    HIDWORD(v49[7]) = v44;
    if ( v44 >= v41 )
      HIDWORD(v49[7]) = v44 % v41;
  }
  v11 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v46 = *((_DWORD *)a1 + 22) / 4;
  v48 = (unsigned int *)*((_QWORD *)a1 + 10);
  v13 = (struct _BMINFO *)((char *)&gabminfo + 32 * v11);
  if ( v11 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_52;
  }
  if ( *((_DWORD *)a1 + 24) == 2 )
  {
LABEL_52:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_53;
  }
  if ( *((_DWORD *)a1 + 24) != 3 )
  {
    if ( *((_DWORD *)a1 + 24) != 4 )
      goto LABEL_7;
    goto LABEL_54;
  }
LABEL_53:
  iSolidColor |= iSolidColor << 8;
LABEL_54:
  iSolidColor |= iSolidColor << 16;
LABEL_7:
  HIDWORD(v53.pptfx) = -1;
  v53.count = iSolidColor;
  v53.flags = 0;
  LODWORD(v53.pptfx) = ~iSolidColor;
  v14 = *((int *)&aiLineMix + (a6 & 0xF));
  v15 = *(&v53.flags + (unsigned __int8)v14);
  v16 = *(&v53.flags + (v14 >> 8));
  v17 = 0;
  HIDWORD(v49[0]) = v16;
  if ( v11 == 5 )
    v17 = 8;
  LODWORD(v49[0]) = v15;
  v18 = ((v10 & 0x400) != 0 ? 4 : 0) | v17;
  v19 = &(&gapfnStrip)[v18];
  if ( *((_QWORD *)a1 + 71) )
    v19 = &(&gapfnStripCddCallback)[v18];
  if ( this && this->iDComplexity )
  {
    v20 = v10 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v21 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[10], a2, 0xB8u, v52, 1);
      if ( v52[0].c )
      {
        if ( (v20 & 0x400) != 0 )
          LODWORD(v49[8]) = LOWORD(v52[0].lStyleState) + LODWORD(v49[13]) * HIWORD(v52[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v13,
                              &v52[0].ptfxA,
                              &v52[0].ptfxB,
                              v52[0].arun,
                              v52[0].c,
                              (struct _LINESTATE *)v49,
                              v45,
                              (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))v19,
                              v20,
                              v48,
                              v46,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 71)) )
          break;
      }
      if ( !v21 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    a2->fl &= ~8u;
    v23 = a2[1];
    v53.flags = 0;
    *(_QWORD *)(*(_QWORD *)&v23 + 80LL) = *(_QWORD *)(*(_QWORD *)&v23 + 32LL);
    do
    {
      v24 = EPATHOBJ::bEnum((EPATHOBJ *)a2, &v53);
      count = v53.count;
      v26 = v53.count;
      v47 = v24;
      if ( !v53.count )
        break;
      flags = v53.flags;
      pptfx = v53.pptfx;
      if ( (v53.flags & 1) != 0 )
      {
        v29 = v53.pptfx + 1;
        v51 = *v53.pptfx;
        v26 = v53.count - 1;
        v30 = v53.pptfx;
      }
      else
      {
        v30 = &v50;
        v29 = v53.pptfx;
      }
      v31 = HIDWORD(v49[7]);
      if ( (v53.flags & 4) != 0 )
        v31 = 0;
      HIDWORD(v49[7]) = v31;
      if ( v26 )
      {
        if ( !(unsigned int)bLines(
                              v13,
                              v30,
                              v29,
                              0LL,
                              v26,
                              (struct _LINESTATE *)v49,
                              v45,
                              (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))v19,
                              v10,
                              v48,
                              v46,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 71)) )
          return 0LL;
        pptfx = v53.pptfx;
        count = v53.count;
        flags = v53.flags;
      }
      v50 = pptfx[count - 1];
      if ( (flags & 8) != 0
        && !(unsigned int)bLines(
                            v13,
                            &v50,
                            &v51,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v49,
                            v45,
                            (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))v19,
                            v10,
                            v48,
                            v46,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 71)) )
      {
        return 0LL;
      }
    }
    while ( v47 );
    if ( (v10 & 0x400) != 0 )
      a5->elStyleState.l = (unsigned __int16)(HIDWORD(v49[7]) % LODWORD(v49[13])) | ((unsigned __int16)(HIDWORD(v49[7]) / LODWORD(v49[13])) << 16);
    return 1LL;
  }
}
