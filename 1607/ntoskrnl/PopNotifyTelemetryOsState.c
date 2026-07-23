/*
 * XREFs of PopNotifyTelemetryOsState @ 0x140530AAC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x14010CF00 (TraceLoggingProviderEnabled.c)
 *     PopTransitionTelemetryOsState @ 0x1405462E0 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopNotifyTelemetryOsState(__int64 a1, UCHAR a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r10d
  int v6; // r11d
  __int64 v7; // rcx

  if ( TraceLoggingProviderEnabled(&hProvider, a2, 0x800000000000uLL) )
  {
    if ( (unsigned int)(v6 - 4) <= 2 )
    {
      v7 = 2LL;
      return (unsigned int)PopTransitionTelemetryOsState(v7);
    }
    if ( (unsigned int)(v6 - 2) <= 1 )
    {
      v7 = 4 - (unsigned int)(a5 != 0);
      return (unsigned int)PopTransitionTelemetryOsState(v7);
    }
  }
  return v5;
}
