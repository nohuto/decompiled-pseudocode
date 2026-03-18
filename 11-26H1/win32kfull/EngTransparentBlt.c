/*
 * XREFs of EngTransparentBlt @ 0x1400609D0
 * Callers:
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x140060540 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1400625A0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x14030EBE0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x140322620 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x14032F2F0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1400601D4 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x140061578 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1400E5094 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

BOOL __stdcall EngTransparentBlt(
        SURFOBJ *psoDst,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  CLIPOBJ *v8; // r12
  SURFOBJ *v10; // rsi
  int v11; // edi
  unsigned __int64 v12; // r15
  struct SURFACE *v13; // rbx
  HDEV v14; // rax
  struct SURFACE *v15; // rax
  HDEV v16; // r13
  unsigned __int64 iDComplexity; // rcx
  struct _RECTL rclBounds; // xmm0
  int v19; // ebx
  unsigned __int64 bottom; // rcx
  struct _XLATEOBJ *v21; // rax
  unsigned int iBitmapFormat; // r9d
  unsigned int v23; // r8d
  LONG top; // r10d
  LONG left; // edx
  unsigned int i; // r13d
  LONG right; // ecx
  int v29; // r11d
  HDEV v30; // rax
  __int64 (__fastcall *v31)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int); // rax
  __int64 v32; // rbx
  struct Gre::Base::SESSION_GLOBALS *v33; // r9
  BOOL (__stdcall *v34)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  bool v35; // cf
  LONG v36; // [rsp+64h] [rbp-324h]
  LONG v37; // [rsp+68h] [rbp-320h]
  HDEV hdev; // [rsp+70h] [rbp-318h] BYREF
  int v39; // [rsp+78h] [rbp-310h]
  struct _XLATEOBJ *v40; // [rsp+80h] [rbp-308h]
  struct SURFACE *v41; // [rsp+88h] [rbp-300h]
  CLIPOBJ *v42; // [rsp+90h] [rbp-2F8h] BYREF
  __int64 v43; // [rsp+98h] [rbp-2F0h] BYREF
  char v44; // [rsp+A0h] [rbp-2E8h]
  int v45; // [rsp+A4h] [rbp-2E4h]
  __int64 v46; // [rsp+A8h] [rbp-2E0h] BYREF
  char v47; // [rsp+B0h] [rbp-2D8h]
  int v48; // [rsp+B4h] [rbp-2D4h]
  SURFOBJ *v49; // [rsp+B8h] [rbp-2D0h]
  _DWORD *v50; // [rsp+C0h] [rbp-2C8h]
  LONG *p_lDelta; // [rsp+C8h] [rbp-2C0h]
  struct SURFACE *v52; // [rsp+D0h] [rbp-2B8h]
  struct SURFACE *v53; // [rsp+E0h] [rbp-2A8h]
  struct SURFACE *v54; // [rsp+E8h] [rbp-2A0h]
  unsigned __int64 v55; // [rsp+F0h] [rbp-298h]
  CLIPOBJ *v56; // [rsp+F8h] [rbp-290h]
  _DWORD v57[2]; // [rsp+100h] [rbp-288h] BYREF
  __int64 v58; // [rsp+108h] [rbp-280h]
  int v59; // [rsp+110h] [rbp-278h]
  int v60; // [rsp+114h] [rbp-274h]
  _QWORD v61[3]; // [rsp+120h] [rbp-268h] BYREF
  int v62; // [rsp+138h] [rbp-250h]
  int v63; // [rsp+13Ch] [rbp-24Ch]
  int v64; // [rsp+140h] [rbp-248h]
  int v65; // [rsp+144h] [rbp-244h]
  int v66; // [rsp+148h] [rbp-240h]
  LONG lDelta; // [rsp+14Ch] [rbp-23Ch]
  int v68; // [rsp+150h] [rbp-238h]
  int v69; // [rsp+154h] [rbp-234h]
  LONG v70; // [rsp+158h] [rbp-230h]
  int v71; // [rsp+15Ch] [rbp-22Ch]
  int v72; // [rsp+160h] [rbp-228h]
  struct SURFACE *v73; // [rsp+168h] [rbp-220h]
  unsigned int v74; // [rsp+1ACh] [rbp-1DCh]
  unsigned int v75; // [rsp+1B0h] [rbp-1D8h]
  ULONG v76; // [rsp+1B4h] [rbp-1D4h]
  struct _RECTL v77; // [rsp+1C0h] [rbp-1C8h] BYREF
  RECTL v78; // [rsp+1D0h] [rbp-1B8h] BYREF
  struct _RECTL v79; // [rsp+1E0h] [rbp-1A8h] BYREF
  unsigned int v80; // [rsp+1F0h] [rbp-198h] BYREF
  _OWORD v81[20]; // [rsp+1F4h] [rbp-194h]

  v40 = pxlo;
  v8 = pco;
  v10 = psoDst;
  v49 = psoDst;
  v42 = pco;
  v11 = 0;
  if ( !psoDst->iType && !psoSrc->iType
    || ulReserved
    || prclDst->right - prclDst->left != prclSrc->right - prclSrc->left
    || prclDst->bottom - prclDst->top != prclSrc->bottom - prclSrc->top )
  {
    v12 = (unsigned __int64)&psoDst[-1].pvScan0 & -(__int64)(psoDst != 0LL);
    v41 = (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL));
    v77 = *prclDst;
    v78 = *prclSrc;
    hdev = psoDst->hdev;
    if ( hdev )
      PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDst, 0LL, 0);
    hdev = psoSrc->hdev;
    if ( hdev )
      PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoSrc, 0LL, 0);
    v56 = v8;
    v46 = 0LL;
    v47 = 0;
    v48 = 0;
    v13 = psSetupTransparentSrcSurface(
            v41,
            (struct SURFACE *)((unsigned __int64)&v10[-1].pvScan0 & -(__int64)(v10 != 0LL)),
            &v77,
            0LL,
            &v78,
            (struct SURFMEM *)&v46,
            1u,
            iTransColor);
    if ( !v13 )
      goto LABEL_52;
    if ( v77.left == v77.right )
    {
      v11 = 1;
      goto LABEL_52;
    }
    hdev = (HDEV)((char *)v13 + 24);
    v43 = 0LL;
    v44 = 0;
    v45 = 0;
    v52 = (struct SURFACE *)((unsigned __int64)&v10[-1].pvScan0 & -(__int64)(v10 != 0LL));
    v41 = v52;
    v54 = v52;
    v79 = v77;
    v14 = v10->hdev;
    v55 = v12 + 24;
    if ( *((_WORD *)v52 + 50) && (*((_DWORD *)v14 + 10) & 0x80u) != 0 )
    {
      v11 = GreTransparentBltPS(v10, (struct _SURFOBJ *)((char *)v13 + 24), v8, v40, &v77, &v78, iTransColor);
      SURFMEM::~SURFMEM((SURFMEM *)&v43);
LABEL_52:
      SURFMEM::~SURFMEM((SURFMEM *)&v46);
      return v11;
    }
    v15 = psSetupDstSurface(
            (struct SURFACE *)((unsigned __int64)&v10[-1].pvScan0 & -(__int64)(v10 != 0LL)),
            &v77,
            (struct SURFMEM *)&v43,
            0,
            1);
    v53 = v15;
    if ( !v15 )
    {
LABEL_48:
      SURFMEM::~SURFMEM((SURFMEM *)&v43);
      SURFMEM::~SURFMEM((SURFMEM *)&v46);
      return 0;
    }
    if ( v15 != (struct SURFACE *)v12 )
    {
      v10 = (SURFOBJ *)((char *)v15 + 24);
      v49 = (SURFOBJ *)((char *)v15 + 24);
      v8 = 0LL;
      v42 = 0LL;
    }
    v72 = 0;
    v76 = iTransColor;
    v16 = hdev;
    v50 = hdev + 16;
    v66 = *((_DWORD *)hdev + 16);
    p_lDelta = &v10->lDelta;
    lDelta = v10->lDelta;
    v73 = v13;
    memset_0(&v80, 0, 0x144uLL);
    if ( v8 && (iDComplexity = v8->iDComplexity) != 0 )
    {
      iDComplexity = (unsigned int)(iDComplexity - 1);
      if ( (_DWORD)iDComplexity )
      {
        if ( (_DWORD)iDComplexity == 2 )
        {
          v19 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v8, 0, 0, 4u, 0x14u);
          goto LABEL_17;
        }
LABEL_16:
        v19 = 0;
LABEL_17:
        bottom = (unsigned __int64)Gre::Base::Globals((Gre::Base *)iDComplexity);
        v21 = v40;
        if ( !v40 )
          v21 = (struct _XLATEOBJ *)(bottom + 4664);
        v61[0] = v21;
        v62 = 1;
        v65 = 1;
        iBitmapFormat = v10->iBitmapFormat;
        v75 = iBitmapFormat;
        v23 = *((_DWORD *)v16 + 18);
        v74 = v23;
        top = v77.top;
        left = v77.left;
        if ( v19 )
          goto LABEL_62;
        while ( v23 <= 6 && iBitmapFormat <= 6 || !v80 )
        {
          for ( i = 0; ; ++i )
          {
            LODWORD(v40) = i;
            if ( i >= v80 )
              break;
            v36 = v81[i];
            if ( v36 < left )
            {
              LODWORD(v81[i]) = left;
              v36 = left;
            }
            v37 = DWORD2(v81[i]);
            right = v77.right;
            if ( v37 > v77.right )
            {
              DWORD2(v81[i]) = v77.right;
              v37 = right;
            }
            v29 = DWORD1(v81[i]);
            if ( v29 < top )
            {
              DWORD1(v81[i]) = top;
              v29 = top;
            }
            bottom = HIDWORD(v81[i]);
            v39 = bottom;
            if ( (int)bottom > v77.bottom )
            {
              bottom = (unsigned int)v77.bottom;
              HIDWORD(v81[i]) = v77.bottom;
              v39 = bottom;
            }
            if ( v29 < (int)bottom && v36 < v37 )
            {
              v63 = v37 - v36;
              v64 = v39 - v29;
              v68 = v36 - left + v78.left;
              v69 = v37 + v78.left - left;
              v70 = v36;
              v71 = v29;
              v61[1] = *((_QWORD *)hdev + 7) + *v50 * (v29 + v78.top - top);
              v61[2] = (char *)v10->pvScan0 + *p_lDelta * v29;
              if ( (*(_DWORD *)(v61[0] + 4LL) & 1) != 0 && v23 == iBitmapFormat )
                off_140358000[7 * v23 - 7]((struct BLTINFO *)v61);
              else
                (*(&off_140358000[7 * v23 - 7] + iBitmapFormat))((struct BLTINFO *)v61);
              top = v77.top;
              left = v77.left;
              iBitmapFormat = v75;
              v23 = v74;
            }
          }
          if ( !v19 )
          {
            if ( (struct SURFACE *)v12 != v53 )
            {
              v32 = *((_QWORD *)v54 + 6);
              v42 = 0LL;
              v33 = Gre::Base::Globals((Gre::Base *)bottom);
              if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
                v34 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v32 + 2832);
              else
                v34 = EngCopyBits;
              v35 = v41 != 0LL;
              v41 = (struct SURFACE *)-(__int64)v41;
              ((void (__fastcall *)(unsigned __int64, SURFOBJ *, CLIPOBJ *, char *, struct _RECTL *, CLIPOBJ **))v34)(
                v55 & -(__int64)v35,
                v10,
                v56,
                (char *)v33 + 4664,
                &v79,
                &v42);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v43);
            SURFMEM::~SURFMEM((SURFMEM *)&v46);
            return 1;
          }
LABEL_62:
          v19 = XCLIPOBJ::bEnum((XCLIPOBJ *)v8, 0x144u, &v80, 0LL);
          top = v77.top;
          left = v77.left;
          iBitmapFormat = v75;
          v23 = v74;
        }
        goto LABEL_48;
      }
      rclBounds = v8->rclBounds;
    }
    else
    {
      rclBounds = v77;
    }
    v80 = 1;
    v81[0] = rclBounds;
    goto LABEL_16;
  }
  v57[1] = 0;
  v60 = 0;
  v30 = psoDst->hdev;
  if ( !v30 )
    v30 = psoSrc->hdev;
  v57[0] = iTransColor;
  v59 = 0;
  v58 = 0LL;
  v31 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int))*((_QWORD *)v30 + 353);
  if ( !v31 )
    return 0;
  return v31(psoDst, psoSrc, 0LL, pco, pxlo, prclDst, prclSrc, 0LL, v57, 0LL, 52394);
}
