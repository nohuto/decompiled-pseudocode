/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00690C8
 * Callers:
 *     GreExtCreateRegion @ 0x1C0055450 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0068FF0 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C004B680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vCreate(this, a2, a3, 0LL);
  return this;
}
