/*
 * XREFs of CmpUpgradeKcbLockToExclusive @ 0x14055D194
 * Callers:
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 */

struct _KTHREAD *__fastcall CmpUpgradeKcbLockToExclusive(char *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CmpUnlockKcb(a1);
  return CmpLockKcbExclusive((__int64)a1, v2, v3, v4);
}
