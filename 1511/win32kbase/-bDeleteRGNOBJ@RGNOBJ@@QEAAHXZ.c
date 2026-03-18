/*
 * XREFs of ?bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ @ 0x1C00A8C14
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C002AE80 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RGNOBJ::bDeleteRGNOBJ(__int16 **this)
{
  RGNOBJ::vDeleteRGNOBJ(this);
  return 1LL;
}
