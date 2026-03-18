/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0270B58
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0271124 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C000B980 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0038E2C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C003CD90 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041764 (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055270 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0068678 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     XLATEOBJ_iXlate @ 0x1C00DF4B0 (XLATEOBJ_iXlate.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00F0AE8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C026F420 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C026FEEC (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0274D78 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C027914C (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C02B270C (-bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z.c)
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
  int v11; // r15d
  struct _SPRITESTATE *v12; // r13
  unsigned int v13; // r14d
  struct _BLENDFUNCTION *v14; // r12
  unsigned int v15; // r10d
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // edx
  LONG x; // ecx
  int y; // edx
  LONG v24; // r8d
  LONG v25; // r9d
  __int64 v26; // r13
  LONG v27; // eax
  struct _SPRITESTATE *v28; // r14
  __int64 v29; // rcx
  SURFACE *v30; // rbx
  __int64 v31; // rcx
  W32PIDLOCK *v32; // rdi
  __int64 v33; // rdi
  struct _BLENDFUNCTION v34; // eax
  ULONG v35; // eax
  int v36; // ebx
  struct PALETTE *v37; // rdx
  struct PALETTE *v38; // rax
  int v39; // ebx
  ULONG v40; // eax
  char v41; // r8
  int v42; // eax
  HSURF v43; // rcx
  struct _SPRITESTATE *v44; // rdi
  struct _SURFOBJ *v45; // r8
  struct _SURFOBJ *v46; // rcx
  __int64 v47; // rdx
  unsigned int v48; // ebx
  __int64 v50; // [rsp+60h] [rbp-69h] BYREF
  struct PALETTE *v51; // [rsp+68h] [rbp-61h] BYREF
  int v52; // [rsp+70h] [rbp-59h]
  LONG v53; // [rsp+74h] [rbp-55h]
  unsigned int v54; // [rsp+78h] [rbp-51h]
  int v55; // [rsp+7Ch] [rbp-4Dh]
  struct _BLENDFUNCTION v56; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v57; // [rsp+84h] [rbp-45h]
  int v58; // [rsp+88h] [rbp-41h]
  int v59; // [rsp+8Ch] [rbp-3Dh]
  struct _RECTL v60; // [rsp+90h] [rbp-39h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-29h] BYREF
  XLATEOBJ *pxlo; // [rsp+A8h] [rbp-21h] BYREF
  _QWORD v63[2]; // [rsp+B0h] [rbp-19h] BYREF
  struct _SPRITESTATE *v64; // [rsp+C0h] [rbp-9h]
  struct PALETTE *v65; // [rsp+C8h] [rbp-1h]
  int v66; // [rsp+110h] [rbp+47h]
  unsigned int v67; // [rsp+118h] [rbp+4Fh]
  ULONG NearestIndexFromColorref; // [rsp+118h] [rbp+4Fh]

  v11 = a2;
  v66 = 0;
  v12 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v64 = v12;
  v50 = *(_QWORD *)v12;
  if ( a2 == 0x2000000 )
  {
    v13 = 1;
    *((_DWORD *)a1 + 1) = 0x2000000;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v12 + 29);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v12 + 30);
    return v13;
  }
  if ( a2 )
  {
    v14 = a6;
  }
  else
  {
    v11 = *((_DWORD *)a1 + 1);
    v14 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !v14 && (v11 & 2) != 0 )
    return 0;
  DCOBJ::DCOBJ((DCOBJ *)v63, a4);
  v15 = 0;
  if ( !v63[0]
    || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v63)
    || (v17 = SrcSurfaceAccessCheck(*(struct SURFACE **)(v16 + 512), v16), v15 = 0, !v17)
    || (v18 = *(_QWORD *)(v63[0] + 48LL), v18 != *(_QWORD *)v12) && v18 != *(_QWORD *)(v50 + 40) )
  {
    v48 = v15;
    goto LABEL_80;
  }
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)&v60, a3);
    if ( !*(_QWORD *)&v60.left
      || (v19 = *(_QWORD *)(*(_QWORD *)&v60.left + 48LL), v19 != *(_QWORD *)(v63[0] + 48LL))
      || v19 != *(_QWORD *)v12 && v19 != *(_QWORD *)(v50 + 40) )
    {
      DCOBJ::~DCOBJ((DCOBJ *)&v60);
      v48 = 0;
      goto LABEL_80;
    }
    v65 = *(struct PALETTE **)(*(_QWORD *)&v60.left + 96LL);
    v20 = *(_QWORD *)(*(_QWORD *)&v60.left + 80LL);
    v21 = *(_DWORD *)(v20 + 40);
    v59 = *(_DWORD *)(v20 + 32);
    LODWORD(v20) = *(_DWORD *)(*(_QWORD *)&v60.left + 112LL);
    v58 = v21;
    v57 = v20;
    DCOBJ::~DCOBJ((DCOBJ *)&v60);
  }
  else
  {
    v58 = 0xFFFFFF;
    v59 = 0;
    v57 = 0;
    v65 = ppalDefault;
  }
  x = a7->x;
  y = a7->y;
  v24 = a7->x + a8->cx;
  v25 = y + a8->cy;
  v60.left = a7->x;
  v26 = *(_QWORD *)(v63[0] + 512LL);
  v60.right = v24;
  v60.top = y;
  v60.bottom = v25;
  if ( v26 )
  {
    if ( x >= 0 && y >= 0 && x < v24 && y < v25 && v24 <= *(_DWORD *)(v26 + 56) )
    {
      v27 = *(_DWORD *)(v26 + 60);
      if ( v25 <= v27 )
      {
        if ( a9 )
        {
          v52 = *(_DWORD *)(v26 + 56);
          v51 = 0LL;
          v53 = v27;
          ERECTL::operator*=(a9, &v51);
        }
        v28 = v64;
        SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v64 + 128));
        v29 = *((_QWORD *)a1 + 16);
        if ( v29 )
        {
          v30 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v29);
          if ( (unsigned int)SURFACE::bRedirectionBitmap(v30) )
          {
            v32 = (W32PIDLOCK *)(v31 + 264);
            W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v31 + 264));
            if ( (*(_DWORD *)a1 & 0x200) != 0 )
            {
              v51 = 0LL;
              v52 = *((_DWORD *)v30 + 14);
              v53 = *((_DWORD *)v30 + 15);
              ERECTL::operator*=(&v60, &v51);
            }
            W32PIDLOCK::vUnlockSingleThread(v32);
          }
        }
        pxlo = 0LL;
        v33 = *(_QWORD *)(v63[0] + 96LL);
        v61 = *(_QWORD *)(v26 + 120);
        XEPALOBJ::vRefPalette((XEPALOBJ *)&v61);
        SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v28 + 128));
        if ( v11 != 3 || v14->AlphaFormat )
        {
          v35 = v67;
          v36 = 0;
          v55 = 0;
        }
        else
        {
          v34 = *v14;
          v11 = 2;
          v14 = &v56;
          v56 = v34;
          v56.AlphaFormat = 1;
          v55 = 1;
          v35 = rgbFromColorref(gppalRGB, v33, a5);
          v36 = 1;
        }
        NearestIndexFromColorref = v35;
        if ( v11 == 2 && (v14->AlphaFormat & 1) != 0 )
        {
          v54 = 6;
          v37 = gppalRGB;
          v38 = ppalDefault;
        }
        else
        {
          v54 = 0;
          v37 = *(struct PALETTE **)(v50 + 1832);
          v38 = v65;
        }
        v51 = v37;
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&pxlo,
                              0LL,
                              v57,
                              v61,
                              (__int64)v37,
                              v33,
                              (__int64)v38,
                              v58,
                              v59,
                              0,
                              0) )
          goto LABEL_76;
        v66 = 1;
        *((_DWORD *)a1 + 1) = v11;
        *((struct _RECTL *)a1 + 6) = v60;
        if ( v11 == 4 )
        {
          *(_DWORD *)a1 |= 8u;
          v39 = 1;
          goto LABEL_68;
        }
        if ( v11 == 1 )
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(v61, v33, a5, 1LL);
          v40 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
          *(_DWORD *)a1 &= ~8u;
          *((_DWORD *)a1 + 51) = v40;
          v39 = *(_DWORD *)(v50 + 60) & 4;
          goto LABEL_60;
        }
        if ( v11 != 2 || !(unsigned int)bSpUpdateAlpha(a1, v14, 0) )
          goto LABEL_75;
        v41 = v14->AlphaFormat & 1;
        if ( !v41 || (unsigned int)bIsSourceBGRA((struct SURFACE *)v26) )
        {
          if ( !v36 )
          {
            if ( v41 )
              v39 = *(_DWORD *)(v50 + 60) & 2;
            else
              v39 = *(_DWORD *)(v50 + 60) & 1;
LABEL_60:
            if ( v39 )
              goto LABEL_68;
            goto LABEL_61;
          }
        }
        else if ( !v36 )
        {
          goto LABEL_75;
        }
        v39 = 0;
LABEL_61:
        if ( *(_WORD *)(v26 + 100) || (*(_BYTE *)(v26 + 102) & 0x20) != 0 )
        {
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v50) )
          {
            v42 = *(_DWORD *)(v26 + 116);
            if ( (v42 & 0x20) == 0 )
            {
              v43 = *(HSURF *)(v26 + 32);
              *(_DWORD *)(v26 + 116) = v42 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC(v43);
            }
          }
          else
          {
            bConvertDfbDcToDib((struct XDCOBJ *)v63);
          }
          v26 = *(_QWORD *)(v63[0] + 512LL);
        }
LABEL_68:
        v44 = v64;
        vSpDirectDriverAccess(v64, 0);
        v45 = 0LL;
        if ( v26 )
          v45 = (struct _SURFOBJ *)(v26 + 24);
        bSpCreateShape(a1, &gptlZero, v45, pxlo, &v60, v51, v54, v39 == 0, a9);
        vSpDirectDriverAccess(v44, 1);
        v46 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( v46 )
        {
          if ( v55 )
          {
            if ( (*(_DWORD *)a1 & 0x40) != 0 )
              *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
            else
              vSpUpdatePerPixelAlphaFromColorKey(v46, NearestIndexFromColorref, a9, 0LL);
          }
          goto LABEL_76;
        }
LABEL_75:
        vSpDeleteShape(a1);
        *((_DWORD *)a1 + 1) = 4;
        v66 = 0;
LABEL_76:
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v61);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo, v47);
      }
    }
  }
  v48 = v66;
LABEL_80:
  DCOBJ::~DCOBJ((DCOBJ *)v63);
  return v48;
}
