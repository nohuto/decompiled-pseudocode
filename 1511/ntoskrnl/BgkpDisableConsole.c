/*
 * XREFs of BgkpDisableConsole @ 0x1401429A4
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x1406DC654 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 */

__int64 BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_1402CFD78);
  return _InterlockedExchange64((volatile __int64 *)&stru_1402CFD78, 1LL);
}
