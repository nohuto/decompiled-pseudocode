/*
 * XREFs of ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0296DF0
 * Callers:
 *     <none>
 * Callees:
 *     OffLineTo @ 0x1C00E0D5C (OffLineTo.c)
 *     EngLineTo @ 0x1C01166A0 (EngLineTo.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C026C100 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026C228 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02942F0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294690 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0294720 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02989E8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299694 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0299AA4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG a4,
        LONG y1,
        LONG x2,
        LONG y2,
        struct _RECTL *a8,
        MIX mix)
{
  DHPDEV dhpdev; // rsi
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int i; // eax
  struct SURFACE *v16; // rax
  BOOL (__stdcall *v17)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  _BYTE v20[64]; // [rsp+70h] [rbp-90h] BYREF
  struct _DISPSURF *v21; // [rsp+B0h] [rbp-50h]
  SURFOBJ *v22; // [rsp+B8h] [rbp-48h]
  struct _CLIPOBJ *v23; // [rsp+C0h] [rbp-40h]
  int *v24; // [rsp+C8h] [rbp-38h]
  _DWORD v25[24]; // [rsp+E0h] [rbp-20h] BYREF
  SURFOBJ *pso; // [rsp+140h] [rbp+40h]
  RECTL *prclBounds; // [rsp+148h] [rbp+48h]

  dhpdev = a1->dhpdev;
  v13 = 1;
  v14 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v25, a1, a8);
    v13 = EngLineTo(pso, a2, a3, a4, y1, x2, y2, prclBounds, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v25);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v25,
    a3,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    0);
  if ( v25[0] )
  {
    for ( i = MSURF::bFindSurface((MSURF *)v20, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v20) )
    {
      v16 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v22);
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v25, v21, v16);
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 112) & 0x100) != 0 )
        v17 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)v21 + 7) + 2968LL);
      else
        v17 = EngLineTo;
      v13 &= OffLineTo(
               (__int64 (__fastcall *)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, _QWORD, int, int, int, RECTL *, MIX))v17,
               v24,
               v22,
               v23,
               a3,
               a4,
               y1,
               x2,
               y2,
               a8,
               mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v25, *((_DWORD *)v21 + 4));
    }
    return v13;
  }
  return v14;
}
