/*
 * XREFs of ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C006F530
 * Callers:
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0080EC8 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B6550 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003ED40 (PopThreadGuardedObject.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C006FEE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall PATHMEMOBJ::~PATHMEMOBJ(PATHMEMOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 30) )
  {
    PopThreadGuardedObject((_QWORD *)this + 11);
    *((_DWORD *)this + 30) = 0;
  }
}
