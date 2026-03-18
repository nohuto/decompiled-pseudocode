/*
 * XREFs of ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02B9DD0
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02BA234 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C000EAA4 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z @ 0x1C02B9D68 (-TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02B9FA8 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 */

__int64 __fastcall METAREGION::bIntersectMoveWithDirty(METAREGION *this, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  struct REGION *v5; // rsi
  int v6; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v12; // [rsp+60h] [rbp-10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF
  struct REGION *v14; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 1;
  if ( *((_DWORD *)this + 10) == 1 && (*((_QWORD *)this + 1) || *(_QWORD *)this) )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v8);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
    v13 = *((_QWORD *)this + 4);
    if ( !v8[0] || !v10[0] || !v9[0] )
      goto LABEL_21;
    v5 = (struct REGION *)*((_QWORD *)this + 1);
    if ( !v5 )
      v5 = *(struct REGION **)this;
    v14 = v5;
    RGNOBJ::vSet((RGNOBJ *)v10);
    if ( RGNOBJ::iCombine((RGNOBJ *)v8, (struct RGNOBJ *)&v13, (struct RGNOBJ *)v10, 2)
      && RGNOBJ::bOffset((RGNOBJ *)v8, (struct _POINTL *)this + 3)
      && v13
      && v8[0]
      && v9[0]
      && v11[0]
      && RGNOBJ::iCombine((RGNOBJ *)v11, (struct RGNOBJ *)&v13, (struct RGNOBJ *)v8, 2)
      && (v6 = RGNOBJ::iCombine((RGNOBJ *)v9, (struct RGNOBJ *)v11, (struct RGNOBJ *)&v14, 1)) != 0 )
    {
      if ( v6 != 1 )
      {
        v12 = *(_OWORD *)(v9[0] + 88LL);
        if ( !ERECTL::bEmpty((ERECTL *)&v12) )
        {
          v2 = METAREGION::bTrimMoveWithRegion(this, v5, 0);
          if ( !v2 )
            METAREGION::TraceMoveRemovedMoveRegions(this, a2);
        }
      }
    }
    else
    {
LABEL_21:
      METAREGION::vClearMoveData(this, 1);
      v2 = 0;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v8);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
  }
  return v2;
}
