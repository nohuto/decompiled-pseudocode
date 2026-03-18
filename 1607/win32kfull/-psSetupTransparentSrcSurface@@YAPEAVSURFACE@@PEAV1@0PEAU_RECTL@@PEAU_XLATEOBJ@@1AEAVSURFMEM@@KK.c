/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00400D0
 * Callers:
 *     EngAlphaBlend @ 0x1C003F5B0 (EngAlphaBlend.c)
 *     EngTransparentBlt @ 0x1C0103690 (EngTransparentBlt.c)
 * Callees:
 *     EngStretchBlt @ 0x1C0038960 (EngStretchBlt.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0041780 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C01091DC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C0158A28 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

struct SURFACE *__fastcall psSetupTransparentSrcSurface(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct _RECTL *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclSrc,
        struct SURFMEM *a6,
        unsigned int a7,
        unsigned int a8)
{
  struct SURFACE *v9; // rsi
  LONG left; // ecx
  LONG v11; // r9d
  int v12; // eax
  BOOL v13; // eax
  LONG v14; // ecx
  LONG v15; // eax
  LONG v16; // eax
  LONG v17; // ecx
  LONG v18; // eax
  LONG v19; // ecx
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // ecx
  LONG v23; // eax
  LONG v24; // r8d
  LONG v25; // ecx
  LONG v26; // r9d
  LONG v27; // edx
  _QWORD *v29; // rax
  int v30; // r8d
  int v31; // edi
  int v32; // r11d
  int v33; // r10d
  int v34; // r8d
  int v35; // r11d
  int v36; // r10d
  int DIB; // r9d
  int v38; // edi
  CLIPOBJ *v39; // r13
  int v40; // edx
  int v41; // ecx
  int v42; // edx
  int v43; // edi
  SURFOBJ *v44; // rcx
  LONG v45; // edx
  LONG v46; // ecx
  _DWORD *v47; // r8
  unsigned __int64 v48; // rdx
  __int64 v49; // rdi
  size_t v50; // r8
  _DWORD *v51; // rdx
  unsigned int j; // ecx
  _BYTE *v53; // r8
  _BYTE *v54; // r9
  _BYTE *v55; // rdx
  __int64 v56; // rcx
  _BYTE *v57; // rdx
  _WORD *v58; // rdx
  unsigned int i; // ecx
  void *v60; // rcx
  unsigned int v61; // edx
  __int64 v62; // rdi
  XLATEOBJ *v63; // rdx
  XLATEOBJ *v64; // r8
  XLATEOBJ *v65; // rcx
  struct SURFACE *v66; // rax
  _QWORD *v67; // rax
  LONG top; // [rsp+60h] [rbp-248h]
  int v69; // [rsp+60h] [rbp-248h]
  int v70; // [rsp+64h] [rbp-244h]
  __int64 v71; // [rsp+68h] [rbp-240h]
  int v72; // [rsp+68h] [rbp-240h]
  unsigned int v73; // [rsp+6Ch] [rbp-23Ch]
  int v74; // [rsp+6Ch] [rbp-23Ch]
  int v75; // [rsp+74h] [rbp-234h]
  int IsSourceBGRA; // [rsp+78h] [rbp-230h]
  LONG bottom; // [rsp+90h] [rbp-218h]
  int v78; // [rsp+98h] [rbp-210h]
  LONG right; // [rsp+A0h] [rbp-208h]
  POINTL pptlHTOrg; // [rsp+A8h] [rbp-200h] BYREF
  struct SURFACE *v81; // [rsp+B0h] [rbp-1F8h]
  int v82; // [rsp+B8h] [rbp-1F0h] BYREF
  __int64 v83; // [rsp+BCh] [rbp-1ECh]
  __int128 v84; // [rsp+C4h] [rbp-1E4h]
  int v85; // [rsp+D4h] [rbp-1D4h]
  struct _RECTL v86; // [rsp+D8h] [rbp-1D0h]
  _BYTE *v87; // [rsp+E8h] [rbp-1C0h]
  struct SURFMEM *v88; // [rsp+F0h] [rbp-1B8h]
  XLATEOBJ *pxlo; // [rsp+F8h] [rbp-1B0h]
  void *v90; // [rsp+100h] [rbp-1A8h]
  _DWORD *v91; // [rsp+108h] [rbp-1A0h]
  unsigned __int64 v92; // [rsp+110h] [rbp-198h]
  _QWORD v93[4]; // [rsp+118h] [rbp-190h] BYREF
  struct REGION *v94[2]; // [rsp+138h] [rbp-170h] BYREF
  _DWORD *v95; // [rsp+148h] [rbp-160h]
  _DWORD *v96; // [rsp+150h] [rbp-158h]
  _BYTE *v97; // [rsp+158h] [rbp-150h]
  _WORD *v98; // [rsp+160h] [rbp-148h]
  _QWORD *v99; // [rsp+168h] [rbp-140h]
  __int64 v100; // [rsp+170h] [rbp-138h]
  __int64 v101; // [rsp+178h] [rbp-130h]
  RECTL prclDest; // [rsp+180h] [rbp-128h] BYREF
  RECTL v103; // [rsp+190h] [rbp-118h]
  struct _RECTL v104; // [rsp+1A0h] [rbp-108h] BYREF
  RECTL v105; // [rsp+1B0h] [rbp-F8h] BYREF
  _BYTE v106[160]; // [rsp+1C0h] [rbp-E8h] BYREF

  v9 = a1;
  v81 = a1;
  pxlo = a4;
  v88 = a6;
  LODWORD(v90) = a3->right;
  left = a3->left;
  LODWORD(v91) = a3->bottom;
  top = a3->top;
  right = prclSrc->right;
  v11 = prclSrc->left;
  v12 = right - prclSrc->left;
  bottom = prclSrc->bottom;
  pptlHTOrg.x = prclSrc->top;
  v13 = (_DWORD)v90 - left != v12 || (_DWORD)v91 - top != bottom - pptlHTOrg.x;
  IsSourceBGRA = 0;
  v78 = 0;
  if ( v9 && a2 )
  {
    if ( !v13 )
    {
      if ( v11 < 0 )
      {
        a3->left = left - v11;
        prclSrc->left = 0;
      }
      v14 = prclSrc->right;
      v15 = *((_DWORD *)v9 + 14);
      if ( v14 > v15 )
      {
        a3->right += v15 - v14;
        prclSrc->right = *((_DWORD *)v9 + 14);
      }
      v16 = prclSrc->top;
      if ( v16 < 0 )
      {
        a3->top -= v16;
        prclSrc->top = 0;
      }
      v17 = prclSrc->bottom;
      v18 = *((_DWORD *)v9 + 15);
      if ( v17 > v18 )
      {
        a3->bottom += v18 - v17;
        prclSrc->bottom = *((_DWORD *)v9 + 15);
      }
      if ( a3->left < 0 )
      {
        prclSrc->left -= a3->left;
        a3->left = 0;
      }
      v19 = a3->right;
      v20 = *((_DWORD *)a2 + 14);
      if ( v19 > v20 )
      {
        prclSrc->right += v20 - v19;
        a3->right = *((_DWORD *)a2 + 14);
      }
      v21 = a3->top;
      if ( v21 < 0 )
      {
        prclSrc->top -= v21;
        a3->top = 0;
      }
      v22 = a3->bottom;
      v23 = *((_DWORD *)a2 + 15);
      if ( v22 > v23 )
      {
        prclSrc->bottom += v23 - v22;
        a3->bottom = *((_DWORD *)a2 + 15);
      }
      v24 = a3->left;
      v25 = a3->right;
      if ( a3->left >= v25 || (v26 = a3->top, v27 = a3->bottom, v26 >= v27) )
      {
        a3->left = v25;
        return v9;
      }
      if ( !*((_WORD *)v9 + 50) )
        return v9;
      memset((char *)v93 + 4, 0, 28);
      v67 = (_QWORD *)*((_QWORD *)v9 + 15);
      v74 = v25 - v24;
      v72 = v27 - v26;
      HIDWORD(v93[0]) = v25 - v24;
      *(_OWORD *)&v93[1] = (unsigned int)(v27 - v26);
      LODWORD(v93[0]) = *((_DWORD *)v9 + 24);
      LODWORD(v93[3]) = *((_DWORD *)v9 + 28) & 0x40000;
      if ( v67 )
        v93[2] = *v67;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v93, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v103.left = 0LL;
        *(_QWORD *)&v103.right = __PAIR64__(v72, v74);
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v9 + 6);
        _guard_dispatch_icall_fptr();
        *prclSrc = v103;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    v82 = 0;
    v83 = 0LL;
    v84 = 0uLL;
    v85 = 0;
    v29 = (_QWORD *)*((_QWORD *)v9 + 15);
    v99 = v29;
    v30 = *((_DWORD *)a2 + 14);
    v31 = *((_DWORD *)a2 + 15);
    v32 = 0;
    if ( left > 0 )
      v32 = left;
    v75 = v32;
    v86.left = v32;
    v33 = 0;
    if ( top > 0 )
      v33 = top;
    v70 = v33;
    v86.top = v33;
    if ( v30 > (int)v90 )
      v30 = (int)v90;
    v86.right = v30;
    if ( v31 > (int)v91 )
      v31 = (int)v91;
    v86.bottom = v31;
    if ( v32 >= v30 || v33 >= v31 )
      return 0LL;
    if ( v11 < 0 || right > *((_DWORD *)v9 + 14) || pptlHTOrg.x < 0 || bottom > *((_DWORD *)v9 + 15) )
      v78 = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v9);
      LODWORD(v83) = v34 - v35;
      HIDWORD(v83) = v31 - v36;
      v82 = 6;
      HIDWORD(v84) = *((_DWORD *)v9 + 28) & 0x40000;
      *(_QWORD *)((char *)&v84 + 4) = *(_QWORD *)gppalRGB;
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( DIB )
      {
        if ( v78 )
        {
          if ( !IsSourceBGRA )
          {
            v73 = *(_DWORD *)(*(_QWORD *)a6 + 64LL);
            v47 = *(_DWORD **)(*(_QWORD *)a6 + 72LL);
            v91 = v47;
            v95 = v47;
            v48 = (unsigned __int64)v73 >> 2;
            v92 = v48;
            if ( v48 )
            {
              if ( ((unsigned __int8)v47 & 4) == 0 )
                goto LABEL_65;
              *v47 = -16777216;
              v92 = --v48;
              if ( v48 )
              {
                v95 = ++v47;
LABEL_65:
                memset64(v47, 0xFF000000FF000000uLL, v48 >> 1);
                if ( (v48 & 1) != 0 )
                  v47[v48 - 1] = -16777216;
              }
            }
          }
        }
      }
      v38 = v70;
      goto LABEL_46;
    }
    HIDWORD(v71) = (_DWORD)v91 - top;
    LODWORD(v71) = (_DWORD)v90 - left;
    v83 = v71;
    v82 = *((_DWORD *)v9 + 24);
    HIDWORD(v84) = *((_DWORD *)v9 + 28) & 0x40000;
    *(_QWORD *)((char *)&v84 + 4) = 0LL;
    if ( v29 )
      *(_QWORD *)((char *)&v84 + 4) = *v29;
    v69 = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v69 && v78 )
    {
      v49 = *(_QWORD *)a6;
      v50 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      switch ( *((_DWORD *)v9 + 24) )
      {
        case 1:
          v60 = *(void **)(v49 + 72);
          if ( a8 )
          {
            v100 = *(_QWORD *)(v49 + 72);
            v61 = 255;
          }
          else
          {
            v101 = *(_QWORD *)(v49 + 72);
            v61 = 0;
          }
          break;
        case 2:
          v61 = a8 | (16 * a8);
          v60 = *(void **)(v49 + 72);
          break;
        case 3:
          v60 = *(void **)(v49 + 72);
          v90 = v60;
          v61 = a8;
          break;
        default:
          switch ( *((_DWORD *)v9 + 24) )
          {
            case 4:
              v58 = *(_WORD **)(v49 + 72);
              v98 = v58;
              for ( i = 0; i < (unsigned int)v50 >> 1; ++i )
              {
                *v58++ = a8;
                v98 = v58;
              }
              break;
            case 5:
              v53 = *(_BYTE **)(v49 + 80);
              v97 = v53;
              v54 = &v53[*(_DWORD *)(v49 + 88) * *(_DWORD *)(v49 + 60)];
              while ( v53 != v54 )
              {
                v55 = v53;
                v87 = v53;
                v56 = 3 * *(_DWORD *)(v49 + 56) - 2LL;
                while ( v55 < &v53[v56] )
                {
                  *v55 = a8;
                  v57 = v55 + 1;
                  *v57++ = BYTE1(a8);
                  *v57 = BYTE2(a8);
                  v55 = v57 + 1;
                  v87 = v55;
                }
                v49 = *(_QWORD *)a6;
                v53 += *(int *)(*(_QWORD *)a6 + 88LL);
                v97 = v53;
              }
              break;
            case 6:
              v51 = *(_DWORD **)(v49 + 72);
              v96 = v51;
              for ( j = 0; j < (unsigned int)v50 >> 2; ++j )
              {
                *v51++ = a8;
                v96 = v51;
              }
              break;
          }
          goto LABEL_96;
      }
      memset(v60, v61, v50);
    }
LABEL_96:
    DIB = v69;
    v38 = v70;
LABEL_46:
    if ( DIB )
    {
      pptlHTOrg = 0LL;
      prclDest = *a3;
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v106);
      v39 = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v94, v40);
      if ( !v94[0] )
        goto LABEL_104;
      prclDest.left -= v75;
      v41 = prclDest.right - v75;
      prclDest.right -= v75;
      v42 = prclDest.top - v38;
      prclDest.top -= v38;
      v43 = prclDest.bottom - v70;
      prclDest.bottom -= v70;
      if ( prclDest.left < 0
        || v41 > *(_DWORD *)(*(_QWORD *)a6 + 56LL)
        || v42 < 0
        || v43 > *(_DWORD *)(*(_QWORD *)a6 + 60LL) )
      {
        v45 = *(_DWORD *)(*(_QWORD *)a6 + 60LL);
        v46 = *(_DWORD *)(*(_QWORD *)a6 + 56LL);
        *(_QWORD *)&v104.left = 0LL;
        v104.right = v46;
        v104.bottom = v45;
        RGNOBJ::vSet((RGNOBJ *)v94, &v104);
        v39 = (CLIPOBJ *)v106;
        v105 = prclDest;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v106, v94[0], (struct ERECTL *)&v105, 0);
      }
      *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v9 + 6);
      v44 = 0LL;
      if ( *(_QWORD *)a6 )
        v44 = (SURFOBJ *)(*(_QWORD *)a6 + 24LL);
      if ( EngStretchBlt(
             v44,
             (SURFOBJ *)((char *)v9 + 24),
             0LL,
             v39,
             pxlo,
             0LL,
             &pptlHTOrg,
             &prclDest,
             prclSrc,
             0LL,
             3u) )
      {
        *(_QWORD *)&prclSrc->left = 0LL;
        *(_QWORD *)&prclSrc->right = v83;
        *a3 = v86;
        if ( !IsSourceBGRA && !a7 )
        {
          v62 = *(_QWORD *)a6;
          v63 = *(XLATEOBJ **)(*(_QWORD *)a6 + 80LL);
          v64 = (XLATEOBJ *)((char *)v63 + *(_DWORD *)(*(_QWORD *)a6 + 88LL) * *(_DWORD *)(*(_QWORD *)a6 + 60LL));
          pxlo = v64;
          while ( v63 != v64 )
          {
            v65 = v63;
            v66 = (struct SURFACE *)(&v63->iUniq + *(int *)(v62 + 56));
            v81 = v66;
            while ( v65 != (XLATEOBJ *)v66 )
            {
              v65->iUniq ^= 0xFF000000;
              v65 = (XLATEOBJ *)((char *)v65 + 4);
            }
            v62 = *(_QWORD *)a6;
            v63 = (XLATEOBJ *)((char *)v63 + *(int *)(*(_QWORD *)a6 + 88LL));
          }
        }
        v9 = *(struct SURFACE **)a6;
      }
      else
      {
LABEL_104:
        v9 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v94);
      return v9;
    }
    return 0LL;
  }
  return 0LL;
}
