/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0027814
 * Callers:
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0 (pConvertDfbSurfaceToDibInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B02CC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00B0E84 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C00BD108 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0027848 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00B02A0 (--0DCOBJ@@QEAA@XZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  DCOBJ::DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  DEVLOCKOBJ::vLock(this, a2);
  return this;
}
