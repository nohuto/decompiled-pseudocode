/*
 * XREFs of EngAlphaBlend @ 0x1C003CDC0
 * Callers:
 *     GrePtInSprite @ 0x1C003BB90 (GrePtInSprite.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00BCCB4 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C00EA070 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0287AB0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C028E410 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02943F0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AA860 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C003D420 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C003D638 (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C003D804 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rax
  RECTL v10; // xmm0
  struct SURFACE *v11; // r13
  BOOL v12; // esi
  CLIPOBJ *v13; // rdx
  __int64 v14; // rax
  BLENDOBJ v15; // eax
  __int64 v16; // rcx
  signed __int32 v17; // ett
  struct SURFACE *v18; // rbx
  struct SURFACE *v19; // rdx
  LONG left; // r15d
  LONG right; // r12d
  struct _RECTL v22; // xmm6
  struct SURFACE *v23; // r13
  int v24; // eax
  LONG v25; // r14d
  LONG top; // r14d
  int v27; // ecx
  ULONG *pulXlate; // rax
  __int64 v29; // rbx
  XCLIPOBJ *v30; // rdi
  int v31; // eax
  int v32; // eax
  unsigned int v33; // edi
  int v34; // esi
  LONG *v35; // rdx
  LONG v36; // ecx
  LONG v37; // eax
  __int64 v38; // r8
  __int128 v40; // xmm0
  int v41; // ecx
  __int64 v42; // rbx
  bool v43; // zf
  int v44; // ecx
  _QWORD *v45; // rax
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v47; // rcx
  struct SURFMEM *v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+38h] [rbp-C8h]
  int v50; // [rsp+60h] [rbp-A0h]
  ULONG *v51; // [rsp+68h] [rbp-98h] BYREF
  int v52; // [rsp+70h] [rbp-90h]
  struct _RECTL v53; // [rsp+80h] [rbp-80h] BYREF
  struct SURFACE *v54; // [rsp+90h] [rbp-70h]
  int bottom; // [rsp+98h] [rbp-68h]
  HDEV hdev; // [rsp+A0h] [rbp-60h] BYREF
  HDEV v57; // [rsp+A8h] [rbp-58h] BYREF
  struct SURFACE *v58; // [rsp+B0h] [rbp-50h] BYREF
  char v59; // [rsp+B8h] [rbp-48h]
  int v60; // [rsp+BCh] [rbp-44h]
  LONG v61; // [rsp+C0h] [rbp-40h]
  XCLIPOBJ *v62; // [rsp+C8h] [rbp-38h]
  CLIPOBJ *v63; // [rsp+D0h] [rbp-30h]
  struct _XLATEOBJ *v64; // [rsp+D8h] [rbp-28h]
  __int64 v65; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v67[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v68[2]; // [rsp+F8h] [rbp-8h] BYREF
  XLATEOBJ *v69; // [rsp+100h] [rbp+0h]
  int v70; // [rsp+108h] [rbp+8h] BYREF
  __int64 v71; // [rsp+10Ch] [rbp+Ch]
  __int128 v72; // [rsp+114h] [rbp+14h]
  int v73; // [rsp+124h] [rbp+24h]
  int v74[2]; // [rsp+128h] [rbp+28h] BYREF
  char v75; // [rsp+130h] [rbp+30h]
  int v76; // [rsp+134h] [rbp+34h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  __int64 v78; // [rsp+140h] [rbp+40h]
  char v79[40]; // [rsp+148h] [rbp+48h] BYREF
  BLENDOBJ v80; // [rsp+170h] [rbp+70h]
  RECTL v81; // [rsp+178h] [rbp+78h] BYREF
  struct _RECTL v82; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v83; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v84; // [rsp+1B0h] [rbp+B0h] BYREF
  _OWORD v85[20]; // [rsp+1B4h] [rbp+B4h] BYREF

  v69 = pxlo;
  v63 = pco;
  v50 = 1;
  v54 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoDest);
  v9 = SURFOBJ_TO_SURFACE(psoSrc);
  v10 = *prclDest;
  v11 = (struct SURFACE *)v9;
  v12 = 0;
  v13 = v63;
  v64 = *(struct _XLATEOBJ **)&pBlendObj[2].BlendFunction.BlendOp;
  v14 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v53 = v10;
  v78 = v14;
  v77 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v52 = 0;
  v62 = (XCLIPOBJ *)v63;
  v81 = *prclSrc;
  if ( v54 )
  {
    v15 = *pBlendObj;
    v58 = 0LL;
    v59 = 0;
    v60 = 0;
    *(_QWORD *)v74 = 0LL;
    v75 = 0;
    v76 = 0;
    v16 = *((_QWORD *)v54 + 6);
    v80 = v15;
    if ( v16 )
    {
      _m_prefetchw((const void *)(v16 + 56));
      do
        v17 = *(_DWORD *)(v16 + 56);
      while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 56), v17 | 0x40000, v17) );
      v13 = v63;
    }
    if ( (pBlendObj->BlendFunction.BlendFlags & 1) != 0
      && (v53.right - v53.left != v81.right - v81.left || v53.bottom - v53.top != v81.bottom - v81.top) )
    {
      LOBYTE(v12) = (unsigned int)EngHTBlt(
                                    psoDest,
                                    psoSrc,
                                    0LL,
                                    v13,
                                    v69,
                                    0LL,
                                    &gptlZero,
                                    prclDest,
                                    prclSrc,
                                    0LL,
                                    512,
                                    pBlendObj) == 1;
      goto LABEL_46;
    }
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v57 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v57, psoSrc, 0LL, 0);
    v18 = v54;
    hdev = (HDEV)psSetupTransparentSrcSurface(v11, v54, &v53, v64, &v81, (struct SURFMEM *)v74, 0, 0);
    v19 = (struct SURFACE *)hdev;
    if ( !hdev || (left = v53.left, right = v53.right, v53.left == v53.right) )
    {
LABEL_44:
      v31 = v50;
LABEL_45:
      v12 = v31;
LABEL_46:
      SURFMEM::~SURFMEM((SURFMEM *)v74);
      SURFMEM::~SURFMEM((SURFMEM *)&v58);
      return v12;
    }
    v22 = v53;
    v61 = v81.left;
    v23 = v18;
    LODWORD(v57) = v81.top;
    v24 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v53, 4));
    v83 = v53;
    bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v53, 12));
    v25 = bottom - v24;
    LODWORD(v51) = v24;
    if ( *((_WORD *)v18 + 50) )
    {
      v41 = *((_DWORD *)v18 + 24);
      v42 = *((_QWORD *)v18 + 6);
      v43 = (*((_DWORD *)v23 + 28) & 0x40000) == 0;
      v71 = 0LL;
      v70 = v41;
      v44 = 0;
      v72 = 0uLL;
      if ( !v43 )
        v44 = 0x40000;
      v73 = 0;
      v45 = (_QWORD *)*((_QWORD *)v23 + 15);
      HIDWORD(v72) = v44;
      LODWORD(v71) = v53.right - v53.left;
      HIDWORD(v71) = v25;
      *(_QWORD *)((char *)&v72 + 4) = 0LL;
      if ( v45 )
        *(_QWORD *)((char *)&v72 + 4) = *v45;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v58, (struct _DEVBITMAPINFO *)&v70, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_75;
      *((_QWORD *)v58 + 6) = *((_QWORD *)v23 + 6);
      v43 = (*((_DWORD *)v23 + 28) & 0x400) == 0;
      v67[1] = (_DWORD)v51;
      *(_QWORD *)&v82.left = 0LL;
      v82.right = right - left;
      v82.bottom = v25;
      v67[0] = left;
      v46 = v43
          ? EngCopyBits
          : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v42 + 2872);
      v18 = v23;
      v47 = v58 ? (__int64)v58 + 24 : 0LL;
      v48 = (struct SURFMEM *)v67;
      if ( !((unsigned int (__fastcall *)(__int64, char *, _QWORD, XLATEOBJ *const, struct _RECTL *))v46)(
              v47,
              (char *)v23 + 24,
              0LL,
              xloIdent,
              &v82) )
        goto LABEL_75;
      v22 = v82;
      v23 = v58;
      v19 = (struct SURFACE *)hdev;
      v53 = v82;
      right = v82.right;
      top = v82.top;
      left = v82.left;
      bottom = v82.bottom;
    }
    else
    {
      top = v24;
    }
    if ( v23 )
    {
      if ( v23 == v18 )
      {
        v27 = 0;
      }
      else
      {
        v27 = 1;
        v52 = 1;
      }
      pulXlate = (ULONG *)*((_QWORD *)v19 + 15);
      v29 = *((_QWORD *)v23 + 15);
      v51 = pulXlate;
      v65 = v29;
      if ( !pulXlate )
      {
        if ( !v69 || (pulXlate = v69[1].pulXlate) == 0LL )
          pulXlate = *(ULONG **)(*((_QWORD *)v19 + 6) + 1832LL);
        v51 = pulXlate;
      }
      if ( !v29 )
      {
        v29 = *(_QWORD *)(*((_QWORD *)v23 + 6) + 1832LL);
        v65 = v29;
      }
      if ( pulXlate && v29 )
      {
        if ( v27 )
        {
          v30 = 0LL;
          v62 = 0LL;
        }
        else
        {
          v30 = v62;
        }
        v31 = bDetermineAlphaBlendFunction(
                v23,
                v19,
                (struct XEPALOBJ *)&v65,
                (struct XEPALOBJ *)&v51,
                (struct XLATE *)v64,
                (int)v48,
                (struct _ALPHA_DISPATCH_FORMAT *)v79,
                v49);
        v50 = v31;
        if ( !v31 )
          goto LABEL_45;
        v84 = 1;
        v32 = 0;
        LODWORD(v51) = 0;
        v85[0] = v22;
        if ( v30 )
        {
          if ( *((_BYTE *)v30 + 20) == 1 )
          {
            v40 = *(_OWORD *)((char *)v30 + 4);
            LODWORD(v51) = 0;
            v84 = 1;
            v85[0] = v40;
          }
          else if ( *((_BYTE *)v30 + 20) == 3 )
          {
            LODWORD(v51) = 1;
            XCLIPOBJ::cEnumStart(v30, 0, 0, 1u, 0x14u);
            v32 = (int)v51;
          }
        }
        if ( v32 )
          goto LABEL_47;
        while ( 1 )
        {
          v33 = 0;
          if ( v84 )
          {
            v34 = bottom;
            do
            {
              v35 = (LONG *)&v85[v33];
              if ( *v35 < left )
                *v35 = left;
              if ( v35[2] > right )
                v35[2] = right;
              if ( v35[1] < top )
                v35[1] = top;
              if ( v35[3] > v34 )
                v35[3] = v34;
              v36 = v35[1];
              if ( v36 < v35[3] )
              {
                v37 = *v35;
                if ( *v35 < v35[2] )
                {
                  v38 = *((unsigned int *)v23 + 22);
                  v68[1] = (_DWORD)v57 + v36 - top;
                  v68[0] = v61 + v37 - left;
                  v50 = AlphaScanLineBlend(
                          *((_QWORD *)v23 + 10),
                          v35,
                          v38,
                          *((_QWORD *)hdev + 10),
                          *((_DWORD *)hdev + 22),
                          v68,
                          v64,
                          v78,
                          v77,
                          v29);
                }
              }
              ++v33;
            }
            while ( v33 < v84 );
            v32 = (int)v51;
          }
          v30 = v62;
          if ( !v32 )
            break;
LABEL_47:
          v32 = XCLIPOBJ::bEnum(v30, 0x144u, (char *)&v84, 0LL);
          LODWORD(v51) = v32;
        }
        if ( v52 )
        {
          v66 = 0LL;
          if ( (*((_DWORD *)v54 + 28) & 0x400) != 0 )
            (*(void (__fastcall **)(char *, __int64, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))(*((_QWORD *)v54 + 6) + 2872LL))(
              (char *)v54 + 24,
              (__int64)v23 + 24,
              v63,
              xloIdent,
              &v83,
              &v66);
          else
            ((void (__fastcall *)(char *, char *, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))EngCopyBits)(
              (char *)v54 + 24,
              (char *)v23 + 24,
              v63,
              xloIdent,
              &v83,
              &v66);
        }
        goto LABEL_44;
      }
    }
LABEL_75:
    v31 = 0;
    goto LABEL_45;
  }
  return 0;
}
