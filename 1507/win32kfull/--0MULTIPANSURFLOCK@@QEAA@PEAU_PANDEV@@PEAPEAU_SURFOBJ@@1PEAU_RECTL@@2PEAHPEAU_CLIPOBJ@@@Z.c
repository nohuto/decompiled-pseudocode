/*
 * XREFs of ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0287684
 * Callers:
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02879E0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0287B40 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02889C0 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0289110 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0289530 (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z @ 0x1C0289A50 (-vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z.c)
 *     ?vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z @ 0x1C0289B00 (-vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0289E74 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

MULTIPANSURFLOCK *__fastcall MULTIPANSURFLOCK::MULTIPANSURFLOCK(
        MULTIPANSURFLOCK *this,
        struct _PANDEV *a2,
        struct _SURFOBJ **a3,
        struct _SURFOBJ **a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int *a7,
        struct _CLIPOBJ *a8)
{
  int v12; // r15d
  int v13; // r12d
  struct _CLIPOBJ *v14; // r8
  int *v15; // rdx
  unsigned __int64 v16; // rcx
  struct _SURFOBJ *v17; // rbp
  struct _SURFOBJ *v18; // rax
  __int16 v19; // ax
  struct _CLIPOBJ *v20; // r8
  USHORT iType; // cx
  bool v22; // zf
  struct _SURFOBJ *v23; // rax
  USHORT v24; // ax
  struct _SURFOBJ *v25; // rax
  signed __int32 v27[18]; // [rsp+0h] [rbp-48h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_WORD *)this + 24) = 0;
  v12 = 0;
  v13 = 0;
  memset((char *)this + 50, 0, 0x51uLL);
  memset((char *)this + 131, 0, 0x51uLL);
  v15 = a7;
  v16 = (unsigned __int64)*a4;
  *a7 = 0;
  v17 = *a3;
  if ( v16 > (unsigned __int64)*a3 )
  {
    v18 = *a3;
    v17 = (struct _SURFOBJ *)v16;
  }
  else
  {
    v18 = (struct _SURFOBJ *)v16;
  }
  if ( v18 == v17 )
  {
    if ( v18 )
    {
      v19 = *(_WORD *)(v16 + 76);
      if ( v19 == 3 )
      {
        *(_QWORD *)this = v16;
        MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, 0);
      }
      else if ( v19 == 1 )
      {
        *((_QWORD *)this + 4) = a2;
        do
        {
          MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
          _InterlockedOr(v27, 0);
        }
        while ( !(unsigned int)MULTIPANSURFLOCK::bTryLockShadowR(this, a6, v20) );
        *a4 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
        *a3 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
        *a7 = 1;
      }
      return this;
    }
  }
  else if ( v18 )
  {
    iType = v18->iType;
    if ( iType == 3 )
    {
      *(_QWORD *)this = v18;
      MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, v18 == *a4);
      v15 = a7;
    }
    else if ( iType == 1 )
    {
      *((_QWORD *)this + 4) = a2;
      v22 = v18 == *a4;
      v23 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
      if ( v22 )
      {
        *a4 = v23;
        v12 = 1;
      }
      else
      {
        *a3 = v23;
        v13 = 1;
        *a7 = 1;
      }
    }
  }
  _InterlockedOr(v27, 0);
  if ( v17 )
  {
    v24 = v17->iType;
    if ( v24 == 3 )
    {
      *((_QWORD *)this + 2) = v17;
      MULTIPANSURFLOCK::vLockBmp2AndPrepareForPunt(this, v17 == *a4);
    }
    else if ( v24 == 1 )
    {
      *((_QWORD *)this + 5) = a2;
      v25 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
      if ( v17 == *a4 )
      {
        *a4 = v25;
        v12 = 1;
      }
      else
      {
        *a3 = v25;
        v13 = 1;
        *v15 = 1;
      }
    }
  }
  do
  {
    if ( v13 )
      MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
    _InterlockedOr(v27, 0);
  }
  while ( v12 && !(unsigned int)MULTIPANSURFLOCK::bTryLockShadowR(this, a6, v14) );
  return this;
}
