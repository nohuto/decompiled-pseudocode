/*
 * XREFs of EngStretchBltROP @ 0x1C010E8F0
 * Callers:
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C026BE20 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C028E510 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0033E1C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C0038960 (EngStretchBlt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngStretchBltROP(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  __int64 v14; // r12
  __int64 v15; // rax
  DWORD v16; // r10d
  __int64 v17; // r13
  ULONG v18; // eax
  LONG left; // ecx
  __int64 v20; // rbx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  __int64 v24; // r9
  int v25; // esi
  LONG v26; // ecx
  LONG v27; // edx
  int v28; // eax
  int (*v29)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v30; // r8
  _DWORD *v32; // rax
  int v33; // edx
  __int64 v34; // rcx
  int v35; // edx
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rsi
  SURFOBJ *v37; // r13
  SURFOBJ *v38; // r15
  SURFOBJ *v39; // r8
  __int64 v40; // rax
  LONG v41; // edx
  LONG v42; // r8d
  LONG x; // edx
  LONG y; // r8d
  LONG v45; // ecx
  LONG v46; // edx
  bool v47; // cc
  int v48; // eax
  int v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+64h] [rbp-9Ch]
  POINTL v51; // [rsp+70h] [rbp-90h] BYREF
  ULONG v52; // [rsp+78h] [rbp-88h]
  SURFOBJ *psoSrca; // [rsp+80h] [rbp-80h]
  SURFOBJ *v54; // [rsp+88h] [rbp-78h]
  int v55; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v56; // [rsp+94h] [rbp-6Ch]
  __int128 v57; // [rsp+9Ch] [rbp-64h]
  int v58; // [rsp+ACh] [rbp-54h]
  SURFOBJ *v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h] BYREF
  char v61; // [rsp+C0h] [rbp-40h]
  int v62; // [rsp+C4h] [rbp-3Ch]
  POINTL *v63; // [rsp+C8h] [rbp-38h]
  POINTL *v64; // [rsp+D0h] [rbp-30h]
  XLATEOBJ *v65; // [rsp+D8h] [rbp-28h]
  CLIPOBJ *v66; // [rsp+E0h] [rbp-20h]
  BRUSHOBJ *v67; // [rsp+E8h] [rbp-18h]
  RECTL v68; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v69; // [rsp+100h] [rbp+0h] BYREF
  RECTL v70; // [rsp+110h] [rbp+10h] BYREF

  v65 = pxlo;
  v51 = (POINTL)pca;
  v64 = pptlHTOrg;
  v54 = psoDest;
  psoSrca = psoSrc;
  v63 = pptlMask;
  v67 = pbo;
  v66 = pco;
  v59 = psoMask;
  v14 = SURFOBJ_TO_SURFACE(psoDest);
  v15 = SURFOBJ_TO_SURFACE(psoSrc);
  v16 = rop4;
  v17 = v15;
  if ( rop4 != 52428 && rop4 != 43724 )
  {
    v18 = iMode;
    if ( iMode == 4 )
      v18 = 3;
    left = prclDest->left;
    v20 = 0LL;
    v52 = v18;
    right = prclDest->right;
    v49 = 0;
    v50 = 0;
    if ( left > right )
    {
      prclDest->left = right;
      prclDest->right = left;
      v49 = 1;
    }
    top = prclDest->top;
    bottom = prclDest->bottom;
    if ( top > bottom )
    {
      prclDest->top = bottom;
      prclDest->bottom = top;
      v50 = 1;
    }
    v55 = 0;
    v56 = 0LL;
    v57 = 0uLL;
    v24 = 0LL;
    v58 = 0;
    *(_QWORD *)&v69.left = 0LL;
    LOBYTE(v69.right) = 0;
    v25 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
    v69.bottom = 0;
    v60 = 0LL;
    v61 = 0;
    v62 = 0;
    if ( (unsigned __int8)rop4 != BYTE1(rop4) )
      v25 |= 0x10000u;
    v51 = 0LL;
    if ( (v25 & 0x10000) != 0 )
    {
      v40 = SURFOBJ_TO_SURFACE(v59);
      v41 = prclDest->right - prclDest->left;
      v42 = prclDest->bottom - prclDest->top;
      v56 = __PAIR64__(v42, v41);
      v55 = 1;
      *(_QWORD *)((char *)&v57 + 4) = 0LL;
      LODWORD(v40) = *(_DWORD *)(v40 + 112) & 0x40000;
      *(_QWORD *)&v68.left = 0LL;
      HIDWORD(v57) = v40;
      v68.right = v41;
      v68.bottom = v42;
      if ( v49 )
      {
        v68.left = v41;
        v68.right = 0;
      }
      if ( v50 )
      {
        v68.top = v42;
        v68.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v60, (struct _DEVBITMAPINFO *)&v55, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v60 )
        goto LABEL_23;
      x = v63->x;
      y = v63->y;
      v70.right = v63->x + prclSrc->right - prclSrc->left;
      v70.bottom = y + prclSrc->bottom - prclSrc->top;
      v70.left = x;
      v70.top = y;
      if ( !EngStretchBlt((SURFOBJ *)(v60 + 24), v59, 0LL, 0LL, 0LL, 0LL, &v51, &v68, &v70, 0LL, v52) )
        goto LABEL_23;
      v24 = *(_QWORD *)&v69.left;
    }
    if ( (v25 & 0xD4) != 0 )
    {
      v26 = prclDest->right - prclDest->left;
      v27 = prclDest->bottom - prclDest->top;
      v55 = *(_DWORD *)(v17 + 96);
      v28 = *(_DWORD *)(v17 + 112) & 0x40000;
      v56 = __PAIR64__(v27, v26);
      *(_QWORD *)((char *)&v57 + 4) = 0LL;
      HIDWORD(v57) = v28;
      *(_QWORD *)&v68.left = 0LL;
      v68.right = v26;
      v68.bottom = v27;
      if ( v49 )
      {
        v68.left = v26;
        v68.right = 0;
      }
      if ( v50 )
      {
        v68.top = v27;
        v68.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v69, (struct _DEVBITMAPINFO *)&v55, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !*(_QWORD *)&v69.left
        || !EngStretchBlt(
              (SURFOBJ *)(*(_QWORD *)&v69.left + 24LL),
              psoSrca,
              0LL,
              0LL,
              0LL,
              0LL,
              &v51,
              &v68,
              prclSrc,
              0LL,
              v52) )
      {
        goto LABEL_23;
      }
      v24 = *(_QWORD *)&v69.left;
    }
    if ( v24 )
      v20 = v24 + 24;
    v29 = SURFACE::pfnBitBlt((SURFACE *)v14);
    LODWORD(v20) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))v29)(
                     v54,
                     v20,
                     v30,
                     v66,
                     v65,
                     prclDest,
                     &v51,
                     &v51,
                     v67,
                     v64,
                     rop4);
LABEL_23:
    SURFMEM::~SURFMEM((SURFMEM *)&v60);
    SURFMEM::~SURFMEM((SURFMEM *)&v69);
    return v20;
  }
  v32 = *(_DWORD **)(v15 + 48);
  v33 = *(_DWORD *)(v14 + 112);
  ++*(_DWORD *)(v14 + 92);
  v34 = *(_QWORD *)(v14 + 48);
  v35 = v33 & 2;
  if ( v35 )
    v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v34 + 2872);
  else
    v36 = EngStretchBlt;
  if ( v35 && (*(_DWORD *)(v34 + 56) & 0x20000) == 0 )
  {
    if ( iMode == 4 && (*(_BYTE *)(v34 + 1848) & 0x10) == 0 )
      v36 = EngStretchBlt;
    if ( *(_WORD *)(v17 + 100) == 1 && v32 && (v32[14] & 0x20000) != 0 )
    {
      v45 = v32[652];
      if ( prclSrc->left < v45 )
        goto LABEL_55;
      v46 = v32[653];
      if ( prclSrc->top < v46 || prclSrc->right > *(_DWORD *)(v17 + 56) + v45 )
        goto LABEL_55;
      v47 = prclSrc->bottom <= v46 + *(_DWORD *)(v17 + 60);
    }
    else
    {
      if ( prclSrc->left < 0 || prclSrc->top < 0 || prclSrc->right > *(_DWORD *)(v17 + 56) )
        goto LABEL_55;
      v47 = prclSrc->bottom <= *(_DWORD *)(v17 + 60);
    }
    if ( v47 )
    {
LABEL_56:
      v69 = *prclDest;
      ERECTL::vOrder((ERECTL *)&v69);
      v38 = psoSrca;
      v37 = v54;
      if ( psoSrca == v54 )
      {
        v48 = bIntersect(prclSrc, &v69);
        v16 = rop4;
        if ( v48 )
          v36 = EngStretchBlt;
      }
      goto LABEL_28;
    }
LABEL_55:
    v36 = EngStretchBlt;
    goto LABEL_56;
  }
  v37 = v54;
  v38 = psoSrca;
LABEL_28:
  v39 = v59;
  if ( v16 == 52428 )
    v39 = 0LL;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v36)(
           v37,
           v38,
           v39,
           v66,
           v65,
           v51,
           v64,
           prclDest,
           prclSrc,
           v63,
           iMode);
}
