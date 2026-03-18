/*
 * XREFs of ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0297C30
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0037A40 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026AD98 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293DF8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x1C0293ED0 (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0294028 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1C0294064 (--1MULTIFONT@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294198 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0294228 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02984E8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299194 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02995A4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffTextOut @ 0x1C02C0994 (OffTextOut.c)
 */

__int64 __fastcall MulTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
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
  __int64 v29; // [rsp+90h] [rbp-78h] BYREF
  __int64 v30; // [rsp+98h] [rbp-70h]
  struct _FONTOBJ *v31; // [rsp+A0h] [rbp-68h]
  struct _CLIPOBJ *v32; // [rsp+A8h] [rbp-60h]
  _DWORD v33[14]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v34[64]; // [rsp+E8h] [rbp-20h] BYREF
  struct _DISPSURF *v35; // [rsp+128h] [rbp+20h]
  __int64 v36; // [rsp+130h] [rbp+28h]
  __int64 v37; // [rsp+138h] [rbp+30h]
  __int64 v38; // [rsp+140h] [rbp+38h]
  _DWORD v39[24]; // [rsp+158h] [rbp+50h] BYREF
  SURFOBJ *pso; // [rsp+1B8h] [rbp+B0h]

  dhpdev = a1->dhpdev;
  v32 = pco;
  v31 = a3;
  v27 = 1;
  v15 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v39, a1);
    v27 = EngTextOut(pso, pstro, a3, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
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
      MULTIFONT::MULTIFONT((MULTIFONT *)&v29, a3, *((_DWORD *)dhpdev + 4), (struct _VDEV *)dhpdev);
      v16 = v30;
      if ( v30 )
      {
        p_rclBkGround = prclOpaque;
        if ( !prclOpaque )
          p_rclBkGround = &pstro->rclBkGround;
        v18 = *p_rclBkGround;
        cGlyphs = pstro[1].cGlyphs;
        Surface = MSURF::bFindSurface((MSURF *)v34, a1, v32, p_rclBkGround);
        v20 = v27;
        if ( Surface )
        {
          v21 = v29;
          do
          {
            *(_QWORD *)&pstro[1].cGlyphs = 0LL;
            if ( v21 )
              *(_QWORD *)(v21 + 48) = *(_QWORD *)(v16 + 8LL * *((int *)v35 + 4) + 8);
            v22 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v36);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v33, v35, v22);
            v23 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v36);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v39, v35, v23);
            v24 = v36;
            pstro[1].cGlyphs = cGlyphs;
            *p_rclBkGround = v18;
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 8) != 0 )
              v25 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v35 + 7) + 2904LL);
            else
              v25 = EngTextOut;
            v20 &= OffTextOut(v25, v38, v36, pstro, v31, v37, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v33, *((_DWORD *)v35 + 4));
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v39, *((_DWORD *)v35 + 4));
            if ( v21 )
              *(_QWORD *)(v16 + 8LL * *((int *)v35 + 4) + 8) = *(_QWORD *)(v21 + 48);
          }
          while ( (unsigned int)MSURF::bNextSurface((MSURF *)v34) );
        }
        v15 = v20;
      }
      MULTIFONT::~MULTIFONT((MULTIFONT *)&v29);
    }
  }
  return v15;
}
