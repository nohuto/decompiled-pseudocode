/*
 * XREFs of ?bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ @ 0x1C00B146C
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00310F0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C006EC30 (GreExtCreateRegion.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RGNOBJ::bDeleteRGNOBJ(__int16 **this)
{
  RGNOBJ::vDeleteRGNOBJ(this);
  return 1LL;
}
