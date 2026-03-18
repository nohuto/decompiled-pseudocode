/*
 * XREFs of PopComputeWatchdogTimeout @ 0x140122224
 * Callers:
 *     PoQueryWatchdogTime @ 0x140117684 (PoQueryWatchdogTime.c)
 *     PopEnableIrpWatchdog @ 0x140122194 (PopEnableIrpWatchdog.c)
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
