/*
 * XREFs of GreUnlockDynamicModeChange @ 0x1C0019850
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDynamicModeChange(__int64 a1, __int64 a2, __int64 a3)
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, a3);
  return GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
}
