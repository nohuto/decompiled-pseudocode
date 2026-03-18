/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C003D804
 * Callers:
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 *     EngTransparentBlt @ 0x1C00DEAF0 (EngTransparentBlt.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C002DC90 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C003CD90 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     EngStretchBlt @ 0x1C003E600 (EngStretchBlt.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C0151088 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
  XLATEOBJ *v66; // rax
  _QWORD *v67; // rax
  LONG top; // [rsp+60h] [rbp-248h]
  int v69; // [rsp+60h] [rbp-248h]
  int v70; // [rsp+64h] [rbp-244h]
  unsigned int v71; // [rsp+68h] [rbp-240h]
  __int64 v72; // [rsp+68h] [rbp-240h]
  int v73; // [rsp+70h] [rbp-238h]
  int IsSourceBGRA; // [rsp+78h] [rbp-230h]
  LONG bottom; // [rsp+90h] [rbp-218h]
  int v76; // [rsp+98h] [rbp-210h]
  int v77; // [rsp+A8h] [rbp-200h] BYREF
  __int64 v78; // [rsp+ACh] [rbp-1FCh]
  __int128 v79; // [rsp+B4h] [rbp-1F4h]
  int v80; // [rsp+C4h] [rbp-1E4h]
  LONG right; // [rsp+C8h] [rbp-1E0h]
  LONG v82; // [rsp+CCh] [rbp-1DCh]
  POINTL pptlHTOrg; // [rsp+D0h] [rbp-1D8h] BYREF
  struct _RECTL v84; // [rsp+D8h] [rbp-1D0h]
  struct SURFMEM *v85; // [rsp+E8h] [rbp-1C0h]
  XLATEOBJ *pxlo; // [rsp+F0h] [rbp-1B8h]
  _BYTE *v87; // [rsp+F8h] [rbp-1B0h]
  unsigned __int64 v88; // [rsp+100h] [rbp-1A8h]
  void *v89; // [rsp+108h] [rbp-1A0h]
  _DWORD *v90; // [rsp+110h] [rbp-198h]
  _QWORD v91[4]; // [rsp+118h] [rbp-190h] BYREF
  struct REGION *v92[2]; // [rsp+138h] [rbp-170h] BYREF
  _BYTE *v93; // [rsp+148h] [rbp-160h]
  _DWORD *v94; // [rsp+150h] [rbp-158h]
  _WORD *v95; // [rsp+158h] [rbp-150h]
  _DWORD *v96; // [rsp+160h] [rbp-148h]
  _QWORD *v97; // [rsp+168h] [rbp-140h]
  __int64 v98; // [rsp+170h] [rbp-138h]
  __int64 v99; // [rsp+178h] [rbp-130h]
  RECTL prclDest; // [rsp+180h] [rbp-128h] BYREF
  RECTL v101; // [rsp+190h] [rbp-118h]
  struct _RECTL v102; // [rsp+1A0h] [rbp-108h] BYREF
  RECTL v103; // [rsp+1B0h] [rbp-F8h] BYREF
  _BYTE v104[160]; // [rsp+1C0h] [rbp-E8h] BYREF

  pxlo = a4;
  v85 = a6;
  LODWORD(v89) = a3->right;
  left = a3->left;
  LODWORD(v90) = a3->bottom;
  top = a3->top;
  right = prclSrc->right;
  v11 = prclSrc->left;
  v12 = right - prclSrc->left;
  bottom = prclSrc->bottom;
  pptlHTOrg.x = prclSrc->top;
  v13 = (_DWORD)v89 - left != v12 || (_DWORD)v90 - top != bottom - pptlHTOrg.x;
  IsSourceBGRA = 0;
  v76 = 0;
  if ( a1 && a2 )
  {
    if ( !v13 )
    {
      if ( v11 < 0 )
      {
        a3->left = left - v11;
        prclSrc->left = 0;
      }
      v14 = prclSrc->right;
      v15 = *((_DWORD *)a1 + 14);
      if ( v14 > v15 )
      {
        a3->right += v15 - v14;
        prclSrc->right = *((_DWORD *)a1 + 14);
      }
      v16 = prclSrc->top;
      if ( v16 < 0 )
      {
        a3->top -= v16;
        prclSrc->top = 0;
      }
      v17 = prclSrc->bottom;
      v18 = *((_DWORD *)a1 + 15);
      if ( v17 > v18 )
      {
        a3->bottom += v18 - v17;
        prclSrc->bottom = *((_DWORD *)a1 + 15);
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
        return a1;
      }
      if ( !*((_WORD *)a1 + 50) )
        return a1;
      memset((char *)v91 + 4, 0, 28);
      v67 = (_QWORD *)*((_QWORD *)a1 + 15);
      LODWORD(v72) = v25 - v24;
      HIDWORD(v72) = v27 - v26;
      HIDWORD(v91[0]) = v25 - v24;
      *(_OWORD *)&v91[1] = (unsigned int)(v27 - v26);
      LODWORD(v91[0]) = *((_DWORD *)a1 + 24);
      LODWORD(v91[3]) = *((_DWORD *)a1 + 28) & 0x40000;
      if ( v67 )
        v91[2] = *v67;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v91, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v101.left = 0LL;
        *(_QWORD *)&v101.right = v72;
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)a1 + 6);
        right = prclSrc->left;
        v82 = prclSrc->top;
        _guard_dispatch_icall_fptr();
        *prclSrc = v101;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    v77 = 0;
    v78 = 0LL;
    v79 = 0uLL;
    v80 = 0;
    v29 = (_QWORD *)*((_QWORD *)a1 + 15);
    v97 = v29;
    v30 = *((_DWORD *)a2 + 14);
    v31 = *((_DWORD *)a2 + 15);
    v32 = 0;
    if ( left > 0 )
      v32 = left;
    v73 = v32;
    v84.left = v32;
    v33 = 0;
    if ( top > 0 )
      v33 = top;
    v70 = v33;
    v84.top = v33;
    if ( v30 > (int)v89 )
      v30 = (int)v89;
    v84.right = v30;
    if ( v31 > (int)v90 )
      v31 = (int)v90;
    v84.bottom = v31;
    if ( v32 >= v30 || v33 >= v31 )
      return 0LL;
    if ( v11 < 0 || right > *((_DWORD *)a1 + 14) || pptlHTOrg.x < 0 || bottom > *((_DWORD *)a1 + 15) )
      v76 = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(a1);
      LODWORD(v78) = v34 - v35;
      HIDWORD(v78) = v31 - v36;
      v77 = 6;
      HIDWORD(v79) = *((_DWORD *)a1 + 28) & 0x40000;
      *(_QWORD *)((char *)&v79 + 4) = *(_QWORD *)gppalRGB;
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v77, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( DIB )
      {
        if ( v76 )
        {
          if ( !IsSourceBGRA )
          {
            v71 = *(_DWORD *)(*(_QWORD *)a6 + 64LL);
            v47 = *(_DWORD **)(*(_QWORD *)a6 + 72LL);
            v90 = v47;
            v94 = v47;
            v48 = (unsigned __int64)v71 >> 2;
            v88 = v48;
            if ( v48 )
            {
              if ( ((unsigned __int8)v47 & 4) == 0 )
                goto LABEL_65;
              *v47 = -16777216;
              v88 = --v48;
              if ( v48 )
              {
                v94 = ++v47;
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
    LODWORD(v78) = (_DWORD)v89 - left;
    HIDWORD(v78) = (_DWORD)v90 - top;
    v77 = *((_DWORD *)a1 + 24);
    HIDWORD(v79) = *((_DWORD *)a1 + 28) & 0x40000;
    *(_QWORD *)((char *)&v79 + 4) = 0LL;
    if ( v29 )
      *(_QWORD *)((char *)&v79 + 4) = *v29;
    v69 = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v77, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v69 && v76 )
    {
      v49 = *(_QWORD *)a6;
      v50 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      switch ( *((_DWORD *)a1 + 24) )
      {
        case 1:
          v60 = *(void **)(v49 + 72);
          if ( a8 )
          {
            v98 = *(_QWORD *)(v49 + 72);
            v61 = 255;
          }
          else
          {
            v99 = *(_QWORD *)(v49 + 72);
            v61 = 0;
          }
          break;
        case 2:
          v61 = a8 | (16 * a8);
          v60 = *(void **)(v49 + 72);
          break;
        case 3:
          v60 = *(void **)(v49 + 72);
          v89 = v60;
          v61 = a8;
          break;
        default:
          switch ( *((_DWORD *)a1 + 24) )
          {
            case 4:
              v58 = *(_WORD **)(v49 + 72);
              v95 = v58;
              for ( i = 0; i < (unsigned int)v50 >> 1; ++i )
              {
                *v58++ = a8;
                v95 = v58;
              }
              break;
            case 5:
              v53 = *(_BYTE **)(v49 + 80);
              v93 = v53;
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
                v93 = v53;
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
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v104);
      v39 = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v92, v40);
      if ( !v92[0] )
        goto LABEL_104;
      prclDest.left -= v73;
      v41 = prclDest.right - v73;
      prclDest.right -= v73;
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
        *(_QWORD *)&v102.left = 0LL;
        v102.right = v46;
        v102.bottom = v45;
        RGNOBJ::vSet((RGNOBJ *)v92, &v102);
        v39 = (CLIPOBJ *)v104;
        v103 = prclDest;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v104, v92[0], (struct ERECTL *)&v103, 0);
      }
      *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)a1 + 6);
      v44 = 0LL;
      if ( *(_QWORD *)a6 )
        v44 = (SURFOBJ *)(*(_QWORD *)a6 + 24LL);
      if ( EngStretchBlt(
             v44,
             (SURFOBJ *)((char *)a1 + 24),
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
        *(_QWORD *)&prclSrc->right = v78;
        *a3 = v84;
        if ( !IsSourceBGRA && !a7 )
        {
          v62 = *(_QWORD *)a6;
          v63 = *(XLATEOBJ **)(*(_QWORD *)a6 + 80LL);
          v64 = (XLATEOBJ *)((char *)v63 + *(_DWORD *)(*(_QWORD *)a6 + 88LL) * *(_DWORD *)(*(_QWORD *)a6 + 60LL));
          pxlo = v64;
          while ( v63 != v64 )
          {
            v65 = v63;
            v66 = (XLATEOBJ *)((char *)v63 + 4 * *(int *)(v62 + 56));
            while ( v65 != v66 )
            {
              v65->iUniq ^= 0xFF000000;
              v65 = (XLATEOBJ *)((char *)v65 + 4);
            }
            v62 = *(_QWORD *)a6;
            v63 = (XLATEOBJ *)((char *)v63 + *(int *)(*(_QWORD *)a6 + 88LL));
          }
        }
        a1 = *(struct SURFACE **)a6;
      }
      else
      {
LABEL_104:
        a1 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v92);
      return a1;
    }
    return 0LL;
  }
  return 0LL;
}
