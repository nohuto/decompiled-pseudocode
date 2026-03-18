/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C05C
 * Callers:
 *     GreGetNearestColor @ 0x1C0046DA0 (GreGetNearestColor.c)
 * Callees:
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B860 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  DEVLOCKOBJ::vInit(this);
  return this;
}
