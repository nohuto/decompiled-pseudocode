/*
 * XREFs of EngBitBlt @ 0x1C0038EE0
 * Callers:
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00BCCB4 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     SimBitBlt @ 0x1C0263D38 (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0282108 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0287C10 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028E5F0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02949E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     NtGdiEngBitBlt @ 0x1C02AAB60 (NtGdiEngBitBlt.c)
 * Callees:
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00396E0 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C003A730 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     EngTransparentBlt @ 0x1C00DEAF0 (EngTransparentBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00E6FE0 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00F9918 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     SimBitBlt @ 0x1C0263D38 (SimBitBlt.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BD5C4 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BD864 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 */

BOOL __stdcall EngBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  POINTL *v12; // rbx
  __int64 v14; // r14
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  char v18; // r8
  char v20; // r8
  __int64 v21; // rcx
  signed __int32 v22; // ett
  char *v23; // rdi
  unsigned int iSolidColor; // r9d
  LONG x; // edx
  LONG v26; // ecx
  LONG y; // r10d
  void (*v28)(struct _PATBLTFRAME *, int); // rax
  unsigned int v29; // eax
  char *pvRbrush; // rax
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rbx
  int v34; // eax
  void (__fastcall *v35)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // r10
  struct SURFACE *v36; // rdi
  __int64 (__fastcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  void (*prclSrc)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  ULONG iTransColor; // [rsp+30h] [rbp-D0h]
  struct _POINTL *v41; // [rsp+68h] [rbp-98h]
  XLATEOBJ *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  struct SURFACE *v45; // [rsp+88h] [rbp-78h] BYREF
  char v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+94h] [rbp-6Ch]
  int v48[2]; // [rsp+98h] [rbp-68h]
  POINTL *v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+ACh] [rbp-54h]
  __int128 v52; // [rsp+B4h] [rbp-4Ch]
  int v53; // [rsp+C4h] [rbp-3Ch]
  __int64 v54; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL *v56; // [rsp+D8h] [rbp-28h]
  struct SURFACE *v57; // [rsp+E0h] [rbp-20h]
  RECTL v58; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-8h] BYREF
  int v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+104h] [rbp+4h]

  v12 = pptlBrush;
  v42 = pxlo;
  v41 = pptlSrc;
  v49 = pptlMask;
  *(_QWORD *)v48 = psoMask;
  v56 = pptlBrush;
  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(psoTrg);
  v43 = SURFOBJ_TO_SURFACE(psoSrc);
  v57 = (struct SURFACE *)SURFOBJ_TO_SURFACE(*(_QWORD *)v48);
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    goto LABEL_27;
  if ( !*ThreadWin32Thread )
    goto LABEL_27;
  v16 = (_QWORD *)(*ThreadWin32Thread + 40LL);
  if ( (_QWORD *)*v16 == v16 )
    goto LABEL_27;
  v17 = *v16 - 40LL;
  if ( !v17 || (*(_DWORD *)(v17 + 412) & 0x100) == 0 || !*(_DWORD *)(v17 + 432) )
    goto LABEL_27;
  v18 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  if ( (v18 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSolidColor == -1 && !pptlBrush))\n",
        67);
    return 0;
  }
  v20 = v18 & 0xD4;
  if ( !v20 || psoSrc && pptlSrc )
  {
    if ( (unsigned int)(*(_DWORD *)(v14 + 96) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfDst is BMF_JPEG/BMF_PNG\n", 84);
      return 1;
    }
    if ( v20 && (unsigned int)(*(_DWORD *)(v43 + 96) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
      {
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfSrc is BMF_JPEG/BMF_PNG\n", 90);
        return 1;
      }
      return 1;
    }
LABEL_27:
    if ( psoTrg->iType )
      return SimBitBlt(
               (int)psoTrg,
               (int)psoSrc,
               v48[0],
               (int)pco,
               (__int64)pxlo,
               prclTrg,
               pptlSrc,
               v49,
               (__int64)pbo,
               (__int64)pptlBrush,
               rop4,
               0LL);
    v21 = *(_QWORD *)(v14 + 48);
    if ( v21 )
    {
      _m_prefetchw((const void *)(v21 + 56));
      do
        v22 = *(_DWORD *)(v21 + 56);
      while ( v22 != _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 56), v22 | 0x40000, v22) );
    }
    v54 = *(_QWORD *)(v14 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v54, psoTrg, 0LL, 0);
    ++*(_DWORD *)(v14 + 92);
    v23 = 0LL;
    if ( rop4 > 0xCCAA )
    {
      if ( rop4 == 52428 )
      {
        if ( !*(_WORD *)(v43 + 100) )
          return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        v37 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v43 + 48) + 2872LL);
        if ( v37 )
          LODWORD(v23) = v37(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        return (int)v23;
      }
      if ( rop4 != 61680 )
      {
        if ( rop4 != 0xFFFF )
          goto LABEL_81;
        iSolidColor = -1;
        goto LABEL_52;
      }
LABEL_54:
      iSolidColor = pbo->iSolidColor;
      if ( pbo->iSolidColor == -1 )
      {
        if ( *(_DWORD *)(v14 + 96) == 3
          && rop4 == 61680
          && pvGetEngRbrush(pbo)
          && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
        {
          v28 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8;
        }
        else
        {
          v29 = *(_DWORD *)(v14 + 96);
          if ( v29 >= 3 )
          {
            if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
            {
              LOBYTE(v23) = rop4 != 61680;
              vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, (unsigned int)v23);
              return 1;
            }
LABEL_81:
            if ( psoSrc )
            {
              v55 = *(_QWORD *)(v43 + 48);
              PDEVOBJ::vSync((PDEVOBJ *)&v55, psoSrc, 0LL, 0);
            }
            v45 = 0LL;
            v46 = 0;
            v47 = 0;
            if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 )
            {
              if ( *(_WORD *)(v43 + 100) )
              {
                v31 = prclTrg->right - prclTrg->left;
                v32 = prclTrg->bottom - prclTrg->top;
                v33 = *(_QWORD *)(v43 + 48);
                v51 = 0LL;
                v52 = 0uLL;
                v53 = 0;
                v50 = *(_DWORD *)(v14 + 96);
                v34 = *(_DWORD *)(v43 + 112) & 0x40000;
                v60 = v31;
                v61 = v32;
                v51 = __PAIR64__(v32, v31);
                HIDWORD(v52) = v34;
                v59 = 0LL;
                *(_QWORD *)((char *)&v52 + 4) = 0LL;
                if ( !SURFMEM::bCreateDIB(
                        (SURFMEM *)&v45,
                        (struct _DEVBITMAPINFO *)&v50,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0,
                        1,
                        0,
                        0) )
                  goto LABEL_97;
                v35 = *(void (__fastcall **)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))(v33 + 2872);
                if ( !v35 )
                  goto LABEL_97;
                if ( v45 )
                  v23 = (char *)v45 + 24;
                v35(v23, psoSrc, 0LL, pxlo, &v59, pptlSrc);
                v36 = v45;
                v12 = v56;
                v41 = &gptl00;
                v42 = xloIdent;
              }
              else
              {
                v36 = (struct SURFACE *)v43;
              }
            }
            else
            {
              v36 = (struct SURFACE *)v43;
            }
            if ( *(_DWORD *)(v14 + 96) <= 6u || !(unsigned int)bUMPDSecurityGateEx() )
            {
              BltLnk(
                (struct SURFACE *)v14,
                v36,
                v57,
                (struct ECLIPOBJ *)pco,
                (struct XLATE *)v42,
                prclTrg,
                v41,
                v49,
                pbo,
                v12,
                rop4);
              SURFMEM::~SURFMEM((SURFMEM *)&v45);
              return 1;
            }
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n", 479);
            LODWORD(v23) = 1;
LABEL_97:
            SURFMEM::~SURFMEM((SURFMEM *)&v45);
            return (int)v23;
          }
          if ( v29 == 2 && rop4 == 61680 )
          {
            if ( !pvGetEngRbrush(pbo) || *(_QWORD *)((char *)pbo[1].pvRbrush + 20) != 0x800000008LL )
              goto LABEL_81;
            v28 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8;
          }
          else
          {
            if ( v29 != 1 || rop4 != 61680 || !pvGetEngRbrush(pbo) )
              goto LABEL_81;
            pvRbrush = (char *)pbo[1].pvRbrush;
            if ( *(_QWORD *)(pvRbrush + 20) != 0x800000008LL )
            {
              if ( *((_DWORD *)pvRbrush + 5) == 6 && *((_DWORD *)pvRbrush + 6) == 6 )
              {
                vDIBnPatBltSrccopy6x6((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, prclSrc);
                return 1;
              }
              goto LABEL_81;
            }
            v28 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8;
          }
        }
        vDIBPatBltSrccopy8x8((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v28);
        return 1;
      }
      if ( (rop4 & 1) != 0 )
        iSolidColor = ~iSolidColor;
LABEL_52:
      vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, iSolidColor, 0);
      return 1;
    }
    if ( rop4 != 52394 )
    {
      if ( !rop4 )
      {
        iSolidColor = 0;
        goto LABEL_52;
      }
      if ( rop4 != 3855 )
      {
        if ( rop4 == 21845 )
        {
          vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, 0xFFFFFFFF, 1);
          return 1;
        }
        if ( rop4 == 23130 )
        {
          if ( pbo->iSolidColor != -1 )
          {
            vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, pbo->iSolidColor, 1);
            return 1;
          }
          if ( *(_DWORD *)(v14 + 96) >= 3u && pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
          {
            vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, 2u);
            return 1;
          }
        }
        goto LABEL_81;
      }
      goto LABEL_54;
    }
    if ( *(_QWORD *)v48 )
      goto LABEL_81;
    if ( !pbo->pvRbrush )
    {
      x = pptlSrc->x;
      v26 = pptlSrc->x + prclTrg->right - prclTrg->left;
      y = pptlSrc->y;
      iTransColor = pbo->iSolidColor;
      v58.bottom = y + prclTrg->bottom - prclTrg->top;
      v58.left = x;
      v58.right = v26;
      v58.top = y;
      return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &v58, iTransColor, 1u);
    }
    return 1;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDSRC && (!psoSrc || !pptlSrc)\n", 74);
  return 0;
}
