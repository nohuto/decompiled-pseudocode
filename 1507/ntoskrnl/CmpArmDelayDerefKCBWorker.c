/*
 * XREFs of CmpArmDelayDerefKCBWorker @ 0x14054B958
 * Callers:
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpDelayDerefKCBWorker @ 0x1404C8B40 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 */

_BOOL8 CmpArmDelayDerefKCBWorker()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2((__int64)&CmpDelayDerefKCBTimer, -10000000LL, 0LL, (__int64)v1);
}
