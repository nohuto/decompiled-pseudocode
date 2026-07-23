/*
 * XREFs of CmpArmDelayDerefKCBWorker @ 0x1404BFF98
 * Callers:
 *     CmpDelayDerefKCBWorker @ 0x1404003D0 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043622C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 */

_BOOL8 CmpArmDelayDerefKCBWorker()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2((__int64)&CmpDelayDerefKCBTimer, -10000000LL, 0LL, (__int64)v1);
}
