/*
 * XREFs of EngGradientFill @ 0x1C00DF0D0
 * Callers:
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0288600 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C028C770 (-BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RE.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C028EDC0 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02965F0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     NtGdiEngGradientFill @ 0x1C02ABB90 (NtGdiEngGradientFill.c)
 * Callees:
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00DF35C (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00DF714 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C013A3F8 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngGradientFill(
        SURFOBJ *psoDest,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  __int64 v13; // r13
  int v14; // r14d
  RECTL v15; // xmm0
  struct SURFACE *v16; // rax
  struct SURFACE *v17; // r12
  int v18; // eax
  BOOL v19; // r14d
  LONG left; // eax
  LONG right; // eax
  LONG top; // eax
  LONG bottom; // eax
  LONG v25; // edx
  LONG v26; // r8d
  TRIVERTEX *v27; // rax
  __int64 v28; // rcx
  bool v29; // zf
  LONG v30; // ecx
  LONG v31; // edx
  __int64 v32; // rax
  int v33; // [rsp+50h] [rbp-71h]
  struct _XLATEOBJ *v34; // [rsp+58h] [rbp-69h] BYREF
  struct _GRADIENT_RECT *v35; // [rsp+60h] [rbp-61h]
  __int64 v36; // [rsp+68h] [rbp-59h] BYREF
  char v37; // [rsp+70h] [rbp-51h]
  int v38; // [rsp+74h] [rbp-4Dh]
  __int64 v39; // [rsp+78h] [rbp-49h] BYREF
  struct _RECTL *v40; // [rsp+80h] [rbp-41h]
  struct _RECTL v41; // [rsp+90h] [rbp-31h] BYREF
  RECTL v42; // [rsp+A0h] [rbp-21h] BYREF

  v35 = (struct _GRADIENT_RECT *)pMesh;
  v40 = prclExtents;
  v34 = pxlo;
  v13 = SURFOBJ_TO_SURFACE(psoDest);
  v36 = 0LL;
  v14 = 0;
  v37 = 0;
  v38 = 0;
  v39 = *(_QWORD *)(v13 + 48);
  v33 = 0;
  PDEVOBJ::vSync((PDEVOBJ *)&v39, psoDest, 0LL, 0);
  v15 = *prclExtents;
  v42 = *prclExtents;
  if ( pco && pco->iDComplexity )
  {
    left = v42.left;
    if ( v42.left < pco->rclBounds.left )
      left = pco->rclBounds.left;
    v42.left = left;
    right = v42.right;
    if ( v42.right > pco->rclBounds.right )
      right = pco->rclBounds.right;
    v42.right = right;
    top = v42.top;
    if ( v42.top < pco->rclBounds.top )
      top = pco->rclBounds.top;
    v42.top = top;
    bottom = v42.bottom;
    if ( v42.bottom > pco->rclBounds.bottom )
      bottom = pco->rclBounds.bottom;
    v42.bottom = bottom;
    v15 = v42;
  }
  v41 = v15;
  if ( pco && pco->iDComplexity >= 2u )
    v14 = 1;
  v16 = psSetupDstSurface((struct SURFACE *)v13, &v41, (struct SURFMEM *)&v36, v14, ulMode > 1);
  v17 = v16;
  if ( v16 )
  {
    if ( v16 != (struct SURFACE *)v13 )
    {
      v25 = v42.top;
      v26 = v42.left;
      v33 = 1;
      if ( nVertex )
      {
        v27 = pVertex;
        v28 = nVertex;
        do
        {
          v27->x -= v26;
          v27->y -= v25;
          ++v27;
          --v28;
        }
        while ( v28 );
      }
      pptlDitherOrg->x += v26;
      pptlDitherOrg->y += v25;
    }
    if ( ulMode == 2 )
      v18 = bTriangleMesh(
              v17,
              v34,
              pVertex,
              nVertex,
              (struct _GRADIENT_TRIANGLE *)v35,
              nMesh,
              2u,
              &v41,
              v40,
              pptlDitherOrg);
    else
      v18 = bRectangleMesh(v17, v34, pVertex, nVertex, v35, nMesh, ulMode, &v41, pptlDitherOrg);
    v19 = v18;
    if ( v33 )
    {
      v29 = (*(_DWORD *)(v13 + 112) & 0x400) == 0;
      v34 = 0LL;
      if ( v29 )
        ((void (__fastcall *)(__int64, char *, CLIPOBJ *, XLATEOBJ *const, RECTL *, struct _XLATEOBJ **))EngCopyBits)(
          v13 + 24,
          (char *)v17 + 24,
          pco,
          xloIdent,
          &v42,
          &v34);
      else
        (*(void (__fastcall **)(__int64, __int64, CLIPOBJ *, XLATEOBJ *const, RECTL *, struct _XLATEOBJ **))(*(_QWORD *)(v13 + 48) + 2872LL))(
          v13 + 24,
          (__int64)v17 + 24,
          pco,
          xloIdent,
          &v42,
          &v34);
      v30 = v42.top;
      v31 = v42.left;
      if ( nVertex )
      {
        v32 = nVertex;
        do
        {
          pVertex->x += v31;
          pVertex->y += v30;
          ++pVertex;
          --v32;
        }
        while ( v32 );
      }
      pptlDitherOrg->x -= v31;
      pptlDitherOrg->y -= v30;
    }
  }
  else
  {
    EngSetLastError(8u);
    v19 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v36);
  return v19;
}
