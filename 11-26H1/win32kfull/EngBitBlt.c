/*
 * XREFs of EngBitBlt @ 0x1400DBF60
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400651E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x14009EFCC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     NtGdiEngBitBlt @ 0x1400F4B10 (NtGdiEngBitBlt.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     SimBitBlt @ 0x140264BFC (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x14026BA50 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14030D0F0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140321430 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     EngTransparentBlt @ 0x1400609D0 (EngTransparentBlt.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1400DC674 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DC9FC (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14018888C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1401E15F8 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x14024CA8C (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     SimBitBlt @ 0x140264BFC (SimBitBlt.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140265848 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  ROP4 v11; // ebx
  struct SURFACE *p_pvScan0; // r12
  POINTL *v13; // r10
  struct _SURFOBJ *v16; // r11
  unsigned __int64 v17; // r9
  BOOL v18; // edi
  char v19; // al
  char v20; // al
  ULONG iBitmapFormat; // ecx
  ULONG v22; // r9d
  struct SURFACE *v24; // r8
  struct SURFACE *v25; // r10
  XLATEOBJ *v26; // rcx
  struct _POINTL *p_hdev; // rdi
  int v28; // eax
  ULONG v29; // eax
  ULONG iSolidColor; // r9d
  LONG x; // edx
  ULONG iTransColor; // eax
  int v33; // ecx
  LONG y; // edx
  void (*v35)(struct _PATBLTFRAME *, int); // rax
  _DWORD *pvRbrush; // rax
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  __int64 v40; // rbx
  int v41; // eax
  void (__fastcall *v42)(unsigned __int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct SURFACE **, struct _POINTL *); // r10
  Gre::Base *v43; // rcx
  struct Gre::Base::SESSION_GLOBALS *v44; // rax
  __int64 (__fastcall *v45)(SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  void (*v46)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  unsigned int v47; // [rsp+28h] [rbp-D8h]
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v49; // [rsp+78h] [rbp-88h]
  SURFOBJ *v50; // [rsp+80h] [rbp-80h]
  ROP4 v51; // [rsp+88h] [rbp-78h]
  struct _SURFOBJ *v52; // [rsp+90h] [rbp-70h]
  SURFOBJ *v53; // [rsp+98h] [rbp-68h] BYREF
  char v54; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+A4h] [rbp-5Ch]
  POINTL *v56; // [rsp+A8h] [rbp-58h]
  struct SURFACE *v57; // [rsp+B0h] [rbp-50h]
  _DWORD v58[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-38h]
  int v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+D4h] [rbp-2Ch]
  struct SURFACE *v62; // [rsp+D8h] [rbp-28h] BYREF
  int v63; // [rsp+E0h] [rbp-20h]
  int v64; // [rsp+E4h] [rbp-1Ch]
  RECTL prclSrc; // [rsp+E8h] [rbp-18h] BYREF

  v11 = rop4;
  p_pvScan0 = (struct SURFACE *)&psoTrg[-1].pvScan0;
  v13 = pptlSrc;
  v16 = psoSrc;
  v56 = pptlMask;
  v52 = psoSrc;
  v50 = psoMask;
  v17 = (unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL);
  v49 = pptlSrc;
  v51 = rop4;
  v62 = (struct SURFACE *)v17;
  v57 = (struct SURFACE *)((unsigned __int64)&psoMask[-1].pvScan0 & -(__int64)(psoMask != 0LL));
  v18 = 0;
  v19 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  if ( (v19 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
    return 0;
  v20 = v19 & 0xD4;
  if ( v20 )
  {
    if ( !psoSrc || !pptlSrc )
      return 0;
  }
  iBitmapFormat = psoTrg->iBitmapFormat;
  if ( iBitmapFormat == 10 )
    return 1;
  if ( iBitmapFormat == 9 )
    return 1;
  if ( v20 )
  {
    v28 = *(_DWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x60);
    if ( v28 == 9 || v28 == 10 )
      return 1;
  }
  if ( psoTrg->iType )
    return SimBitBlt(psoTrg, psoSrc, pxlo, prclTrg, pptlSrc, v56, (__int64)pbo, pptlBrush, rop4, 0LL);
  hdev = psoTrg->hdev;
  if ( hdev )
  {
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoTrg, 0LL, 0);
    v17 = (unsigned __int64)v62;
    v13 = v49;
    v16 = v52;
  }
  ++psoTrg->iUniq;
  switch ( rop4 )
  {
    case 0u:
      goto LABEL_38;
    case 0xF0Fu:
      goto LABEL_13;
    case 0x5555u:
      iSolidColor = -1;
      goto LABEL_46;
    case 0x5A5Au:
      iSolidColor = pbo->iSolidColor;
      if ( pbo->iSolidColor == -1 )
      {
        if ( psoTrg->iBitmapFormat >= 3 && pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
        {
          v47 = 2;
          goto LABEL_44;
        }
LABEL_24:
        v24 = v62;
        if ( v52 )
        {
          hdev = (HDEV)*((_QWORD *)v62 + 6);
          if ( hdev )
          {
            PDEVOBJ::vSync((PDEVOBJ *)&hdev, v52, 0LL, 0);
            v24 = v62;
          }
        }
        v53 = 0LL;
        v54 = 0;
        v25 = v24;
        v55 = 0;
        if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && *((_WORD *)v24 + 50) )
        {
          v38 = prclTrg->right - prclTrg->left;
          v39 = prclTrg->bottom - prclTrg->top;
          v40 = *((_QWORD *)v24 + 6);
          v58[0] = psoTrg->iBitmapFormat;
          v41 = *((_DWORD *)v24 + 28);
          v63 = v38;
          v64 = v39;
          v58[1] = v38;
          v58[2] = v39;
          v60 = v41 & 0x40000;
          v62 = 0LL;
          v58[3] = 0;
          v61 = 0;
          v59 = 0LL;
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v53, (struct _DEVBITMAPINFO *)v58, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0)
            || (v42 = *(void (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct SURFACE **, struct _POINTL *))(v40 + 2832)) == 0LL )
          {
LABEL_55:
            SURFMEM::~SURFMEM((SURFMEM *)&v53);
            return v18;
          }
          v42((unsigned __int64)&v53->hdev & -(__int64)(v53 != 0LL), v52, 0LL, pxlo, &v62, v49);
          hdev = 0LL;
          p_hdev = (struct _POINTL *)&hdev;
          v50 = v53;
          v44 = Gre::Base::Globals(v43);
          v11 = v51;
          v25 = (struct SURFACE *)v50;
          v26 = (XLATEOBJ *)((char *)v44 + 4664);
        }
        else
        {
          v26 = pxlo;
          p_hdev = v49;
        }
        if ( psoTrg->iBitmapFormat <= 6 )
        {
          BltLnk(
            p_pvScan0,
            v25,
            v57,
            (struct ECLIPOBJ *)pco,
            (struct XLATE *)v26,
            prclTrg,
            p_hdev,
            v56,
            pbo,
            pptlBrush,
            v11);
          SURFMEM::~SURFMEM((SURFMEM *)&v53);
          return 1;
        }
        v18 = 1;
        goto LABEL_55;
      }
LABEL_46:
      vDIBSolidBlt(p_pvScan0, prclTrg, pco, iSolidColor, 1);
      return 1;
    case 0xCCAAu:
      if ( v50 )
        goto LABEL_24;
      if ( pbo->pvRbrush )
        return 1;
      x = v13->x;
      iTransColor = pbo->iSolidColor;
      prclSrc.right = v13->x + prclTrg->right - prclTrg->left;
      v33 = prclTrg->bottom - prclTrg->top;
      prclSrc.left = x;
      y = v13->y;
      prclSrc.bottom = y + v33;
      prclSrc.top = y;
      return EngTransparentBlt(psoTrg, v16, pco, pxlo, prclTrg, &prclSrc, iTransColor, 1u);
    case 0xCCCCu:
      if ( *(_WORD *)(v17 + 100) )
      {
        v45 = *(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v17 + 48) + 2832LL);
        if ( !v45 )
          return 0;
        return v45(psoTrg, v16, pco, pxlo, prclTrg, v13);
      }
      else
      {
        return EngCopyBits(psoTrg, v16, pco, pxlo, prclTrg, v13);
      }
    case 0xF0F0u:
LABEL_13:
      if ( pbo->iSolidColor != -1 )
      {
        v22 = ~pbo->iSolidColor;
        if ( (rop4 & 1) == 0 )
          v22 = pbo->iSolidColor;
        goto LABEL_16;
      }
      if ( psoTrg->iBitmapFormat == 3
        && rop4 == 61680
        && pvGetEngRbrush(pbo)
        && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
      {
        v35 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8;
LABEL_65:
        vDIBPatBltSrccopy8x8(p_pvScan0, pco, prclTrg, pbo, pptlBrush, v35);
        return 1;
      }
      v29 = psoTrg->iBitmapFormat;
      if ( v29 < 3 )
      {
        if ( v29 == 2 )
        {
          if ( rop4 == 61680 && pvGetEngRbrush(pbo) && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
          {
            v35 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8;
            goto LABEL_65;
          }
        }
        else if ( v29 == 1 && rop4 == 61680 && pvGetEngRbrush(pbo) )
        {
          pvRbrush = pbo[1].pvRbrush;
          v37 = pvRbrush[5];
          if ( v37 == 8 )
          {
            if ( pvRbrush[6] == 8 )
            {
              v35 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8;
              goto LABEL_65;
            }
          }
          else if ( v37 == 6 && pvRbrush[6] == 6 )
          {
            vDIBnPatBltSrccopy6x6(p_pvScan0, pco, prclTrg, pbo, pptlBrush, v46);
            return 1;
          }
        }
      }
      else if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
      {
        LOBYTE(v18) = rop4 != 61680;
        v47 = v18;
LABEL_44:
        vDIBPatBlt(p_pvScan0, pco, prclTrg, pbo, pptlBrush, v47);
        return 1;
      }
      goto LABEL_24;
    case 0xFFFFu:
LABEL_38:
      v22 = -(rop4 != 0);
LABEL_16:
      vDIBSolidBlt(p_pvScan0, prclTrg, pco, v22, 0);
      return 1;
    default:
      goto LABEL_24;
  }
}
