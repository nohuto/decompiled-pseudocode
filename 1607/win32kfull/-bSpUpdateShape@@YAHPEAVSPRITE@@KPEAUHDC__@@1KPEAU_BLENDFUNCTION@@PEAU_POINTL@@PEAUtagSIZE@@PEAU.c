/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C026F02C
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C026F61C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C000CEB8 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0033D28 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003A954 (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055DD8 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00566C0 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C01091DC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C010F588 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C026D8F4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C026E3C0 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C02732CC (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0277694 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C02B5740 (-bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        int a2,
        HDC a3,
        HDC a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  struct _SPRITESTATE *v10; // rcx
  int v12; // r15d
  unsigned int v13; // r14d
  struct _BLENDFUNCTION *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r13
  struct _SPRITESTATE *v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // edx
  LONG x; // ecx
  int y; // edx
  LONG v25; // r8d
  __int64 v26; // r13
  LONG v27; // r9d
  LONG v28; // ecx
  LONG v29; // eax
  SPRITERANGELOCK *v30; // r14
  __int64 v31; // rcx
  SURFACE *v32; // rbx
  __int64 v33; // rcx
  W32PIDLOCK *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  struct _BLENDFUNCTION v37; // eax
  ULONG v38; // eax
  int v39; // ebx
  struct PALETTE *v40; // rdx
  struct PALETTE *v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ebx
  ULONG v45; // eax
  int v46; // eax
  HSURF v47; // rcx
  struct _SPRITESTATE *v48; // rdi
  struct _SURFOBJ *v49; // r8
  __int64 v50; // r8
  __int64 v51; // r9
  struct _SURFOBJ *v52; // rcx
  __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  struct PALETTE *v55; // [rsp+68h] [rbp-98h] BYREF
  LONG v56; // [rsp+70h] [rbp-90h]
  LONG v57; // [rsp+74h] [rbp-8Ch]
  struct _BLENDFUNCTION v58; // [rsp+78h] [rbp-88h] BYREF
  int v59; // [rsp+7Ch] [rbp-84h]
  int v60; // [rsp+80h] [rbp-80h]
  unsigned int v61; // [rsp+84h] [rbp-7Ch]
  unsigned int v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+8Ch] [rbp-74h]
  struct _SPRITESTATE *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h] BYREF
  XLATEOBJ *pxlo; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v67; // [rsp+A8h] [rbp-58h] BYREF
  struct PALETTE *v68; // [rsp+B8h] [rbp-48h]
  _QWORD v69[6]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v70[12]; // [rsp+F0h] [rbp-10h] BYREF
  int v71; // [rsp+160h] [rbp+60h]
  unsigned int v72; // [rsp+168h] [rbp+68h]
  ULONG NearestIndexFromColorref; // [rsp+168h] [rbp+68h]

  v10 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v12 = a2;
  v71 = 0;
  v64 = v10;
  v54 = *(_QWORD *)v10;
  if ( a2 == 0x2000000 )
  {
    v13 = 1;
    *((_DWORD *)a1 + 1) = 0x2000000;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v10 + 29);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v10 + 30);
    return v13;
  }
  if ( a2 )
  {
    v14 = a6;
  }
  else
  {
    v12 = *((_DWORD *)a1 + 1);
    v14 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !v14 && (v12 & 2) != 0 )
    return 0;
  DCOBJ::DCOBJ((DCOBJ *)v69, a4);
  if ( !v69[0]
    || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v69)
    || !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v15 + 512))
    || (v16 = v69[0], v17 = v64, v18 = *(_QWORD *)(v69[0] + 48LL), v18 != *(_QWORD *)v64)
    && v18 != *(_QWORD *)(v54 + 40) )
  {
    v19 = 0;
    goto LABEL_80;
  }
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v70, a3);
    v19 = 0;
    if ( !v70[0]
      || (v20 = *(_QWORD *)(v70[0] + 48LL), v20 != *(_QWORD *)(v69[0] + 48LL))
      || v20 != *(_QWORD *)v64 && v20 != *(_QWORD *)(v54 + 40) )
    {
      DCOBJ::~DCOBJ((DCOBJ *)v70);
      goto LABEL_80;
    }
    v68 = *(struct PALETTE **)(v70[0] + 96LL);
    v21 = *(_QWORD *)(v70[0] + 80LL);
    v22 = *(_DWORD *)(v21 + 40);
    v59 = *(_DWORD *)(v21 + 32);
    LODWORD(v21) = *(_DWORD *)(v70[0] + 112LL);
    v60 = v22;
    v61 = v21;
    DCOBJ::~DCOBJ((DCOBJ *)v70);
    v17 = v64;
    v16 = v69[0];
  }
  else
  {
    v60 = 0xFFFFFF;
    v59 = 0;
    v61 = 0;
    v68 = ppalDefault;
  }
  x = a7->x;
  y = a7->y;
  v25 = a7->x + a8->cx;
  v26 = *(_QWORD *)(v16 + 512);
  v27 = y + a8->cy;
  v67.left = a7->x;
  v67.right = v25;
  v67.top = y;
  v67.bottom = v27;
  if ( v26 )
  {
    if ( x >= 0 && y >= 0 && x < v25 && y < v27 )
    {
      v28 = *(_DWORD *)(v26 + 56);
      if ( v25 <= v28 )
      {
        v29 = *(_DWORD *)(v26 + 60);
        if ( v27 <= v29 )
        {
          if ( a9 )
          {
            v55 = 0LL;
            v56 = v28;
            v57 = v29;
            ERECTL::operator*=(a9, &v55);
          }
          v30 = (struct _SPRITESTATE *)((char *)v17 + 128);
          SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v17 + 128));
          v31 = *((_QWORD *)a1 + 16);
          if ( v31 )
          {
            v32 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v31);
            if ( (unsigned int)SURFACE::bRedirectionBitmap(v32) )
            {
              v34 = (W32PIDLOCK *)(v33 + 272);
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v33 + 272));
              if ( (*(_DWORD *)a1 & 0x200) != 0 )
              {
                v55 = 0LL;
                v56 = *((_DWORD *)v32 + 14);
                v57 = *((_DWORD *)v32 + 15);
                ERECTL::operator*=(&v67, &v55);
              }
              W32PIDLOCK::vUnlockSingleThread(v34);
            }
          }
          v35 = *(_QWORD *)(v26 + 120);
          pxlo = 0LL;
          v36 = *(_QWORD *)(v69[0] + 96LL);
          v65 = v35;
          XEPALOBJ::vRefPalette((XEPALOBJ *)&v65);
          SPRITERANGELOCK::vUnlock(v30);
          if ( v12 != 3 || v14->AlphaFormat )
          {
            v38 = v72;
            v39 = 0;
            v63 = 0;
          }
          else
          {
            v37 = *v14;
            v12 = 2;
            v14 = &v58;
            v58 = v37;
            v58.AlphaFormat = 1;
            v63 = 1;
            v38 = rgbFromColorref(gppalRGB, v36, a5);
            v39 = 1;
          }
          NearestIndexFromColorref = v38;
          if ( v12 == 2 && (v14->AlphaFormat & 1) != 0 )
          {
            v62 = 6;
            v40 = gppalRGB;
            v41 = ppalDefault;
          }
          else
          {
            v62 = 0;
            v40 = *(struct PALETTE **)(v54 + 1832);
            v41 = v68;
          }
          v55 = v40;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (__int64 *)&pxlo,
                                0LL,
                                v61,
                                v65,
                                (__int64)v40,
                                v36,
                                (__int64)v41,
                                v60,
                                v59,
                                0,
                                0) )
            goto LABEL_76;
          v71 = 1;
          *((_DWORD *)a1 + 1) = v12;
          *((struct _RECTL *)a1 + 6) = v67;
          if ( v12 == 4 )
          {
            *(_DWORD *)a1 |= 8u;
            v44 = 1;
            goto LABEL_68;
          }
          if ( v12 == 1 )
          {
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v65, v36, a5, 1LL);
            v45 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
            *(_DWORD *)a1 &= ~8u;
            *((_DWORD *)a1 + 51) = v45;
            v44 = *(_DWORD *)(v54 + 60) & 4;
            goto LABEL_60;
          }
          if ( v12 != 2 || !(unsigned int)bSpUpdateAlpha(a1, v14, 0) )
            goto LABEL_75;
          LOBYTE(v42) = v14->AlphaFormat & 1;
          if ( !(_BYTE)v42 || (unsigned int)bIsSourceBGRA((struct SURFACE *)v26) )
          {
            if ( !v39 )
            {
              if ( (_BYTE)v42 )
                v44 = *(_DWORD *)(v54 + 60) & 2;
              else
                v44 = *(_DWORD *)(v54 + 60) & 1;
LABEL_60:
              if ( v44 )
                goto LABEL_68;
              goto LABEL_61;
            }
          }
          else if ( !v39 )
          {
            goto LABEL_75;
          }
          v44 = 0;
LABEL_61:
          if ( *(_WORD *)(v26 + 100) || (*(_BYTE *)(v26 + 102) & 0x20) != 0 )
          {
            if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v54) )
            {
              v46 = *(_DWORD *)(v26 + 116);
              if ( (v46 & 0x20) == 0 )
              {
                v47 = *(HSURF *)(v26 + 32);
                *(_DWORD *)(v26 + 116) = v46 | 0x20;
                pConvertDfbSurfaceToDibPostNKAPC(v47);
              }
            }
            else
            {
              bConvertDfbDcToDib((struct XDCOBJ *)v69);
            }
            v26 = *(_QWORD *)(v69[0] + 512LL);
          }
LABEL_68:
          v48 = v64;
          vSpDirectDriverAccess(v64, 0LL, v42, v43);
          v49 = 0LL;
          if ( v26 )
            v49 = (struct _SURFOBJ *)(v26 + 24);
          bSpCreateShape(a1, &gptlZero, v49, pxlo, &v67, v55, v62, v44 == 0, a9);
          vSpDirectDriverAccess(v48, 1LL, v50, v51);
          v52 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v52 )
          {
            if ( v63 )
            {
              if ( (*(_DWORD *)a1 & 0x40) != 0 )
                *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
              else
                vSpUpdatePerPixelAlphaFromColorKey(v52, NearestIndexFromColorref, a9, 0LL);
            }
            goto LABEL_76;
          }
LABEL_75:
          vSpDeleteShape(a1);
          *((_DWORD *)a1 + 1) = 4;
          v71 = 0;
LABEL_76:
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v65);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
        }
      }
    }
  }
  v19 = v71;
LABEL_80:
  DCOBJ::~DCOBJ((DCOBJ *)v69);
  return v19;
}
