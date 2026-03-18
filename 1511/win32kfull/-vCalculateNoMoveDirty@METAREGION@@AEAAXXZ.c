/*
 * XREFs of ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C01C2E0C
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0033590 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C007B860 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 */

void __fastcall METAREGION::vCalculateNoMoveDirty(METAREGION *this)
{
  REGION *v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-20h] BYREF
  int v4; // [rsp+28h] [rbp-18h]
  _QWORD v5[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+10h] BYREF
  __int64 v7; // [rsp+58h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 10) )
  {
    v6 = *(_QWORD *)this;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v3);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v5);
    v2 = (REGION *)*((_QWORD *)this + 1);
    v7 = *((_QWORD *)this + 4);
    if ( v2 )
    {
      REGION::vDeleteREGION(v2);
      *((_QWORD *)this + 1) = 0LL;
    }
    if ( RGNOBJ::bCopy((RGNOBJ *)v5, (struct RGNOBJ *)&v7) && RGNOBJ::bOffset((RGNOBJ *)v5, (struct _POINTL *)this + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v3);
      if ( v6 && v5[0] && v3 && RGNOBJ::iCombine((RGNOBJ *)&v3, (struct RGNOBJ *)&v6, (struct RGNOBJ *)v5, 4) )
      {
        *((_QWORD *)this + 1) = v3;
      }
      else
      {
        METAREGION::vClearMoveData(this, 1);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
      }
    }
    else
    {
      METAREGION::vClearMoveData(this, 1);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v5);
    if ( v4 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  }
}
