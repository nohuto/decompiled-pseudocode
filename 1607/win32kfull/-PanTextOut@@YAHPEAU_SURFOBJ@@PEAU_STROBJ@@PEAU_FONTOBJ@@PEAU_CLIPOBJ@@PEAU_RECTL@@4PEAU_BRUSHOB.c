/*
 * XREFs of ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02879D0
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0032E10 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C02862A8 (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C02863D0 (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0287F28 (-bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0288B5C (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall PanTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        struct _CLIPOBJ *a4,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        MIX mix)
{
  RECTL *v11; // rbx
  RECTL *p_rclBkGround; // rax
  struct _PANDEV *dhpdev; // r15
  unsigned int v16; // edi
  BOOL v17; // r14d
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *pco; // [rsp+58h] [rbp-A8h] BYREF
  SURFOBJ *pso; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *pptlOrg; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *pboOpaque; // [rsp+70h] [rbp-90h]
  struct _RECTL v24; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[112]; // [rsp+90h] [rbp-70h] BYREF

  v11 = prclOpaque;
  pboOpaque = a8;
  pptlOrg = a9;
  p_rclBkGround = prclOpaque;
  pco = a4;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  pso = a1;
  if ( !prclOpaque )
    p_rclBkGround = &pstro->rclBkGround;
  v24 = *p_rclBkGround;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v25, dhpdev, &pso, &v24, &v19, a4);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v16 = 1;
  }
  else
  {
    v17 = EngTextOut(pso, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    if ( v19 == 1 )
    {
      if ( !prclOpaque )
        v11 = &pstro->rclBkGround;
      vPanningUpdate(dhpdev, v11, pco);
    }
    v16 = v17;
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v25);
  return v16;
}
