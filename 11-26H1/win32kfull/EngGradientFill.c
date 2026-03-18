/*
 * XREFs of EngGradientFill @ 0x140061280
 * Callers:
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x140210770 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x14030B650 (-BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RE.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x14030D8C0 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x140321E90 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 * Callees:
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x140061578 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x140061724 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x140061AF0 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  unsigned __int64 v12; // r12
  int v13; // ebx
  RECTL v14; // xmm0
  LONG left; // eax
  LONG right; // ecx
  LONG v17; // eax
  LONG top; // ecx
  LONG v19; // eax
  struct SURFACE *v20; // rax
  struct SURFACE *v21; // rcx
  LONG v22; // r8d
  int v23; // ebx
  LONG v24; // r9d
  TRIVERTEX *v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  Gre::Base *v28; // rcx
  BOOL v29; // r15d
  __int64 v31; // rbx
  struct Gre::Base::SESSION_GLOBALS *v32; // r9
  LONG v33; // ecx
  LONG v34; // edx
  __int64 v35; // rax
  size_t Size; // [rsp+28h] [rbp-99h]
  struct _XLATEOBJ *v37; // [rsp+50h] [rbp-71h] BYREF
  struct SURFACE *v38; // [rsp+58h] [rbp-69h] BYREF
  struct _GRADIENT_RECT *v39; // [rsp+60h] [rbp-61h]
  struct _RECTL v40; // [rsp+70h] [rbp-51h] BYREF
  __int64 v41; // [rsp+80h] [rbp-41h] BYREF
  char v42; // [rsp+88h] [rbp-39h]
  int v43; // [rsp+8Ch] [rbp-35h]
  struct _RECTL *v44; // [rsp+90h] [rbp-31h]
  unsigned __int64 v45; // [rsp+98h] [rbp-29h]
  RECTL v46; // [rsp+A0h] [rbp-21h] BYREF

  v39 = (struct _GRADIENT_RECT *)pMesh;
  v37 = pxlo;
  v44 = prclExtents;
  v46 = 0LL;
  v12 = (unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL);
  v41 = 0LL;
  v13 = 0;
  v42 = 0;
  v43 = 0;
  v45 = v12 + 24;
  v38 = *(struct SURFACE **)(v12 + 0x30);
  if ( v38 )
    PDEVOBJ::vSync((PDEVOBJ *)&v38, psoDest, 0LL, 0);
  v14 = *prclExtents;
  v46 = *prclExtents;
  if ( !pco || !pco->iDComplexity )
  {
LABEL_14:
    v40 = v14;
    if ( !pco )
      goto LABEL_17;
    goto LABEL_15;
  }
  left = v46.left;
  if ( v46.left < pco->rclBounds.left )
    left = pco->rclBounds.left;
  right = pco->rclBounds.right;
  v46.left = left;
  v17 = v46.right;
  if ( v46.right > right )
    v17 = right;
  top = pco->rclBounds.top;
  v46.right = v17;
  v19 = v46.top;
  if ( v46.top < top )
    v19 = top;
  v46.top = v19;
  if ( v46.bottom <= pco->rclBounds.bottom )
  {
    v14 = v46;
    goto LABEL_14;
  }
  v46.bottom = pco->rclBounds.bottom;
  v40 = v46;
LABEL_15:
  if ( pco->iDComplexity > 1u )
    v13 = 1;
LABEL_17:
  v20 = psSetupDstSurface((struct SURFACE *)v12, &v40, (struct SURFMEM *)&v41, v13, ulMode > 1);
  v38 = v20;
  v21 = v20;
  if ( v20 )
  {
    if ( v20 == (struct SURFACE *)v12 )
    {
      v23 = 0;
    }
    else
    {
      v22 = v46.top;
      v23 = 1;
      v24 = v46.left;
      if ( nVertex )
      {
        v25 = pVertex;
        v26 = nVertex;
        do
        {
          v25->x -= v24;
          v25->y -= v22;
          ++v25;
          --v26;
        }
        while ( v26 );
      }
      pptlDitherOrg->x += v24;
      pptlDitherOrg->y += v22;
    }
    if ( ulMode == 2 )
    {
      LODWORD(Size) = nMesh;
      v27 = bTriangleMesh(
              v21,
              v37,
              pVertex,
              nVertex,
              (struct _GRADIENT_TRIANGLE *)v39,
              Size,
              2u,
              &v40,
              v44,
              pptlDitherOrg);
    }
    else
    {
      v27 = bRectangleMesh(v21, v37, pVertex, nVertex, v39, nMesh, ulMode, &v40, pptlDitherOrg);
    }
    v29 = v27;
    if ( v23 )
    {
      v31 = *(_QWORD *)(v12 + 48);
      v37 = 0LL;
      v32 = Gre::Base::Globals(v28);
      if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
        (*(void (__fastcall **)(unsigned __int64, __int64, CLIPOBJ *, __int64, RECTL *, struct _XLATEOBJ **))(v31 + 2832))(
          v45 & -(__int64)(v12 != 0),
          (__int64)v38 + 24,
          pco,
          (__int64)v32 + 4664,
          &v46,
          &v37);
      else
        ((void (__fastcall *)(unsigned __int64, char *, CLIPOBJ *, char *, RECTL *, struct _XLATEOBJ **))EngCopyBits)(
          v45 & -(__int64)(v12 != 0),
          (char *)v38 + 24,
          pco,
          (char *)v32 + 4664,
          &v46,
          &v37);
      v33 = v46.top;
      v34 = v46.left;
      if ( nVertex )
      {
        v35 = nVertex;
        do
        {
          pVertex->x += v34;
          pVertex->y += v33;
          ++pVertex;
          --v35;
        }
        while ( v35 );
      }
      pptlDitherOrg->x -= v34;
      pptlDitherOrg->y -= v33;
    }
  }
  else
  {
    EngSetLastError(8u);
    v29 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v41);
  return v29;
}
