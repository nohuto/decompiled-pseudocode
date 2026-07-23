/*
 * XREFs of CmpUpgradeKcbLockToExclusive @ 0x140603F38
 * Callers:
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 */

struct _KTHREAD *__fastcall CmpUpgradeKcbLockToExclusive(char *a1)
{
  CmpUnlockKcb(a1);
  return CmpLockKcbExclusive((__int64)a1);
}
