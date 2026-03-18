/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0296650
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C0038960 (EngStretchBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffStretchBlt @ 0x1C014C3D4 (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025B574 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0269130 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0269230 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0269258 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C027109C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0293928 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0293970 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0294AA4 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0298934 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C0298C0C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0298D44 (-bNextSurface@MSURF@@QEAAHXZ.c)
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
  int v43; // r15d
  __int64 pulXlate; // rbx
  __int64 v45; // rcx
  struct PALETTE *v46; // r12
  __int64 v47; // rcx
  bool v48; // zf
  int v49; // r9d
  int v50; // r11d
  int flXlate; // r10d
  unsigned int iUniq; // r8d
  __int64 v53; // rdx
  int inited; // eax
  BOOL (__stdcall *v55)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  SURFOBJ *v56; // r8
  RECTL *v57; // rcx
  LONG *v58; // rdx
  struct _CLIPOBJ *v59; // rax
  BOOL v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  struct _CLIPOBJ *v64; // [rsp+78h] [rbp-88h]
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-80h]
  int psoSrca; // [rsp+80h] [rbp-80h]
  __int64 v68; // [rsp+90h] [rbp-70h]
  XLATEOBJ *v70; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-58h] BYREF
  char v72; // [rsp+B0h] [rbp-50h]
  int v73; // [rsp+B4h] [rbp-4Ch]
  POINTL *pptlMask; // [rsp+B8h] [rbp-48h]
  POINTL *pptlHTOrg; // [rsp+C0h] [rbp-40h]
  COLORADJUSTMENT *pca; // [rsp+C8h] [rbp-38h]
  SURFOBJ *psoMask; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h] BYREF
  char v79; // [rsp+E0h] [rbp-20h]
  int v80; // [rsp+E4h] [rbp-1Ch]
  int v81; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v82; // [rsp+ECh] [rbp-14h]
  __int128 v83; // [rsp+F4h] [rbp-Ch]
  int v84; // [rsp+104h] [rbp+4h]
  XLATEOBJ *v85; // [rsp+108h] [rbp+8h]
  _BYTE v86[64]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v87; // [rsp+150h] [rbp+50h]
  int v88[2]; // [rsp+158h] [rbp+58h]
  __int64 v89; // [rsp+160h] [rbp+60h]
  int v90[2]; // [rsp+168h] [rbp+68h]
  _BYTE v91[96]; // [rsp+180h] [rbp+80h] BYREF
  SURFOBJ *v92; // [rsp+1E0h] [rbp+E0h]
  RECTL *v93; // [rsp+1E8h] [rbp+E8h]
  RECTL prclDest; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v95; // [rsp+200h] [rbp+100h] BYREF
  struct _RECTL v96; // [rsp+210h] [rbp+110h] BYREF
  struct _CLIPOBJ v97; // [rsp+220h] [rbp+120h] BYREF
  __int64 v98; // [rsp+258h] [rbp+158h]
  __int64 v99; // [rsp+270h] [rbp+170h]
  int v100; // [rsp+278h] [rbp+178h]
  SURFOBJ *psoDest; // [rsp+280h] [rbp+180h]
  RECTL *v102; // [rsp+288h] [rbp+188h]
  int v103; // [rsp+2A0h] [rbp+1A0h]
  __int64 v104; // [rsp+2B0h] [rbp+1B0h]
  int v105; // [rsp+2B8h] [rbp+1B8h]

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
  v85 = pxlo;
  v78 = 0LL;
  v79 = 0;
  v80 = 0;
  v62 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  v17 = v62;
  v18 = *(_QWORD *)(v62 + 48);
  v95 = *a9;
  if ( a2->iType != 1 || !v18 || (*(_DWORD *)(v18 + 56) & 0x20000) == 0 )
    goto LABEL_8;
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v78, &v95) )
  {
    if ( !v78 )
    {
      v11 = 1;
      goto LABEL_111;
    }
    prclSrc = &v95;
    psoSrc = (SURFOBJ *)(v78 + 24);
    v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v78 + 24);
    v62 = v17;
LABEL_8:
    right = a8->right;
    v71 = 0LL;
    v72 = 0;
    v73 = 0;
    v20 = *(__int64 **)(v17 + 120);
    if ( a8->left < right && a8->top < a8->bottom || (unsigned int)IsMetaRedirectionBitmap(v13) )
    {
      v36 = v62;
    }
    else
    {
      v21 = 0LL;
      v22 = *(__m128i *)prclSrc;
      v81 = 0;
      v82 = 0LL;
      prclDest = (RECTL)v22;
      v23 = v22.m128i_i32[2];
      v24 = v22.m128i_i32[1];
      v25 = v22.m128i_i32[3];
      v26 = _mm_cvtsi128_si32(v22);
      v83 = 0uLL;
      v84 = 0;
      if ( v26 < 0 )
        v26 = 0;
      if ( v22.m128i_i32[2] > *(_DWORD *)(v62 + 56) )
        v23 = *(_DWORD *)(v62 + 56);
      if ( v22.m128i_i32[1] < 0 )
        v24 = 0;
      if ( v22.m128i_i32[3] > *(_DWORD *)(v62 + 60) )
        v25 = *(_DWORD *)(v62 + 60);
      if ( v23 <= v26 || v25 <= v24 )
      {
        v11 = 1;
        goto LABEL_110;
      }
      LODWORD(v82) = v23 - v26;
      HIDWORD(v82) = v25 - v24;
      if ( v20 )
        v21 = *v20;
      *(_QWORD *)((char *)&v83 + 4) = v21;
      v81 = *(_DWORD *)(v62 + 96);
      HIDWORD(v83) = *(_DWORD *)(v62 + 112) & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v71, (struct _DEVBITMAPINFO *)&v81, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v71 )
        goto LABEL_110;
      v27 = v95.left - v26;
      v28 = v95.right - v26;
      v29 = v95.top - v24;
      left = a8->left;
      v31 = v95.bottom - v24;
      v32 = a8->right;
      v95.left -= v26;
      v95.right -= v26;
      v95.top -= v24;
      v95.bottom -= v24;
      if ( left < v32 )
      {
        v96.left = left;
        v96.right = v32;
        prclDest.left = v27;
        prclDest.right = v28;
      }
      else
      {
        v96.left = v32;
        v96.right = left;
        prclDest.left = v28;
        prclDest.right = v27;
      }
      top = a8->top;
      bottom = a8->bottom;
      if ( top < bottom )
      {
        v96.top = a8->top;
        v96.bottom = bottom;
        prclDest.top = v29;
        prclDest.bottom = v31;
      }
      else
      {
        v96.top = a8->bottom;
        v96.bottom = top;
        prclDest.top = v31;
        prclDest.bottom = v29;
      }
      if ( !EngStretchBlt((SURFOBJ *)(v71 + 24), psoSrc, 0LL, 0LL, xloIdent, 0LL, 0LL, &prclDest, prclSrc, 0LL, 3u) )
        goto LABEL_110;
      prclSrc = &v95;
      v14 = &v96;
      if ( v71 )
        v35 = (SURFOBJ *)(v71 + 24);
      else
        v35 = 0LL;
      psoSrc = v35;
      v13 = a1;
      v36 = SURFOBJ_TO_SURFACE_NOT_NULL(v35);
    }
    v61 = 1;
    v37 = IsMetaDevBitmapForMirroring(v13);
    Surface = MSURF::bFindSurface((MSURF *)v86, v13, a4, v14);
    v39 = prclSrc;
    v40 = psoSrc;
    v41 = Surface;
    MULTISURF::MULTISURF((MULTISURF *)v91, psoSrc, v39);
    if ( v37 )
    {
      MULTISURF::MULTISURF((MULTISURF *)&v97, a1, v14);
      v61 = EngStretchBlt(psoDest, v92, psoMask, a4, pxlo, pca, pptlHTOrg, v102, v93, pptlMask, iMode);
      v42 = v61;
      MULTISURF::~MULTISURF((MULTISURF *)&v97);
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
        v68 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v88);
        if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v91, v87) )
        {
LABEL_42:
          v43 = 1;
          goto LABEL_79;
        }
        v43 = 0;
        v36 = SURFOBJ_TO_SURFACE_NOT_NULL(v92);
        v63 = v36;
        pulXlate = *(_QWORD *)(v36 + 120);
        if ( *((_DWORD *)v87 + 6) )
        {
          v45 = *((_QWORD *)v87 + 6);
          v46 = ppalDefault;
          if ( (*(_DWORD *)(v45 + 2196) & 0x100) != 0 )
            v46 = DrvRealizeHalftonePalette((_QWORD *)v45, 0);
          if ( !pulXlate )
          {
            if ( v12 && v12[1].pulXlate )
            {
              pulXlate = (__int64)v12[1].pulXlate;
            }
            else
            {
              v47 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
              if ( !v12 || (v12->flXlate & 1) != 0 )
              {
                v48 = v92 == v40;
              }
              else
              {
                v46 = *(struct PALETTE **)&v12[2].iSrcType;
                if ( !v46 )
                {
                  v36 = v63;
                  v43 = 1;
                  goto LABEL_79;
                }
                v48 = *(_DWORD *)(v63 + 96) == *(_DWORD *)(v47 + 96);
              }
              if ( v48 )
                pulXlate = *(_QWORD *)(v47 + 120);
            }
          }
          v49 = 0;
          if ( pulXlate )
          {
            if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
            {
              v49 = 0x4000;
              if ( v46 == ppalDefault )
                v49 = 0x2000;
            }
          }
          if ( v12 )
            psoSrca = v12[1].iUniq;
          else
            psoSrca = 0;
          if ( v12 )
            v50 = *(_DWORD *)&v12[1].iSrcType;
          else
            v50 = 0;
          if ( v12 )
            flXlate = v12[1].flXlate;
          else
            flXlate = 0;
          if ( v12 )
            iUniq = v12[3].iUniq;
          else
            iUniq = 0;
          if ( v12 )
            v53 = (__int64)v12[2].pulXlate;
          else
            v53 = 0LL;
          inited = EXLATEOBJ::bInitXlateObj(
                     (__int64 *)&v70,
                     v53,
                     iUniq,
                     pulXlate,
                     *(_QWORD *)(v68 + 120),
                     (__int64)ppalDefault,
                     (__int64)v46,
                     flXlate,
                     v50,
                     psoSrca,
                     v49);
          v36 = v63;
          if ( !inited )
            goto LABEL_42;
          v12 = v70;
        }
LABEL_79:
        if ( v43 )
          goto LABEL_107;
        v64 = (struct _CLIPOBJ *)v89;
        v99 = 0LL;
        v100 = 0;
        v103 = 1;
        v104 = 0LL;
        v98 = 0LL;
        v105 = 0;
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v88) + 112) & 2) != 0 )
          v55 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v87 + 7) + 2872LL);
        else
          v55 = EngStretchBlt;
        v56 = v92;
        if ( v92->iType == 1 && *(_QWORD *)(v36 + 48) != *(_QWORD *)(v68 + 48) )
          v55 = EngStretchBlt;
        if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(v68 + 48) + 1848LL) & 0x10) == 0 )
          v55 = EngStretchBlt;
        v57 = v93;
        if ( v93->left < 0 || v93->top < 0 || v93->right > v92->sizlBitmap.cx || v93->bottom > v92->sizlBitmap.cy )
          v55 = EngStretchBlt;
        if ( v55 != EngStretchBlt || iMode != 4 || !a4 || !a4->iDComplexity )
        {
          v58 = *(LONG **)v90;
LABEL_104:
          v59 = v64;
          goto LABEL_105;
        }
        v58 = *(LONG **)v90;
        if ( !**(_DWORD **)v90 && !*(_DWORD *)(*(_QWORD *)v90 + 4LL) )
          goto LABEL_104;
        ECLIPOBJTMPIFNEEDED::vSetup(
          (ECLIPOBJTMPIFNEEDED *)&v97,
          1,
          *(struct REGION **)(v89 + 56),
          (struct ERECTL *)(v89 + 4),
          1);
        if ( !v98 )
        {
          v42 = v61;
          v43 = 1;
          goto LABEL_106;
        }
        v58 = *(LONG **)v90;
        v59 = &v97;
        v57 = v93;
        v43 = 0;
        v56 = v92;
LABEL_105:
        v42 = OffStretchBlt(
                (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int))v55,
                v58,
                *(__int64 *)v88,
                (__int64)pptlMask,
                (__int64)v56,
                (__int64)psoMask,
                v59,
                (__int64)v12,
                (__int64)pca,
                pptlHTOrg,
                v14,
                v57,
                (__int64)pptlMask,
                iMode) & v61;
        v61 = v42;
LABEL_106:
        ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v97);
        if ( v43 )
        {
LABEL_107:
          v42 = 0;
          v61 = 0;
        }
        v12 = v85;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v70);
      }
      while ( (unsigned int)MSURF::bNextSurface((MSURF *)v86) );
    }
    v11 = v42;
    MULTISURF::~MULTISURF((MULTISURF *)v91);
LABEL_110:
    SURFMEM::~SURFMEM((SURFMEM *)&v71);
  }
LABEL_111:
  SURFMEM::~SURFMEM((SURFMEM *)&v78);
  return v11;
}
