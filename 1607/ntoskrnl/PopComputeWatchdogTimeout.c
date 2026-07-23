/*
 * XREFs of PopComputeWatchdogTimeout @ 0x14012B800
 * Callers:
 *     PoQueryWatchdogTime @ 0x140126C0C (PoQueryWatchdogTime.c)
 *     PopEnableIrpWatchdog @ 0x14012B764 (PopEnableIrpWatchdog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopComputeWatchdogTimeout(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 188);
  if ( !v1 && *(_DWORD *)(a1 + 192) == 1 || v1 == 1 && *(_DWORD *)(a1 + 192) == 1 )
    return (unsigned int)PopWatchdogResumeTimeout;
  else
    return (unsigned int)PopWatchdogSleepTimeout;
}
