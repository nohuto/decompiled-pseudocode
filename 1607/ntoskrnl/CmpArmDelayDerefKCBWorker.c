/*
 * XREFs of CmpArmDelayDerefKCBWorker @ 0x1404DC994
 * Callers:
 *     CmpDelayDerefKCBWorker @ 0x140401510 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043735C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 */

_BOOL8 CmpArmDelayDerefKCBWorker()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2((__int64)&CmpDelayDerefKCBTimer, -10000000LL, 0LL, (__int64)v1);
}
