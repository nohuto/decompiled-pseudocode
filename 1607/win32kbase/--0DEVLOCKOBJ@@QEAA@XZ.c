/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002F964
 * Callers:
 *     GreGetNearestColor @ 0x1C005B330 (GreGetNearestColor.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00254D8 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002F378 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DCOBJ::DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  DEVLOCKOBJ::vInit(this);
  return this;
}
