/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0296EA0
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C003E600 (EngStretchBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffStretchBlt @ 0x1C0147CD4 (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025DDFC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C026AC70 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C026AD70 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026AD98 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0272B44 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294198 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02941E0 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0295304 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299194 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029946C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02995A4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v11; // edi
  XLATEOBJ *v12; // rsi
  struct _SURFOBJ *v13; // r15
  struct _RECTL *v14; // r13
  struct _RECTL *prclSrc; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  LONG right; // eax
  __int64 *v20; // r12
  __int64 v21; // rax
  __m128i v22; // xmm0
  int v23; // edx
  __int32 v24; // ebx
  __int32 v25; // ecx
  int v26; // r15d
  LONG v27; // eax
  LONG v28; // ecx
  LONG v29; // edx
  LONG left; // r9d
  LONG v31; // r8d
  LONG v32; // r10d
  LONG top; // eax
  LONG bottom; // ecx
  SURFOBJ *v35; // rax
  __int64 v36; // r12
  int v37; // ebx
  int Surface; // eax
  struct _RECTL *v39; // r8
  SURFOBJ *v40; // r14
  int v41; // r15d
  int v42; // ebx
  __int64 v43; // rdx
  int v44; // r15d
  __int64 pulXlate; // rbx
  __int64 v46; // rcx
  struct PALETTE *v47; // r12
  __int64 v48; // rcx
  bool v49; // zf
  int v50; // r9d
  int v51; // r11d
  int flXlate; // r10d
  unsigned int iUniq; // r8d
  __int64 v54; // rdx
  int inited; // eax
  BOOL (__stdcall *v56)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  SURFOBJ *v57; // r8
  RECTL *v58; // rcx
  LONG *v59; // rdx
  struct _CLIPOBJ *v60; // rax
  BOOL v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  struct _CLIPOBJ *v65; // [rsp+78h] [rbp-88h]
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-80h]
  int psoSrca; // [rsp+80h] [rbp-80h]
  XLATEOBJ *v70; // [rsp+98h] [rbp-68h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-60h]
  __int64 v72; // [rsp+A8h] [rbp-58h] BYREF
  char v73; // [rsp+B0h] [rbp-50h]
  int v74; // [rsp+B4h] [rbp-4Ch]
  SURFOBJ *psoMask; // [rsp+B8h] [rbp-48h]
  __int64 v76; // [rsp+C0h] [rbp-40h] BYREF
  char v77; // [rsp+C8h] [rbp-38h]
  int v78; // [rsp+CCh] [rbp-34h]
  POINTL *pptlHTOrg; // [rsp+D0h] [rbp-30h]
  COLORADJUSTMENT *pca; // [rsp+D8h] [rbp-28h]
  POINTL *pptlMask; // [rsp+E0h] [rbp-20h]
  int v82; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v83; // [rsp+ECh] [rbp-14h]
  __int128 v84; // [rsp+F4h] [rbp-Ch]
  int v85; // [rsp+104h] [rbp+4h]
  XLATEOBJ *v86; // [rsp+108h] [rbp+8h]
  _BYTE v87[64]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v88; // [rsp+150h] [rbp+50h]
  int v89[2]; // [rsp+158h] [rbp+58h]
  __int64 v90; // [rsp+160h] [rbp+60h]
  int v91[2]; // [rsp+168h] [rbp+68h]
  _BYTE v92[96]; // [rsp+180h] [rbp+80h] BYREF
  SURFOBJ *v93; // [rsp+1E0h] [rbp+E0h]
  RECTL *v94; // [rsp+1E8h] [rbp+E8h]
  RECTL prclDest; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v96; // [rsp+200h] [rbp+100h] BYREF
  struct _RECTL v97; // [rsp+210h] [rbp+110h] BYREF
  struct _CLIPOBJ v98; // [rsp+220h] [rbp+120h] BYREF
  __int64 v99; // [rsp+258h] [rbp+158h]
  __int64 v100; // [rsp+270h] [rbp+170h]
  int v101; // [rsp+278h] [rbp+178h]
  SURFOBJ *psoDest; // [rsp+280h] [rbp+180h]
  RECTL *v103; // [rsp+288h] [rbp+188h]
  int v104; // [rsp+2A0h] [rbp+1A0h]
  __int64 v105; // [rsp+2B0h] [rbp+1B0h]
  int v106; // [rsp+2B8h] [rbp+1B8h]

  v11 = 0;
  v12 = pxlo;
  v13 = a1;
  v14 = a8;
  prclSrc = a9;
  pca = a6;
  pptlHTOrg = a7;
  pptlMask = a10;
  psoMask = a3;
  psoSrc = a2;
  v86 = pxlo;
  v76 = 0LL;
  v77 = 0;
  v78 = 0;
  v63 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  v17 = v63;
  v18 = *(_QWORD *)(v63 + 48);
  v96 = *a9;
  if ( a2->iType != 1 || !v18 || (*(_DWORD *)(v18 + 56) & 0x20000) == 0 )
    goto LABEL_8;
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v76, &v96) )
  {
    if ( !v76 )
    {
      v11 = 1;
      goto LABEL_113;
    }
    prclSrc = &v96;
    psoSrc = (SURFOBJ *)(v76 + 24);
    v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v76 + 24);
    v63 = v17;
LABEL_8:
    right = a8->right;
    v72 = 0LL;
    v73 = 0;
    v74 = 0;
    v20 = *(__int64 **)(v17 + 120);
    if ( a8->left < right && a8->top < a8->bottom || (unsigned int)IsMetaRedirectionBitmap(v13) )
    {
      v36 = v63;
    }
    else
    {
      v21 = 0LL;
      v22 = *(__m128i *)prclSrc;
      v82 = 0;
      v83 = 0LL;
      prclDest = (RECTL)v22;
      v23 = v22.m128i_i32[2];
      v24 = v22.m128i_i32[1];
      v25 = v22.m128i_i32[3];
      v26 = _mm_cvtsi128_si32(v22);
      v84 = 0uLL;
      v85 = 0;
      if ( v26 < 0 )
        v26 = 0;
      if ( v22.m128i_i32[2] > *(_DWORD *)(v63 + 56) )
        v23 = *(_DWORD *)(v63 + 56);
      if ( v22.m128i_i32[1] < 0 )
        v24 = 0;
      if ( v22.m128i_i32[3] > *(_DWORD *)(v63 + 60) )
        v25 = *(_DWORD *)(v63 + 60);
      if ( v23 <= v26 || v25 <= v24 )
      {
        v11 = 1;
        goto LABEL_112;
      }
      LODWORD(v83) = v23 - v26;
      HIDWORD(v83) = v25 - v24;
      if ( v20 )
        v21 = *v20;
      *(_QWORD *)((char *)&v84 + 4) = v21;
      v82 = *(_DWORD *)(v63 + 96);
      HIDWORD(v84) = *(_DWORD *)(v63 + 112) & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v72, (struct _DEVBITMAPINFO *)&v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v72 )
        goto LABEL_112;
      v27 = v96.left - v26;
      v28 = v96.right - v26;
      v29 = v96.top - v24;
      left = a8->left;
      v31 = v96.bottom - v24;
      v32 = a8->right;
      v96.left -= v26;
      v96.right -= v26;
      v96.top -= v24;
      v96.bottom -= v24;
      if ( left < v32 )
      {
        v97.left = left;
        v97.right = v32;
        prclDest.left = v27;
        prclDest.right = v28;
      }
      else
      {
        v97.left = v32;
        v97.right = left;
        prclDest.left = v28;
        prclDest.right = v27;
      }
      top = a8->top;
      bottom = a8->bottom;
      if ( top < bottom )
      {
        v97.top = a8->top;
        v97.bottom = bottom;
        prclDest.top = v29;
        prclDest.bottom = v31;
      }
      else
      {
        v97.top = a8->bottom;
        v97.bottom = top;
        prclDest.top = v31;
        prclDest.bottom = v29;
      }
      if ( !EngStretchBlt((SURFOBJ *)(v72 + 24), psoSrc, 0LL, 0LL, xloIdent, 0LL, 0LL, &prclDest, prclSrc, 0LL, 3u) )
        goto LABEL_112;
      prclSrc = &v96;
      v14 = &v97;
      if ( v72 )
        v35 = (SURFOBJ *)(v72 + 24);
      else
        v35 = 0LL;
      psoSrc = v35;
      v13 = a1;
      v36 = SURFOBJ_TO_SURFACE_NOT_NULL(v35);
    }
    v62 = 1;
    v37 = IsMetaDevBitmapForMirroring(v13);
    Surface = MSURF::bFindSurface((MSURF *)v87, v13, a4, v14);
    v39 = prclSrc;
    v40 = psoSrc;
    v41 = Surface;
    MULTISURF::MULTISURF((MULTISURF *)v92, psoSrc, v39);
    if ( v37 )
    {
      MULTISURF::MULTISURF((MULTISURF *)&v98, a1, v14);
      v62 = EngStretchBlt(psoDest, v93, psoMask, a4, pxlo, pca, pptlHTOrg, v103, v94, pptlMask, iMode);
      v42 = v62;
      MULTISURF::~MULTISURF((MULTISURF *)&v98);
    }
    else
    {
      v42 = 1;
    }
    if ( v41 )
    {
      do
      {
        v70 = 0LL;
        v71 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v89);
        if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v92, v88) )
        {
          v43 = 1LL;
LABEL_43:
          v44 = 1;
          goto LABEL_81;
        }
        v44 = 0;
        v36 = SURFOBJ_TO_SURFACE_NOT_NULL(v93);
        v64 = v36;
        pulXlate = *(_QWORD *)(v36 + 120);
        if ( *((_DWORD *)v88 + 6) )
        {
          v46 = *((_QWORD *)v88 + 6);
          v47 = ppalDefault;
          if ( (*(_DWORD *)(v46 + 2196) & 0x100) != 0 )
            v47 = DrvRealizeHalftonePalette((_QWORD *)v46, 0);
          if ( !pulXlate )
          {
            if ( v12 && v12[1].pulXlate )
            {
              pulXlate = (__int64)v12[1].pulXlate;
            }
            else
            {
              v48 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
              if ( !v12 || (v43 = 1LL, (v12->flXlate & 1) != 0) )
              {
                v49 = v93 == v40;
              }
              else
              {
                v47 = *(struct PALETTE **)&v12[2].iSrcType;
                if ( !v47 )
                {
                  v36 = v64;
                  v44 = 1;
                  goto LABEL_81;
                }
                v49 = *(_DWORD *)(v64 + 96) == *(_DWORD *)(v48 + 96);
              }
              if ( v49 )
                pulXlate = *(_QWORD *)(v48 + 120);
            }
          }
          v50 = 0;
          if ( pulXlate )
          {
            if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
            {
              v50 = 0x4000;
              if ( v47 == ppalDefault )
                v50 = 0x2000;
            }
          }
          if ( v12 )
            psoSrca = v12[1].iUniq;
          else
            psoSrca = 0;
          if ( v12 )
            v51 = *(_DWORD *)&v12[1].iSrcType;
          else
            v51 = 0;
          if ( v12 )
            flXlate = v12[1].flXlate;
          else
            flXlate = 0;
          if ( v12 )
            iUniq = v12[3].iUniq;
          else
            iUniq = 0;
          if ( v12 )
            v54 = (__int64)v12[2].pulXlate;
          else
            v54 = 0LL;
          inited = EXLATEOBJ::bInitXlateObj(
                     (__int64 *)&v70,
                     v54,
                     iUniq,
                     pulXlate,
                     *(_QWORD *)(v71 + 120),
                     (__int64)ppalDefault,
                     (__int64)v47,
                     flXlate,
                     v51,
                     psoSrca,
                     v50);
          v36 = v64;
          v43 = 1LL;
          if ( !inited )
            goto LABEL_43;
          v12 = v70;
        }
        else
        {
          v43 = 1LL;
        }
LABEL_81:
        if ( v44 )
          goto LABEL_109;
        v65 = (struct _CLIPOBJ *)v90;
        v100 = 0LL;
        v101 = 0;
        v104 = 1;
        v105 = 0LL;
        v99 = 0LL;
        v106 = 0;
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v89) + 112) & 2) != 0 )
          v56 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v88 + 7) + 2880LL);
        else
          v56 = EngStretchBlt;
        v57 = v93;
        if ( v93->iType == 1 && *(_QWORD *)(v36 + 48) != *(_QWORD *)(v71 + 48) )
          v56 = EngStretchBlt;
        if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(v71 + 48) + 1848LL) & 0x10) == 0 )
          v56 = EngStretchBlt;
        v58 = v94;
        if ( v94->left < 0 || v94->top < 0 || v94->right > v93->sizlBitmap.cx || v94->bottom > v93->sizlBitmap.cy )
          v56 = EngStretchBlt;
        if ( v56 != EngStretchBlt || iMode != 4 || !a4 || !a4->iDComplexity )
        {
          v59 = *(LONG **)v91;
LABEL_106:
          v60 = v65;
          goto LABEL_107;
        }
        v59 = *(LONG **)v91;
        if ( !**(_DWORD **)v91 && !*(_DWORD *)(*(_QWORD *)v91 + 4LL) )
          goto LABEL_106;
        ECLIPOBJTMPIFNEEDED::vSetup(
          (ECLIPOBJTMPIFNEEDED *)&v98,
          1,
          *(struct REGION **)(v90 + 56),
          (struct ERECTL *)(v90 + 4),
          1);
        if ( !v99 )
        {
          v42 = v62;
          v44 = 1;
          goto LABEL_108;
        }
        v59 = *(LONG **)v91;
        v60 = &v98;
        v58 = v94;
        v44 = 0;
        v57 = v93;
LABEL_107:
        v42 = OffStretchBlt(
                (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int))v56,
                v59,
                *(__int64 *)v89,
                (__int64)pptlMask,
                (__int64)v57,
                (__int64)psoMask,
                v60,
                (__int64)v12,
                (__int64)pca,
                pptlHTOrg,
                v14,
                v58,
                (__int64)pptlMask,
                iMode) & v62;
        v62 = v42;
LABEL_108:
        ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v98);
        if ( v44 )
        {
LABEL_109:
          v42 = 0;
          v62 = 0;
        }
        v12 = v86;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v70, v43);
      }
      while ( (unsigned int)MSURF::bNextSurface((MSURF *)v87) );
    }
    v11 = v42;
    MULTISURF::~MULTISURF((MULTISURF *)v92);
LABEL_112:
    SURFMEM::~SURFMEM((SURFMEM *)&v72);
  }
LABEL_113:
  SURFMEM::~SURFMEM((SURFMEM *)&v76);
  return v11;
}
