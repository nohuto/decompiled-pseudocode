/*
 * XREFs of ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02973D0
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0032E10 (EngTextOut.c)
 *     OffTextOut @ 0x1C0102A30 (OffTextOut.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0269258 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293588 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x1C0293660 (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02937B8 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1C02937F4 (--1MULTIFONT@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0293928 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02939B8 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0297C88 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0298934 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0298D44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        CLIPOBJ *pco,
        struct _RECTL *prclExtra,
        RECTL *prclOpaque,
        struct _BRUSHOBJ *pboFore,
        struct _BRUSHOBJ *pboOpaque,
        struct _POINTL *pptlOrg,
        MIX mix)
{
  DHPDEV dhpdev; // rdi
  unsigned int v15; // ebx
  __int64 v16; // r13
  RECTL *p_rclBkGround; // r14
  struct _RECTL v18; // xmm6
  int Surface; // eax
  unsigned int v20; // r15d
  __int64 v21; // rdi
  struct SURFACE *v22; // rax
  struct SURFACE *v23; // rax
  __int64 v24; // rcx
  BOOL (__stdcall *v25)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rcx
  BOOL v27; // [rsp+68h] [rbp-A0h]
  ULONG cGlyphs; // [rsp+6Ch] [rbp-9Ch]
  __int64 v31; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-60h]
  _DWORD v33[14]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v34[64]; // [rsp+E8h] [rbp-20h] BYREF
  struct _DISPSURF *v35; // [rsp+128h] [rbp+20h]
  int v36[2]; // [rsp+130h] [rbp+28h]
  struct _CLIPOBJ *v37; // [rsp+138h] [rbp+30h]
  int v38[2]; // [rsp+140h] [rbp+38h]
  _DWORD v39[24]; // [rsp+158h] [rbp+50h] BYREF
  SURFOBJ *pso; // [rsp+1B8h] [rbp+B0h]

  dhpdev = a1->dhpdev;
  v27 = 1;
  v15 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v39, a1);
    v27 = EngTextOut(pso, a2, a3, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v39);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v33,
    pboFore,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v33[0] )
  {
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v39,
      pboOpaque,
      *((_DWORD *)dhpdev + 4),
      (struct _VDEV *)dhpdev,
      *((struct _SURFOBJ **)dhpdev + 6),
      1);
    if ( v39[0] )
    {
      MULTIFONT::MULTIFONT((MULTIFONT *)&v31, a3, *((_DWORD *)dhpdev + 4), (struct _VDEV *)dhpdev);
      v16 = v32;
      if ( v32 )
      {
        p_rclBkGround = prclOpaque;
        if ( !prclOpaque )
          p_rclBkGround = &a2->rclBkGround;
        v18 = *p_rclBkGround;
        cGlyphs = a2[1].cGlyphs;
        Surface = MSURF::bFindSurface((MSURF *)v34, a1, pco, p_rclBkGround);
        v20 = v27;
        if ( Surface )
        {
          v21 = v31;
          do
          {
            *(_QWORD *)&a2[1].cGlyphs = 0LL;
            if ( v21 )
              *(_QWORD *)(v21 + 48) = *(_QWORD *)(v16 + 8LL * *((int *)v35 + 4) + 8);
            v22 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v36);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v33, v35, v22);
            v23 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v36);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v39, v35, v23);
            v24 = *(_QWORD *)v36;
            a2[1].cGlyphs = cGlyphs;
            *p_rclBkGround = v18;
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 8) != 0 )
              v25 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v35 + 7) + 2896LL);
            else
              v25 = EngTextOut;
            v20 &= OffTextOut(
                     (__int64 (__fastcall *)(__int64, int *, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64, __int64, __int64, int))v25,
                     *(int **)v38,
                     *(__int64 *)v36,
                     (int *)a2,
                     (__int64)a3,
                     v37,
                     (__int64)prclExtra,
                     prclOpaque,
                     (__int64)pboFore,
                     (__int64)pboOpaque,
                     (__int64)pptlOrg,
                     mix);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v33, *((_DWORD *)v35 + 4));
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v39, *((_DWORD *)v35 + 4));
            if ( v21 )
              *(_QWORD *)(v16 + 8LL * *((int *)v35 + 4) + 8) = *(_QWORD *)(v21 + 48);
          }
          while ( (unsigned int)MSURF::bNextSurface((MSURF *)v34) );
        }
        v15 = v20;
      }
      MULTIFONT::~MULTIFONT((MULTIFONT *)&v31);
    }
  }
  return v15;
}
