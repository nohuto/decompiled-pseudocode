/*
 * XREFs of ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00B3B10
 * Callers:
 *     EngLockSurface @ 0x1C0008010 (EngLockSurface.c)
 *     EngAssociateSurface @ 0x1C00148A0 (EngAssociateSurface.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     bDeleteSurface @ 0x1C005C5B0 (bDeleteSurface.c)
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0038760 (HmgShareLockCheckIgnoreStockBit.c)
 */

void __fastcall SURFREF::vAltCheckLockIgnoreStockBit(SURFREF *this, HSURF a2)
{
  *((_QWORD *)this + 4) = HmgShareLockCheckIgnoreStockBit((int)a2, 5);
}
