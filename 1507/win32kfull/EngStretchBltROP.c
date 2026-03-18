/*
 * XREFs of EngStretchBltROP @ 0x1C00A10F0
 * Callers:
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C026EDF0 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C028FAB0 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AD610 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     EngStretchBlt @ 0x1C0035220 (EngStretchBlt.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009CE2C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
  POINTL v49; // [rsp+60h] [rbp-A0h] BYREF
  DWORD v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+6Ch] [rbp-94h]
  int v52; // [rsp+70h] [rbp-90h]
  ULONG v53; // [rsp+74h] [rbp-8Ch]
  SURFOBJ *psoSrca; // [rsp+78h] [rbp-88h]
  SURFOBJ *v55; // [rsp+80h] [rbp-80h]
  int v56; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v57; // [rsp+8Ch] [rbp-74h]
  __int128 v58; // [rsp+94h] [rbp-6Ch]
  int v59; // [rsp+A4h] [rbp-5Ch]
  SURFOBJ *v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h] BYREF
  char v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BCh] [rbp-44h]
  POINTL *v64; // [rsp+C0h] [rbp-40h]
  POINTL *v65; // [rsp+C8h] [rbp-38h]
  CLIPOBJ *v66; // [rsp+D0h] [rbp-30h]
  XLATEOBJ *v67; // [rsp+D8h] [rbp-28h]
  BRUSHOBJ *v68; // [rsp+E0h] [rbp-20h]
  RECTL v69; // [rsp+E8h] [rbp-18h] BYREF
  RECTL v70; // [rsp+F8h] [rbp-8h] BYREF
  RECTL v71; // [rsp+108h] [rbp+8h] BYREF

  v67 = pxlo;
  v49 = (POINTL)pca;
  v65 = pptlHTOrg;
  v55 = psoDest;
  psoSrca = psoSrc;
  v64 = pptlMask;
  v50 = rop4;
  v68 = pbo;
  v66 = pco;
  v60 = psoMask;
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
    v53 = v18;
    right = prclDest->right;
    v52 = 0;
    v51 = 0;
    if ( left > right )
    {
      prclDest->left = right;
      prclDest->right = left;
      v52 = 1;
    }
    top = prclDest->top;
    bottom = prclDest->bottom;
    if ( top > bottom )
    {
      prclDest->top = bottom;
      prclDest->bottom = top;
      v51 = 1;
    }
    v56 = 0;
    v57 = 0LL;
    v58 = 0uLL;
    v24 = 0LL;
    v59 = 0;
    *(_QWORD *)&v70.left = 0LL;
    LOBYTE(v70.right) = 0;
    v25 = (unsigned __int8)gajRop3[(unsigned __int8)rop4] | (unsigned __int8)gajRop3[BYTE1(rop4)];
    v70.bottom = 0;
    v61 = 0LL;
    v62 = 0;
    v63 = 0;
    if ( (unsigned __int8)rop4 != BYTE1(rop4) )
      v25 |= 0x10000u;
    v49 = 0LL;
    if ( (v25 & 0x10000) != 0 )
    {
      v40 = SURFOBJ_TO_SURFACE(v60);
      v41 = prclDest->right - prclDest->left;
      v42 = prclDest->bottom - prclDest->top;
      v57 = __PAIR64__(v42, v41);
      v56 = 1;
      *(_QWORD *)((char *)&v58 + 4) = 0LL;
      LODWORD(v40) = *(_DWORD *)(v40 + 112) & 0x40000;
      *(_QWORD *)&v69.left = 0LL;
      HIDWORD(v58) = v40;
      v69.right = v41;
      v69.bottom = v42;
      if ( v52 )
      {
        v69.left = v41;
        v69.right = 0;
      }
      if ( v51 )
      {
        v69.top = v42;
        v69.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v61, (struct _DEVBITMAPINFO *)&v56, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v61 )
        goto LABEL_23;
      x = v64->x;
      y = v64->y;
      v71.right = v64->x + prclSrc->right - prclSrc->left;
      v71.bottom = y + prclSrc->bottom - prclSrc->top;
      v71.left = x;
      v71.top = y;
      if ( !EngStretchBlt((SURFOBJ *)(v61 + 24), v60, 0LL, 0LL, 0LL, 0LL, &v49, &v69, &v71, 0LL, v53) )
        goto LABEL_23;
      v24 = *(_QWORD *)&v70.left;
    }
    if ( (v25 & 0xD4) != 0 )
    {
      v26 = prclDest->right - prclDest->left;
      v27 = prclDest->bottom - prclDest->top;
      v56 = *(_DWORD *)(v17 + 96);
      v28 = *(_DWORD *)(v17 + 112) & 0x40000;
      v57 = __PAIR64__(v27, v26);
      *(_QWORD *)((char *)&v58 + 4) = 0LL;
      HIDWORD(v58) = v28;
      *(_QWORD *)&v69.left = 0LL;
      v69.right = v26;
      v69.bottom = v27;
      if ( v52 )
      {
        v69.left = v26;
        v69.right = 0;
      }
      if ( v51 )
      {
        v69.top = v27;
        v69.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v70, (struct _DEVBITMAPINFO *)&v56, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !*(_QWORD *)&v70.left
        || !EngStretchBlt(
              (SURFOBJ *)(*(_QWORD *)&v70.left + 24LL),
              psoSrca,
              0LL,
              0LL,
              0LL,
              0LL,
              &v49,
              &v69,
              prclSrc,
              0LL,
              v53) )
      {
        goto LABEL_23;
      }
      v24 = *(_QWORD *)&v70.left;
    }
    if ( v24 )
      v20 = v24 + 24;
    v29 = SURFACE::pfnBitBlt((SURFACE *)v14);
    LODWORD(v20) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))v29)(
                     v55,
                     v20,
                     v30,
                     v66,
                     v67,
                     prclDest,
                     &v49,
                     &v49,
                     v68,
                     v65,
                     v50);
LABEL_23:
    SURFMEM::~SURFMEM((SURFMEM *)&v61);
    SURFMEM::~SURFMEM((SURFMEM *)&v70);
    return v20;
  }
  v32 = *(_DWORD **)(v15 + 48);
  v33 = *(_DWORD *)(v14 + 112);
  ++*(_DWORD *)(v14 + 92);
  v34 = *(_QWORD *)(v14 + 48);
  v35 = v33 & 2;
  if ( v35 )
    v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v34 + 2880);
  else
    v36 = EngStretchBlt;
  if ( v35 && (*(_DWORD *)(v34 + 56) & 0x20000) == 0 )
  {
    if ( iMode == 4 && (*(_BYTE *)(v34 + 1848) & 0x10) == 0 )
      v36 = EngStretchBlt;
    if ( *(_WORD *)(v17 + 100) == 1 && v32 && (v32[14] & 0x20000) != 0 )
    {
      v45 = v32[652];
      if ( prclSrc->left >= v45 )
      {
        v46 = v32[653];
        if ( prclSrc->top >= v46 && prclSrc->right <= *(_DWORD *)(v17 + 56) + v45 )
        {
          v47 = prclSrc->bottom <= v46 + *(_DWORD *)(v17 + 60);
          goto LABEL_58;
        }
      }
    }
    else if ( prclSrc->left >= 0 && prclSrc->top >= 0 && prclSrc->right <= *(_DWORD *)(v17 + 56) )
    {
      v47 = prclSrc->bottom <= *(_DWORD *)(v17 + 60);
LABEL_58:
      if ( v47 )
        goto LABEL_39;
    }
    v36 = EngStretchBlt;
LABEL_39:
    v70 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v70);
    v38 = psoSrca;
    v37 = v55;
    if ( psoSrca == v55 )
    {
      v48 = bIntersect(prclSrc, &v70);
      v16 = v50;
      if ( v48 )
        v36 = EngStretchBlt;
    }
    goto LABEL_28;
  }
  v37 = v55;
  v38 = psoSrca;
LABEL_28:
  v39 = v60;
  if ( v16 == 52428 )
    v39 = 0LL;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v36)(
           v37,
           v38,
           v39,
           v66,
           v67,
           v49,
           v65,
           prclDest,
           prclSrc,
           v64,
           iMode);
}
