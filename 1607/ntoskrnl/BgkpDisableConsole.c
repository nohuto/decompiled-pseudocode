/*
 * XREFs of BgkpDisableConsole @ 0x14014C880
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140126E68 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140728724 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 */

__int64 BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_1402F6F98);
  return _InterlockedExchange64((volatile __int64 *)&stru_1402F6F98, 1LL);
}
