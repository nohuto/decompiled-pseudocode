/*
 * XREFs of CmpUpgradeKcbLockToExclusive @ 0x1404C66EC
 * Callers:
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 */

struct _KTHREAD *__fastcall CmpUpgradeKcbLockToExclusive(char *a1)
{
  CmpUnlockKcb(a1);
  return CmpLockKcbExclusive((__int64)a1);
}
