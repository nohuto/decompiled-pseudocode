/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02949E0
 * Callers:
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0295040 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0295304 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C00E9B20 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025DDFC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C026AC70 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026AD98 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293DF8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294198 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0294228 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02984E8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029857C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0298A2C (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299194 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029946C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02995A4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0299AAC (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
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
  __int64 v33; // rdx
  __int64 v34; // r15
  struct _RECTL *v35; // rax
  __int64 pulXlate; // r14
  struct PALETTE *v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rax
  bool v40; // zf
  int v41; // r8d
  int iUniq; // r15d
  int v43; // r11d
  int flXlate; // r9d
  unsigned int v45; // r10d
  __int64 v46; // rdx
  struct SURFACE *v47; // rax
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _XLATEOBJ *v50; // [rsp+70h] [rbp-90h] BYREF
  BRUSHOBJ *pbo; // [rsp+78h] [rbp-88h]
  POINTL *pptlBrush; // [rsp+80h] [rbp-80h]
  SURFOBJ *psoMask; // [rsp+88h] [rbp-78h]
  POINTL *pptlMask; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v55; // [rsp+98h] [rbp-68h]
  struct _RECTL *v56; // [rsp+A0h] [rbp-60h]
  int v57; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v58; // [rsp+B0h] [rbp-50h]
  _DWORD v59[4]; // [rsp+B8h] [rbp-48h] BYREF
  struct _XLATEOBJ *v60; // [rsp+C8h] [rbp-38h]
  _DWORD v61[14]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v62; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v63[8]; // [rsp+120h] [rbp+20h] BYREF
  RECTL v64; // [rsp+128h] [rbp+28h]
  BYTE v65; // [rsp+138h] [rbp+38h]
  __int64 v66; // [rsp+140h] [rbp+40h]
  struct _DISPSURF *v67; // [rsp+160h] [rbp+60h]
  int v68[2]; // [rsp+168h] [rbp+68h]
  CLIPOBJ *pco; // [rsp+170h] [rbp+70h]
  int v70[2]; // [rsp+178h] [rbp+78h]
  int v71; // [rsp+180h] [rbp+80h]
  _BYTE v72[56]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  char v74; // [rsp+1D0h] [rbp+D0h]
  int v75; // [rsp+1D4h] [rbp+D4h]
  SURFOBJ *psoSrc; // [rsp+1F0h] [rbp+F0h]
  POINTL *pptlSrc; // [rsp+1F8h] [rbp+F8h]
  _BYTE v78[96]; // [rsp+200h] [rbp+100h] BYREF
  SURFOBJ *psoTrg; // [rsp+260h] [rbp+160h]
  RECTL *prclTrg; // [rsp+268h] [rbp+168h]

  v13 = pxlo;
  pptlMask = a8;
  pbo = a9;
  pptlBrush = a10;
  psoMask = a3;
  v58 = a2;
  v55 = a1;
  v56 = a6;
  v15 = 0;
  v57 = IsMetaDevBitmapForMirroring(a1);
  v60 = pxlo;
  if ( !a2 || (v16 = 1, a2->iType != 1) )
    v16 = 0;
  iType = a1->iType;
  v62 = *a6;
  if ( iType == 1 )
  {
    if ( v16 )
      return bBitBltScreenToScreen(a1, psoMask, a4, pxlo, &v62, a7, pptlMask, pbo, pptlBrush, rop4);
  }
  else if ( v16 )
  {
    return bBitBltFromScreen(a1, v58, psoMask, a4, pxlo, &v62, a7, pptlMask, pbo, pptlBrush, rop4);
  }
  dhpdev = a1->dhpdev;
  LODWORD(v50) = 1;
  if ( iType && (unsigned int)MSURF::bFindSurface((MSURF *)v63, v55, a4, a6) )
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
  MULTIBRUSH::MULTIBRUSH((MULTIBRUSH *)v61, v23, v22, (struct _VDEV *)dhpdev, v21, v24);
  v25 = v58;
  v73 = 0LL;
  v74 = 0;
  v75 = 0;
  if ( v58 )
  {
    v26 = (struct _RECTL *)v59;
    y = a7->y;
    v59[0] = a7->x;
    v59[1] = y;
    v59[3] = v62.bottom + y - v62.top;
    v59[2] = v62.right + v59[0] - v62.left;
  }
  else
  {
    v26 = 0LL;
    v25 = 0LL;
  }
  MULTISURF::vInit((MULTISURF *)v72, v25, v26);
  if ( !v57 && iType )
  {
    v29 = (int)v50;
    v28 = rop4;
  }
  else
  {
    MULTISURF::MULTISURF((MULTISURF *)v78, v55, v56);
    v28 = rop4;
    v29 = EngBitBlt(psoTrg, psoSrc, psoMask, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    MULTISURF::~MULTISURF((MULTISURF *)v78);
  }
  if ( v20 )
  {
    if ( !v61[0] )
    {
      v30 = pco;
      if ( v66 && pco )
      {
        pco->rclBounds = v64;
        pco->iDComplexity = v65;
        v30 = pco;
      }
      if ( v71 == 1 )
        EngDeleteClip(v30);
      goto LABEL_81;
    }
    v31 = v58;
    do
    {
      Source = MULTISURF::bLoadSource((MULTISURF *)v72, v67);
      v50 = 0LL;
      if ( Source )
      {
        if ( !psoSrc || !*((_DWORD *)v67 + 6) )
          goto LABEL_69;
        v34 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
        v35 = (struct _RECTL *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v68);
        pulXlate = *(_QWORD *)(v34 + 120);
        v56 = v35;
        v37 = ppalDefault;
        v38 = *((_QWORD *)v67 + 6);
        if ( (*(_DWORD *)(v38 + 2196) & 0x100) != 0 )
        {
          v37 = DrvRealizeHalftonePalette((_QWORD *)v38, 0);
        }
        else if ( *((int *)v67 + 6) > 0 && v13 && *(_QWORD *)&v13[2].iSrcType )
        {
          v37 = *(struct PALETTE **)&v13[2].iSrcType;
        }
        if ( !pulXlate )
        {
          if ( v13 && v13[1].pulXlate )
          {
            pulXlate = (__int64)v13[1].pulXlate;
          }
          else
          {
            v39 = SURFOBJ_TO_SURFACE_NOT_NULL(v55);
            if ( !v13 || (v13->flXlate & 1) != 0 )
            {
              v40 = psoSrc == v31;
            }
            else
            {
              v37 = *(struct PALETTE **)&v13[2].iSrcType;
              if ( !v37 )
                goto LABEL_72;
              v40 = *(_DWORD *)(v34 + 96) == *(_DWORD *)(v39 + 96);
            }
            if ( v40 )
              pulXlate = *(_QWORD *)(v39 + 120);
          }
        }
        v41 = 0;
        if ( pulXlate )
        {
          if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
          {
            v41 = 0x4000;
            if ( v37 == ppalDefault )
              v41 = 0x2000;
          }
        }
        if ( v13 )
          iUniq = v13[1].iUniq;
        else
          iUniq = 0;
        if ( v13 )
          v43 = *(_DWORD *)&v13[1].iSrcType;
        else
          v43 = 0;
        if ( v13 )
          flXlate = v13[1].flXlate;
        else
          flXlate = 0;
        if ( v13 )
          v45 = v13[3].iUniq;
        else
          v45 = 0;
        if ( v13 )
          v46 = (__int64)v13[2].pulXlate;
        else
          v46 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v50,
                             v46,
                             v45,
                             pulXlate,
                             *(_QWORD *)&v56[7].right,
                             (__int64)ppalDefault,
                             (__int64)v37,
                             flXlate,
                             v43,
                             iUniq,
                             v41) )
        {
          v13 = v50;
          v28 = rop4;
LABEL_69:
          v47 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v68);
          if ( v28 == 52428 )
          {
            if ( (*((_DWORD *)v47 + 28) & 0x400) != 0 )
              v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v67 + 7) + 2872LL);
            else
              v48 = EngCopyBits;
            v29 &= OffCopyBits(
                     (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v48,
                     *(LONG **)v70,
                     *(__int64 *)v68,
                     (int *)&gptlZero,
                     (__int64)psoSrc,
                     pco,
                     (__int64)v13,
                     &v62,
                     pptlSrc);
          }
          else
          {
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v61, v67, v47);
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v68) + 112) & 1) != 0 )
              v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v67 + 7) + 2864LL);
            else
              v49 = EngBitBlt;
            v29 &= OffBitBlt(
                     (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v49,
                     *(int **)v70,
                     *(__int64 *)v68,
                     &gptlZero,
                     (__int64)psoSrc,
                     (__int64)psoMask,
                     pco,
                     (__int64)v13,
                     &v62,
                     pptlSrc,
                     (__int64)pptlMask,
                     (__int64)pbo,
                     pptlBrush,
                     v28);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v61, *((_DWORD *)v67 + 4));
          }
          goto LABEL_79;
        }
      }
LABEL_72:
      v28 = rop4;
      v29 = 0;
LABEL_79:
      v13 = v60;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v50, v33);
    }
    while ( (unsigned int)MSURF::bNextSurface((MSURF *)v63) );
  }
  v15 = v29;
LABEL_81:
  MULTISURF::~MULTISURF((MULTISURF *)v72);
  return v15;
}
