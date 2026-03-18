/*
 * XREFs of ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0025650
 * Callers:
 *     GreExtCreateRegion @ 0x1C0055450 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0068FF0 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0026110 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C004C300 (PopThreadGuardedObject.c)
 */

void __fastcall PATHMEMOBJ::~PATHMEMOBJ(PATHMEMOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 30) )
  {
    PopThreadGuardedObject((char *)this + 88);
    *((_DWORD *)this + 30) = 0;
  }
}
