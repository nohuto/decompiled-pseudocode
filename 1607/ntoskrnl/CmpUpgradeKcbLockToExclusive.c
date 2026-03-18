/*
 * XREFs of CmpUpgradeKcbLockToExclusive @ 0x140603E84
 * Callers:
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1404402B0 (CmpVEExecuteOpenLogic.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 */

struct _KTHREAD *__fastcall CmpUpgradeKcbLockToExclusive(char *a1)
{
  CmpUnlockKcb(a1);
  return CmpLockKcbExclusive((__int64)a1);
}
