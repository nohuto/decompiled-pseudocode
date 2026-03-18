/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0294180
 * Callers:
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02947E0 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0294AA4 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 *     OffBitBlt @ 0x1C0102BB8 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025B574 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0269130 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0269258 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293588 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0293928 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02939B8 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0297C88 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0297D1C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02981CC (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0298934 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C0298C0C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0298D44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C029927C (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

int __fastcall MulBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *pxlo,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  struct _XLATEOBJ *v13; // rdi
  int v15; // ebx
  int v16; // ecx
  USHORT iType; // r14
  DHPDEV dhpdev; // rsi
  int v20; // r13d
  struct _SURFOBJ *v21; // rcx
  int v22; // r8d
  BRUSHOBJ *v23; // rdx
  int v24; // eax
  struct _SURFOBJ *v25; // rdx
  struct _RECTL *v26; // r8
  LONG y; // ecx
  int v28; // esi
  int v29; // r12d
  CLIPOBJ *v30; // rcx
  SURFOBJ *v31; // r13
  int Source; // eax
  __int64 v33; // r15
  struct _RECTL *v34; // rax
  __int64 pulXlate; // r14
  struct PALETTE *v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rax
  bool v39; // zf
  int v40; // r8d
  int iUniq; // r15d
  int v42; // r11d
  int flXlate; // r9d
  unsigned int v44; // r10d
  __int64 v45; // rdx
  struct SURFACE *v46; // rax
  BOOL (__stdcall *v47)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _XLATEOBJ *v49; // [rsp+70h] [rbp-90h] BYREF
  BRUSHOBJ *pbo; // [rsp+78h] [rbp-88h]
  POINTL *pptlBrush; // [rsp+80h] [rbp-80h]
  POINTL *pptlMask; // [rsp+88h] [rbp-78h]
  SURFOBJ *psoMask; // [rsp+90h] [rbp-70h]
  int v54; // [rsp+98h] [rbp-68h]
  struct _SURFOBJ *v55; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v56; // [rsp+A8h] [rbp-58h]
  struct _RECTL *v57; // [rsp+B0h] [rbp-50h]
  _DWORD v58[4]; // [rsp+B8h] [rbp-48h] BYREF
  struct _XLATEOBJ *v59; // [rsp+C8h] [rbp-38h]
  _DWORD v60[14]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v61; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v62[8]; // [rsp+120h] [rbp+20h] BYREF
  RECTL v63; // [rsp+128h] [rbp+28h]
  BYTE v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+140h] [rbp+40h]
  struct _DISPSURF *v66; // [rsp+160h] [rbp+60h]
  int v67[2]; // [rsp+168h] [rbp+68h]
  CLIPOBJ *pco; // [rsp+170h] [rbp+70h]
  int v69[2]; // [rsp+178h] [rbp+78h]
  int v70; // [rsp+180h] [rbp+80h]
  _BYTE v71[56]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  char v73; // [rsp+1D0h] [rbp+D0h]
  int v74; // [rsp+1D4h] [rbp+D4h]
  SURFOBJ *psoSrc; // [rsp+1F0h] [rbp+F0h]
  POINTL *pptlSrc; // [rsp+1F8h] [rbp+F8h]
  _BYTE v77[96]; // [rsp+200h] [rbp+100h] BYREF
  SURFOBJ *psoTrg; // [rsp+260h] [rbp+160h]
  RECTL *prclTrg; // [rsp+268h] [rbp+168h]

  v13 = pxlo;
  pptlMask = a8;
  pbo = a9;
  pptlBrush = a10;
  psoMask = a3;
  v55 = a2;
  v56 = a1;
  v57 = a6;
  v15 = 0;
  v54 = IsMetaDevBitmapForMirroring(a1);
  v59 = pxlo;
  if ( !a2 || (v16 = 1, a2->iType != 1) )
    v16 = 0;
  iType = a1->iType;
  v61 = *a6;
  if ( iType == 1 )
  {
    if ( v16 )
      return bBitBltScreenToScreen(a1, psoMask, a4, pxlo, &v61, a7, pptlMask, pbo, pptlBrush, rop4);
  }
  else if ( v16 )
  {
    return bBitBltFromScreen(a1, v55, psoMask, a4, pxlo, &v61, a7, pptlMask, pbo, pptlBrush, rop4);
  }
  dhpdev = a1->dhpdev;
  LODWORD(v49) = 1;
  if ( iType && (unsigned int)MSURF::bFindSurface((MSURF *)v62, v56, a4, a6) )
  {
    v20 = 1;
    v21 = (struct _SURFOBJ *)*((_QWORD *)dhpdev + 6);
    v22 = *((_DWORD *)dhpdev + 4);
    v23 = pbo;
    v24 = ((unsigned __int16)rop4 ^ (unsigned __int16)(rop4 >> 4)) & 0xF0F;
  }
  else
  {
    v20 = 0;
    v24 = 0;
    v21 = 0LL;
    dhpdev = 0LL;
    v22 = 0;
    v23 = 0LL;
  }
  MULTIBRUSH::MULTIBRUSH((MULTIBRUSH *)v60, v23, v22, (struct _VDEV *)dhpdev, v21, v24);
  v25 = v55;
  v72 = 0LL;
  v73 = 0;
  v74 = 0;
  if ( v55 )
  {
    v26 = (struct _RECTL *)v58;
    y = a7->y;
    v58[0] = a7->x;
    v58[1] = y;
    v58[3] = v61.bottom + y - v61.top;
    v58[2] = v61.right + v58[0] - v61.left;
  }
  else
  {
    v26 = 0LL;
    v25 = 0LL;
  }
  MULTISURF::vInit((MULTISURF *)v71, v25, v26);
  if ( !v54 && iType )
  {
    v29 = (int)v49;
    v28 = rop4;
  }
  else
  {
    MULTISURF::MULTISURF((MULTISURF *)v77, v56, v57);
    v28 = rop4;
    v29 = EngBitBlt(psoTrg, psoSrc, psoMask, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    MULTISURF::~MULTISURF((MULTISURF *)v77);
  }
  if ( v20 )
  {
    if ( !v60[0] )
    {
      v30 = pco;
      if ( v65 && pco )
      {
        pco->rclBounds = v63;
        pco->iDComplexity = v64;
        v30 = pco;
      }
      if ( v70 == 1 )
        EngDeleteClip(v30);
      goto LABEL_81;
    }
    v31 = v55;
    do
    {
      Source = MULTISURF::bLoadSource((MULTISURF *)v71, v66);
      v49 = 0LL;
      if ( Source )
      {
        if ( !psoSrc || !*((_DWORD *)v66 + 6) )
          goto LABEL_69;
        v33 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
        v34 = (struct _RECTL *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v67);
        pulXlate = *(_QWORD *)(v33 + 120);
        v57 = v34;
        v36 = ppalDefault;
        v37 = *((_QWORD *)v66 + 6);
        if ( (*(_DWORD *)(v37 + 2196) & 0x100) != 0 )
        {
          v36 = DrvRealizeHalftonePalette((_QWORD *)v37, 0);
        }
        else if ( *((int *)v66 + 6) > 0 && v13 && *(_QWORD *)&v13[2].iSrcType )
        {
          v36 = *(struct PALETTE **)&v13[2].iSrcType;
        }
        if ( !pulXlate )
        {
          if ( v13 && v13[1].pulXlate )
          {
            pulXlate = (__int64)v13[1].pulXlate;
          }
          else
          {
            v38 = SURFOBJ_TO_SURFACE_NOT_NULL(v56);
            if ( !v13 || (v13->flXlate & 1) != 0 )
            {
              v39 = psoSrc == v31;
            }
            else
            {
              v36 = *(struct PALETTE **)&v13[2].iSrcType;
              if ( !v36 )
                goto LABEL_72;
              v39 = *(_DWORD *)(v33 + 96) == *(_DWORD *)(v38 + 96);
            }
            if ( v39 )
              pulXlate = *(_QWORD *)(v38 + 120);
          }
        }
        v40 = 0;
        if ( pulXlate )
        {
          if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
          {
            v40 = 0x4000;
            if ( v36 == ppalDefault )
              v40 = 0x2000;
          }
        }
        if ( v13 )
          iUniq = v13[1].iUniq;
        else
          iUniq = 0;
        if ( v13 )
          v42 = *(_DWORD *)&v13[1].iSrcType;
        else
          v42 = 0;
        if ( v13 )
          flXlate = v13[1].flXlate;
        else
          flXlate = 0;
        if ( v13 )
          v44 = v13[3].iUniq;
        else
          v44 = 0;
        if ( v13 )
          v45 = (__int64)v13[2].pulXlate;
        else
          v45 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v49,
                             v45,
                             v44,
                             pulXlate,
                             *(_QWORD *)&v57[7].right,
                             (__int64)ppalDefault,
                             (__int64)v36,
                             flXlate,
                             v42,
                             iUniq,
                             v40) )
        {
          v13 = v49;
          v28 = rop4;
LABEL_69:
          v46 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v67);
          if ( v28 == 52428 )
          {
            if ( (*((_DWORD *)v46 + 28) & 0x400) != 0 )
              v47 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v66 + 7) + 2864LL);
            else
              v47 = EngCopyBits;
            v29 &= OffCopyBits(
                     (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v47,
                     *(LONG **)v69,
                     *(__int64 *)v67,
                     (int *)&gptlZero,
                     (__int64)psoSrc,
                     pco,
                     (__int64)v13,
                     &v61,
                     pptlSrc);
          }
          else
          {
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v60, v66, v46);
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v67) + 112) & 1) != 0 )
              v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v66 + 7) + 2856LL);
            else
              v48 = EngBitBlt;
            v29 &= OffBitBlt(
                     (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v48,
                     *(int **)v69,
                     *(__int64 *)v67,
                     &gptlZero,
                     (__int64)psoSrc,
                     (__int64)psoMask,
                     pco,
                     (__int64)v13,
                     &v61,
                     pptlSrc,
                     (__int64)pptlMask,
                     (__int64)pbo,
                     pptlBrush,
                     v28);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v60, *((_DWORD *)v66 + 4));
          }
          goto LABEL_79;
        }
      }
LABEL_72:
      v28 = rop4;
      v29 = 0;
LABEL_79:
      v13 = v59;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v49);
    }
    while ( (unsigned int)MSURF::bNextSurface((MSURF *)v62) );
  }
  v15 = v29;
LABEL_81:
  MULTISURF::~MULTISURF((MULTISURF *)v71);
  return v15;
}
