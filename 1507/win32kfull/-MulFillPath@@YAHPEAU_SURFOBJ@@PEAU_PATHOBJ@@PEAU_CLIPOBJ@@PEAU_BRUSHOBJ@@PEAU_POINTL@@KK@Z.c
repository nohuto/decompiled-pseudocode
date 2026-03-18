/*
 * XREFs of ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0296880
 * Callers:
 *     <none>
 * Callees:
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026C228 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02942F0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0294520 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294690 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0294720 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02989E8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299694 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0299AA4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffFillPath @ 0x1C02C0F44 (OffFillPath.c)
 */

__int64 __fastcall MulFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  DHPDEV dhpdev; // rsi
  unsigned int v12; // edi
  unsigned int v13; // ebx
  int i; // eax
  struct SURFACE *v15; // rax
  BOOL (__stdcall *v16)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  _BYTE v18[64]; // [rsp+60h] [rbp-A0h] BYREF
  struct _DISPSURF *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  _DWORD v23[24]; // [rsp+D0h] [rbp-30h] BYREF
  SURFOBJ *pso; // [rsp+130h] [rbp+30h]
  struct _RECTL v25; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTFX prectfx; // [rsp+150h] [rbp+50h] BYREF

  dhpdev = a1->dhpdev;
  v12 = 1;
  v13 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v23, a1);
    v12 = EngFillPath(pso, ppo, a3, a4, pptlBrushOrg, mix, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v23);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v23,
    a4,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v23[0] )
  {
    PATHOBJ_vGetBounds(ppo, &prectfx);
    v25.left = prectfx.xLeft >> 4;
    v25.top = prectfx.yTop >> 4;
    v25.right = (prectfx.xRight >> 4) + 2;
    v25.bottom = (prectfx.yBottom >> 4) + 2;
    for ( i = MSURF::bFindSurface((MSURF *)v18, a1, a3, &v25); i; i = MSURF::bNextSurface((MSURF *)v18) )
    {
      PATHOBJ_vEnumStart(ppo);
      v15 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v20);
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v23, v19, v15);
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v20) + 112) & 0x40) != 0 )
        v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)v19 + 7) + 2840LL);
      else
        v16 = EngFillPath;
      v12 &= OffFillPath(v16, v22, v20, ppo, v21, a4, pptlBrushOrg, mix, flOptions);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v23, *((_DWORD *)v19 + 4));
    }
    return v12;
  }
  return v13;
}
