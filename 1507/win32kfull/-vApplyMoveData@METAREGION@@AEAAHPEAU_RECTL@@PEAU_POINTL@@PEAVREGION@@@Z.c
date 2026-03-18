/*
 * XREFs of ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02BA234
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C001A6C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C000EAA4 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02B9DD0 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02BA130 (-vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall METAREGION::vApplyMoveData(
        METAREGION *this,
        struct _RECTL *a2,
        struct _POINTL *a3,
        struct REGION *a4)
{
  REGION *v4; // rsi
  unsigned int v8; // edi
  struct _POINTL *v9; // r12
  REGION *v10; // rcx
  REGION *v11; // rcx
  REGION *v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v17[4]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF
  struct _POINTL v19; // [rsp+A8h] [rbp+48h] BYREF

  v4 = a4;
  v8 = 1;
  if ( !a2 || !a3 || !*((_DWORD *)this + 10) )
  {
    v4 = 0LL;
    *((_QWORD *)this + 2) = a4;
    METAREGION::vAddRectToMoveRegionHelper(this, a2);
    *((struct _POINTL *)this + 3) = *a3;
    *((_DWORD *)this + 10) = 1;
    goto LABEL_27;
  }
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
  if ( v16[0] && v15[0] && v14[0] )
  {
    v18 = *((_QWORD *)this + 4);
    if ( RGNOBJ::bCopy((RGNOBJ *)v15, (struct RGNOBJ *)&v18)
      && (v9 = (struct _POINTL *)((char *)this + 24), RGNOBJ::bOffset((RGNOBJ *)v15, (struct _POINTL *)this + 3)) )
    {
      RGNOBJ::vSet((RGNOBJ *)v16, a2);
      if ( !RGNOBJ::iCombine((RGNOBJ *)v14, (struct RGNOBJ *)v16, (struct RGNOBJ *)v15, 1) )
      {
        METAREGION::vClearMoveData(this, 1);
        v8 = 0;
        goto LABEL_25;
      }
      v17[0] = *(_DWORD *)(v14[0] + 88LL);
      v17[1] = *(_DWORD *)(v14[0] + 92LL);
      v17[2] = *(_DWORD *)(v14[0] + 96LL);
      v17[3] = *(_DWORD *)(v14[0] + 100LL);
      if ( ERECTL::bEmpty((ERECTL *)v17) )
      {
        v10 = (REGION *)*((_QWORD *)this + 4);
        if ( v10 )
        {
          REGION::vDeleteREGION(v10);
          *((_QWORD *)this + 4) = 0LL;
        }
        v11 = (REGION *)*((_QWORD *)this + 1);
        if ( v11 )
        {
          REGION::vDeleteREGION(v11);
          *((_QWORD *)this + 1) = 0LL;
        }
        METAREGION::vAddRectToMoveRegionHelper(this, a2);
        v12 = (REGION *)*((_QWORD *)this + 2);
        *v9 = *a3;
        if ( v12 )
          REGION::vDeleteREGION(v12);
        *((_QWORD *)this + 2) = v4;
        v4 = 0LL;
        goto LABEL_25;
      }
      v18 = *((_QWORD *)this + 4);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      v19.x = -v9->x;
      v19.y = -*((_DWORD *)this + 7);
      RGNOBJ::bOffset((RGNOBJ *)v14, &v19);
      if ( RGNOBJ::iCombine((RGNOBJ *)v17, (struct RGNOBJ *)v14, (struct RGNOBJ *)&v18, 1)
        && RGNOBJ::bSwap((RGNOBJ *)&v18, (struct RGNOBJ *)v17) )
      {
        *((_QWORD *)this + 4) = v18;
        v9->x += a3->x;
        *((_DWORD *)this + 7) += a3->y;
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
        goto LABEL_25;
      }
      METAREGION::vClearMoveData(this, 1);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
    }
    else
    {
      METAREGION::vClearMoveData(this, 1);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
    return v8;
  }
LABEL_25:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
LABEL_27:
  if ( *((_DWORD *)this + 10) )
    v8 = METAREGION::bIntersectMoveWithDirty(this, a2);
  if ( v4 )
    REGION::vDeleteREGION(v4);
  return v8;
}
