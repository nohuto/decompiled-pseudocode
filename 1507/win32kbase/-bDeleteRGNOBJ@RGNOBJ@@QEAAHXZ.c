/*
 * XREFs of ?bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ @ 0x1C00A4064
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C004B680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0055450 (GreExtCreateRegion.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RGNOBJ::bDeleteRGNOBJ(__int16 **this)
{
  RGNOBJ::vDeleteRGNOBJ(this);
  return 1LL;
}
