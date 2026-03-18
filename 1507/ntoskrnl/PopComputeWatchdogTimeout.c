/*
 * XREFs of PopComputeWatchdogTimeout @ 0x14013755C
 * Callers:
 *     PopEnableIrpWatchdog @ 0x1401374C4 (PopEnableIrpWatchdog.c)
 *     PoQueryWatchdogTime @ 0x14014C56C (PoQueryWatchdogTime.c)
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
