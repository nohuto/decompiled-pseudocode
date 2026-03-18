/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00277F0
 * Callers:
 *     GreGetNearestColor @ 0x1C0025760 (GreGetNearestColor.c)
 * Callees:
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0027018 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00B02A0 (--0DCOBJ@@QEAA@XZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DCOBJ::DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  DEVLOCKOBJ::vInit(this);
  return this;
}
