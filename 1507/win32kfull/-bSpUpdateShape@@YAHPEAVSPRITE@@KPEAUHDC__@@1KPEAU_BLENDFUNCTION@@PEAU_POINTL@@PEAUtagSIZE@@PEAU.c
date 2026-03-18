/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0271B2C
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0272120 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C00093A0 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0013D4C (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C0036F98 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C008A720 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C009CE8C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A2224 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00D81F0 (XLATEOBJ_iXlate.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C014D0E8 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C02703F4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C0270EC0 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0275D84 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C027A158 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C02B35C0 (-bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z.c)
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
  LONG v28; // eax
  SPRITERANGELOCK *v29; // r14
  __int64 v30; // rdx
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
  int v42; // ebx
  ULONG v43; // eax
  char v44; // r8
  int v45; // eax
  HSURF v46; // rcx
  struct _SPRITESTATE *v47; // rdi
  struct _SURFOBJ *v48; // r8
  struct _SURFOBJ *v49; // rcx
  __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  struct PALETTE *v52; // [rsp+68h] [rbp-98h] BYREF
  int v53; // [rsp+70h] [rbp-90h]
  LONG v54; // [rsp+74h] [rbp-8Ch]
  int v55; // [rsp+78h] [rbp-88h]
  int v56; // [rsp+7Ch] [rbp-84h]
  int v57; // [rsp+80h] [rbp-80h]
  int v58; // [rsp+84h] [rbp-7Ch]
  unsigned int v59; // [rsp+88h] [rbp-78h]
  struct _BLENDFUNCTION v60; // [rsp+8Ch] [rbp-74h] BYREF
  struct _SPRITESTATE *v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h] BYREF
  XLATEOBJ *pxlo; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v64; // [rsp+A8h] [rbp-58h] BYREF
  struct PALETTE *v65; // [rsp+B8h] [rbp-48h]
  _QWORD v66[6]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v67[12]; // [rsp+F0h] [rbp-10h] BYREF
  int v68; // [rsp+160h] [rbp+60h]
  unsigned int v69; // [rsp+168h] [rbp+68h]
  ULONG NearestIndexFromColorref; // [rsp+168h] [rbp+68h]

  v10 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v12 = a2;
  v68 = 0;
  v61 = v10;
  v51 = *(_QWORD *)v10;
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
  DCOBJ::DCOBJ((DCOBJ *)v66, a4);
  if ( !v66[0]
    || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v66)
    || !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v15 + 512))
    || (v16 = v66[0], v17 = v61, v18 = *(_QWORD *)(v66[0] + 48LL), v18 != *(_QWORD *)v61)
    && v18 != *(_QWORD *)(v51 + 40) )
  {
    v19 = 0;
    goto LABEL_80;
  }
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v67, a3);
    v19 = 0;
    if ( !v67[0]
      || (v20 = *(_QWORD *)(v67[0] + 48LL), v20 != *(_QWORD *)(v66[0] + 48LL))
      || v20 != *(_QWORD *)v61 && v20 != *(_QWORD *)(v51 + 40) )
    {
      DCOBJ::~DCOBJ((DCOBJ *)v67);
      goto LABEL_80;
    }
    v65 = *(struct PALETTE **)(v67[0] + 96LL);
    v21 = *(_QWORD *)(v67[0] + 80LL);
    v22 = *(_DWORD *)(v21 + 40);
    v57 = *(_DWORD *)(v21 + 32);
    LODWORD(v21) = *(_DWORD *)(v67[0] + 112LL);
    v58 = v22;
    v55 = v21;
    DCOBJ::~DCOBJ((DCOBJ *)v67);
    v17 = v61;
    v16 = v66[0];
  }
  else
  {
    v58 = 0xFFFFFF;
    v57 = 0;
    v55 = 0;
    v65 = ppalDefault;
  }
  x = a7->x;
  y = a7->y;
  v25 = a7->x + a8->cx;
  v26 = *(_QWORD *)(v16 + 512);
  v27 = y + a8->cy;
  v64.left = a7->x;
  v64.right = v25;
  v64.top = y;
  v64.bottom = v27;
  if ( v26 )
  {
    if ( x >= 0 && y >= 0 && x < v25 && y < v27 && v25 <= *(_DWORD *)(v26 + 56) )
    {
      v28 = *(_DWORD *)(v26 + 60);
      if ( v27 <= v28 )
      {
        if ( a9 )
        {
          v53 = *(_DWORD *)(v26 + 56);
          v52 = 0LL;
          v54 = v28;
          ERECTL::operator*=(a9, &v52);
        }
        v29 = (struct _SPRITESTATE *)((char *)v17 + 128);
        SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v17 + 128));
        v31 = *((_QWORD *)a1 + 16);
        if ( v31 )
        {
          v32 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v31);
          if ( (unsigned int)SURFACE::bRedirectionBitmap(v32) )
          {
            v34 = (W32PIDLOCK *)(v33 + 264);
            W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v33 + 264));
            if ( (*(_DWORD *)a1 & 0x200) != 0 )
            {
              v52 = 0LL;
              v53 = *((_DWORD *)v32 + 14);
              v54 = *((_DWORD *)v32 + 15);
              ERECTL::operator*=(&v64, &v52);
            }
            W32PIDLOCK::vUnlockSingleThread(v34);
          }
        }
        v35 = *(_QWORD *)(v26 + 120);
        pxlo = 0LL;
        v36 = *(_QWORD *)(v66[0] + 96LL);
        v62 = v35;
        XEPALOBJ::vRefPalette((XEPALOBJ *)&v62, v30);
        SPRITERANGELOCK::vUnlock(v29);
        if ( v12 != 3 || v14->AlphaFormat )
        {
          v38 = v69;
          v39 = 0;
          v56 = 0;
        }
        else
        {
          v37 = *v14;
          v12 = 2;
          v14 = &v60;
          v60 = v37;
          v60.AlphaFormat = 1;
          v56 = 1;
          v38 = rgbFromColorref(gppalRGB, v36, a5);
          v39 = 1;
        }
        NearestIndexFromColorref = v38;
        if ( v12 == 2 && (v14->AlphaFormat & 1) != 0 )
        {
          v59 = 6;
          v40 = gppalRGB;
          v41 = ppalDefault;
        }
        else
        {
          v59 = 0;
          v40 = *(struct PALETTE **)(v51 + 1832);
          v41 = v65;
        }
        v52 = v40;
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&pxlo,
                              0LL,
                              v55,
                              v62,
                              (__int64)v40,
                              v36,
                              (__int64)v41,
                              v58,
                              v57,
                              0,
                              0) )
          goto LABEL_76;
        v68 = 1;
        *((_DWORD *)a1 + 1) = v12;
        *((struct _RECTL *)a1 + 6) = v64;
        if ( v12 == 4 )
        {
          *(_DWORD *)a1 |= 8u;
          v42 = 1;
          goto LABEL_68;
        }
        if ( v12 == 1 )
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(v62, v36, a5, 1LL);
          v43 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
          *(_DWORD *)a1 &= ~8u;
          *((_DWORD *)a1 + 51) = v43;
          v42 = *(_DWORD *)(v51 + 60) & 4;
          goto LABEL_60;
        }
        if ( v12 != 2 || !(unsigned int)bSpUpdateAlpha(a1, v14, 0) )
          goto LABEL_75;
        v44 = v14->AlphaFormat & 1;
        if ( !v44 || (unsigned int)bIsSourceBGRA((struct SURFACE *)v26) )
        {
          if ( !v39 )
          {
            if ( v44 )
              v42 = *(_DWORD *)(v51 + 60) & 2;
            else
              v42 = *(_DWORD *)(v51 + 60) & 1;
LABEL_60:
            if ( v42 )
              goto LABEL_68;
            goto LABEL_61;
          }
        }
        else if ( !v39 )
        {
          goto LABEL_75;
        }
        v42 = 0;
LABEL_61:
        if ( *(_WORD *)(v26 + 100) || (*(_BYTE *)(v26 + 102) & 0x20) != 0 )
        {
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v51) )
          {
            v45 = *(_DWORD *)(v26 + 116);
            if ( (v45 & 0x20) == 0 )
            {
              v46 = *(HSURF *)(v26 + 32);
              *(_DWORD *)(v26 + 116) = v45 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC(v46);
            }
          }
          else
          {
            bConvertDfbDcToDib((struct XDCOBJ *)v66);
          }
          v26 = *(_QWORD *)(v66[0] + 512LL);
        }
LABEL_68:
        v47 = v61;
        vSpDirectDriverAccess(v61, 0);
        v48 = 0LL;
        if ( v26 )
          v48 = (struct _SURFOBJ *)(v26 + 24);
        bSpCreateShape(a1, &gptlZero, v48, pxlo, &v64, v52, v59, v42 == 0, a9);
        vSpDirectDriverAccess(v47, 1);
        v49 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( v49 )
        {
          if ( v56 )
          {
            if ( (*(_DWORD *)a1 & 0x40) != 0 )
              *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
            else
              vSpUpdatePerPixelAlphaFromColorKey(v49, NearestIndexFromColorref, a9, 0LL);
          }
          goto LABEL_76;
        }
LABEL_75:
        vSpDeleteShape(a1);
        *((_DWORD *)a1 + 1) = 4;
        v68 = 0;
LABEL_76:
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v62);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
      }
    }
  }
  v19 = v68;
LABEL_80:
  DCOBJ::~DCOBJ((DCOBJ *)v66);
  return v19;
}
