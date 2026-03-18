/*
 * XREFs of CmpArmDelayDerefKCBWorker @ 0x1404B5C08
 * Callers:
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDelayDerefKCBWorker @ 0x1403FB530 (CmpDelayDerefKCBWorker.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 */

_BOOL8 CmpArmDelayDerefKCBWorker()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2(CmpDelayDerefKCBTimer, -10000000LL, 0LL, (__int64)v1);
}
