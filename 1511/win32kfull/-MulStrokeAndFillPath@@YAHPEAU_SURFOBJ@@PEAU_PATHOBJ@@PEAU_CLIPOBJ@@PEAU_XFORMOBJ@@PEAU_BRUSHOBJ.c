/*
 * XREFs of ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02976E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026AD98 (--1MULTISURF@@QEAA@XZ.c)
 *     EngStrokeAndFillPath @ 0x1C027D410 (EngStrokeAndFillPath.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293DF8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0294028 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294198 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0294228 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02984E8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299194 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02995A4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffStrokeAndFillPath @ 0x1C02C0820 (OffStrokeAndFillPath.c)
 */

__int64 __fastcall MulStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        struct _BRUSHOBJ *pboFill,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  DHPDEV dhpdev; // rsi
  unsigned int v13; // r14d
  FLOAT_LONG v14; // ebx
  unsigned int v15; // edi
  int i; // eax
  struct SURFACE *v17; // rax
  struct SURFACE *v18; // rax
  BOOL (__stdcall *v19)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  _DWORD v23[14]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v24[64]; // [rsp+C0h] [rbp-40h] BYREF
  struct _DISPSURF *v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+108h] [rbp+8h]
  __int64 v27; // [rsp+110h] [rbp+10h]
  __int64 v28; // [rsp+118h] [rbp+18h]
  _DWORD v29[24]; // [rsp+130h] [rbp+30h] BYREF
  SURFOBJ *pso; // [rsp+190h] [rbp+90h]
  struct _RECTFX prectfx; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v32; // [rsp+1B0h] [rbp+B0h] BYREF

  dhpdev = a1->dhpdev;
  v13 = 1;
  LODWORD(v14.e) = plineattrs->elStyleState;
  v15 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v29, a1);
    v13 = EngStrokeAndFillPath(pso, ppo, a3, a4, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v29);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v23,
    pboStroke,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    0);
  if ( v23[0] )
  {
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v29,
      pboFill,
      *((_DWORD *)dhpdev + 4),
      (struct _VDEV *)dhpdev,
      *((struct _SURFOBJ **)dhpdev + 6),
      1);
    if ( v29[0] )
    {
      PATHOBJ_vGetBounds(ppo, &prectfx);
      v32.left = prectfx.xLeft >> 4;
      v32.top = prectfx.yTop >> 4;
      v32.right = (prectfx.xRight >> 4) + 2;
      v32.bottom = (prectfx.yBottom >> 4) + 2;
      for ( i = MSURF::bFindSurface((MSURF *)v24, a1, a3, &v32); i; i = MSURF::bNextSurface((MSURF *)v24) )
      {
        plineattrs->elStyleState = v14;
        PATHOBJ_vEnumStart(ppo);
        v17 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v26);
        MULTIBRUSH::LoadElement((MULTIBRUSH *)v23, v25, v17);
        v18 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v26);
        MULTIBRUSH::LoadElement((MULTIBRUSH *)v29, v25, v18);
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x80u) == 0 )
          v19 = EngStrokeAndFillPath;
        else
          v19 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)v25 + 7) + 2848LL);
        v13 &= OffStrokeAndFillPath(
                 v19,
                 v28,
                 v26,
                 ppo,
                 v27,
                 a4,
                 pboStroke,
                 plineattrs,
                 pboFill,
                 pptlBrushOrg,
                 mixFill,
                 flOptions);
        MULTIBRUSH::StoreElement((MULTIBRUSH *)v23, *((_DWORD *)v25 + 4));
        MULTIBRUSH::StoreElement((MULTIBRUSH *)v29, *((_DWORD *)v25 + 4));
      }
      return v13;
    }
  }
  return v15;
}
