/*
 * XREFs of ?vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02BA130
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02BA234 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C000EAA4 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall METAREGION::vAddRectToMoveRegionHelper(METAREGION *this, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+28h] [rbp-18h]
  _QWORD v9[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
    v5 = *((_QWORD *)this + 4);
    v10 = v5;
    if ( v7 )
    {
      if ( v9[0] )
      {
        if ( v5 )
        {
          RGNOBJ::vSet((RGNOBJ *)&v7, a2);
          if ( RGNOBJ::iCombine((RGNOBJ *)v9, (struct RGNOBJ *)&v7, (struct RGNOBJ *)&v10, 2) )
          {
            RGNOBJ::bSwap((RGNOBJ *)&v10, (struct RGNOBJ *)&v7);
            v2 = 1;
          }
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v7);
    if ( v7 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v7, a2);
      v2 = 1;
      *((_QWORD *)this + 4) = v7;
    }
    if ( v8 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
  }
  if ( v2 != 1 )
    METAREGION::vClearMoveData(this, 1);
  return v2;
}
