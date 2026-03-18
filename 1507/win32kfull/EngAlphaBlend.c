/*
 * XREFs of EngAlphaBlend @ 0x1C0034230
 * Callers:
 *     GrePtInSprite @ 0x1C0012198 (GrePtInSprite.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C00E1160 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C0128DB8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02879E0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C028E5F0 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02948F0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AB1D0 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0021750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00348B0 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C0034AC8 (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0034C94 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngAlphaBlend(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  XCLIPOBJ *v10; // rax
  RECTL v11; // xmm0
  BOOL v12; // r12d
  __int64 v13; // rax
  BLENDOBJ v15; // eax
  __int64 v16; // rcx
  signed __int32 v17; // ett
  struct SURFACE *v18; // r10
  LONG left; // esi
  LONG right; // r12d
  struct _RECTL v21; // xmm6
  struct SURFACE *v22; // rdx
  struct SURFACE *v23; // rcx
  int v24; // r14d
  LONG v25; // r15d
  bool v26; // zf
  int v27; // ecx
  __int64 v28; // rbx
  int v29; // ecx
  _QWORD *v30; // rax
  struct SURFACE *v31; // rdx
  unsigned int v32; // edi
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  char *v34; // rdx
  _QWORD *v35; // rcx
  LONG bottom; // r15d
  __int64 v37; // rbx
  ULONG *pulXlate; // rax
  XCLIPOBJ *v39; // rax
  int v40; // eax
  XCLIPOBJ *v41; // rax
  int v42; // r13d
  __int128 v43; // xmm0
  char *v44; // r13
  LONG *v45; // rdx
  LONG v46; // ecx
  LONG v47; // eax
  __int64 v48; // r8
  struct SURFMEM *v49; // [rsp+28h] [rbp-D8h]
  int v50; // [rsp+38h] [rbp-C8h]
  int v51; // [rsp+60h] [rbp-A0h]
  ULONG *v52; // [rsp+68h] [rbp-98h] BYREF
  struct SURFACE *v53; // [rsp+70h] [rbp-90h]
  struct _RECTL v54; // [rsp+80h] [rbp-80h] BYREF
  char *v55; // [rsp+90h] [rbp-70h] BYREF
  XCLIPOBJ *v56; // [rsp+98h] [rbp-68h]
  struct SURFACE *hdev; // [rsp+A0h] [rbp-60h] BYREF
  LONG v58; // [rsp+A8h] [rbp-58h]
  BOOL v59; // [rsp+ACh] [rbp-54h]
  struct SURFACE *v60; // [rsp+B0h] [rbp-50h] BYREF
  char v61; // [rsp+B8h] [rbp-48h]
  int v62; // [rsp+BCh] [rbp-44h]
  LONG top; // [rsp+C0h] [rbp-40h]
  CLIPOBJ *v64; // [rsp+C8h] [rbp-38h]
  struct _XLATEOBJ *v65; // [rsp+D0h] [rbp-30h]
  _DWORD v66[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v67; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v68[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v70[4]; // [rsp+F8h] [rbp-8h] BYREF
  int v71[2]; // [rsp+118h] [rbp+18h] BYREF
  char v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+124h] [rbp+24h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  __int64 v75; // [rsp+130h] [rbp+30h]
  char v76[40]; // [rsp+138h] [rbp+38h] BYREF
  BLENDOBJ v77; // [rsp+160h] [rbp+60h]
  RECTL v78; // [rsp+168h] [rbp+68h] BYREF
  struct _RECTL v79; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v80; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v81; // [rsp+1A0h] [rbp+A0h] BYREF
  _OWORD v82[20]; // [rsp+1A4h] [rbp+A4h] BYREF

  v64 = pco;
  v51 = 1;
  v53 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoDest);
  v10 = (XCLIPOBJ *)SURFOBJ_TO_SURFACE(psoSrc);
  v11 = *prclDest;
  v12 = 0;
  v56 = v10;
  v65 = *(struct _XLATEOBJ **)&pBlendObj[2].BlendFunction.BlendOp;
  v13 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v54 = v11;
  v74 = v13;
  v75 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v78 = *prclSrc;
  if ( !v53 )
    return 0;
  v15 = *pBlendObj;
  v60 = 0LL;
  v61 = 0;
  v62 = 0;
  *(_QWORD *)v71 = 0LL;
  v72 = 0;
  v73 = 0;
  v16 = *((_QWORD *)v53 + 6);
  v77 = v15;
  if ( v16 )
  {
    _m_prefetchw((const void *)(v16 + 56));
    do
      v17 = *(_DWORD *)(v16 + 56);
    while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 56), v17 | 0x40000, v17) );
  }
  if ( (pBlendObj->BlendFunction.BlendFlags & 1) == 0
    || v54.right - v54.left == v78.right - v78.left && v54.bottom - v54.top == v78.bottom - v78.top )
  {
    hdev = (struct SURFACE *)psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v55 = (char *)psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v55, psoSrc, 0LL, 0);
    hdev = psSetupTransparentSrcSurface(v56, v53, &v54, v65, &v78, (struct SURFMEM *)v71, 0, 0);
    v18 = hdev;
    if ( !hdev )
      goto LABEL_64;
    left = v54.left;
    right = v54.right;
    if ( v54.left == v54.right )
      goto LABEL_64;
    v21 = v54;
    v22 = v53;
    v23 = v53;
    v24 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v54, 4));
    LODWORD(v52) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v54, 12));
    v58 = v78.left;
    v25 = (_DWORD)v52 - v24;
    v26 = *((_WORD *)v53 + 50) == 0;
    v80 = v54;
    top = v78.top;
    v55 = (char *)v53;
    if ( v26 )
    {
      bottom = (int)v52;
      v32 = 0;
    }
    else
    {
      v27 = *((_DWORD *)v53 + 24);
      v28 = *((_QWORD *)v53 + 6);
      memset((char *)v70 + 4, 0, 28);
      LODWORD(v70[0]) = v27;
      v29 = *((_DWORD *)v53 + 28);
      v30 = (_QWORD *)*((_QWORD *)v53 + 15);
      HIDWORD(v70[0]) = v54.right - v54.left;
      *(_OWORD *)&v70[1] = (unsigned int)((_DWORD)v52 - v24);
      LODWORD(v70[3]) = v29 & 0x40000;
      if ( v30 )
        v70[2] = *v30;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v60, (struct _DEVBITMAPINFO *)v70, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_68;
      v31 = v53;
      *((_QWORD *)v60 + 6) = *((_QWORD *)v53 + 6);
      v79.right = right - left;
      v32 = 0;
      v26 = (*((_DWORD *)v31 + 28) & 0x400) == 0;
      *(_QWORD *)&v79.left = 0LL;
      v79.bottom = v25;
      v68[0] = left;
      v68[1] = v24;
      if ( v26 )
        v33 = EngCopyBits;
      else
        v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v28 + 2872);
      v34 = (char *)v31 + 24;
      v35 = 0LL;
      if ( v60 )
        v35 = (_QWORD *)((char *)v60 + 24);
      v49 = (struct SURFMEM *)v68;
      if ( !((unsigned int (__fastcall *)(_QWORD *, char *, _QWORD, XLATEOBJ *const, struct _RECTL *))v33)(
              v35,
              v34,
              0LL,
              xloIdent,
              &v79) )
        goto LABEL_68;
      v21 = v79;
      v23 = v60;
      v22 = v53;
      v18 = hdev;
      v54 = v79;
      bottom = v79.bottom;
      right = v79.right;
      v24 = v79.top;
      left = v79.left;
      v55 = (char *)v60;
    }
    if ( v23 )
    {
      v37 = *((_QWORD *)v23 + 15);
      v67 = v37;
      pulXlate = (ULONG *)*((_QWORD *)v18 + 15);
      v59 = v23 != v22;
      v52 = pulXlate;
      if ( !pulXlate )
      {
        if ( !pxlo || (pulXlate = pxlo[1].pulXlate) == 0LL )
          pulXlate = *(ULONG **)(*((_QWORD *)v18 + 6) + 1832LL);
        v52 = pulXlate;
      }
      if ( !v37 )
      {
        v37 = *(_QWORD *)(*((_QWORD *)v23 + 6) + 1832LL);
        v67 = v37;
      }
      if ( !pulXlate || !v37 )
      {
        v40 = 0;
        goto LABEL_65;
      }
      v39 = (XCLIPOBJ *)v64;
      if ( v23 != v22 )
        v39 = 0LL;
      v56 = v39;
      v40 = bDetermineAlphaBlendFunction(
              v23,
              v18,
              (struct XEPALOBJ *)&v67,
              (struct XEPALOBJ *)&v52,
              (struct XLATE *)v65,
              (int)v49,
              (struct _ALPHA_DISPATCH_FORMAT *)v76,
              v50);
      v51 = v40;
      if ( !v40 )
        goto LABEL_65;
      v41 = v56;
      LODWORD(v52) = 0;
      v42 = 0;
      v81 = 1;
      v82[0] = v21;
      if ( v56 )
      {
        if ( *((_BYTE *)v56 + 20) == 1 )
        {
          v43 = *(_OWORD *)((char *)v56 + 4);
          LODWORD(v52) = 0;
          v81 = 1;
          v82[0] = v43;
        }
        else if ( *((_BYTE *)v56 + 20) == 3 )
        {
          v42 = 1;
          LODWORD(v52) = 1;
          XCLIPOBJ::cEnumStart(v56, 0, 0, 1u, 0x14u);
          v41 = v56;
        }
      }
      if ( !v42 )
        goto LABEL_44;
      do
      {
        v42 = XCLIPOBJ::bEnum(v41, 0x144u, (char *)&v81, 0LL);
        LODWORD(v52) = v42;
LABEL_44:
        if ( v81 )
        {
          v44 = v55;
          do
          {
            v45 = (LONG *)&v82[v32];
            if ( *v45 < left )
              *v45 = left;
            if ( v45[2] > right )
              v45[2] = right;
            if ( v45[1] < v24 )
              v45[1] = v24;
            if ( v45[3] > bottom )
              v45[3] = bottom;
            v46 = v45[1];
            if ( v46 < v45[3] )
            {
              v47 = *v45;
              if ( *v45 < v45[2] )
              {
                v48 = *((unsigned int *)v44 + 22);
                v66[1] = top + v46 - v24;
                v66[0] = v58 + v47 - left;
                v51 = AlphaScanLineBlend(
                        *((_QWORD *)v44 + 10),
                        v45,
                        v48,
                        *((_QWORD *)hdev + 10),
                        *((_DWORD *)hdev + 22),
                        v66,
                        v65,
                        v74,
                        v75,
                        v37);
              }
            }
            ++v32;
          }
          while ( v32 < v81 );
          v42 = (int)v52;
        }
        v41 = v56;
        v32 = 0;
      }
      while ( v42 );
      if ( v59 )
      {
        v69 = 0LL;
        if ( (*((_DWORD *)v53 + 28) & 0x400) != 0 )
          (*(void (__fastcall **)(char *, char *, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))(*((_QWORD *)v53 + 6) + 2872LL))(
            (char *)v53 + 24,
            v55 + 24,
            v64,
            xloIdent,
            &v80,
            &v69);
        else
          ((void (__fastcall *)(char *, char *, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))EngCopyBits)(
            (char *)v53 + 24,
            v55 + 24,
            v64,
            xloIdent,
            &v80,
            &v69);
      }
LABEL_64:
      v40 = v51;
LABEL_65:
      v12 = v40;
      goto LABEL_66;
    }
LABEL_68:
    v40 = 0;
    goto LABEL_65;
  }
  LOBYTE(v12) = (unsigned int)EngHTBlt(
                                psoDest,
                                psoSrc,
                                0LL,
                                v64,
                                pxlo,
                                0LL,
                                &gptlZero,
                                prclDest,
                                prclSrc,
                                0LL,
                                512,
                                pBlendObj) == 1;
LABEL_66:
  SURFMEM::~SURFMEM((SURFMEM *)v71);
  SURFMEM::~SURFMEM((SURFMEM *)&v60);
  return v12;
}
