/*
 * XREFs of EngStretchBltROP @ 0x1401B5900
 * Callers:
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1401B5330 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x14030E390 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     EngStretchBlt @ 0x1400E65F0 (EngStretchBlt.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  SURFACE *v14; // rsi
  SURFOBJ *v15; // rbx
  __int64 p_cy; // r10
  __int64 p_sizlBitmap; // r9
  __int64 p_iType; // r11
  __int64 p_hdev; // rax
  ULONG v20; // eax
  LONG right; // r9d
  int v22; // r12d
  LONG left; // eax
  LONG top; // eax
  LONG v25; // r11d
  LONG bottom; // r10d
  int v27; // edx
  int v28; // edx
  int v29; // eax
  LONG v30; // ecx
  LONG v31; // edx
  int v32; // eax
  int (*v33)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  _DWORD *v35; // rax
  __int64 v36; // rcx
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rsi
  SURFOBJ *v38; // r15
  LONG v39; // ecx
  LONG v40; // edx
  bool v41; // cc
  __int64 v42; // rax
  LONG v43; // r9d
  LONG v44; // r10d
  int v45; // eax
  LONG x; // edx
  LONG y; // r8d
  LONG v48; // ecx
  int v49; // [rsp+64h] [rbp-9Ch]
  POINTL v50; // [rsp+68h] [rbp-98h] BYREF
  LONG v51; // [rsp+70h] [rbp-90h]
  ULONG v52; // [rsp+74h] [rbp-8Ch]
  SURFOBJ *v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+80h] [rbp-80h]
  SURFOBJ *psoSrca; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  char v57; // [rsp+98h] [rbp-68h]
  int v58; // [rsp+9Ch] [rbp-64h]
  __int128 v59; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B0h] [rbp-50h]
  __int64 p_iBitmapFormat; // [rsp+C0h] [rbp-40h]
  __int64 p_hsurf; // [rsp+C8h] [rbp-38h]
  POINTL *v63; // [rsp+D0h] [rbp-30h]
  POINTL *v64; // [rsp+D8h] [rbp-28h]
  XLATEOBJ *v65; // [rsp+E0h] [rbp-20h]
  CLIPOBJ *v66; // [rsp+E8h] [rbp-18h]
  BRUSHOBJ *v67; // [rsp+F0h] [rbp-10h]
  RECTL v68; // [rsp+F8h] [rbp-8h] BYREF
  RECTL v69; // [rsp+108h] [rbp+8h] BYREF
  RECTL v70; // [rsp+118h] [rbp+18h] BYREF

  v63 = pptlMask;
  v65 = pxlo;
  v50 = (POINTL)pca;
  v64 = pptlHTOrg;
  v67 = pbo;
  v53 = psoDest;
  v66 = pco;
  psoSrca = psoMask;
  v14 = (SURFACE *)((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL));
  v15 = 0LL;
  if ( psoSrc )
  {
    p_iBitmapFormat = (__int64)&psoSrc->iBitmapFormat;
    p_cy = (__int64)&psoSrc->sizlBitmap.cy;
    p_hsurf = (__int64)&psoSrc[1].hsurf;
    p_sizlBitmap = (__int64)&psoSrc->sizlBitmap;
    p_iType = (__int64)&psoSrc->iType;
    p_hdev = (__int64)&psoSrc->hdev;
  }
  else
  {
    p_hdev = 48LL;
    p_iBitmapFormat = 96LL;
    p_hsurf = 112LL;
    p_cy = 60LL;
    p_sizlBitmap = 56LL;
    p_iType = 100LL;
  }
  if ( rop4 == 52428 || rop4 == 43724 )
  {
    v35 = *(_DWORD **)p_hdev;
    ++*((_DWORD *)v14 + 23);
    v36 = *(_QWORD *)(((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL)) + 0x30);
    if ( (*((_DWORD *)v14 + 28) & 2) == 0 )
    {
      v37 = EngStretchBlt;
LABEL_26:
      v38 = v53;
LABEL_27:
      if ( rop4 != 52428 )
        v15 = psoSrca;
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v37)(
               v38,
               psoSrc,
               v15,
               v66,
               v65,
               v50,
               v64,
               prclDest,
               prclSrc,
               v63,
               iMode);
    }
    v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v36 + 2840);
    if ( (*(_DWORD *)(v36 + 40) & 0x20000) != 0 )
      goto LABEL_26;
    if ( iMode == 4 && (*(_BYTE *)(v36 + 1808) & 0x10) == 0 )
      v37 = EngStretchBlt;
    if ( *(_WORD *)p_iType == 1 && v35 && (v35[10] & 0x20000) != 0 )
    {
      v39 = v35[644];
      if ( prclSrc->left < v39 )
        goto LABEL_57;
      v40 = v35[645];
      if ( prclSrc->top < v40 || prclSrc->right > *(_DWORD *)p_sizlBitmap + v39 )
        goto LABEL_57;
      v41 = prclSrc->bottom <= v40 + *(_DWORD *)p_cy;
    }
    else
    {
      if ( prclSrc->left < 0 || prclSrc->top < 0 || prclSrc->right > *(_DWORD *)p_sizlBitmap )
        goto LABEL_57;
      v41 = prclSrc->bottom <= *(_DWORD *)p_cy;
    }
    if ( v41 )
    {
LABEL_58:
      v69 = *prclDest;
      ERECTL::vOrder((ERECTL *)&v69);
      v38 = v53;
      if ( psoSrc == v53 && (unsigned int)bIntersect(prclSrc, &v69) )
        v37 = EngStretchBlt;
      goto LABEL_27;
    }
LABEL_57:
    v37 = EngStretchBlt;
    goto LABEL_58;
  }
  v20 = 3;
  right = prclDest->right;
  v22 = 0;
  if ( iMode != 4 )
    v20 = iMode;
  v52 = v20;
  left = prclDest->left;
  v49 = 0;
  v51 = left;
  if ( left > right )
  {
    prclDest->left = right;
    v51 = right;
    right = left;
    prclDest->right = left;
    v49 = 1;
  }
  top = prclDest->top;
  v25 = top;
  bottom = prclDest->bottom;
  if ( top > bottom )
  {
    prclDest->top = bottom;
    v25 = bottom;
    bottom = top;
    prclDest->bottom = top;
    v22 = 1;
  }
  *(_QWORD *)&v69.left = 0LL;
  v59 = 0LL;
  LOBYTE(v69.right) = 0;
  v60 = 0LL;
  v27 = (unsigned __int8)gajRop3[BYTE1(rop4)];
  v69.bottom = 0;
  v56 = 0LL;
  v57 = 0;
  v28 = (unsigned __int8)gajRop3[(unsigned __int8)rop4] | v27;
  v58 = 0;
  v50 = 0LL;
  v29 = v28 | 0x10000;
  if ( (unsigned __int8)rop4 == BYTE1(rop4) )
    v29 = v28;
  v54 = v29;
  if ( (v29 & 0x10000) != 0 )
  {
    if ( psoSrca )
      v42 = (__int64)&psoSrca[1].hsurf;
    else
      v42 = 112LL;
    v43 = right - v51;
    v44 = bottom - v25;
    v45 = *(_DWORD *)v42 & 0x40000;
    LODWORD(v59) = 1;
    *(_QWORD *)((char *)&v59 + 4) = __PAIR64__(v44, v43);
    *(_QWORD *)&v60 = 0LL;
    DWORD2(v60) = v45;
    *(_QWORD *)&v68.left = 0LL;
    v68.right = v43;
    v68.bottom = v44;
    if ( v49 )
    {
      v68.left = v43;
      v68.right = 0;
    }
    if ( v22 )
    {
      v68.top = v44;
      v68.bottom = 0;
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v56, (struct _DEVBITMAPINFO *)&v59, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
    if ( !v56
      || (x = v63->x,
          y = v63->y,
          v70.right = v63->x + prclSrc->right - prclSrc->left,
          v48 = y + prclSrc->bottom - prclSrc->top,
          v70.left = x,
          v70.bottom = v48,
          v70.top = y,
          !EngStretchBlt(
             (SURFOBJ *)((v56 + 24) & -(__int64)(v56 != 0)),
             psoSrca,
             0LL,
             0LL,
             0LL,
             0LL,
             &v50,
             &v68,
             &v70,
             0LL,
             v52)) )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v56);
      SURFMEM::~SURFMEM((SURFMEM *)&v69);
      return 0;
    }
    LOBYTE(v29) = v54;
  }
  if ( (v29 & 0xD4) == 0 )
    goto LABEL_21;
  v30 = prclDest->right - prclDest->left;
  v31 = prclDest->bottom - prclDest->top;
  LODWORD(v59) = *(_DWORD *)p_iBitmapFormat;
  *(_QWORD *)((char *)&v59 + 4) = __PAIR64__(v31, v30);
  *(_QWORD *)&v60 = 0LL;
  v32 = *(_DWORD *)p_hsurf & 0x40000;
  *(_QWORD *)&v68.left = 0LL;
  DWORD2(v60) = v32;
  v68.right = v30;
  v68.bottom = v31;
  if ( v49 )
  {
    v68.left = v30;
    v68.right = 0;
  }
  if ( v22 )
  {
    v68.top = v31;
    v68.bottom = 0;
  }
  SURFMEM::bCreateDIB((SURFMEM *)&v69, (struct _DEVBITMAPINFO *)&v59, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
  if ( *(_QWORD *)&v69.left )
  {
    if ( EngStretchBlt(
           (SURFOBJ *)((*(_QWORD *)&v69.left + 24LL) & -(__int64)(*(_QWORD *)&v69.left != 0LL)),
           psoSrc,
           0LL,
           0LL,
           0LL,
           0LL,
           &v50,
           &v68,
           prclSrc,
           0LL,
           v52) )
    {
LABEL_21:
      v33 = SURFACE::pfnBitBlt(v14);
      LODWORD(v15) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))v33)(
                       v53,
                       (*(_QWORD *)&v69.left + 24LL) & -(__int64)(*(_QWORD *)&v69.left != 0LL),
                       (v56 + 24) & -(__int64)(v56 != 0),
                       v66,
                       v65,
                       prclDest,
                       &v50,
                       &v50,
                       v67,
                       v64,
                       rop4);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v56);
  SURFMEM::~SURFMEM((SURFMEM *)&v69);
  return (int)v15;
}
