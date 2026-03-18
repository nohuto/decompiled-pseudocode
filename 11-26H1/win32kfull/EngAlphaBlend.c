/*
 * XREFs of EngAlphaBlend @ 0x1400E4850
 * Callers:
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140063B60 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140067F50 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x14009EFCC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x14030CF10 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1403212B0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x14032C760 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400E3898 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1400E5094 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1400E5C38 (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1400E61A0 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
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
  RECTL v7; // xmm0
  RECTL v8; // xmm1
  struct XLATE *v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  struct SURFACE *v12; // r15
  BOOL v13; // edi
  bool v15; // zf
  struct SURFACE *v16; // rdx
  LONG left; // r12d
  LONG right; // r13d
  struct _RECTL v19; // xmm6
  unsigned __int64 v20; // r15
  int v21; // eax
  int v22; // ecx
  __int64 *v23; // rax
  __int64 v24; // rbx
  int v25; // ecx
  Gre::Base *v26; // rcx
  struct Gre::Base::SESSION_GLOBALS *v27; // r9
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  ULONG *pulXlate; // rax
  __int64 v30; // rbx
  int v31; // eax
  XCLIPOBJ *v32; // rsi
  __int64 v33; // rcx
  int v34; // edx
  LONG bottom; // r9d
  LONG v36; // r10d
  unsigned int v37; // eax
  HDEV v38; // r14
  struct XLATE *v39; // rsi
  LONG v40; // edi
  LONG v41; // r11d
  LONG v42; // r8d
  LONG v43; // edx
  __int64 v44; // r9
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // r8
  int v48; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  __int128 v54; // xmm0
  int v55; // eax
  struct SCAN *pScan; // rax
  int v57; // r8d
  _DWORD *i; // rdx
  struct _RECTL v59; // xmm0
  __int64 v60; // rbx
  struct Gre::Base::SESSION_GLOBALS *v61; // rax
  int *v62; // [rsp+30h] [rbp-D8h]
  int v63; // [rsp+40h] [rbp-C8h]
  int v64; // [rsp+68h] [rbp-A0h]
  LONG v65; // [rsp+68h] [rbp-A0h]
  int v66; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v67; // [rsp+6Ch] [rbp-9Ch]
  ULONG *v68; // [rsp+70h] [rbp-98h] BYREF
  __int64 v69; // [rsp+78h] [rbp-90h] BYREF
  HDEV v70; // [rsp+80h] [rbp-88h] BYREF
  XLATEOBJ *v71; // [rsp+88h] [rbp-80h] BYREF
  HDEV hdev; // [rsp+90h] [rbp-78h] BYREF
  LONG v73; // [rsp+98h] [rbp-70h]
  LONG top; // [rsp+9Ch] [rbp-6Ch]
  struct XLATE *v75; // [rsp+A0h] [rbp-68h]
  XCLIPOBJ *v76; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v77; // [rsp+B0h] [rbp-58h] BYREF
  char v78; // [rsp+B8h] [rbp-50h]
  int v79; // [rsp+BCh] [rbp-4Ch]
  int v80[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-40h] BYREF
  char v82; // [rsp+D0h] [rbp-38h]
  int v83; // [rsp+D4h] [rbp-34h]
  _DWORD v84[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v85; // [rsp+E8h] [rbp-20h]
  int v86; // [rsp+F0h] [rbp-18h]
  int v87; // [rsp+F4h] [rbp-14h]
  __int64 v88; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v89; // [rsp+100h] [rbp-8h]
  __int64 v90; // [rsp+108h] [rbp+0h]
  char *v91; // [rsp+110h] [rbp+8h]
  XCLIPOBJ *v92; // [rsp+118h] [rbp+10h]
  unsigned __int64 v93; // [rsp+120h] [rbp+18h]
  _OWORD v94[2]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v95; // [rsp+148h] [rbp+40h]
  struct _RECTL v96; // [rsp+158h] [rbp+50h] BYREF
  RECTL v97; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v98; // [rsp+178h] [rbp+70h] BYREF
  struct _RECTL v99; // [rsp+188h] [rbp+80h] BYREF
  unsigned int v100; // [rsp+198h] [rbp+90h] BYREF
  struct _RECTL v101; // [rsp+19Ch] [rbp+94h] BYREF
  char v102[316]; // [rsp+1ACh] [rbp+A4h] BYREF

  v71 = pxlo;
  v7 = *prclDest;
  v8 = *prclSrc;
  v9 = *(struct XLATE **)&pBlendObj[2].BlendFunction.BlendOp;
  v10 = (unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL);
  v76 = (XCLIPOBJ *)pco;
  v90 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v11 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v12 = (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL));
  v96 = v7;
  LODWORD(v69) = 1;
  v13 = 0;
  v93 = v10;
  v75 = v9;
  v89 = v11;
  v97 = v8;
  memset(v94, 0, sizeof(v94));
  v95 = 0LL;
  if ( v10 )
  {
    v15 = (pBlendObj->BlendFunction.BlendFlags & 1) == 0;
    DWORD2(v95) = *pBlendObj;
    v77 = 0LL;
    v78 = 0;
    v79 = 0;
    v81 = 0LL;
    v82 = 0;
    v83 = 0;
    if ( !v15 )
    {
      v88 = 0LL;
      if ( v96.right - v96.left != v97.right - v97.left || v96.bottom - v96.top != v97.bottom - v97.top )
      {
        LOBYTE(v13) = (unsigned int)EngHTBlt(
                                      psoDest,
                                      psoSrc,
                                      0LL,
                                      v76,
                                      v71,
                                      0LL,
                                      &v88,
                                      prclDest,
                                      prclSrc,
                                      0LL,
                                      512,
                                      pBlendObj) == 1;
        goto LABEL_48;
      }
      v9 = v75;
    }
    hdev = psoDest->hdev;
    if ( hdev )
      PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v70 = psoSrc->hdev;
    if ( v70 )
      PDEVOBJ::vSync((PDEVOBJ *)&v70, psoSrc, 0LL, 0);
    v70 = (HDEV)psSetupTransparentSrcSurface(
                  v12,
                  (struct SURFACE *)v10,
                  &v96,
                  (struct _XLATEOBJ *)v9,
                  &v97,
                  (struct SURFMEM *)&v81,
                  0,
                  0);
    v16 = (struct SURFACE *)v70;
    if ( !v70 )
      goto LABEL_46;
    left = v96.left;
    right = v96.right;
    if ( v96.left == v96.right )
      goto LABEL_46;
    v19 = v96;
    v73 = v97.left;
    top = v97.top;
    v20 = v10;
    v21 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v96, 4));
    v66 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v96, 12));
    v99 = v96;
    v22 = v66 - v21;
    v64 = v21;
    LODWORD(v68) = v66 - v21;
    hdev = (HDEV)EngCopyBits;
    if ( *(_WORD *)(v10 + 100) )
    {
      v23 = *(__int64 **)(v10 + 128);
      v24 = *(_QWORD *)(v10 + 48);
      v84[2] = v22;
      v84[0] = *(_DWORD *)(v10 + 96);
      v25 = *(_DWORD *)(v10 + 112) & 0x40000;
      v84[3] = 0;
      v87 = 0;
      v84[1] = v96.right - v96.left;
      v86 = v25;
      v85 = 0LL;
      if ( v23 )
        v85 = *v23;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v77, (struct _DEVBITMAPINFO *)v84, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
        goto LABEL_22;
      v26 = *(Gre::Base **)(v10 + 48);
      *(_QWORD *)(v77 + 48) = v26;
      v98.bottom = (int)v68;
      v80[0] = v96.left;
      v80[1] = v96.top;
      *(_QWORD *)&v98.left = 0LL;
      v98.right = right - left;
      v27 = Gre::Base::Globals(v26);
      v28 = (*(_DWORD *)(v10 + 112) & 0x400) != 0
          ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v24 + 2832)
          : EngCopyBits;
      v62 = v80;
      if ( ((unsigned int (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, char *, struct _RECTL *))v28)(
             (v77 + 24) & -(__int64)(v77 != 0),
             v10 + 24,
             0LL,
             (char *)v27 + 4664,
             &v98) )
      {
        v19 = v98;
        v20 = v77;
        v96 = v98;
      }
      else
      {
        v19 = v96;
        v20 = 0LL;
      }
      if ( !v20 )
        goto LABEL_22;
      v16 = (struct SURFACE *)v70;
      v66 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v19, 12));
      left = v19.left;
      right = _mm_srli_si128((__m128i)v19, 8).m128i_u32[0];
      v64 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v19, 4));
    }
    pulXlate = (ULONG *)*((_QWORD *)v16 + 16);
    v30 = *(_QWORD *)(v20 + 128);
    v68 = pulXlate;
    v69 = v30;
    if ( !pulXlate )
    {
      if ( v71 && v71[1].pulXlate )
      {
        pulXlate = v71[1].pulXlate;
        v68 = pulXlate;
      }
      else
      {
        v51 = *((_QWORD *)v16 + 6);
        if ( v51 )
        {
          pulXlate = *(ULONG **)(v51 + 1792);
          v68 = pulXlate;
        }
      }
    }
    if ( !v30 )
    {
      v50 = *(_QWORD *)(v20 + 48);
      if ( v50 )
      {
        v30 = *(_QWORD *)(v50 + 1792);
        v69 = v30;
      }
    }
    if ( pulXlate && v30 )
    {
      v32 = 0LL;
      if ( v20 == v10 )
        v32 = v76;
      v92 = v32;
      v31 = bDetermineAlphaBlendFunction(
              (struct SURFACE *)v20,
              v16,
              (struct XEPALOBJ *)&v69,
              (struct XEPALOBJ *)&v68,
              v75,
              (int)v62,
              (struct _ALPHA_DISPATCH_FORMAT *)v94,
              v63);
      LODWORD(v69) = v31;
      if ( !v31 )
        goto LABEL_47;
      memset_0(v102, 0, 0x130uLL);
      v34 = 0;
      LODWORD(v68) = 0;
      v100 = 1;
      v101 = v19;
      if ( v32 )
      {
        v33 = (unsigned int)*((unsigned __int8 *)v32 + 20) - 1;
        if ( *((_BYTE *)v32 + 20) == 1 )
        {
          v59 = *(struct _RECTL *)((char *)v32 + 4);
          LODWORD(v68) = 0;
          v101 = v59;
        }
        else if ( *((_BYTE *)v32 + 20) == 3 )
        {
          v53 = *((_QWORD *)v32 + 7);
          v54 = *(_OWORD *)((char *)v32 + 4);
          *(_QWORD *)((char *)v32 + 108) = 1LL;
          *((_DWORD *)v32 + 32) = 0;
          *((_OWORD *)v32 + 4) = v54;
          v55 = *(_DWORD *)(v53 + 48);
          LODWORD(v68) = 1;
          *((_DWORD *)v32 + 22) = v55 - 1;
          *((_DWORD *)v32 + 29) = 0;
          *((_DWORD *)v32 + 31) = 0;
          pScan = REGION_CORE::get_pScan((REGION_CORE *)(v53 + 24));
          *((_QWORD *)v32 + 10) = pScan;
          *((_DWORD *)v32 + 30) = 1;
          if ( !*((_DWORD *)v32 + 32) )
          {
            v33 = *(unsigned int *)pScan;
            v57 = *((_DWORD *)v32 + 17);
            for ( i = (_DWORD *)((char *)pScan + (unsigned int)(4 * v33 + 16)); i[2] <= v57; i = (_DWORD *)((char *)i + v33) )
            {
              v15 = (*((_DWORD *)v32 + 22))-- == 1;
              if ( v15 )
                goto LABEL_57;
              *((_QWORD *)v32 + 10) = i;
              v33 = (unsigned int)(4 * *i + 16);
            }
          }
          bottom = v96.bottom;
          right = v96.right;
          v36 = v96.top;
          left = v96.left;
          v34 = (int)v68;
          *((_DWORD *)v32 + 24) = 0;
          *((_DWORD *)v32 + 26) = 0;
          *((_DWORD *)v32 + 25) = -2;
          goto LABEL_28;
        }
      }
      bottom = v66;
      v36 = v64;
LABEL_28:
      if ( v34 )
        goto LABEL_57;
      while ( 1 )
      {
        v37 = 0;
        v67 = 0;
        if ( v100 )
        {
          v38 = v70;
          v39 = v75;
          v40 = v73;
          do
          {
            v33 = 16LL * v37;
            v91 = (char *)&v101 + v33;
            v65 = *(LONG *)((char *)&v101.left + v33);
            if ( v65 < left )
            {
              *(&v101.left + 4 * v37) = left;
              v65 = left;
            }
            v41 = *(&v101.right + 4 * v37);
            if ( v41 > right )
            {
              *(&v101.right + 4 * v37) = right;
              v41 = right;
            }
            v42 = *(&v101.top + 4 * v37);
            if ( v42 < v36 )
            {
              *(&v101.top + 4 * v37) = v36;
              v42 = v36;
            }
            v43 = *(&v101.bottom + 4 * v37);
            if ( v43 > bottom )
            {
              *(&v101.bottom + 4 * v37) = bottom;
              v43 = bottom;
            }
            if ( v42 < v43 )
            {
              v33 = (unsigned int)v65;
              if ( v65 < v41 )
              {
                v44 = *((_QWORD *)v38 + 10);
                v45 = *(_QWORD *)(v20 + 80);
                LODWORD(v71) = v65 + v40 - left;
                v46 = v42 + top - v36;
                v47 = *(unsigned int *)(v20 + 88);
                HIDWORD(v71) = v46;
                v48 = AlphaScanLineBlend(v45, v91, v47, v44, *((_DWORD *)v38 + 22), &v71, v39, v90, v89, v30);
                bottom = v96.bottom;
                right = v96.right;
                v36 = v96.top;
                left = v96.left;
                LODWORD(v69) = v48;
                v37 = v67;
              }
            }
            v67 = ++v37;
          }
          while ( v37 < v100 );
          v32 = v92;
          v10 = v93;
          v34 = (int)v68;
        }
        if ( !v34 )
          break;
LABEL_57:
        v52 = XCLIPOBJ::bEnum(v32, 0x144u, (char *)&v100, 0LL);
        v36 = v96.top;
        v34 = v52;
        bottom = v96.bottom;
        right = v96.right;
        left = v96.left;
        LODWORD(v68) = v52;
      }
      if ( v20 != v10 )
      {
        v60 = *(_QWORD *)(v10 + 48);
        v70 = 0LL;
        v61 = Gre::Base::Globals((Gre::Base *)v33);
        if ( (*(_DWORD *)(v10 + 112) & 0x400) != 0 )
          hdev = *(HDEV *)(v60 + 2832);
        ((void (__fastcall *)(unsigned __int64, unsigned __int64, XCLIPOBJ *, char *, struct _RECTL *, HDEV *))hdev)(
          v10 + 24,
          v20 + 24,
          v76,
          (char *)v61 + 4664,
          &v99,
          &v70);
      }
LABEL_46:
      v31 = v69;
      goto LABEL_47;
    }
LABEL_22:
    v31 = 0;
LABEL_47:
    v13 = v31;
LABEL_48:
    SURFMEM::~SURFMEM((SURFMEM *)&v81);
    SURFMEM::~SURFMEM((SURFMEM *)&v77);
    return v13;
  }
  return 0;
}
