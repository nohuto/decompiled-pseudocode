/*
 * XREFs of EngBitBlt @ 0x1C00477E0
 * Callers:
 *     EngHTBlt @ 0x1C00F2408 (EngHTBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00FADEC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     SimBitBlt @ 0x1C02618B8 (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C027FF58 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0286560 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028D240 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0294180 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     NtGdiEngBitBlt @ 0x1C02ACAB0 (NtGdiEngBitBlt.c)
 * Callees:
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0047FD0 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0066D34 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00F127C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     EngTransparentBlt @ 0x1C0103690 (EngTransparentBlt.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C010BF2C (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?bInEngCall@UMPDOBJ@@QEAA_NXZ @ 0x1C0257EC0 (-bInEngCall@UMPDOBJ@@QEAA_NXZ.c)
 *     SimBitBlt @ 0x1C02618B8 (SimBitBlt.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C0544 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C07E0 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v19; // rcx
  UMPDOBJ *v20; // rcx
  char v21; // r8
  char v23; // r8
  __int64 v24; // rcx
  signed __int32 v25; // ett
  char *v26; // rdi
  unsigned int iSolidColor; // r9d
  LONG x; // edx
  LONG v29; // ecx
  LONG y; // r10d
  void (*v31)(struct _PATBLTFRAME *, int); // rax
  unsigned int v32; // eax
  char *pvRbrush; // rax
  int v34; // edx
  int v35; // ecx
  __int64 v36; // rbx
  int v37; // eax
  void (__fastcall *v38)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // r10
  struct SURFACE *v39; // rdi
  __int64 (__fastcall *v40)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  void (*prclSrc)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  ULONG iTransColor; // [rsp+30h] [rbp-D0h]
  struct _POINTL *v43; // [rsp+60h] [rbp-A0h]
  XLATEOBJ *v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  struct SURFACE *v49; // [rsp+90h] [rbp-70h] BYREF
  char v50; // [rsp+98h] [rbp-68h]
  int v51; // [rsp+9Ch] [rbp-64h]
  POINTL *v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+ACh] [rbp-54h]
  __int128 v55; // [rsp+B4h] [rbp-4Ch]
  int v56; // [rsp+C4h] [rbp-3Ch]
  __int64 v57; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL *v59; // [rsp+D8h] [rbp-28h]
  struct SURFACE *v60; // [rsp+E0h] [rbp-20h]
  RECTL v61; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v62; // [rsp+F8h] [rbp-8h] BYREF
  int v63; // [rsp+100h] [rbp+0h]
  int v64; // [rsp+104h] [rbp+4h]

  v12 = pptlBrush;
  v45 = pxlo;
  v43 = pptlSrc;
  v52 = pptlMask;
  v59 = pptlBrush;
  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(psoTrg);
  v46 = SURFOBJ_TO_SURFACE(psoSrc);
  v60 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoMask);
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), v15, v16, v17);
  if ( !ThreadWin32Thread )
    goto LABEL_27;
  if ( !*ThreadWin32Thread )
    goto LABEL_27;
  v19 = (_QWORD *)(*ThreadWin32Thread + 40LL);
  if ( (_QWORD *)*v19 == v19 )
    goto LABEL_27;
  v20 = (UMPDOBJ *)(*v19 - 40LL);
  if ( !v20 || (*((_DWORD *)v20 + 103) & 0x100) == 0 || !UMPDOBJ::bInEngCall(v20) )
    goto LABEL_27;
  v21 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  if ( (v21 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSolidColor == -1 && !pptlBrush))\n",
        67);
    return 0;
  }
  v23 = v21 & 0xD4;
  if ( !v23 || psoSrc && pptlSrc )
  {
    if ( (unsigned int)(*(_DWORD *)(v14 + 96) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfDst is BMF_JPEG/BMF_PNG\n", 84);
      return 1;
    }
    if ( v23 && (unsigned int)(*(_DWORD *)(v46 + 96) - 9) <= 1 )
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
               (int)psoMask,
               (int)pco,
               (__int64)pxlo,
               prclTrg,
               pptlSrc,
               v52,
               (__int64)pbo,
               (__int64)pptlBrush,
               rop4,
               0LL);
    v24 = *(_QWORD *)(v14 + 48);
    if ( v24 )
    {
      _m_prefetchw((const void *)(v24 + 56));
      do
        v25 = *(_DWORD *)(v24 + 56);
      while ( v25 != _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 56), v25 | 0x40000, v25) );
    }
    v57 = *(_QWORD *)(v14 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v57, psoTrg, 0LL, 0);
    ++*(_DWORD *)(v14 + 92);
    v26 = 0LL;
    if ( rop4 > 0xCCAA )
    {
      if ( rop4 == 52428 )
      {
        if ( !*(_WORD *)(v46 + 100) )
          return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        v40 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v46 + 48) + 2864LL);
        if ( v40 )
          LODWORD(v26) = v40(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        return (int)v26;
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
          v31 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8;
        }
        else
        {
          v32 = *(_DWORD *)(v14 + 96);
          if ( v32 >= 3 )
          {
            if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
            {
              LOBYTE(v26) = rop4 != 61680;
              vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, (unsigned int)v26);
              return 1;
            }
LABEL_81:
            if ( psoSrc )
            {
              v58 = *(_QWORD *)(v46 + 48);
              PDEVOBJ::vSync((PDEVOBJ *)&v58, psoSrc, 0LL, 0);
            }
            v49 = 0LL;
            v50 = 0;
            v51 = 0;
            if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 )
            {
              if ( *(_WORD *)(v46 + 100) )
              {
                v34 = prclTrg->right - prclTrg->left;
                v35 = prclTrg->bottom - prclTrg->top;
                v36 = *(_QWORD *)(v46 + 48);
                v54 = 0LL;
                v55 = 0uLL;
                v56 = 0;
                v53 = *(_DWORD *)(v14 + 96);
                v37 = *(_DWORD *)(v46 + 112) & 0x40000;
                v63 = v34;
                v64 = v35;
                v54 = __PAIR64__(v35, v34);
                HIDWORD(v55) = v37;
                v62 = 0LL;
                *(_QWORD *)((char *)&v55 + 4) = 0LL;
                if ( !SURFMEM::bCreateDIB(
                        (SURFMEM *)&v49,
                        (struct _DEVBITMAPINFO *)&v53,
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
                v38 = *(void (__fastcall **)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))(v36 + 2864);
                if ( !v38 )
                  goto LABEL_97;
                if ( v49 )
                  v26 = (char *)v49 + 24;
                v38(v26, psoSrc, 0LL, pxlo, &v62, pptlSrc);
                v39 = v49;
                v12 = v59;
                v43 = &gptl00;
                v45 = xloIdent;
              }
              else
              {
                v39 = (struct SURFACE *)v46;
              }
            }
            else
            {
              v39 = (struct SURFACE *)v46;
            }
            if ( *(_DWORD *)(v14 + 96) <= 6u || !(unsigned int)bUMPDSecurityGateEx() )
            {
              BltLnk(
                (struct SURFACE *)v14,
                v39,
                v60,
                (struct ECLIPOBJ *)pco,
                (struct XLATE *)v45,
                prclTrg,
                v43,
                v52,
                pbo,
                v12,
                rop4);
              SURFMEM::~SURFMEM((SURFMEM *)&v49);
              return 1;
            }
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n", 479);
            LODWORD(v26) = 1;
LABEL_97:
            SURFMEM::~SURFMEM((SURFMEM *)&v49);
            return (int)v26;
          }
          if ( v32 == 2 && rop4 == 61680 )
          {
            if ( !pvGetEngRbrush(pbo) || *(_QWORD *)((char *)pbo[1].pvRbrush + 20) != 0x800000008LL )
              goto LABEL_81;
            v31 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8;
          }
          else
          {
            if ( v32 != 1 || rop4 != 61680 || !pvGetEngRbrush(pbo) )
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
            v31 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8;
          }
        }
        vDIBPatBltSrccopy8x8((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v31);
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
    if ( psoMask )
      goto LABEL_81;
    if ( !pbo->pvRbrush )
    {
      x = pptlSrc->x;
      v29 = pptlSrc->x + prclTrg->right - prclTrg->left;
      y = pptlSrc->y;
      iTransColor = pbo->iSolidColor;
      v61.bottom = y + prclTrg->bottom - prclTrg->top;
      v61.left = x;
      v61.right = v29;
      v61.top = y;
      return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &v61, iTransColor, 1u);
    }
    return 1;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDSRC && (!psoSrc || !pptlSrc)\n", 74);
  return 0;
}
