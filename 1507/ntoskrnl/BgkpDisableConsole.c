/*
 * XREFs of BgkpDisableConsole @ 0x14017065C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x14075F69C (BgkDestroy.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 */

int BgkpDisableConsole()
{
  unsigned __int64 v0; // rax

  v0 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_14031EF18, 1LL, 0LL);
  if ( v0 >= 2 )
    LODWORD(v0) = ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&stru_14031EF18, v0);
  _InterlockedExchange64((volatile __int64 *)&stru_14031EF18, 1LL);
  return v0;
}
