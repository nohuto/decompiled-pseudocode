/*
 * XREFs of EngTransparentBlt @ 0x1C00DEAF0
 * Callers:
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00E9CA0 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02891E0 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02900A0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0297F50 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AD820 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C003D804 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00DF35C (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0284214 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
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
  CLIPOBJ *v8; // r15
  SURFOBJ *v10; // rsi
  int v11; // edi
  struct SURFACE *v12; // r13
  struct SURFACE *v13; // rbx
  struct SURFACE *v14; // rcx
  struct _SURFOBJ *v15; // rbx
  HDEV v16; // rax
  struct SURFACE *v17; // rax
  struct SURFACE *v18; // r12
  struct _RECTL rclBounds; // xmm0
  XLATEOBJ *v20; // rcx
  unsigned int iBitmapFormat; // r8d
  unsigned int v22; // edx
  unsigned int i; // ebx
  __int64 v24; // rax
  struct _RECTL *v25; // r9
  int v26; // r10d
  int v27; // r11d
  int v28; // r9d
  int v29; // ecx
  HDEV v30; // rax
  unsigned int v32; // [rsp+60h] [rbp-328h]
  struct SURFACE *v34; // [rsp+68h] [rbp-320h]
  int v36; // [rsp+78h] [rbp-310h]
  LONG top; // [rsp+80h] [rbp-308h]
  __int64 v38; // [rsp+88h] [rbp-300h] BYREF
  char v39; // [rsp+90h] [rbp-2F8h]
  int v40; // [rsp+94h] [rbp-2F4h]
  struct SURFACE *v41; // [rsp+98h] [rbp-2F0h]
  SURFOBJ *v42; // [rsp+A0h] [rbp-2E8h]
  __int64 v43; // [rsp+A8h] [rbp-2E0h] BYREF
  char v44; // [rsp+B0h] [rbp-2D8h]
  int v45; // [rsp+B4h] [rbp-2D4h]
  CLIPOBJ *v46; // [rsp+B8h] [rbp-2D0h]
  RECTL *v47; // [rsp+C0h] [rbp-2C8h]
  HDEV v48; // [rsp+C8h] [rbp-2C0h] BYREF
  HDEV hdev; // [rsp+D0h] [rbp-2B8h] BYREF
  struct _RECTL *v50; // [rsp+D8h] [rbp-2B0h]
  struct SURFACE *v51; // [rsp+E0h] [rbp-2A8h]
  char *v52; // [rsp+E8h] [rbp-2A0h]
  CLIPOBJ *v53; // [rsp+F0h] [rbp-298h]
  ULONG v54; // [rsp+F8h] [rbp-290h]
  __int64 v55; // [rsp+100h] [rbp-288h]
  int v56; // [rsp+108h] [rbp-280h]
  HDEV v57; // [rsp+110h] [rbp-278h]
  XLATEOBJ *v58; // [rsp+120h] [rbp-268h]
  __int64 v59; // [rsp+128h] [rbp-260h]
  char *v60; // [rsp+130h] [rbp-258h]
  int v61; // [rsp+138h] [rbp-250h]
  int v62; // [rsp+13Ch] [rbp-24Ch]
  int v63; // [rsp+140h] [rbp-248h]
  int v64; // [rsp+144h] [rbp-244h]
  LONG lDelta; // [rsp+148h] [rbp-240h]
  LONG v66; // [rsp+14Ch] [rbp-23Ch]
  int v67; // [rsp+150h] [rbp-238h]
  int v68; // [rsp+154h] [rbp-234h]
  int v69; // [rsp+158h] [rbp-230h]
  int v70; // [rsp+15Ch] [rbp-22Ch]
  int v71; // [rsp+160h] [rbp-228h]
  struct SURFACE *v72; // [rsp+168h] [rbp-220h]
  unsigned int v73; // [rsp+1ACh] [rbp-1DCh]
  unsigned int v74; // [rsp+1B0h] [rbp-1D8h]
  ULONG v75; // [rsp+1B4h] [rbp-1D4h]
  struct _RECTL v76; // [rsp+1C0h] [rbp-1C8h] BYREF
  RECTL v77; // [rsp+1D0h] [rbp-1B8h] BYREF
  struct _RECTL v78; // [rsp+1E0h] [rbp-1A8h]
  unsigned int v79; // [rsp+1F0h] [rbp-198h] BYREF
  _OWORD v80[20]; // [rsp+1F4h] [rbp-194h]

  v8 = pco;
  v10 = psoDst;
  v42 = psoDst;
  v46 = pco;
  v32 = iTransColor;
  v11 = 0;
  if ( !psoDst->iType && !psoSrc->iType
    || ulReserved
    || prclDst->right - prclDst->left != prclSrc->right - prclSrc->left
    || prclDst->bottom - prclDst->top != prclSrc->bottom - prclSrc->top )
  {
    v12 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoDst);
    v13 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoSrc);
    v76 = *prclDst;
    v77 = *prclSrc;
    v50 = &v76;
    v47 = &v77;
    hdev = v10->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, v10, 0LL, 0);
    v48 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v48, psoSrc, 0LL, 0);
    v53 = v8;
    v43 = 0LL;
    v44 = 0;
    v45 = 0;
    v14 = psSetupTransparentSrcSurface(v13, v12, &v76, 0LL, &v77, (struct SURFMEM *)&v43, 1u, iTransColor);
    v34 = v14;
    if ( v14 )
    {
      if ( v76.left != v76.right )
      {
        v15 = (struct _SURFOBJ *)((char *)v14 + 24);
        v52 = (char *)v14 + 24;
        v38 = 0LL;
        v39 = 0;
        v40 = 0;
        v51 = v12;
        v78 = v76;
        v16 = v10->hdev;
        v57 = v16;
        if ( *((_WORD *)v12 + 50) && (*((_DWORD *)v16 + 14) & 0x80u) != 0 )
        {
          v11 = GreTransparentBltPS(v10, v15, v8, pxlo, &v76, &v77, iTransColor);
          goto LABEL_53;
        }
        v17 = psSetupDstSurface(v12, &v76, (struct SURFMEM *)&v38, 0, 1);
        v18 = v17;
        v41 = v17;
        if ( !v17 )
        {
LABEL_53:
          SURFMEM::~SURFMEM((SURFMEM *)&v38);
          goto LABEL_54;
        }
        if ( v17 != v12 )
        {
          v10 = (SURFOBJ *)((char *)v17 + 24);
          v42 = (SURFOBJ *)((char *)v17 + 24);
          v8 = 0LL;
          v46 = 0LL;
        }
        v71 = 0;
        v75 = iTransColor;
        lDelta = v15->lDelta;
        v66 = v10->lDelta;
        v72 = v34;
        if ( v8 && v8->iDComplexity )
        {
          if ( v8->iDComplexity != 1 )
          {
            if ( v8->iDComplexity == 3 )
            {
              v32 = 1;
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)v8, 0, 0, 4u, 0x14u);
            }
            goto LABEL_13;
          }
          rclBounds = v8->rclBounds;
        }
        else
        {
          rclBounds = v76;
        }
        v32 = 0;
        v79 = 1;
        v80[0] = rclBounds;
LABEL_13:
        v20 = pxlo;
        if ( !pxlo )
          v20 = xloIdent;
        v58 = v20;
        v61 = 1;
        v64 = 1;
        iBitmapFormat = v10->iBitmapFormat;
        v74 = iBitmapFormat;
        v22 = v15->iBitmapFormat;
        v73 = v22;
        if ( v32 )
          goto LABEL_51;
        while ( v22 <= 6 && iBitmapFormat <= 6 || !v79 )
        {
          for ( i = 0; i < v79; ++i )
          {
            v25 = v50;
            if ( SLODWORD(v80[i]) < v50->left )
              LODWORD(v80[i]) = v76.left;
            if ( SDWORD2(v80[i]) > v25->right )
              DWORD2(v80[i]) = v76.right;
            top = v25->top;
            if ( SDWORD1(v80[i]) < top )
              DWORD1(v80[i]) = v76.top;
            if ( SHIDWORD(v80[i]) > v25->bottom )
              HIDWORD(v80[i]) = v76.bottom;
            v26 = DWORD1(v80[i]);
            v36 = HIDWORD(v80[i]);
            if ( v26 < v36 )
            {
              v27 = v80[i];
              v28 = DWORD2(v80[i]);
              if ( v27 < v28 )
              {
                v29 = v26 + v47->top - top;
                v62 = v28 - v27;
                v63 = v36 - v26;
                v67 = v27 + v77.left - v76.left;
                v68 = v28 + v77.left - v76.left;
                v69 = v27;
                v70 = v26;
                v59 = *((_QWORD *)v52 + 7) + v29 * *((_DWORD *)v52 + 16);
                v60 = (char *)v10->pvScan0 + v26 * v10->lDelta;
                v18 = v41;
                _guard_dispatch_icall_fptr();
              }
            }
          }
          if ( !v32 )
          {
            if ( v12 != v18 )
              _guard_dispatch_icall_fptr();
            SURFMEM::~SURFMEM((SURFMEM *)&v38);
            SURFMEM::~SURFMEM((SURFMEM *)&v43);
            LODWORD(v24) = 1;
            return v24;
          }
LABEL_51:
          v32 = XCLIPOBJ::bEnum((XCLIPOBJ *)v8, 0x144u, (char *)&v79, 0LL);
          iBitmapFormat = v74;
          v22 = v73;
        }
        goto LABEL_53;
      }
      v11 = 1;
    }
LABEL_54:
    SURFMEM::~SURFMEM((SURFMEM *)&v43);
    LODWORD(v24) = v11;
    return v24;
  }
  v30 = psoDst->hdev;
  if ( !v30 )
    v30 = psoSrc->hdev;
  v54 = iTransColor;
  v56 = 0;
  v55 = 0LL;
  v24 = *((_QWORD *)v30 + 358);
  if ( v24 )
    LODWORD(v24) = _guard_dispatch_icall_fptr();
  return v24;
}
