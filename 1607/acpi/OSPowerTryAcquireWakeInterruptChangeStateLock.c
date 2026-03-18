/*
 * XREFs of OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1C0058C24
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x1C0057EE0 (ACPIAssociateWakeInterrupt.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C00581A8 (ACPIDelayedFreeWakeInterrupt.c)
 * Callees:
 *     <none>
 */

bool __fastcall OSPowerTryAcquireWakeInterruptChangeStateLock(__int64 a1)
{
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  return KeWaitForSingleObject((PVOID)(a1 + 64), Executive, 0, 0, &Timeout) == 0;
}
